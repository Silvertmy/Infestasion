using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowCam : MonoBehaviour
{
    public Transform target;  // Reference to the target object the camera will follow.
    public float smoothSpeed = 5f;  // Adjust the smoothness of the camera follow.

    private Vector3 offset;  // The initial offset between the camera and the target.

    private void Start()
    {
        // Calculate the initial offset between the camera and the target.
        offset = transform.position - target.position;
    }

    private void LateUpdate()
    {
        // Calculate the desired position for the camera based on the target's position.
        Vector3 desiredPosition = target.position + offset;

        // Smoothly interpolate between the current camera position and the desired position.
        Vector3 smoothedPosition = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed * Time.deltaTime);

        // Update the camera's position.
        transform.position = smoothedPosition;
    }
}