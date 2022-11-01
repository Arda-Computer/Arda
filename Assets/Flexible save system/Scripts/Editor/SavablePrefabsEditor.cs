
namespace SaveLoadSystem.Editor
{
    using System.Collections.Generic;
    using UnityEngine;
    using UnityEditor;

    [CustomEditor(typeof(SaveablePrefabs))]
    public class SaveablePrefabsEditor : Editor
    {
        public struct ConflictData
        {
            public SaveableEntity obj1;
            public SaveableEntity obj2;
            public string ID1;
            public string ID2;
            public int index1;
            public int index2;
            public string message;
        };

        static GUIStyle orange;
        static SerializedObject m_saveablePrefabs;
        static bool m_useAlternativeTableView = false;

        void OnEnable()
        {
            try
            {
                orange = new GUIStyle(EditorStyles.label);
                orange.normal.textColor = Color.white;
            }
            catch (System.Exception e)
            { }

            m_saveablePrefabs = serializedObject;
            GenerateListWithAllPrefabs();
        }

        static SerializedObject saveablePrefabs
        {
            get
            {
                if (m_saveablePrefabs == null)
                {
                    SaveablePrefabs stor = SaveablePrefabs.instance;
                    m_saveablePrefabs = new SerializedObject(stor);
                }
                if (m_saveablePrefabs == null)
                {
                    Debug.LogWarning("No instance of SaveablePrefabs found in the Project");
                }
                return m_saveablePrefabs;
            }
        }

        static SerializedProperty listProperty
        {
            get
            {
                SaveablePrefabs stor = SaveablePrefabs.instance;
                m_saveablePrefabs = new SerializedObject(stor);
                SerializedProperty list = m_saveablePrefabs.FindProperty("m_prefabs");
                if (list == null)
                {
                    Debug.LogWarning("Can't add prefab to SavablePrefabs, serialized property: \"m_prefabs\" not found");
                    return null;
                }
                return list;
            }
        }




        public override void OnInspectorGUI()
        {
            GUILayout.BeginHorizontal();
            if (GUILayout.Button("Load all prefabs"))
                GenerateListWithAllPrefabs();
            if (GUILayout.Button("Set default names"))
                SetDefaultNames();
            if (GUILayout.Button("Clear list"))
                ClearList();
            m_useAlternativeTableView = GUILayout.Toggle(m_useAlternativeTableView, "Alternative Table View");
            GUILayout.EndHorizontal();


            List<ConflictData> conflicts = GetIDConflicts();

            if (conflicts.Count > 0)
            {

                Color defaultColor = GUI.contentColor;
                if (GUILayout.Button("Try to resolve"))
                    ResolveIDConflicts();
                GUILayout.Label("ID conflicts found:");
                GUI.contentColor = 2 * Color.red + Color.green;
                foreach (ConflictData i in conflicts)
                {
                    if (orange == null)
                        GUILayout.Label(i.message);
                    else
                        GUILayout.Label(i.message, orange);
                }
                GUI.contentColor = defaultColor;
            }

            if (m_useAlternativeTableView)
                base.OnInspectorGUI();
            else
                DisplayList(conflicts);
        }

