using System;
using System.Collections.Generic;
using UnityEngine;

namespace SaveLoadSystem
{
    public class SaveableEntity : MonoBehaviour, ISaveID
    {
        [Serializable]
        public struct Vector2Data
        {
            public float x, y;

            public Vector2Data(Vector2 vec)
            {
                x = vec.x;
                y = vec.y;
            }
            public void FromVector2(Vector2 v)
            {
                x = v.x;
                y = v.y;
            }
            public Vector2 ToVector2()
            {
                return new Vector2(x, y);
            }
        }
        [Serializable]
        public struct Vector3Data
        {
            public float x, y, z;

            public Vector3Data(Vector3 vec)
            {
                x = vec.x;
                y = vec.y;
                z = vec.z;
            }
            public void FromVector3(Vector3 v)
            {
                x = v.x;
                y = v.y;
                z = v.z;
            }
            public Vector3 ToVector3()
            {
                return new Vector3(x, y, z);
            }
        }
        [Serializable]
        public struct Vector4Data
        {
            public float x, y, z, w;
            public void FromVector4(Vector4 v)
            {
                x = v.x;
                y = v.y;
                z = v.z;
                w = v.w;
            }
            public void FromQuaternion(Quaternion q)
            {
                x = q.x;
                y = q.y;
                z = q.z;
                w = q.w;
            }
            public Vector4 ToVector4()
            {
                return new Vector4(x, y, z, w);
            }
            public Quaternion ToQuaternion()
            {
                return new Quaternion(x, y, z, w);
            }
        }




        [Serializable]
        public struct LocRotScale
        {
            public Vector3Data position;
            public Vector4Data rotation;
            public Vector3Data scale;
        }
        [Serializable]
        public struct TransformData
        {
            public LocRotScale local;
            //     public LocRotScale global;
        }
        [Serializable]
        public struct ObjectMetadata
        {
            public string name;       // Name of this gameObject
            public string thisID;     // ID of this gameObject
            public string parentID;   // ID of the next higher SaveableEntity 
            public string parentName; // Used to set the parent correct, may not a SaveableEntity, can be any gameObject
            public bool hasPrefab;
            public string prefabID;   // Prefab ID for instantiating this gameObject
            public string thisChildID; // ID for this in case this is a child of a SaveableEntity
            public bool saveTransform; 
            public TransformData transformData; // Location, Rotation and scale of this gameObject
            public List<string> deletedChilds;
            public bool needsToBeReinstantiated;

        }

        SaveableEntity m_parent = null;

        [SerializeField] string m_ID;
        [SerializeField] string m_childID;
        [SerializeField] string m_prefabID;
        [SerializeField] bool m_autoSetPrefabID = true;
        [SerializeField] bool m_saveTransform = true;

        ObjectMetadata m_metadata;
        Dictionary<string, object> m_dictionary;


        static Dictionary<string, SaveableEntity> m_allSaveables = new Dictionary<string, SaveableEntity>();
        List<string> m_childIDsOfThis = new List<string>();

        private void Awake()
        {
            // Check if the same ID already exists. This will be the case by cloning the GameObject
            // If so, generate a unique ID for this
            if (m_ID != "")
            {
                if (m_allSaveables.TryGetValue(m_ID, out SaveableEntity sav))
                {
                    if (sav != null && sav != this)
                    {
                        Debug.Log("Awake: " + m_ID);
                        GenerateID();
                        //m_allSaveables.Add(m_ID, this);
                    }
                }
                else
                    m_allSaveables.Add(m_ID, this);
            }
            else
                GenerateID();
            if (m_prefabID != "")
                PrefabChildIdentifier();
        }
        

