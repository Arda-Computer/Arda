using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView;
using UnityEngine.UI;

public class WindowGroupManager : MonoBehaviour
{

    public GameObject StartingWindow;
    public GameObject focusedWindow;
    public GameObject windowPrefab;
    // public GameObject tempGO;
    public string focusedURL;
    public byte[] focusedImagebytes;
    public string startingURL;
    public byte[] startingImagebytes;
    public string newURL;
    public byte[] newImagebytes;
    public Texture2D texture1;
    // public int PublicPosition;
    public int focusedIndex;
    public GameObject BackWindow;
    public bool m_BackExist;


    public Order newObject;
    // public int focusedPos;
    
    public List<Order> orders = new List<Order>();

    public class Order {

        // public GameObject WINDOW { get; set; }
        public string URL { get; set; }
        public byte[] Imagebytes { get; set; }

        
            public Order(string URL, byte[] Imagebytes){

                // this.WINDOW = WINDOW;
                this.URL = URL;
                this.Imagebytes = Imagebytes;

            }
    }






    // Start is called before the first frame update
    async void Start()
    {
        // StartingWindow = GameObject.Instantiate(windowPrefab, gameObject.transform.position - new Vector3(0,0,0), new Quaternion(0,0,0,0), gameObject.transform);
        // StartingWindow.transform.Find("PreviewButton").gameObject.SetActive(false);
        // StartingWindow.GetComponentInChildren<CanvasWebViewPrefab>().gameObject.SetActive(true);
        await StartingWindow.GetComponentInChildren<CanvasWebViewPrefab>().WaitUntilInitialized();
        StartingWindow.GetComponentInChildren<CanvasWebViewPrefab>().WebView.LoadUrl(startingURL);


        //startingURL = "https://www.google.com/";
        startingImagebytes = await StartingWindow.GetComponentInChildren<CanvasWebViewPrefab>().WebView.CaptureScreenshot();


        AddToList(startingURL, startingImagebytes);
        ChangeFocusTo(0, StartingWindow);

    }


    public void AddToList(string currentURL, byte[] currentImagebytes){

        newObject = new Order(currentURL, currentImagebytes);
        orders.Insert(0, newObject);

        string result = "List contents: ";
                for(int i = 0; i < orders.Count; i++)
                {
                    result += "P O S I T I O N: " + orders.IndexOf(orders[i]).ToString() + " " + orders[i].URL.ToString() + " ";

                }
        Debug.Log(result);


    // int objIndex = orders.IndexOf(newObject);
    DisplayPreviousWindowOf(focusedIndex);

    

    }   


    public void ChangeFocusTo(int focusIndex, GameObject focusWindow){

        focusedWindow = focusWindow;
        focusedIndex = focusIndex;


        focusedWindow.transform.Find("PreviewButton").gameObject.SetActive(false);
        focusedWindow.transform.Find("CanvasWebViewPrefab").gameObject.SetActive(true);

        focusedWindow.GetComponentInChildren<CanvasWebViewPrefab>().WebView.UrlChanged += MainWebView_UrlChanged;//if url changes
        focusedWindow.GetComponentInChildren<CanvasWebViewPrefab>().WebView.LoadUrl(orders[focusIndex].URL);



        


    }


        //if url changes
        public async void MainWebView_UrlChanged(object sender, UrlChangedEventArgs eventArgs) {
            

            Debug.Log("urlChange");

            //set variables (image, etc)
            newURL = focusedWindow.GetComponentInChildren<CanvasWebViewPrefab>().WebView.Url;
            newImagebytes = await focusedWindow.GetComponentInChildren<CanvasWebViewPrefab>().WebView.CaptureScreenshot();
            AddToList(newURL, newImagebytes);
            
        }



    







        public void DisplayPreviousWindowOf(int position){

            // Debug.Log("DisplayPreviousWindowOf position: " + position);
            // PublicPosition = position;
            
            //initiate windowPreviewPrefab for new order, set 
            if(orders.Count > 1){
                texture1 = new Texture2D(10,10);
                texture1.LoadImage(orders[position].Imagebytes);
                // Debug.Log("orders[position+1].URL: "+ orders[position+1].URL);
                // Debug.Log("orders[position].URL: "+ orders[position].URL);
                // m_BackExist = focusedWindow.GetComponent<PositionManager2>().BackExists;

                if(focusedWindow.GetComponent<PositionManager2>().BackExists == false){
                    
                    BackWindow = GameObject.Instantiate(windowPrefab, gameObject.transform.position - new Vector3(position+1,0,-1-position), new Quaternion(0,0,0,0), gameObject.transform);
                    // tempGO = GameObject.Instantiate(orders[position].WINDOW, gameObject.transform.position - new Vector3(position+1,0,-1-position), new Quaternion(0,0,0,0), gameObject.transform);
                    // tempGO.GetComponent<PositionManager2>().thisWindowGO = orders[position+1];
                    BackWindow.transform.Find("PreviewButton").GetComponent<RawImage>().texture = texture1;
                    BackWindow.transform.Find("PreviewButton").gameObject.SetActive(true);
                    // BackWindow.transform.Find("CanvasWebViewPrefab").gameObject.SetActive(false);
                    // orders[position+1].WINDOW.GetComponent<PositionManager2>().thisWindowGO = orders[position+1].WINDOW;

                    // ChangeFocusTo(orders[position].WINDOW);
                    focusedWindow.GetComponent<PositionManager2>().BackExists = !focusedWindow.GetComponent<PositionManager2>().BackExists;

                }else{
                    
                    BackWindow.transform.Find("PreviewButton").GetComponent<RawImage>().texture = texture1;
                    BackWindow.transform.Find("PreviewButton").gameObject.SetActive(true);
                    // BackWindow.transform.Find("CanvasWebViewPrefab").gameObject.SetActive(false);
                    // BackWindow.GetComponent<PositionManager2>().thisWindowGO = orders[position+1];
                
                }



        
            }

        

    }


}
