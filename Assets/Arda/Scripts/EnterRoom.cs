using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class EnterRoom : MonoBehaviour
{

    public GameObject RoomManager;


    // Start is called before the first frame update
    void Start()
    {

        this.gameObject.GetComponent<Button>().onClick.AddListener(EnterTheRoom);
        
    }

    void EnterTheRoom()
    {


        foreach (GameObject Room in GameObject.FindGameObjectsWithTag("Room"))
        {

            //then select the buttons for the rooms that are active (should just be one)

            if(Room.name == this.gameObject.GetComponentInChildren<TMP_Text>().text){
                
                Room.GetComponent<RoomState>().isActive = true; //sets the room which has the same name as the button that was pressed as active
                
                foreach (Transform child in Room.transform) {
                    child.gameObject.SetActive(true);
                    // child.GetComponent<old_WindowGroupManager>().Start();
    
                }

            }else{
                
                Room.GetComponent<RoomState>().isActive = false;
                
                foreach (Transform child in Room.transform) {
                    
                    child.gameObject.SetActive(false);
                    
                }
            }
            
            
        }

        
    }
}
