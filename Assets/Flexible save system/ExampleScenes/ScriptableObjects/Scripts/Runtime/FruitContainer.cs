using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SaveLoadSystem;

[RequireComponent(typeof(SaveableEntity))] // Is required to store this objects data
public class FruitContainer : MonoBehaviour, ISaveable
{
    [SerializeField] FruitType fruitType;
    void Start()
    {
        PrintFruit();
    }

    // Update is called once per frame
    void Update()
    {

    }

    void PrintFruit()
    {
        if (fruitType == null)
            Debug.Log(gameObject.name + " --> no fruitType defined");
        else
            Debug.Log(gameObject.name + " --> has fruitType: " + fruitType.ToString());
    }

    [System.Serializable] // Create a System.Serializable struct which holds the data we want to save/load
    struct FruitContainerData
    {
        public string fruitID;
    }
    public object SaveState()
    {
        Debug.Log("Save FruitContainer", this);
        return new FruitContainerData()
        {
            fruitID = fruitType.GetID()     // store the fruitType ID
        };
    }
    

    public void LoadState(object state)
    {
        Debug.Log("Load FruitContainer", this);
        FruitContainerData data = (FruitContainerData)state; // Get the ID of the fruitType back
        fruitType = IDFinder.GetScriptableObject<FruitType>(data.fruitID); // Will search the Resources folders for any FruitType with the given ID
                                                                           // This can also be used for GetGameObjectst that inherit from ISaveID
        PrintFruit();
    }
    public void PostInstantiation(object state)
    {

    }
    public bool NeedsReinstantiation()
    {
        return true;
    }
    public bool NeedsToBeSaved()
    {
        return true;
    }
    public void GotAddedAsChild(GameObject obj, GameObject hisParent)
    { }
    

    

    
}
