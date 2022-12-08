using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PointerInputToggle : MonoBehaviour
{
    public bool inputBool;
    // Start is called before the first frame update
    void Start()
    {

        // this.gameObject.GetComponent<Button>().onClick.AddListener(InputToggle);
        
        
    }

    void InputToggle()
        {	

            inputBool = !inputBool;
            
        }
}
