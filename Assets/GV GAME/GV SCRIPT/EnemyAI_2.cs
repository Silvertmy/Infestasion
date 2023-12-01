using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyAI_2 : MonoBehaviour
{
    /*This script will handle the 2nd grade of enemies. It will select how they attack and why they attack*/
    private Transform player;
    private float dist;
    public float moveSpeed;

    public GameObject BORfire1;
    public GameObject BORfire2;
    public GameObject BORfire3;

    public NavMeshAgent enemy;

    //public Animator _animator;
    public float howclose_tolook;
    public float howclose_to_detect;
    public float attackpos;
    public float howclose_tomove;
    public GameObject Suspicious;

    public Animator Attackmode_anim;

    private Vector3 turn;

    public float stopSpeed;


    public bool Ismoving;

    public Transform detectionPoint;

    public float MaxDetectionDist;

    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player").transform;
        
        detectionPoint.Rotate(0f,0.0f,0f);
    }

    // Update is called once per frame
    void Update()
    {
        dist = Vector3.Distance(player.position, transform.position);

        if(Ismoving == true)
        {
            enemy.SetDestination(player.position);
        }
        if(Ismoving == false)
        {
        
        }

        //Raycast for detection

        RaycastHit hit;
        Ray ray = new Ray();
        ray.origin = detectionPoint.position;
        ray.direction = detectionPoint.TransformDirection(Vector3.forward);

        Debug.DrawRay(ray.origin, ray.direction*MaxDetectionDist, Color.green);

        if(dist <= howclose_to_detect)
        {
            //it will be suspicious player
            Suspicious.gameObject.SetActive(true);

            //look around for player
            detectionPoint.Rotate(0f,0f,0f);//detectionPoint point rotates
            


            if(Physics.Raycast(ray, out hit, MaxDetectionDist))
            {
                if(hit.collider.CompareTag("Player"))
                {
                    transform.LookAt(player);//look at player
                    //activate attack mode
                    Attackmode_anim.SetBool("BOT_ACTIVE", true);

                    //look around animation will stop
                    Suspicious.gameObject.SetActive(false);//stop suspicion
                    detectionPoint.Rotate(0f,0f,0f);//Rotation will stop

                    //move to attack distance
                    Move();
                   // _animator.SetBool("RUN", true);
                    BORfire1.gameObject.SetActive(true);
                    BORfire2.gameObject.SetActive(true);
                    BORfire3.gameObject.SetActive(true);
                    
                
                }
            
            }
        }

        if(dist > howclose_to_detect)
        {
            //it will be suspicious player
            Suspicious.gameObject.SetActive(false);

            //look around for player
            detectionPoint.Rotate(0f,0f,0f);//detectionPoint point rotates

            Attackmode_anim.SetBool("BOT_ACTIVE", false);

            NotMove();
            BORfire1.gameObject.SetActive(false);
            BORfire2.gameObject.SetActive(false);
            BORfire3.gameObject.SetActive(false);
        }
        


        if(Physics.Raycast(ray, out hit, MaxDetectionDist))
        {
            if(hit.collider.CompareTag("Player"))
            {
                //look at player 
                //move to attack distance 
                //if at attack distance = attack
                
            }
            
        }
    }

    public void Move()
    {
        Ismoving = true;
    }

    public void NotMove()
    {
        Ismoving = false;
    }
}
