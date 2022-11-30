using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SaveLoadSystem;

[RequireComponent(typeof(SaveableEntity))]
public class old_GroupState : MonoBehaviour, ISaveable
{
    float xPosition;
    float yPosition;
    float zPosition;
    float xWindowSizeDelta;
    float yWindowSizeDelta;
    float xCanvasSizeDelta;
    float yCanvasSizeDelta;
    [SerializeField] string focusedWindowUrl;


    
    //------------------------------------
    // ISaveable implementation...
    //------------------------------------

    // Create a Serializable struct which contains all sorable data:
    // You don't need to save the location, rotation and scale, this will be done behind the scenes ;)
    
    [System.Serializable]
    struct WindowData
    {
        public float xPosition;
        public float yPosition;
        public float zPosition;
        public float xWindowSizeDelta;
        public float yWindowSizeDelta;
        public float xCanvasSizeDelta;
        public float yCanvasSizeDelta;
        public string focusedWindowUrl;
    }
    public object SaveState()
    {

        //if the room was not opened (children in room never activated), then save the focusedWindowUrl as startingURL
        if(this.gameObject.GetComponent<old_WindowGroupManager>().newURL == "")
        {
            
            // Debug.Log("Group never opened");
            return new WindowData()
            {
                
                xPosition = this.gameObject.transform.position.x,
                yPosition = this.gameObject.transform.position.y,
                zPosition = this.gameObject.transform.position.z,
                xWindowSizeDelta = this.gameObject.GetComponentInChildren<ResizeWindows>().windowRecTransform.sizeDelta.x,
                yWindowSizeDelta = this.gameObject.GetComponentInChildren<ResizeWindows>().windowRecTransform.sizeDelta.y,
                xCanvasSizeDelta = this.gameObject.GetComponentInChildren<ResizeWindows>().canvasRecTransform.sizeDelta.x,
                yCanvasSizeDelta = this.gameObject.GetComponentInChildren<ResizeWindows>().canvasRecTransform.sizeDelta.y,
            
                focusedWindowUrl = this.gameObject.GetComponent<old_WindowGroupManager>().startingURL
            

            };
            
        }else{ //if the room was opened, then save normally - by using the name of the focusedWindow GO

            // Debug.Log("Nominal save");

            // Instantiate the struct which contains the data we want to save and return it as object
            return new WindowData()
            {
                
                xPosition = this.gameObject.transform.position.x,
                yPosition = this.gameObject.transform.position.y,
                zPosition = this.gameObject.transform.position.z,
                xWindowSizeDelta = this.gameObject.GetComponentInChildren<ResizeWindows>().windowRecTransform.sizeDelta.x,
                yWindowSizeDelta = this.gameObject.GetComponentInChildren<ResizeWindows>().windowRecTransform.sizeDelta.y,
                xCanvasSizeDelta = this.gameObject.GetComponentInChildren<ResizeWindows>().canvasRecTransform.sizeDelta.x,
                yCanvasSizeDelta = this.gameObject.GetComponentInChildren<ResizeWindows>().canvasRecTransform.sizeDelta.y,
            
                focusedWindowUrl = this.gameObject.GetComponent<old_WindowGroupManager>().focusedWindow.name
            

            };

            
    
        }

        
    }
    public void LoadState(object state)
    {
        WindowData data = (WindowData)state; // Receive a object which we need to
                                             // cast to extract our loaded data
        
        //set the position, size and startingURL of the window
        this.gameObject.transform.position = new Vector3(data.xPosition, data.yPosition, data.zPosition);
        this.gameObject.GetComponentInChildren<ResizeWindows>().windowRecTransform.sizeDelta = new Vector2(data.xWindowSizeDelta, data.yWindowSizeDelta);
        this.gameObject.GetComponentInChildren<ResizeWindows>().canvasRecTransform.sizeDelta = new Vector2(data.xCanvasSizeDelta, data.yCanvasSizeDelta);
        this.gameObject.GetComponent<old_WindowGroupManager>().startingURL = data.focusedWindowUrl;
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

    // Return true, if this object needs to be reinstantiated at load or false if the loading is enough
    public bool NeedsReinstantiation()
    {
        return false;
    }
    public void GotAddedAsChild(GameObject obj, GameObject hisParent)
    {
        // This function lets you know, that somewere deeper in the hirarchy of this GameObject a loaded GameObject got added to the structure
        // You may want to know that so you can setup the relations you may need

    }

    public void PostInstantiation(object state)
    {
        WindowData data = (WindowData)state; // Receive a object which we need to cast to extract our loaded data
        // Will be called after all Objects got loaded and Parents of each Objects are set.
        // You may need to do stuff like in GotAddedAsChild(...) but with objects which are not childs of this
        // Then you do this stuff here, because here it is guaranteed, that all objects got Instantiated
        // You can find your target objects using:
        // SaveableEntity.FindID(string id) -> this will search all objects by the ID
        // just grab the .gameObject of the returned Object and use it
        // You may want to store the targets ID, so you can load back to the right object.
        // Call: obj.id on the SaveableEntity component of your target to get the ID

    }


}
