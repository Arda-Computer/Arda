using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuplex.WebView;
using UnityEngine.UI;
using System.Linq;
using System.IO;


public class GroupManager : MonoBehaviour
{
    public List<Order> orders = new List<Order>();
    public GameObject Window;
    public Order newObject;
    public int focusedPos;
    public Texture2D texture1;
    public GameObject PreviewWindow;
    public string lastURL;


    public class Order {
        

        public string URL { get; set; }
        public byte[] Imagebytes { get; set; }

        
        public Order(string URL, byte[] Imagebytes){

            this.URL = URL;
            this.Imagebytes = Imagebytes;

        }
    }

    public void AddToList(string currentURL, byte[] currentImagebytes){

        newObject = new Order(currentURL, currentImagebytes);
        orders.Add(newObject);

        focusedPos = orders.IndexOf(newObject);

        Debug.Log("focusedPos: " + focusedPos);

        Display(focusedPos);
        


    }   


    public void Display(int position){


        string result = "List contents: ";
            for(int i = 0; i < orders.Count; i++)
            {
                result += orders[i].URL.ToString() + ", ";
                i++;

            }
            Debug.Log(result);


        

        
        


        // if(focusedPos == 0){

            //initiate windowPreviewPrefab for new order, set 
            PreviewWindow = GameObject.Instantiate(Window, gameObject.transform.position - new Vector3(position+1,0,-1-position), new Quaternion(0,0,0,0), gameObject.transform);
            PreviewWindow.GetComponent<PositionManager>().isPreview = true;
            // PreviewWindow.GetComponent<PositionManager>().savedPos = orders.IndexOf(orders[position]);
            // PreviewWindow.GetComponent<PositionManager>().savedURL = orders[position].URL;
            texture1 = new Texture2D(10,10);
            texture1.LoadImage(orders[position].Imagebytes);
            PreviewWindow.transform.Find("PreviewButton").GetComponent<RawImage>().texture = texture1;

        // }else{

            lastURL = orders[position-1].URL;
            PreviewWindow.GetComponent<PositionManager>().isPreview = true;
            // PreviewWindow.GetComponent<PositionManager>().savedPos = orders.IndexOf(orders[position]);
            // PreviewWindow.GetComponent<PositionManager>().savedURL = orders[position].URL;
            texture1 = new Texture2D(10,10);
            texture1.LoadImage(orders[position].Imagebytes);
            PreviewWindow.transform.Find("PreviewButton").GetComponent<RawImage>().texture = texture1;

        // }
            // //initiate windowPreviewPrefab for new order, set 
            // var preview2 = GameObject.Instantiate(Window, gameObject.transform.position - new Vector3(2,0,-2), new Quaternion(0,0,0,0), gameObject.transform);
            // preview2.GetComponent<PositionManager>().isPreview = true;
            // preview2.GetComponent<PositionManager>().posOfObject = position;
            // Texture2D texture2 = new Texture2D(10,10);
            // texture2.LoadImage(orders[position-2].Imagebytes);
            // preview2.transform.Find("PreviewButton").GetComponent<RawImage>().texture = texture2;
            



        

    }


}
