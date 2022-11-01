using System.Collections.Generic;
using UnityEngine;

namespace SaveLoadSystem
{
    [CreateAssetMenu(fileName = "SaveablePrefabs", menuName = "ScriptableObjects/SaveLoadSystem/SingleInstance/SaveablePrefabs")]
    public class SaveablePrefabs : ScriptableObject
    {
        static SaveablePrefabs m_instance;

        [SerializeField] List<SaveableEntity> m_prefabs = new List<SaveableEntity>();
        Dictionary<string, SaveableEntity> m_dictionary = new Dictionary<string, SaveableEntity>();

        public void Setup()
        {
            Awake();
        }
        public static SaveablePrefabs instance
        {
            get
            {
                if (m_instance == null)
                {
                    m_instance = FindObjectOfType<SaveablePrefabs>();
                }
                if(m_instance == null)
                {
                    m_instance = Resources.Load<SaveablePrefabs>("SaveablePrefabs");
                }
                if (m_instance == null)
                {
                    Debug.LogError("No instance of type SaveablePrefabs");
                }
                return m_instance;
            }
        }

        private void Awake()
        {
            m_instance = this;
            UpdateTable();
        }
        private void OnEnable()
        {
            m_instance = this;
            UpdateTable();
        }
        public List<SaveableEntity> prefabs
        {
            get
            {
                if (m_prefabs == null)
                    m_prefabs = new List<SaveableEntity>();
                return m_prefabs;
            }
        }
        public static void UpdateTable()
        {
            if (instance == null)
                return;
            instance.m_dictionary.Clear();
            List<SaveableEntity> toRemove = new List<SaveableEntity>();
            foreach (var obj in instance.m_prefabs)
            {
                string ID = "";
                SaveableEntity sav = obj;
                if (!sav)
                {
                    toRemove.Add(obj);
                    continue;
                }
                ID = sav.GetPrefabID();
                if (ID == "")
                {
                    Debug.Log("ID of " + obj.name + " is invalid: ID is empty");
                    continue;
                }
                instance.m_dictionary[ID] = obj;
            }
        }

        public static GameObject GetPrefab(string prefabID)
        {
            if (instance == null)
                return null;
            if (instance.m_dictionary.Count == 0)
            {
                Debug.LogWarning("SaveablePrefabs list is empty");
            }
            if (instance.m_dictionary.TryGetValue(prefabID, out SaveableEntity prefab))
                return prefab.gameObject;

            Debug.LogWarning("Can't find any Prefab with ID \"" + prefabID + "\" in the SaveablePrefabs list");
            return null;
        }

    }
}