        private void OnDestroy()
        {
            m_allSaveables.Remove(m_ID);
        }
        void PrefabChildIdentifier()
        {
            List<SaveableEntity> childs = ObjectFinder.GetFirstChildLayerOfType<SaveableEntity>(gameObject);
            m_childIDsOfThis.Clear();
            for (int i=0; i< childs.Count; ++i)
            {
                string childID = i + childs[i].name + "_" + childs[i].transform.parent.name;
                if (childID.Contains("(Clone)"))
                {
                    childID = childID.Replace("(Clone)", "");
                }
                childs[i].m_childID = childID;
                m_childIDsOfThis.Add(childs[i].m_childID);
                childs[i].PrefabChildIdentifier();
            }
        }
        List<string> GetDeletedChilds()
        {
            List<SaveableEntity> childs = ObjectFinder.GetFirstChildLayerOfType<SaveableEntity>(gameObject);
            List<string> deleted = new List<string>();
            for (int i = 0; i < m_childIDsOfThis.Count; ++i)
            {
                bool match = false;
                for (int j = 0; j < childs.Count; ++j)
                {
                    if(childs[j].m_childID == m_childIDsOfThis[i])
                    {
                        match = true;
                        break;
                    }
                }
                if (!match)
                    deleted.Add(m_childIDsOfThis[i]);
            }
            return deleted;
        }
        

        public string GetID()
        {
            return m_ID;
        }
        public void SetID(string ID)
        {
            string oldID = m_ID;
            m_ID = ID;
            if (m_allSaveables.TryGetValue(oldID, out SaveableEntity sav))
            {
                m_allSaveables.Remove(oldID);
            }
            if (m_allSaveables.TryGetValue(m_ID, out SaveableEntity sav2))
            {
                m_allSaveables.Remove(m_ID);
            }
            m_allSaveables.Add(m_ID, this);
        }
        public string GetPrefabID()
        {
            return m_prefabID;
        }
        public void SetSaveTransform(bool enable)
        {
            m_saveTransform = enabled;
        }
        public bool GetSaveTransform()
        {
            return m_saveTransform;
        }
        public void ResetTransform()
        {
            transform.localPosition = m_metadata.transformData.local.position.ToVector3();
            transform.localRotation = m_metadata.transformData.local.rotation.ToQuaternion();
            transform.localScale = m_metadata.transformData.local.scale.ToVector3();

        }
        public ObjectMetadata metadata
        {
            get { return m_metadata; }
            set
            {
                m_metadata = value;
                gameObject.name = m_metadata.name;
                SetID(m_metadata.thisID);
                m_prefabID = m_metadata.prefabID;
                m_childID = m_metadata.thisChildID;
                m_saveTransform = m_metadata.saveTransform;
                if(m_saveTransform)
                    ResetTransform();
            }
        }

        [ContextMenu("Generate ID")]
        public void GenerateID()
        {

            SetID(Guid.NewGuid().ToString());
        }
        public void GenerateID_NameBased()
        {
            SetID(gameObject.name);
        }


        // Fills the savable dictionary object with all SaveableEntities
        public static void GlobalSaveState(Dictionary<string, object> state)
        {
            SaveableEntity[] list = FindObjectsOfType<SaveableEntity>();

            foreach (var saveable in list)
            {

                foreach (var child in ObjectFinder.GetFirstChildLayerOfType<SaveableEntity>(saveable.gameObject))
                {
                    child.m_parent = saveable;
                }
            }
            foreach (var saveable in list)
            {
                if (saveable.m_parent == null)
                {
                    object d = saveable.SaveState();
                    if (d != null)
                        state[saveable.GetID()] = d;
                }
            }
        }

        // Creates a save object which will be stored in the binary file
        public object SaveState()
        {
            var state = new Dictionary<string, object>();
            string parentID = "";
            string parentName = "";
            if (m_parent != null)
            {
                parentID = m_parent.m_ID;
                parentName = transform.parent.name;
            }
            TransformData transformData = new TransformData();
            if (m_saveTransform)
            {
                transformData.local.position.FromVector3(transform.localPosition);
                transformData.local.rotation.FromQuaternion(transform.localRotation);
                transformData.local.scale.FromVector3(transform.localScale);
            }

            bool hasPrefab = true;
            if (m_prefabID == "")
                hasPrefab = false;
            //if (hasPrefab)
            //    PrefabChildIdentifier();

            


