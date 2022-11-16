using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Collector : MonoBehaviour
{

    public GameObject window;
    public bool addToStack;


    // Update is called once per frame
    void Update()
    {

        if(Input.GetKeyDown(KeyCode.Z)){


            addToStack = true;

        }else{

            addToStack=false;

        } 
        
        
        if(addToStack){
            ICollectible collectible = window.GetComponent<ICollectible>();
            if(collectible !=null){
                collectible.Collect();
            }
        }
        
            
        
    }
}
