using System.Collections.Generic;
using UnityEngine;

namespace SaveLoadSystem
{
    public static class ObjectFinder
    {
        public static List<T> GetFirstParentOfType<T>(GameObject root)
        {
            List<T> list = new List<T>();
            GetFirstParentOfType_internal<T>(root, list, false, true, true);
            return list;
        }
        static void GetFirstParentOfType_internal<T>(GameObject root, List<T> list,
                                                    bool breakAfterFirstMatch, bool breakAfterFirstParentMatch, bool recursive)
        {
            //Transform parentT = root.transform.parent;
            //GameObject parent = null;
            //if (parentT != null)
            //    parent = parentT.gameObject;
            if (root == null)
                return;

            T[] comps = root.GetComponents<T>();
            foreach (var comp in comps)
            {
                list.Add(comp);
                if (breakAfterFirstMatch)
                    return;
            }
            if (list.Count > 0 && breakAfterFirstParentMatch)
                return;
            if (!recursive || root.transform.parent == null)
                return;
            GetFirstParentOfType_internal<T>(root.transform.parent.gameObject, list, breakAfterFirstMatch, breakAfterFirstParentMatch, recursive);
        }



        public static GameObject GetFirstChildWithName(GameObject root, string name)
        {
            List<GameObject> list = new List<GameObject>();
            GetChildWithName_internal(root, list, name, true, false);
            if (list.Count > 0)
                return list[0];
            return null;
        }
        public static GameObject GetFirstChildWithNameRecusive(GameObject root, string name)
        {
            List<GameObject> list = new List<GameObject>();
            GetChildWithName_internal(root, list, name, true, true);
            if (list.Count > 0)
                return list[0];
            return null;
        }
        public static List<GameObject> GetChildWithName(GameObject root, string name)
        {
            List<GameObject> list = new List<GameObject>();
            GetChildWithName_internal(root, list, name, false, false);
            return list;
        }
        public static List<GameObject> GetChildWithNameRecursive(GameObject root, string name)
        {
            List<GameObject> list = new List<GameObject>();
            GetChildWithName_internal(root, list, name, false, true);
            return list;
        }
        static void GetChildWithName_internal(GameObject root, List<GameObject> list, string name,
                                               bool breakAfterFirstMatch, bool recursive)
        {
            int childs = root.transform.childCount;
            for (int i = 0; i < childs; ++i)
            {
                GameObject child = root.transform.GetChild(i).gameObject;
                if (child.name == name)
                {
                    list.Add(child);
                    if (breakAfterFirstMatch)
                        return;
                }
            }
            for (int i = 0; i < childs; ++i)
            {
                GameObject child = root.transform.GetChild(i).gameObject;
                
                if (recursive)
                    GetChildWithName_internal(child, list, name, breakAfterFirstMatch, recursive);
                
                if (breakAfterFirstMatch && list.Count > 0)
                    return;
            }
        }



        public static List<T> GetDirectChildsOfType<T>(GameObject root)
        {
            List<T> list = new List<T>();
            int childs = root.transform.childCount;
            for (int i = 0; i < childs; ++i)
            {
                T obj = root.transform.GetChild(i).GetComponent<T>();
                if (obj != null)
                    list.Add(obj);
            }
            return list;
        }
        public static List<T> GetFirstChildLayerOfType<T>(GameObject root)
        {
            List<T> list = new List<T>();
            GetFirstChildLayerOfType_internal(root, list);
            return list;
        }
        static void GetFirstChildLayerOfType_internal<T>(GameObject root, List<T> list)
        {
            int childs = root.transform.childCount;
            for (int i = 0; i < childs; ++i)
            {
                GameObject child = root.transform.GetChild(i).gameObject;
                T obj = child.GetComponent<T>();
                if (obj != null)
                    list.Add(obj);
                else
                {
                    GetFirstChildLayerOfType_internal(child, list);
                }
            }
        }
    }


    public static class IDFinder
    {
        public static T GetScriptableObject<T>(string ID) where T : Object, ISaveID
        {
            T[] objs = Resources.LoadAll<T>("");
            foreach (var i in objs)
                if (i.GetID() == ID)
                    return i;

            return null;
        }
        public static T GetGameObject<T>(string ID) where T : Object, ISaveID
        {
            T[] objs = GameObject.FindObjectsOfType<T>();
            foreach (var i in objs)
                if (i.GetID() == ID)
                    return i;
            return null;
        }
        public static GameObject GetPrefab(string ID)
        {
            return SaveablePrefabs.GetPrefab(ID);
        }
    }
}