using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchLocation : MonoBehaviour
{
    public int touchId;
    public GameObject circle;

    public TouchLocation(int newTouchId, GameObject newCircle){
        touchId = newTouchId;
        circle = newCircle;
    }	
}
