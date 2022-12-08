using UnityEngine.EventSystems;
using UnityEngine;
using UnityEngine.UI;
using CurvedUI;

public class DragWindows : MonoBehaviour, IPointerDownHandler, IDragHandler, IBeginDragHandler, IEndDragHandler
{
    //for dragging
    Transform WindowGroup;
    public RawImage rawImage;
    Transform pointer;
    public Vector3 mOffset;





    public void OnPointerDown(PointerEventData eventData)
    {
        WindowGroup = this.gameObject.transform.parent.transform.parent;
        eventData.useDragThreshold = false;
        pointer = GameObject.Find("LaserBeamDot").transform;
        mOffset = pointer.transform.position - WindowGroup.transform.position;

    }

    public void OnDrag(PointerEventData eventData)
    {

        WindowGroup.transform.position = pointer.transform.position - mOffset;
                
    }

    


    public void OnBeginDrag(PointerEventData eventData)
    {   
        Color currColor = rawImage.color;
        currColor.a = 0.5f;
        rawImage.color = currColor;

    }

    //needed for OnDrag
    public void OnEndDrag(PointerEventData eventData) {

        Color currColor = rawImage.color;
        currColor.a = 1f;
        rawImage.color = currColor;
    }

}

