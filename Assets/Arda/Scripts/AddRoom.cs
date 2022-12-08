using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;


public class AddRoom : MonoBehaviour
{
    [SerializeField] GameObject AddIcon;
    [SerializeField] GameObject AddInput;
    [SerializeField] GameObject roomPrefab;
    GameObject newRoom;
    public GameObject RoomManager;

    // Start is called before the first frame update
    void Start()
    {

        this.gameObject.GetComponent<Button>().onClick.AddListener(NameRoom);

        
    }


    void NameRoom()
    {

        AddIcon.SetActive(false);
        AddInput.SetActive(true);
        AddInput.GetComponent<TMP_InputField>().onSubmit.AddListener(CreateRoom);





    }

    void CreateRoom(string msg)
    {

        //if pressed enter specfically
        if (Input.GetKeyDown(KeyCode.Return)){


            //instantiate ROOMPREFAB and change the name
            newRoom = GameObject.Instantiate(roomPrefab);
            newRoom.gameObject.name = msg;
            RoomManager.GetComponent<RoomManager>().DisplayRoomButtons();

            foreach (Transform child in newRoom.transform) {
            child.gameObject.SetActive(false);
                }


            newRoom = null;

            AddIcon.SetActive(true);
            AddInput.SetActive(false);

            AddInput.GetComponent<TMP_InputField>().text = "";
            AddInput.GetComponent<TMP_InputField>().onSubmit.RemoveListener(CreateRoom);


        }

    }

}