            bool doNotSaveThis = false;
            bool needsReinstantiate = false;
            ISaveable[] interfaces = GetComponents<ISaveable>();
            if (interfaces.Length > 0)
                doNotSaveThis = true;
            for(int i=0; i<interfaces.Length; ++i)
            {
                if (interfaces[i].NeedsToBeSaved()/* || m_parent != null*/)
                {
                    state[i+interfaces[i].GetType().ToString()] = interfaces[i].SaveState();
                    doNotSaveThis = false;
                    needsReinstantiate |= interfaces[i].NeedsReinstantiation();
                }
            }
            List<object> childData = new List<object>();
            foreach (var saveable in ObjectFinder.GetFirstChildLayerOfType<SaveableEntity>(gameObject))
            {
                object o = saveable.SaveState();
                if(o != null)
                    childData.Add(o);
            }

            ObjectMetadata meta = new ObjectMetadata()
            {
                name = gameObject.name,
                thisID = m_ID,
                parentID = parentID,
                parentName = parentName,
                hasPrefab = hasPrefab,
                prefabID = m_prefabID,
                thisChildID = m_childID,
                saveTransform = m_saveTransform,
                transformData = transformData,
                deletedChilds = GetDeletedChilds(),
                needsToBeReinstantiated = needsReinstantiate
            };

            state["ObjectMetadata"] = meta;
            state["ChildData"] = childData;

            if (doNotSaveThis && childData.Count == 0)
                return null;
            /*  if (state.Count > 0 || childData.Count > 0)
              {
                  state["ObjectMetadata"] = meta;
                  state["ChildData"] = childData;
              }
              else return null;*/

            return state;
        }


        // Loads all saved Objects
        public static void GlobalCreateFromSave(Dictionary<string, object> state)
        {
            m_allSaveables.Clear();
            SaveableEntity[] list = FindObjectsOfType<SaveableEntity>();
            foreach (var saveable in list)
            {
                m_allSaveables.Add(saveable.GetID(), saveable);
            }
            GlobalPreLoad();

            foreach (var saveable in state)
            {
                CreateFromSave(saveable.Value);
            }
            GlobalPostLoad();
        }

