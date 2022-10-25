using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class instantiateWindow : MonoBehaviour
{
    
    
    public GameObject windowPrefab;



    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            Instantiate(windowPrefab);
        }


        
    }
}
