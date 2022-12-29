using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;


public class addConstraint : MonoBehaviour
{
    
    ConstraintSource constraintSource;

    // Start is called before the first frame update
    void Start()
    {
        //add Main Camera as lookAt constraint
        if (this.GetComponent<LookAtConstraint>().sourceCount == 0){
            constraintSource.sourceTransform = GameObject.FindGameObjectWithTag("CameraFollower").transform;
            constraintSource.weight=1;
            this.GetComponent<LookAtConstraint>().AddSource(constraintSource);
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
