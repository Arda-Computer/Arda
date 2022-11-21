using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using CurvedUI;
using UnityEngine.UI;


public class ResizeWindows : MonoBehaviour, IPointerDownHandler, IDragHandler, IBeginDragHandler, IEndDragHandler
{

    //for dragging
    [SerializeField] private RectTransform windowRecTransform;
    [SerializeField] private RectTransform canvasRecTransform;
    Vector3 initialClickPosition;
    Vector3 clickDelta;
    float xCurrentWidth;
    float yCurrentHeight;
    public RawImage rawImage;


    public Transform pointer;



    public void OnPointerDown(PointerEventData eventData)
    {
        eventData.useDragThreshold = false;
        //grab cursor
        pointer = GameObject.Find("LaserBeamDot").transform;

        //grab location of first click
        initialClickPosition = windowRecTransform.InverseTransformPoint(pointer.transform.position);
        // Debug.Log("initialClickPosition = " + initialClickPosition);
        xCurrentWidth = windowRecTransform.sizeDelta.x;
        yCurrentHeight = windowRecTransform.sizeDelta.y;

        

    }


    public void OnDrag(PointerEventData data)
    {

            //update the difference
            clickDelta = windowRecTransform.InverseTransformPoint(pointer.transform.position) - initialClickPosition;
            // Debug.Log("clickDelta = " + clickDelta);

            //change the size by however much the cursor is moving
            windowRecTransform.sizeDelta = new Vector2(xCurrentWidth+(clickDelta.x*2), yCurrentHeight+(clickDelta.y*2)); //causes crashing sometimes
            canvasRecTransform.sizeDelta = new Vector2(xCurrentWidth+(clickDelta.x*2), yCurrentHeight-4+(clickDelta.y*2));

            //keep consistent angle when resizing - will need work
            windowRecTransform.transform.GetComponent<CurvedUISettings>().Angle = Mathf.RoundToInt(60 * windowRecTransform.sizeDelta.x/102);



        
    }


    //need to make ondrag work
    public void OnBeginDrag(PointerEventData data)
    {
        Color currColor = rawImage.color;
        currColor.a = 0.5f;
        rawImage.color = currColor;


    }

    public void OnEndDrag(PointerEventData data)
    {
        Color currColor = rawImage.color;
        currColor.a = 1f;
        rawImage.color = currColor;

    }


    

}
