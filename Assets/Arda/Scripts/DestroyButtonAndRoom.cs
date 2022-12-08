using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using SaveLoadSystem;
using TMPro;

public class DestroyButtonAndRoom : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    public bool currentGO;

    //Detect if the Cursor starts to pass over the GameObject
    public void OnPointerEnter(PointerEventData pointerEventData)
    {
        currentGO = true;
    }

    //Detect when Cursor leaves the GameObject
    public void OnPointerExit(PointerEventData pointerEventData)
    {
        currentGO = false;
    }

    public void DestroyThisGO(){
        
        if(currentGO){
        foreach (GameObject Room in GameObject.FindGameObjectsWithTag("Room")){

            if(Room.name == this.gameObject.GetComponentInChildren<TMP_Text>().text){
                Destroy(Room);
            }
                
                
        }
        Destroy(this.gameObject);
        
        }
    }

}
