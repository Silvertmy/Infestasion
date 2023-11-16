using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class followEN : MonoBehaviour
{
    public Transform objectToFollow; // Reference to the object to follow
    public float followSpeed = 5f; // Adjust the speed of following as needed

    private void LateUpdate()
    {
        // Calculate the target position without rotation
        Vector3 targetPosition = new Vector3(objectToFollow.position.x, transform.position.y, objectToFollow.position.z);

        // Move towards the target position with a smooth dampening effect
        transform.position = Vector3.Lerp(transform.position, targetPosition, followSpeed * Time.deltaTime);
    }
}