        // Creates a instance of the saved gameObject, using its prefab and stored data
        // This is a recursive function, if you have multiple prefab objects as childs of each other, 
        // it will instantiate all them and set the correct parent of each instantiated child.
        public static GameObject CreateFromSave(object state, SaveableEntity parent = null)
        {
            GameObject obj = null;
            if(state == null)
            {
                Debug.LogWarning("Can't load state, state == null.");
                return null;
            }
            var stateDictionary = (Dictionary<string, object>)state;

            string objectName = "unknown";
            string parentName = "unknown";
            SaveableEntity savableOfInstance;
            if (stateDictionary.TryGetValue("ObjectMetadata", out object meta))
            {
                if(meta == null)
                    goto warningMessageSave;

                ObjectMetadata metadata = (ObjectMetadata)meta;
                objectName = metadata.name;
                parentName = metadata.parentName;
                if (metadata.needsToBeReinstantiated && metadata.hasPrefab)
                {
                    if(parent != null && metadata.thisChildID != "")
                        parent.DestroyChild(metadata.thisChildID);
                    obj = Reinstantiate(metadata);
                }
                else
                {
                    if (metadata.thisChildID != "" && parent != null)
                    {
                        List<SaveableEntity> childsOfParent = ObjectFinder.GetFirstChildLayerOfType<SaveableEntity>(parent.gameObject);
                        foreach (var child in childsOfParent)
                            if (child.m_childID == metadata.thisChildID)
                                obj = child.gameObject;

                        if (obj == null)
                            Debug.Log("Can't find child with same childID in the prefab. childID: " + metadata.thisChildID, parent);
                    }
                    else
                    {
                        SaveableEntity o = FindID(metadata.thisID);
                        if (o != null)
                            obj = o.gameObject;
                        else if (metadata.hasPrefab)
                            obj = Reinstantiate(metadata);
                    }
                }
                
                if (obj == null)
                    goto warningMessage;
                savableOfInstance = obj.GetComponent<SaveableEntity>();
                if (savableOfInstance == null)
                {
                    Debug.LogWarning("Prefab of saveable Object seems not to have the component SavableEntity", obj);
                    goto warningMessage;
                }
                savableOfInstance.m_dictionary = stateDictionary;
                savableOfInstance.metadata = metadata;
                savableOfInstance.LoadState();
                savableOfInstance.AttachToParent(parent);
            }
            else
                goto warningMessage;

            if (stateDictionary.TryGetValue("ChildData", out object d))
            {
                if (d != null)
                {
                    List<object> childData = (List<object>)d;
                    bool failed = false;
                    foreach (var child in childData)
                        if (CreateFromSave(child, savableOfInstance) == null)
                            failed = true;
                    if (failed)
                        goto warningMessage;
                }
            }

            return obj;
        warningMessage:
            Debug.LogWarning("Something went wrong while trying to create the Object: \"" + objectName + "\" ID: \""+ ((ObjectMetadata)meta).thisID+
                             "\" as child of: \"" + parentName + "\"");
            return obj;
        warningMessageSave:
            Debug.LogWarning("Something went wrong while trying to create the Object: \"" + objectName + " Metadata is null: " + (meta == null) +
                             "\" as child of: \"" + parentName + "\"");
            return obj;
        }
        // Check if the gameObject already exists and if it not exists,
        // it will be generated
        static GameObject CreateIfIdNotExists(ObjectMetadata meta)
        {
            SaveableEntity obj = FindID(meta.thisID);
            if (obj != null)
                return obj.gameObject;
            GameObject prefab = SaveablePrefabs.GetPrefab(meta.prefabID);
            if (prefab == null)
                return null;
            GameObject newObj = Instantiate(prefab);
            SaveableEntity newSav = newObj.GetComponent<SaveableEntity>();
            SetupInstantiated(meta, newSav);
            return newObj;
        }

        // Check if the gameObject already exists and if it exists,
        // it will be destroyed and regenerated
        static GameObject Reinstantiate(ObjectMetadata meta)
        {
            SaveableEntity obj = FindID(meta.thisID);

            if (obj != null)
            {
                m_allSaveables.Remove(meta.thisID);

                DestroyImmediate(obj.gameObject);
                

            }

            GameObject prefab = SaveablePrefabs.GetPrefab(meta.prefabID);
            if (prefab == null)
            {
                Debug.LogWarning("Can't load object, no prefab was found for " + meta.name);
                return null;
            }
            GameObject newObj = null;
           // if (Application.isPlaying)
                newObj = Instantiate(prefab);
           // else
           //     newObj = (GameObject)PrefabUtility.InstantiatePrefab(prefab as GameObject);
            
            
            SaveableEntity newSav = newObj.GetComponent<SaveableEntity>();
            SetupInstantiated(meta, newSav);
            return newObj;
        }
        
        static void SetupInstantiated(ObjectMetadata meta, SaveableEntity newSav)
        {
            newSav.SetID(meta.thisID);
            newSav.PrefabChildIdentifier();
            if (meta.deletedChilds.Count > 0)
            {
                List<SaveableEntity> childs = ObjectFinder.GetFirstChildLayerOfType<SaveableEntity>(newSav.gameObject);
                foreach (var child in meta.deletedChilds)
                {
                    newSav.DestroyChild(child, childs);
                }
            }
            //m_allSaveables.Add(meta.thisID, newSav);
        }
        void DestroyChild(string childID, List<SaveableEntity> childs = null)
        {
            
            if (childs == null)
                childs = ObjectFinder.GetFirstChildLayerOfType<SaveableEntity>(gameObject);
            for (int i = 0; i < childs.Count; ++i)
            {
                if (childID == childs[i].m_childID)
                {
                    DestroyImmediate(childs[i].gameObject);
                }
            }
        }

