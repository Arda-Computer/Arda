using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SaveLoadSystem;


[RequireComponent(typeof(SaveableEntity))]
public class Vehicle : MonoBehaviour, ISaveable
{
    [SerializeField] string manufacturer;
    [SerializeField] float speed;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }


    //------------------------------------
    // ISaveable implementation...
    //------------------------------------

    // Create a Serializable struct which contains all sorable data:
    // You don't need to save the location, rotation and scale, this will be done behind the scenes ;)
    [System.Serializable]
    struct VehicleData
    {
        public string manufacturer;
        public float speed;
    }
    virtual public object SaveState()
    {
        // Instantiate the struct which contains the data we want to save and return it as object
        return new VehicleData()
        {
            manufacturer = manufacturer,
            speed = speed
        };
    }
    virtual public void LoadState(object state)
    {
        VehicleData data = (VehicleData)state; // Receive a object which we need to cast to extract our loaded data
        this.manufacturer = data.manufacturer;
        this.speed = data.speed;
    }
    public bool NeedsToBeSaved()
    {
        // If this GameObject has a parent which also inherits from ISaveable,
        // than any return value of of childs will be ignored, because the parent will decide if the whole Object structure
        // gets saved or not.

        // Otherwise:
        // If true gets returned, this GameObject will be saved
        // If false gets returned, this GameObject will be ignored when saving
        return true;
    }
    public bool NeedsReinstantiation()
    {
        return true;
    }
    public void GotAddedAsChild(GameObject obj, GameObject hisParent)
    {
        // This function lets you know, that somewere deeper in the hirarchy of this GameObject a loaded GameObject got added to the structure
        // You may want to know that so you can setup the relations you may need

    }

    public void PostInstantiation(object state)
    {
        VehicleData data = (VehicleData)state; // Receive a object which we need to cast to extract our loaded data
        // Will be called after all Objects got loaded and Parents of each Objects are set.
        // You may need to do stuff like in GotAddedAsChild(...) but with objects which are not childs of this
        // Then you do this stuff here, because here it is guaranteed, that all objects got Instantiated
        // You can find your target objects using:
        // public static SaveableEntity FindID(string id) -> this will search all objects by the ID
        // just grab the .gameObject of the returned Object and use it
        // You may want to store the targets ID, so you can load back to the right object.
        // Call: obj.id on the SaveableEntity component of your target to get the ID

    }


}
