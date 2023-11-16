using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class MajorZombie : MonoBehaviour
{
    private Transform player;
    private NavMeshAgent agent;

    //
    public float Damage;
    private HostageHealth hostagedamage;

    //
    
    private Animator[] anim;


    [SerializeField]
    private float stoppingDistance = 2.0f;

    private void Start()
    {
        player = GameObject.Find("FollowMe").transform; // Try finding the player GameObject.
        agent = GetComponent<NavMeshAgent>();

        GameObject Hostages = GameObject.FindGameObjectWithTag("Hostile");
        hostagedamage = Hostages.GetComponent<HostageHealth>();

        if (player == null)
        {
            Debug.LogError("Player not found. Make sure the player GameObject exists and is named 'Player'.");
        }

        GameObject[] targetObjects = GameObject.FindGameObjectsWithTag("EnemyMajor"); // Replace "YourTag" with the tag you're looking for
        foreach (GameObject targetObject in targetObjects)
        {
            // Use GetComponent to get the Animator component attached to each GameObject
            Animator anim = targetObject.GetComponent<Animator>();

            if (anim != null)
            {
                // You now have access to each Animator component
                // No need to set the boolean parameter here
            }
            else
            {
                Debug.LogWarning("Animator component not found on an object with the specified tag.");
            }
        }
    }

    private void Update()
    {
        if (player != null)
        {
            float distanceToPlayer = Vector3.Distance(transform.position, player.position);

            if (distanceToPlayer > stoppingDistance)
            {
                agent.SetDestination(player.position);
            }
            else
            {
                // If the distance is less than or equal to stoppingDistance, stop the agent.
                agent.velocity = Vector3.zero;
                ////////////////////////////////////////////////////////////////////////
                //Call the script for Damage here
                hostagedamage.ZombieDamaging();
                //
                ///////////////////////////////////////////////////////////////////
                GameObject[] targetObjects = GameObject.FindGameObjectsWithTag("EnemyMajor");

                foreach (GameObject targetObject in targetObjects)
                {
                    Animator anim = targetObject.GetComponent<Animator>();

                    if (anim != null)
                    {
                        anim.SetBool("Attack", true);
                    }
                }
            }
        }
    }
}