        void AttachToParent(SaveableEntity parent)
        {
            if (parent == null)
                return;
            if(m_parent != null)
            {
                if (m_parent.name == m_metadata.parentName)
                    return; // Parent already set
            }
            // Parent Saveable found
            // Search for exact parent Object...
           // ISaveable[] possibleEventReceiver = parent.gameObject.GetComponents<ISaveable>();

           /* List<SaveableEntity> childsOfParent = ObjectFinder.GetFirstChildLayerOfType<SaveableEntity>(parent.gameObject);
            foreach (var child in childsOfParent)
                if (child.m_childID == metadata.thisChildID)
                    obj = child.gameObject;
                else
                {
                    Debug.Log("Can't find child with same childID in the prefab: ", parent);
                }*/

            GameObject parentObj = ObjectFinder.GetFirstChildWithNameRecusive(parent.gameObject, m_metadata.parentName);
            if (parentObj != null)
            {
                /*for (int i = 0; i < parentObj.transform.childCount; ++i)
                {
                    GameObject child = parentObj.transform.GetChild(i).gameObject;
                    if (child.name == transform.name)
                    {
                        SaveableEntity childS = child.GetComponent<SaveableEntity>();
                        if (childS != null)
                            if (childS.m_dictionary == null)// Replace the existing object with the new one
                            {
                                
                                Debug.LogWarning("Can't set parent, object with same name already exists in this place", this);
                                return;
                                break;
                            }
                    }
                }*/

                transform.SetParent(parentObj.transform);
                List<ISaveable> signalReceiver = ObjectFinder.GetFirstParentOfType<ISaveable>(parentObj);
                foreach (var receiver in signalReceiver)
                    receiver.GotAddedAsChild(transform.gameObject, parentObj);
            }
            else
            {
                transform.SetParent(parent.transform);
                List<ISaveable> signalReceiver = ObjectFinder.GetFirstParentOfType<ISaveable>(parent.gameObject);
                foreach (var receiver in signalReceiver)
                    receiver.GotAddedAsChild(transform.gameObject, parent.gameObject);
            }

            m_parent = parent;
        }

        // Find the SaveableEntity with the identification string 
        // Use this in the ISaveable interface methode: PostInstantiation(...) to build relations between objects
        public static SaveableEntity FindID(string id)
        {
            
            m_allSaveables.TryGetValue(id, out SaveableEntity val); 
            return val;
        }

        // Loads the saved data in to all ISaveable components of this gameObject
        public void LoadState(object state)
        {
            m_dictionary = (Dictionary<string, object>)state;
            LoadState();
        }
        public void LoadState()
        {
            ISaveable[] interfaces = GetComponents<ISaveable>();
            for (int i = 0; i < interfaces.Length;  ++i)
            {
                string typeName = i+interfaces[i].GetType().ToString();
                if (m_dictionary.TryGetValue(typeName, out object savedState))
                {

                }
                if(savedState == null)
                {
                    Debug.LogWarning("Can't find the ISaveable interface: " + interfaces[i].GetType().ToString() + " with save index: " + i);
                }
                else
                    interfaces[i].LoadState(savedState);
            }
        }

        public static void GlobalPreLoad()
        {
            //m_toDelete.Clear();
           // m_addToAll.Clear();
            foreach (var saveable in m_allSaveables)
            {
                saveable.Value.m_dictionary = null;
            }
        }
        public static void GlobalPostLoad()
        {
         /*   foreach (var saveable in m_allSaveables)
            {
                saveable.Value.PostLoad();
            }

            List<string> toRem = new List<string>();
            foreach (var i in m_allSaveables)
            {
                if (i.Value.m_ID == "")
                    toRem.Add(i.Key);
            }
            foreach (var i in toRem)
            {
                m_allSaveables.Remove(i);
            }
            foreach (var i in m_addToAll)
            {
                m_allSaveables.Add(i.m_ID, i);
            }*/

            
            
            foreach (var saveable in m_allSaveables)
            {
                saveable.Value.TransformUpdate();
            }
            foreach (var saveable in m_allSaveables)
            {
                saveable.Value.PostInstantiation();
            }

            //foreach (var i in m_toDelete)
            //    DestroyImmediate(i.gameObject);
          //  m_toDelete.Clear();
           // m_addToAll.Clear();

        }

