using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrossMouse : MonoBehaviour
{
    public RectTransform crosshair;

    private void Update()
    {
        // Get the mouse position in screen coordinates
        Vector3 mousePosition = Input.mousePosition;

        // Set the position of the crosshair UI to the mouse cursor position
        crosshair.position = mousePosition;
    }
}