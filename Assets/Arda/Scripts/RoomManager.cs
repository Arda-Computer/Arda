using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using SaveLoadSystem;


public class RoomManager : MonoBehaviour
{
    [SerializeField] GameObject AddButton;
    public GameObject RoomButton;
    public GameObject RoomButtonPrefab;
    public GameObject RoomArea;
    public GameObject roomPrefab;
    GameObject homeRoom;


    // Start is called before the first frame update
    void Start()
    {
        //if no previous rooms saves, Instantiate home (otherwise will be empty)
        if(GameObject.FindGameObjectsWithTag("Room").Length == 0){

            homeRoom = GameObject.Instantiate(roomPrefab);
            homeRoom.gameObject.name = "Home";
            homeRoom.GetComponent<RoomState>().isActive = true;

        }
        
        DisplayRoomButtons();

    }


    //save everytime application quits
    void OnApplicationQuit() {

        SaveLoadSystemClass.SaveNew();

    }




    public void DisplayRoomButtons(){

        //resetting the buttons so they dont replicate
        foreach (Transform child in RoomArea.transform) {
            if(child != AddButton.transform){
                Destroy(child.gameObject);
            }
        }


        foreach (GameObject Room in GameObject.FindGameObjectsWithTag("Room")){

            //spawn button & change the name to name of Room GO
            RoomButton = GameObject.Instantiate(RoomButtonPrefab, RoomArea.transform);
            RoomButton.GetComponentInChildren<TMP_Text>().text = Room.gameObject.name;

            // then select the buttons for the rooms that are active (should just be one)
            // if(Room.activeSelf){
            //     RoomButton.GetComponentInChildren<Button>().Select();
            // }
                
                
        }




    }




}