        // Will set the relations of each saved Object
        //  -> Sets parent
        void PostLoad()
        {
            if (m_dictionary == null)
            {
                // This Object has no data in the stored file, so it can not be loaded
                //Debug.LogWarning("m_dictionary is null, did you forgot to call SaveableEntity::CreateFromSave() first?");
                return;
            }
            if (m_metadata.parentID != "")
            {
                foreach (var saveavle in FindObjectsOfType<SaveableEntity>())
                {
                    if (saveavle.m_ID == m_metadata.parentID)
                    {
                        // Parent Saveable found
                        // Search for exact parent Object...
                        ISaveable[] possibleEventReceiver = saveavle.gameObject.GetComponents<ISaveable>();

                        GameObject parent = ObjectFinder.GetFirstChildWithNameRecusive(saveavle.gameObject, m_metadata.parentName);
                        if (parent != null)
                        {
                            for (int i = 0; i < parent.transform.childCount; ++i)
                            {
                                GameObject child = parent.transform.GetChild(i).gameObject;
                                if (child.name == transform.name)
                                {
                                    SaveableEntity childS = child.GetComponent<SaveableEntity>();
                                    if (childS != null)
                                        if (childS.m_dictionary == null)// Replace the existing object with the new one
                                        {
                                            //DestroyImmediate(parent.transform.GetChild(i).gameObject);
                                            childS.m_dictionary = m_dictionary;
                                            childS.metadata = metadata;
                                        //    m_addToAll.Add(childS);
                                            childS.LoadState();
                                            childS.PostLoad();
                                         //   m_toDelete.Add(this);
                                            m_ID = "";
                                            foreach(var childOfTHis in GetComponentsInChildren<SaveableEntity>())
                                            {
                                                childOfTHis.PostLoad();
                                            }
                                            return;
                                            break;
                                        }
                                }
                            }

                            transform.SetParent(parent.transform);
                            List<ISaveable> signalReceiver = ObjectFinder.GetFirstParentOfType<ISaveable>(parent);
                            foreach (var receiver in signalReceiver)
                                receiver.GotAddedAsChild(transform.gameObject, parent);
                        }
                        else
                        {
                            transform.SetParent(saveavle.transform);
                        }

                        m_parent = saveavle;
                        return;
                    }
                }
            }
        }
        void TransformUpdate()
        {
            if (m_dictionary == null || m_parent != null)
                return;
            TransformUpdate_recursive(new List<SaveableEntity> { this });
        }
        void TransformUpdate_recursive(List<SaveableEntity> roots)
        {
            for (int i = 0; i < roots.Count; ++i)
            {
                List<SaveableEntity> childs = ObjectFinder.GetFirstChildLayerOfType<SaveableEntity>(roots[i].gameObject);

                TransformUpdate_recursive(childs);
                foreach (SaveableEntity child in childs)
                    child.ResetTransform();
            }
        }
        void PostInstantiation()
        {
            if (m_dictionary == null)
                return;
           /* foreach (var saveable in GetComponents<ISaveable>())
            {
                string typeName = saveable.GetType().ToString();
                if (m_dictionary.TryGetValue(typeName, out object savedState))
                    saveable.PostInstantiation(savedState);
            }*/

            ISaveable[] interfaces = GetComponents<ISaveable>();
            for (int i = 0; i < interfaces.Length; ++i)
            {
                string typeName = i+interfaces[i].GetType().ToString();
                if (m_dictionary.TryGetValue(typeName, out object savedState))
                {

                }
                if (savedState == null)
                {
                    Debug.LogWarning("Can't find the ISaveable interface: " + interfaces[i].GetType().ToString() + " with save index: " + i);
                }
                else
                    interfaces[i].PostInstantiation(savedState);
            }
        }


    }
}