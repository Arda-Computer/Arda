using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using SaveLoadSystem;
using System.IO;
using Vuplex.WebView;


//added to AppPrefab (hence every instanciated app)
public class AppManager : MonoBehaviour, ISaveable
{

    [SerializeField] GameObject windowPrefab;
    [SerializeField] GameObject windowGroupPrefab;
    CanvasWebViewPrefab canvasPrefab;

    RawImage Image;
    string baseURL;
    bool isDestroyedBool;


    // Start is called before the first frame update
    void Start()
    {

        //need to get url in correct png format
        baseURL = this.gameObject.name;
        baseURL = baseURL.Replace("https://", "");
        int index = baseURL.IndexOf("/");  
        baseURL = baseURL.Substring(0, index); 
        //apply favicon to GO
        byte[] UploadByte = File.ReadAllBytes(Application.persistentDataPath + "/favicons/"+ baseURL + ".png");
        Texture2D texture = new Texture2D(10,10);
        texture.LoadImage(UploadByte);
        this.gameObject.GetComponent<RawImage>().texture = texture;
        

    
        //once the GO is instantiated, place in correct location
        this.gameObject.transform.SetParent(GameObject.FindWithTag("Respawn").transform);
        this.gameObject.transform.localScale = Vector3.one;
        this.gameObject.transform.localPosition = Vector3.zero;

        //run script on click
        this.gameObject.GetComponent<Button>().onClick.AddListener(WindowManager);
        
    }

    void WindowManager()
        {

            // if(Input.GetKey(KeyCode.LeftCommand) && Input.GetKeyDown(KeyCode.W))
            // {

                // isDestroyedBool = true;
            //     SaveLoadSystemClass.SaveNew();
            //     Destroy(this.gameObject);

            // }else{	
            
            foreach (GameObject Room in GameObject.FindGameObjectsWithTag("Room"))
                {
                    //Instantiate new window group with startingURL in active room
                    if(Room.GetComponent<RoomState>().isActive){
                        Instantiate(windowPrefab, Room.transform).GetComponentInChildren<CanvasWebViewPrefab>().InitialUrl = this.gameObject.name;
                    }   
                }



            // }

            

        }





    //------------------------------------
    // ISaveable implementation...
    //------------------------------------

    // Create a Serializable struct which contains all sorable data:
    // You don't need to save the location, rotation and scale, this will be done behind the scenes ;)
    [System.Serializable]
    struct AppData
    {
        public string appURL;
            
    }
    
    public object SaveState()
    {
        return new AppData()
        {
            appURL = this.gameObject.name,

        };

    }
    public void LoadState(object state)
    {
        AppData data = (AppData)state;
        this.gameObject.name = data.appURL;

    }

    public bool NeedsToBeSaved()
    {
        if(this == null){
            return false;
        }else{
            return true;
        }
    }
    public bool NeedsReinstantiation()
    {
         if(this == null){
            return false;
        }else{
            return true;
        }
        
    }

    public void PostInstantiation(object state)
    {
        AppData data = (AppData)state;

    }
    public void GotAddedAsChild(GameObject obj, GameObject hisParent)
    {

    }







}