        void DisplayList(List<ConflictData> conflicts)
        {
            SerializedProperty list = listProperty;

            if (list == null)
                return;

            List<string> indexes = new List<string>();
            List<string> names = new List<string>();
            List<string> IDs = new List<string>();
            List<bool> isValid = new List<bool>();
            for (int i = 0; i < list.arraySize; ++i)
            {
                SerializedProperty elem = list.GetArrayElementAtIndex(i);
                SaveableEntity prefab = (SaveableEntity)elem.objectReferenceValue;
                string indexStr = ("[ " + i + " ]").PadRight(5);
                string nameStr = (prefab.name).PadRight(30);
                string IDStr = (prefab.GetPrefabID()).PadRight(30);


                indexes.Add(indexStr);
                names.Add(nameStr);
                IDs.Add(IDStr);
                isValid.Add(true);
            }
            for (int i = 0; i < conflicts.Count; ++i)
            {
                if (conflicts[i].index1 < isValid.Count)
                    isValid[conflicts[i].index1] = false;
                if (conflicts[i].index2 < isValid.Count)
                    isValid[conflicts[i].index2] = false;
            }


            int screenWidth = (int)EditorGUIUtility.currentViewWidth;


            GUIStyle headStyle = new GUIStyle();
            Vector2 size = headStyle.CalcSize(new GUIContent(new GUIContent("A")));


            int startPosX = 10;
            int startPosY = 50 + (int)((float)(conflicts.Count + 1) * (size.y + 5f));
            int spacing = 10;
            int indexWidth = 50;

            screenWidth -= 2 * startPosX + 2 * spacing + indexWidth;
            int nameWidth = 50 * screenWidth / 100;
            int idWidth = 50 * screenWidth / 100;

            int height = indexes.Count * 100;


            Color defaultColor = new Color(0.8f, 0.8f, 0.8f);
            Color invalidIDColor = new Color(1f, 0.3f, 0.3f);

            GUILayout.BeginHorizontal();
            GUILayout.BeginArea(new Rect(startPosX, startPosY, indexWidth, height));
            GUILayout.BeginVertical();
            GUILayout.Label("Index");
            GuiLine();
            GUILayout.EndVertical();
            GUILayout.EndArea();

            GUILayout.BeginArea(new Rect(startPosX + indexWidth + spacing, startPosY, nameWidth, height));
            GUILayout.BeginVertical();
            GUILayout.Label("Prefab Name");
            GuiLine();
            GUILayout.EndVertical();
            GUILayout.EndArea();

            GUILayout.BeginArea(new Rect(startPosX + indexWidth + spacing * 2 + nameWidth, startPosY, idWidth, height));
            GUILayout.BeginVertical();
            GUILayout.Label("ID");
            GuiLine();
            GUILayout.EndVertical();
            GUILayout.EndArea();
            GUILayout.EndHorizontal();
            // ------------
            startPosY += 20;


            GUILayout.BeginHorizontal();
            GUILayout.BeginArea(new Rect(startPosX, startPosY, indexWidth, height));
            GUILayout.BeginVertical();
            for (int i = 0; i < indexes.Count; ++i)
            {
                ColoredLabel((isValid[i] ? defaultColor : invalidIDColor), indexes[i]);
            }
            GUILayout.EndVertical();
            GUILayout.EndArea();

            GUILayout.BeginArea(new Rect(startPosX + indexWidth + spacing, startPosY, nameWidth, height));
            GUILayout.BeginVertical();
            for (int i = 0; i < names.Count; ++i)
            {
                ColoredLabel((isValid[i] ? defaultColor : invalidIDColor), names[i]);
            }
            GUILayout.EndVertical();
            GUILayout.EndArea();

            GUILayout.BeginArea(new Rect(startPosX + indexWidth + spacing * 2 + nameWidth, startPosY, idWidth, height));
            GUILayout.BeginVertical();
            for (int i = 0; i < IDs.Count; ++i)
            {
                ColoredLabel((isValid[i] ? defaultColor : invalidIDColor), IDs[i]);
            }
            GUILayout.EndVertical();
            GUILayout.EndArea();
            GUILayout.EndHorizontal();

        }
        void GuiLine(int i_height = 1)
        {
            Rect rect = EditorGUILayout.GetControlRect(false, i_height);
            rect.height = i_height;
            EditorGUI.DrawRect(rect, new Color(0.5f, 0.5f, 0.5f, 1));
        }
        void ColoredLabel(Color col, string text)
        {
            Color defaultColor = GUI.contentColor;
            GUIStyle headStyle = new GUIStyle();
            //headStyle.fontSize = 15;
            headStyle.normal.textColor = Color.white;
            GUI.contentColor = col;
            GUILayout.Label(text, headStyle);
            GUI.contentColor = defaultColor;
        }
        public static void Add(SaveableEntity pref)
        {
            if (pref == null)
            {
                Debug.LogWarning("Prefab you trying to add is null");
                return;
            }
            Add(pref, pref.name);
        }
        public static void Add(SaveableEntity pref, string ID)
        {
            if (pref == null)
            {
                Debug.LogWarning("Prefab you trying to add is null");
                return;
            }
            if (ID == "")
            {
                Debug.LogWarning("ID you trying to add is invalid: \"\"");
                return;
            }
            if (saveablePrefabs == null)
                return;

            int index = Index(pref);

            SerializedProperty list = listProperty;
            if (list == null)
                return;
            if (index < 0)
            {
                list.InsertArrayElementAtIndex(0);
                index = 0;
            }
            SerializedProperty elem = list.GetArrayElementAtIndex(index);
            elem.objectReferenceValue = pref;
            saveablePrefabs.ApplyModifiedProperties();
        }
        public static void Remove(string ID)
        {
            if (ID == "")
                return;
            int index = Index(ID);
            if (index < 0)
                return;
            SerializedProperty list = listProperty;
            if (list == null)
                return;
            list.DeleteArrayElementAtIndex(index);
            saveablePrefabs.ApplyModifiedProperties();
        }
        public static void Remove(SaveableEntity pref)
        {
            if (pref == null)
            {
                Debug.LogWarning("Prefab you trying to remove is null");
                return;
            }
            Remove(Index(pref));
        }
        static void Remove(int index)
        {
            if (index < 0)
                return;
            SerializedProperty list = listProperty;
            if (list == null)
                return;
            list.DeleteArrayElementAtIndex(index);
            saveablePrefabs.ApplyModifiedProperties();
        }

