using System.Collections.Generic;
namespace SaveLoadSystem.Editor
{
    using UnityEditor;
    using UnityEngine;

    [CustomEditor(typeof(SaveableEntity))]
    public class SaveableEntityEditor : SaveIDManagerEditor<SaveableEntity>
    {
       /* private void OnEnable()
        {

            base.OnEnable();
        }*/
        // Implementation for finding all sceene objects of type SaveableEntity
        override protected SaveableEntity[] GetObjects()
        {
            
            return FindObjectsOfType<SaveableEntity>();
            /*List<SaveableEntity> objectsInScene = new List<SaveableEntity>();
            return new SaveableEntity[0];
            foreach (SaveableEntity go in Resources.FindObjectsOfTypeAll(typeof(SaveableEntity)) as SaveableEntity[])
            {
                if (!EditorUtility.IsPersistent(go.transform.root.gameObject) && !(go.hideFlags == HideFlags.NotEditable || go.hideFlags == HideFlags.HideAndDontSave))
                    objectsInScene.Add(go);
            }
            return objectsInScene.ToArray();*/
        }
    }
}