using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SaveLoadSystem;
public class Block : MonoBehaviour, ISaveable
{
    [SerializeField] float speed;
    [SerializeField] Vector3 direction;

    [SerializeField] GameObject movingPart;
 

    float timePos = 0;

    // Start is called before the first frame update
    void Start()
    {
        // If you do not want that the SaveSystem saves the Transform data (position, rotation and scale),
        // than you can turn it off by calling the SetSaveTransform(false) on the SaveableEntity Component.
        // You also can switch this on and off for each SaveableEntity in the Editor by cklicking on "Show Base" in the "SaveSystem ID Management" display and
        // than click on "Save Transform"
        SaveableEntity thisSaveable = GetComponent<SaveableEntity>();
        if(thisSaveable != null)
        {
            thisSaveable.SetSaveTransform(false);
        }
    }

    // Update is called once per frame
    void Update()
    {
        timePos += Time.deltaTime* speed;
        Vector3 partPos = Mathf.Sin(timePos) * direction;
        movingPart.transform.localPosition = partPos;
    }

    //------------------------------------
    // ISaveable implementation...
    //------------------------------------

    // Create a Serializable struct which contains all sorable data:
    // You don't need to save the location, rotation and scale, this will be done behind the scenes ;)
    [System.Serializable]
    struct BlockData
    {
        public float speed;
        public SaveableEntity.Vector3Data direction; // Use this vector type for unity Vector3
        public float timePos;
    }
    
    public object SaveState()
    {
        return new BlockData()
        {
            speed = speed,
            direction = new SaveableEntity.Vector3Data(direction),
            timePos = timePos
        };
    }
    public void LoadState(object state)
    {
        BlockData data = (BlockData)state;
        speed = data.speed;
        direction = data.direction.ToVector3();
        timePos = data.timePos;
    }

    public bool NeedsToBeSaved()
    {
        return true;
    }
    public bool NeedsReinstantiation()
    {
        return true;
    }

    public void PostInstantiation(object state)
    {
        BlockData data = (BlockData)state;

    }
    public void GotAddedAsChild(GameObject obj, GameObject hisParent)
    {

    }


}
