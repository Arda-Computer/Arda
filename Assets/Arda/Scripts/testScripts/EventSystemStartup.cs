using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;



public class EventSystemStartup : MonoBehaviour
{



    // Start is called before the first frame update
    void Awake()
    {

        this.gameObject.GetComponent<StandaloneInputModule>().enabled = true;
        this.gameObject.GetComponent<CurvedUIInputModule>().enabled = false;

        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
