using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

namespace SaveLoadSystem
{
    
    public class SaveLoadSystemClass : MonoBehaviour
    {
        static SaveLoadSystemClass m_instance;
        string m_basePath;
        [SerializeField] string m_savePath = "Saves/";
        [SerializeField] string m_saveName = "save.save";

        private void Awake()
        {
            m_instance = this;
            m_basePath = Application.persistentDataPath + "/";
            Load();
        }
        public static SaveLoadSystemClass instance
        {
            get
            {
                if (m_instance == null)
                    m_instance = FindObjectOfType<SaveLoadSystemClass>();
                if (m_instance == null)
                    Debug.LogWarning("No instance of SaveLoadSystem in the scene");
                return m_instance;
            }
        }




        public static string basePath
        {
            get
            {
                if (instance == null) return Application.persistentDataPath + "/";
                return instance.m_basePath;
            }
            set
            {
                if (instance == null) return;
                instance.m_basePath = value;
            }
        }
        public static string savePath
        {
            get
            {
                if (instance == null) return null;
                return instance.m_savePath;
            }
            set
            {
                if (instance == null) return;
                instance.m_savePath = value;
            }
        }
        public static string saveName
        {
            get
            {
                if (instance == null) return null;
                return instance.m_saveName;
            }
            set
            {
                if (instance == null) return;
                instance.m_saveName = value;
            }
        }
        public static string fullSavePath
        {
            get
            {
                if (instance == null) return Application.persistentDataPath + "/saves/save.save";
                return instance.m_basePath + instance.m_savePath + instance.m_saveName;
            }
        }

        public static void SaveNew()
        {
            long startT = System.DateTimeOffset.Now.ToUnixTimeMilliseconds();
            SaveablePrefabs.UpdateTable();
            Dictionary<string, object> state = new Dictionary<string, object>();
            SaveState(state);
            SaveFile(state);
            long endT = System.DateTimeOffset.Now.ToUnixTimeMilliseconds();
            Debug.Log("Save time: " + (endT - startT) + "ms");
        }

        public static void Save()
        {
            long startT = System.DateTimeOffset.Now.ToUnixTimeMilliseconds();
            var state = LoadFile();
            SaveablePrefabs.UpdateTable();
            SaveState(state);
            SaveFile(state);
            long endT = System.DateTimeOffset.Now.ToUnixTimeMilliseconds();
            Debug.Log("Save time: " + (endT - startT) + "ms");
        }
        public static void Load()
        {
            long startT = System.DateTimeOffset.Now.ToUnixTimeMilliseconds();
            var state = LoadFile();
            SaveablePrefabs.UpdateTable();
            LoadState(state);
            long endT = System.DateTimeOffset.Now.ToUnixTimeMilliseconds();
            Debug.Log("Loading time: " + (endT - startT) + "ms");
        }
        public static void Delete()
        {
            if (File.Exists(fullSavePath))
                File.Delete(fullSavePath);
        }

        static void SaveFile(object state)
        {
            if (!Directory.Exists(basePath + savePath))
                Directory.CreateDirectory(basePath + savePath);
            using (var stream = File.Open(fullSavePath, FileMode.Create))
            {
                var formatter = new BinaryFormatter();
                formatter.Serialize(stream, state);
            }
        }

        static Dictionary<string, object> LoadFile()
        {
            if (!File.Exists(fullSavePath))
            {
                Debug.Log("No save file found");
                return new Dictionary<string, object>();
            }
            using (FileStream stream = File.Open(fullSavePath, FileMode.Open))
            {
                var formatter = new BinaryFormatter();
                return (Dictionary<string, object>)formatter.Deserialize(stream); ;
            }
        }

        static void SaveState(Dictionary<string, object> state)
        {
            SaveableEntity.GlobalSaveState(state);
        }

        static void LoadState(Dictionary<string, object> state)
        {
            SaveableEntity.GlobalCreateFromSave(state);
        }
    }
}