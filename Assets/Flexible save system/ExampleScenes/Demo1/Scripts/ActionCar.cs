using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActionCar : Vehicle
{
    [SerializeField] string specialEffect;

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
    struct ActionCarData
    {
        public object vehicleData;      // Make shure, you create a object type element to hold the data of the base class
        public string specialEffect;
    }

    // Override the virtual method of the Vehicle
    override public object SaveState()
    {
        // Instantiate the struct which contains the data we want to save and return it as object
        return new ActionCarData()
        {
            vehicleData = base.SaveState(), // Get the data of the base class: Vehicle
            specialEffect = specialEffect
        };
    }
    override public void LoadState(object state)
    {
        ActionCarData data = (ActionCarData)state; // Receive a object which we need to cast to extract our loaded data
        base.LoadState(data.vehicleData);          // Send the data to the base class: Vehicle
        this.specialEffect = data.specialEffect;
    }
    
}
