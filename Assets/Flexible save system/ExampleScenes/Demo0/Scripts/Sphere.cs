using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SaveLoadSystem;
public class Sphere : MonoBehaviour, ISaveable
{
    [SerializeField] float speed;
    float timePos = 0;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        timePos += Time.deltaTime * speed;
        float scale =  1.3f + 0.5f * Mathf.Sin(timePos);
        transform.localScale = new Vector3(scale, scale, scale);
    }


    //------------------------------------
    // ISaveable implementation...
    //------------------------------------

    // Create a Serializable struct which contains all sorable data:
    // You don't need to save the location, rotation and scale, this will be done behind the scenes ;)
    [System.Serializable]
    struct SphereData
    {
        public float speed;
        public float timePos;
    }

    public object SaveState()
    {
        return new SphereData()
        {
            speed = speed,
            timePos = timePos
        };
    }
    public void LoadState(object state)
    {
        SphereData data = (SphereData)state;
        speed = data.speed;
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
        SphereData data = (SphereData)state;

    }
    public void GotAddedAsChild(GameObject obj, GameObject hisParent)
    {

    }
}
