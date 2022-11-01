

namespace SaveLoadSystem.Editor
{
    using UnityEngine;
    using UnityEditor;
    [CustomEditor(typeof(SaveLoadSystemClass))]
    public class SaveLoadSystemEditor : Editor
    {
        enum Saves
        {
            savegame_0,
            savegame_1,
            savegame_2,
            savegame_3,
            savegame_4,
            savegame_5,
            savegame_6,
            savegame_7,
            savegame_8,
            savegame_9,
            savegame_10,
        };

        static string savePath = "saves/";
        static Saves currentSave = Saves.savegame_0;

        static GUIStyle orange;


        void OnEnable()
        {
            try
            {
                orange = new GUIStyle(EditorStyles.label);
                orange.normal.textColor = Color.white;
            }
            catch (System.Exception e)
            { }

        }

        public override void OnInspectorGUI()
        {

            // SaveLoadSystem myTarget = (SaveLoadSystem)target;
            string fullPath = SaveLoadSystemClass.basePath +
                              serializedObject.FindProperty("m_savePath").stringValue +
                              serializedObject.FindProperty("m_saveName").stringValue;

            GUILayout.Label("Full path: \n" + fullPath);
            savePath = EditorGUILayout.TextField("Save path: ", savePath);
            if (savePath != serializedObject.FindProperty("m_savePath").stringValue)
            {
                serializedObject.FindProperty("m_savePath").stringValue = savePath;
                serializedObject.ApplyModifiedProperties();
            }


            currentSave = (Saves)EditorGUILayout.EnumPopup("Select save index:", currentSave);
            if (GetSaveName(currentSave) != serializedObject.FindProperty("m_saveName").stringValue)
            {
                SetSaveName(currentSave);
            }

            if (Application.isPlaying)
            {
                GUILayout.BeginHorizontal();
                if (GUILayout.Button("Save new"))
                {
                    SaveLoadSystemClass.SaveNew();
                }
                if (GUILayout.Button("Save"))
                {
                    SaveLoadSystemClass.Save();
                }
                GUILayout.EndHorizontal();
                if (GUILayout.Button("Load"))
                {
                    SaveLoadSystemClass.Load();
                }

            }
            else
            {
                GUI.contentColor = 2 * Color.red + Color.green;
                if (orange == null)
                    GUILayout.Label("Can't Save/Load, you need to start the game first");
                else
                    GUILayout.Label("Can't Save/Load, you need to start the game first", orange);

            }
        }

        void SetSaveName(Saves op)
        {
            string saveName = GetSaveName(op);
            serializedObject.FindProperty("m_saveName").stringValue = saveName;
            serializedObject.ApplyModifiedProperties();
        }
        string GetSaveName(Saves op)
        {
            int index = (int)op;
            return "Save_" + index + ".save";
        }
    }
}