        public static int Index(SaveableEntity pref)
        {
            if (pref == null)
                return -1;
            SerializedProperty list = listProperty;
            if (list == null)
                return -1;
            for (int i = 0; i < list.arraySize; ++i)
            {
                SerializedProperty elem1 = list.GetArrayElementAtIndex(i);
                if (elem1 != null)
                {
                    if (elem1.objectReferenceValue == pref)
                    {
                        return i;
                    }
                }
            }
            return -1;
        }
        public static int Index(string ID)
        {
            if (ID == "")
                return -1;
            SerializedProperty list = listProperty;
            if (list == null)
                return -1;
            for (int i = 0; i < list.arraySize; ++i)
            {
                SerializedProperty elem1 = list.GetArrayElementAtIndex(i);
                if (elem1 != null)
                {
                    SaveableEntity obj = (SaveableEntity)elem1.objectReferenceValue;
                    if (obj == null)
                        return -1;
                    if (obj.GetPrefabID() == ID)
                    {
                        return i;
                    }
                }
            }
            return -1;
        }
        public static bool Exists(string ID)
        {
            if (ID == "")
                return false;
            return Index(ID) >= 0;
        }
        public static bool Exists(SaveableEntity pref)
        {
            if (pref == null)
                return false;
            return Index(pref) >= 0;
        }
        public static bool Exists(SaveableEntity pref, string ID)
        {
            if (pref == null || ID == "")
                return false;
            int i = Index(ID);
            return Index(pref) == i && i >= 0;
        }
        public static void ReplaceID(string oldID, string newID)
        {
            if (oldID == "" || newID == "")
            {
                Debug.LogWarning("Empty ID is not valid: Trying to replace old ID: \"" + oldID + "\" with new ID: \"" + newID + "\"");
                return;
            }
            int index = Index(oldID);
            if (index < 0)
            {
                Debug.LogWarning("Can't replace old ID: \"" + oldID + "\" with new ID: \"" + newID + "\", no such ID in list");
                return;
            }
            SerializedProperty list = listProperty;
            if (list == null)
                return;
            SerializedProperty elem = list.GetArrayElementAtIndex(index);
            SaveableEntity obj = (SaveableEntity)elem.objectReferenceValue;
            SerializedObject prefab = new SerializedObject(obj);
            prefab.FindProperty("m_prefabID").stringValue = newID;
            prefab.ApplyModifiedProperties();
            saveablePrefabs.ApplyModifiedProperties();
        }
        public static void ResolveIDConflicts()
        {

            SerializedProperty list = listProperty;
            if (list == null)
                return;
            int tryCount = 0;
            int maxTry = 100;
            List<ConflictData> conflicts;
            do
            {
                conflicts = GetIDConflicts();
                list = listProperty;
                if (tryCount == 0)
                {
                    for (int i = 0; i < list.arraySize; ++i)
                    {
                        for (int j = 0; j < conflicts.Count; ++j)
                        {
                            if (conflicts[j].index2 == i)
                                ResetID(i);
                        }
                    }
                }
                else
                {
                    for (int i = 0; i < list.arraySize; ++i)
                    {
                        for (int j = 0; j < conflicts.Count; ++j)
                        {
                            if (conflicts[j].index2 == i)
                                SetID(i, conflicts[j].obj2.name + "_" + tryCount, false);
                        }
                    }
                }

                ++tryCount;
                if (tryCount > maxTry)
                {
                    Debug.LogError("ResolveIDConflicts(): Max tryCount reached");
                    return;
                }
            } while (conflicts.Count > 0);
        }
        static void ResetID(int index)
        {

            if (index < 0)
                return;
            SerializedProperty list = listProperty;
            if (list == null)
                return;
            SerializedProperty elem = list.GetArrayElementAtIndex(index);
            SaveableEntity obj = (SaveableEntity)elem.objectReferenceValue;
            SerializedObject prefab = new SerializedObject(obj);
            prefab.FindProperty("m_prefabID").stringValue = obj.name;
            prefab.ApplyModifiedProperties();
            saveablePrefabs.ApplyModifiedProperties();
        }
        static void SetID(int index, string ID, bool autosetEnable)
        {
            if (index < 0)
                return;
            SerializedProperty list = listProperty;
            if (list == null)
                return;
            SerializedProperty elem = list.GetArrayElementAtIndex(index);
            SaveableEntity obj = (SaveableEntity)elem.objectReferenceValue;
            SerializedObject prefab = new SerializedObject(obj);
            prefab.FindProperty("m_autoSetPrefabID").boolValue = autosetEnable;
            prefab.FindProperty("m_prefabID").stringValue = ID;
            prefab.ApplyModifiedProperties();
            saveablePrefabs.ApplyModifiedProperties();
        }
        public static void ReplacePrefab(SaveableEntity oldPref, SaveableEntity newPref)
        {
            if (oldPref == null || newPref == null)
            {
                Debug.LogWarning("Can't replace old ID: \"" + oldPref.name + "\" with new ID: \"" + newPref.name + "\", prefab is null");
                return;
            }
            int index = Index(oldPref);
            if (index < 0)
            {
                Debug.LogWarning("Can't replace old ID: \"" + oldPref.name + "\" with new ID: \"" + newPref.name + "\", no such prefab in list");
                return;
            }
            SerializedProperty list = listProperty;
            if (list == null)
                return;
            SerializedProperty elem = list.GetArrayElementAtIndex(index);
            elem.objectReferenceValue = newPref;
            saveablePrefabs.ApplyModifiedProperties();
        }
        public static string GetID(SaveableEntity pref)
        {
            if (pref == null)
                return "";
            int index = Index(pref);
            SerializedProperty list = listProperty;
            if (list == null)
                return "";
            SerializedProperty elem = list.GetArrayElementAtIndex(index);
            SaveableEntity obj = (SaveableEntity)elem.objectReferenceValue;
            return obj.GetPrefabID();
        }

