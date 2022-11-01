
namespace SaveLoadSystem.Editor
{
    using System.Collections.Generic;
    using UnityEngine;
    using UnityEditor;
#if UNITY_2020
    using UnityEditor.Experimental.SceneManagement;
#else
#if UNITY_2021
    using UnityEditor.SceneManagement;
#endif
#endif
    using UnityEditor.SceneManagement;
    

    public class SaveIDManagerEditor<T> : Editor where T : Object, ISaveID
    {
        Color defaultColor;

        bool hasPrefabProperty = true;
        string prefabID;
        bool inPrefabMode = false;
        bool isMonoBehaviour = false;
        bool isScriptableObject = false;
        static bool globalShowBase = false;
        protected bool showBase = false;

        protected virtual void OnEnable()
        {
            StartupUtilities.updateIDs += GenIDIfNotExists;
            defaultColor = GUI.contentColor;
            if (serializedObject.FindProperty("m_prefabID") == null)
                hasPrefabProperty = false;
            else
                prefabID = serializedObject.FindProperty("m_prefabID").stringValue;

            T myTarget = (T)target;

            var derived = target.GetType();
            do
            {
                if (derived.Equals(typeof(MonoBehaviour)))
                {
                    isMonoBehaviour = true;
                }
                else if (derived.Equals(typeof(ScriptableObject)))
                {
                    isScriptableObject = true;
                }
                //Debug.Log("Derived: " + derived.ToString() + " equals: "+ derived.Equals(typeof(MonoBehaviour)));
                derived = derived.BaseType;
            } while (derived != null);

            if (EditorUtility.IsPersistent(myTarget) || PrefabStageUtility.GetCurrentPrefabStage() != null)
            {
                // Detect if the obj is a MonoBehaviour -> prefab               
                if (isMonoBehaviour)
                {
                    inPrefabMode = true;
                    serializedObject.FindProperty("m_ID").stringValue = "";
                    serializedObject.ApplyModifiedProperties();
                    prefabID = serializedObject.FindProperty("m_prefabID").stringValue;
                    if(prefabID == "")
                    {
                        prefabID = target.name;
                        serializedObject.FindProperty("m_prefabID").stringValue = prefabID;
                        serializedObject.ApplyModifiedProperties();
                    }
                }
            }

            if (isMonoBehaviour && isScriptableObject)
                Debug.LogError("Something went wrong. The object is a MonoBehaviour and ScriptableObject at the same time?");



            if (!inPrefabMode)
            {
                GenerateRandomID_internal(target, false);
            }
        }

