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
    CanvasWebViewPrefab canvasPrefab;

    RawImage Image;
    string ImageName;
    bool DestroyedBool = false;


    // Start is called before the first frame update
    void Start()
    {

        //apply favicon to GO
        ImageName = this.gameObject.name;
        ImageName = ImageName.Replace("/","");


        if (File.Exists(Application.persistentDataPath + "/saves/favicons/"+ ImageName + ".png")){

            byte[] UploadByte = File.ReadAllBytes(Application.persistentDataPath + "/saves/favicons/"+ ImageName + ".png");
            Texture2D texture = new Texture2D(10,10);
            texture.LoadImage(UploadByte);
            this.gameObject.GetComponent<RawImage>().texture = texture;
        }

    
        //once the GO is instantiated, place in correct location
        this.gameObject.transform.SetParent(GameObject.FindWithTag("Respawn").transform);
        this.gameObject.transform.localScale = Vector3.one;
        this.gameObject.transform.localPosition = Vector3.zero;

        //run script on click
        this.gameObject.GetComponent<Button>().onClick.AddListener(WindowManager);
        
    }

    async void WindowManager()
        {			
            if(Input.GetKey(KeyCode.W)){
                DestroyedBool = true;
                SaveLoadSystemClass.SaveNew();
                Destroy(this.gameObject);
            }
            
            else{
            canvasPrefab = Instantiate(windowPrefab).GetComponentInChildren<CanvasWebViewPrefab>();
            await canvasPrefab.WaitUntilInitialized();
            canvasPrefab.WebView.LoadUrl(this.gameObject.name);

            }

            

        }




    //------------------------------------
    // ISaveable implementation...
    //------------------------------------

    // Create a Serializable struct which contains all sorable data:
    // You don't need to save the location, rotation and scale, this will be done behind the scenes ;)
    [System.Serializable]
    struct BlockData
    {
        public string appURL;
            
    }
    
    public object SaveState()
    {
        return new BlockData()
        {
            appURL = this.gameObject.name,

        };

    }
    public void LoadState(object state)
    {
        BlockData data = (BlockData)state;
        this.gameObject.name = data.appURL;

    }

    public bool NeedsToBeSaved()
    {
        if(DestroyedBool == false){
            return true;
        }else{
            return false;
        }
    }
    public bool NeedsReinstantiation()
    {
        if(DestroyedBool == false){
            return true;
        }else{
            return false;
        }
        
    }

    public void PostInstantiation(object state)
    {
        BlockData data = (BlockData)state;

    }
    public void GotAddedAsChild(GameObject obj, GameObject hisParent)
    {

    }







}

