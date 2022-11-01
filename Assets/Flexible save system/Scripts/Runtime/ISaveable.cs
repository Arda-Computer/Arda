using UnityEngine;

namespace SaveLoadSystem
{
    public interface ISaveable
    {
        // When returned false, the object will be ignored in the save progress
        bool NeedsToBeSaved();

        // Return true, if this object needs to be reinstantiated at load or false if the loading is enough
        // This only works for Prefab Objects
        bool NeedsReinstantiation();

        // Return the serializable data structure which shuld be stored
        object SaveState();

        // Load the same serializable data structure back in to the object
        // Don't make relations between objects here, because the nessesary objects may not instantiated here.
        void LoadState(object state);

        // Will be called after all saved Objects are instantiated 
        // You can make the relations between loaded objects here
        void PostInstantiation(object state);

        // Will be called when a loaded Object has been added to its saved parent
        // which is a child of this gameObject.
        // So you get notified here if any objects get added to any child gameObjects of this
        void GotAddedAsChild(GameObject obj, GameObject hisParent);

    }
};