        static void SetDefaultNames()
        {
            SerializedProperty list = listProperty;
            if (list == null)
                return;

            for (int i = 0; i < list.arraySize; ++i)
            {
                SerializedProperty elem = list.GetArrayElementAtIndex(i);
                SaveableEntity prefab = (SaveableEntity)elem.objectReferenceValue;

                SerializedObject prefabs = new SerializedObject(prefab);
                prefabs.FindProperty("m_prefabID").stringValue = prefab.name;
                prefabs.ApplyModifiedProperties();
            }

            saveablePrefabs.ApplyModifiedProperties();
        }
        public static void GenerateListWithAllPrefabs()
        {
            SerializedProperty list = listProperty;
            list.ClearArray();

            string[] prefabPaths = AssetDatabase.FindAssets("t:prefab", new string[] { "Assets" });
            foreach (var p in prefabPaths)
            {
                SaveableEntity prefab = AssetDatabase.LoadAssetAtPath<SaveableEntity>(AssetDatabase.GUIDToAssetPath(p));
                if (prefab != null)
                {
                    list.InsertArrayElementAtIndex(0);
                    SerializedProperty elem = list.GetArrayElementAtIndex(0);
                    elem.objectReferenceValue = prefab;
                }
            }
            saveablePrefabs.ApplyModifiedProperties();
        }
        static void ClearList()
        {
            SerializedProperty list = listProperty;
            list.ClearArray();
            saveablePrefabs.ApplyModifiedProperties();
        }


        public static List<ConflictData> GetIDConflicts()
        {
            SaveablePrefabs prefs = SaveablePrefabs.instance;
            List<string> ids = new List<string>();
            if (prefs == null)
                return new List<ConflictData>();
            SerializedObject serialized = new SerializedObject(prefs);
            SerializedProperty prefabs = serialized.FindProperty("m_prefabs");
            for (int i = 0; i < prefabs.arraySize; ++i)
            {
                SaveableEntity ent = (SaveableEntity)prefabs.GetArrayElementAtIndex(i).objectReferenceValue;
                if (ent != null)
                    ids.Add(ent.GetPrefabID());
                else
                    ids.Add("" + i);
            }

            List<ConflictData> conflicts = new List<ConflictData>();
            for (int i = 0; i < ids.Count; ++i)
            {
                for (int j = i + 1; j < ids.Count; ++j)
                {
                    if (ids[i] == ids[j])
                    {
                        SaveableEntity ent1 = (SaveableEntity)prefabs.GetArrayElementAtIndex(i).objectReferenceValue;
                        SaveableEntity ent2 = (SaveableEntity)prefabs.GetArrayElementAtIndex(j).objectReferenceValue;
                        ConflictData data;
                        data.obj1 = ent1;
                        data.ID1 = ent1.GetPrefabID();
                        data.index1 = i;
                        data.obj2 = ent2;
                        data.ID2 = ent2.GetPrefabID();
                        data.index2 = j;
                        data.message = "Elem. " + i + " [" + ent1.name + "]   and   " + j + " [" + ent2.name + "] have the same ID: " + ids[i];
                        conflicts.Add(data);
                    }
                }
            }
            return conflicts;
        }

    }

}