        public override void OnInspectorGUI()
        {
            OnBeginInspectorGUI();
            T myTarget = (T)target;
            
            
            
            
            GuiLine(2);
            GUIStyle headStyle = new GUIStyle();
            headStyle.fontSize = 15;
            headStyle.normal.textColor = Color.white;

            GUI.contentColor = 2 * Color.gray;
            GUILayout.Label("SaveSystem ID management", headStyle);
            GUI.contentColor = defaultColor;

            GuiLine();

            globalShowBase = GUILayout.Toggle(globalShowBase, "Show base");

            if (!inPrefabMode)
            {
                GUILayout.BeginHorizontal();
                GUILayout.Label("Generate ID for:");

                if (GUILayout.Button("this"))
                    GenerateRandomID(myTarget);
                if (GUILayout.Button("all"))
                    GenerateRandomIDForAll(GetObjects());
                if (GUILayout.Button("all without an ID"))
                    GenIDIfNotExists();
                GUILayout.EndHorizontal();
                GUILayout.BeginHorizontal();
                //StartupUtilities.autoUpdateID = GUILayout.Toggle(StartupUtilities.autoUpdateID, "Autoupdate ID if ID is empty in " + (int)StartupUtilities.timer + " s");
                GUILayout.Label("ID");
                serializedObject.FindProperty("m_ID").stringValue = GUILayout.TextField(serializedObject.FindProperty("m_ID").stringValue);

                GUILayout.EndHorizontal();
                if(hasPrefabProperty)
                {
                    GUILayout.Label("Prefab ID:        "+ serializedObject.FindProperty("m_prefabID").stringValue);
                }

            }
            else
                GUILayout.Label("No ID should be set in Prefab edit mode");

            if (hasPrefabProperty && inPrefabMode)
            {
                GUILayout.BeginHorizontal();
                GUILayout.Label("Prefab ID");
                //autoSetPrefabID = GUILayout.Toggle(autoSetPrefabID, "Autoset Prafab ID");
                prefabID = GUILayout.TextField(serializedObject.FindProperty("m_prefabID").stringValue);
                GUILayout.EndHorizontal();
                /*serializedObject.FindProperty("m_autoSetPrefabID").boolValue = autoSetPrefabID;
                if (autoSetPrefabID)
                {
                    prefabID = myTarget.name;
                    serializedObject.FindProperty("m_prefabID").stringValue = prefabID;
                }
                else*/
                {
                    serializedObject.FindProperty("m_prefabID").stringValue = prefabID;
                }
            }

            List<T> conflicts = GetIDConflicts(GetObjects());
            if (conflicts.Count > 0)
            {
                DisplayConflicts(conflicts);
            }

            serializedObject.ApplyModifiedProperties();
            GuiLine(2);

            OnEndInspectorGUI();
            if (showBase || globalShowBase)
                base.OnInspectorGUI();
        }
        public virtual void OnBeginInspectorGUI()
        {

        }
        public virtual void OnEndInspectorGUI()
        {

        }
        public static Dictionary<string, GameObject> LoadAllPrefabs(string assetPath)
        {
            var typeCount = new Dictionary<string, GameObject>();
            foreach (var guid in AssetDatabase.FindAssets("t:Prefab", new[] { "Assets" }))
            {
                var path = AssetDatabase.GUIDToAssetPath(guid);
                GameObject pref = AssetDatabase.LoadAssetAtPath<GameObject>(path);
                var type = pref.name;
                if (!typeCount.ContainsKey(type))
                    typeCount.Add(type, pref);
            }
            return typeCount;
        }
        void GuiLine(int i_height = 1)
        {
            Rect rect = EditorGUILayout.GetControlRect(false, i_height);
            rect.height = i_height;
            EditorGUI.DrawRect(rect, new Color(0.5f, 0.5f, 0.5f, 1));
        }
        void GenIDIfNotExists()
        {
            GenerateRandomIDForAllWithoutID(GetObjects());
        }

        virtual protected T[] GetObjects()
        {
            Debug.LogWarning("SaveIDManager<" + typeof(T).ToString() + ">:  You must implement the GetObjects() function in your derived Editor script");
            return new T[0];
        }


        public void GenerateRandomID(Object target)
        {
            GenerateRandomID_internal(target, true);
        }
        public void GenerateRandomIDForAll(T[] objs)
        {
            foreach (var i in objs)
                GenerateRandomID_internal(i, true);
        }
        public void GenerateRandomIDForAllWithoutID(T[] objs)
        {
            foreach (var i in objs)
                GenerateRandomID_internal(i, false);
        }
        public void GenerateRandomID_internal(Object target, bool doOverride)
        {
            SerializedObject obj = new SerializedObject(target);
            if (obj.FindProperty("m_ID").stringValue != "" && !doOverride)
                return;
            obj.FindProperty("m_ID").stringValue = System.Guid.NewGuid().ToString();
            obj.ApplyModifiedProperties();
        }
        public List<T> GetIDConflicts(T[] objs)
        {
            List<T> list = new List<T>();
            for (int i = 0; i < objs.Length; ++i)
            {
                for (int j = i + 1; j < objs.Length; ++j)
                {
                    if (objs[i].GetID() == objs[j].GetID() && objs[i].GetID() != "")
                    {
                        list.Add(objs[i]);
                        list.Add(objs[j]);
                    }
                }
            }
            return list;
        }
        void DisplayConflicts(List<T> objs)
        {
            if (objs == null)
                return;
            if (objs.Count == 0)
                return;
            Color defaultColor = GUI.contentColor;
            GUI.contentColor = Color.red + Color.green;
            GUILayout.Label("ID conflicts found:");
            foreach (T i in objs)
            {
                GUILayout.Label("  Object: " + i.name + " ID: " + i.GetID());
            }
            GUI.contentColor = defaultColor;
        }
    }

}