using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookatMouse : MonoBehaviour
{
    /*This is more like a focus script for the mouse*/

    public float rotationSpeed = 90f; // Adjust the speed as needed

    void Update()
    {
        // Get the mouse position in screen coordinates
        Vector3 mousePosition = Input.mousePosition;

        // Convert the mouse position from screen space to world space
        Vector3 worldMousePosition = Camera.main.ScreenToWorldPoint(new Vector3(mousePosition.x, mousePosition.y, 10));

        // Calculate the direction from the object to the mouse position
        Vector3 lookDirection = (worldMousePosition - transform.position).normalized;

        // Calculate the rotation step based on rotationSpeed
        float step = rotationSpeed * Time.deltaTime;

        // Rotate the object to look in the calculated direction with the specified speed
        transform.forward = Vector3.RotateTowards(transform.forward, lookDirection, step, 0.0f);
    }
}
