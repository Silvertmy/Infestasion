using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrossMouse : MonoBehaviour
{
    /*This just handle the mouse movement and aligns it with a cross hare UI for targets*/
    public RectTransform crosshair;

    private void Update()
    {
        // Get the mouse position in screen coordinates
        Vector3 mousePosition = Input.mousePosition;

        // Set the position of the crosshair UI to the mouse cursor position
        crosshair.position = mousePosition;
    }
}