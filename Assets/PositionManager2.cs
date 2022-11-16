using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Vuplex.WebView;



public class PositionManager2 : MonoBehaviour
{

        public GameObject PreviewButton;
        // public WindowGroupManager.Order thisWindowGO;
        public bool BackExists;
        public Texture2D texture2;

        // Start is called before the first frame update
        void Start()
        {


            PreviewButton.GetComponent<Button>().onClick.AddListener(Convert);
            
        }

        void Convert(){

            // this.gameObject.transform.parent.GetComponent<WindowGroupManager>().focusIndex

            texture2 = new Texture2D(10,10);

            // texture2.LoadImage(this.gameObject.transform.parent.GetComponent<WindowGroupManager>().orders[this.gameObject.transform.parent.GetComponent<WindowGroupManager>().focusIndex].Imagebytes);

            this.gameObject.transform.parent.GetComponent<WindowGroupManager>().focusedWindow.transform.Find("PreviewButton").gameObject.SetActive(true);
            this.gameObject.transform.parent.GetComponent<WindowGroupManager>().focusedWindow.transform.Find("PreviewButton").GetComponent<RawImage>().texture = texture2;
            this.gameObject.transform.parent.GetComponent<WindowGroupManager>().focusedWindow.transform.Find("CanvasWebViewPrefab").gameObject.SetActive(false);






            // this.gameObject.transform.parent.GetComponent<WindowGroupManager>().ChangeFocusTo(this.gameObject.transform.parent.GetComponent<WindowGroupManager>().focusIndex+1, this.gameObject);
            this.gameObject.transform.Find("PreviewButton").gameObject.SetActive(false);
            this.gameObject.transform.Find("CanvasWebViewPrefab").gameObject.SetActive(true);
            //  Debug.Log("new Focus URLURLURLURLURL: " + this.gameObject.transform.parent.GetComponent<WindowGroupManager>().orders[this.gameObject.transform.parent.GetComponent<WindowGroupManager>().PublicPosition+1].URL);





        }
}




