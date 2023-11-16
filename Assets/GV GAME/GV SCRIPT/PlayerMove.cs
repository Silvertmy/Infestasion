using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove : MonoBehaviour
{

    public CharacterController _charController;
    public Animator _animator;


    public GameObject player;
    public Transform meshPlayer;

    public Transform Indicator;
    public  ManagerJoyStick _mngrJoyStick;

    ////////////////////////////////////////////////////////// WEAPONS!
    [SerializeField]
    public Weapons weapon;

    [SerializeField]
    public string enemyTag;

    private bool fire;
    /////////////////////////////////////////////////////////

    public float inputX;
    public float inputZ;
    private Vector3 v_movement;
    private Vector3 v_lookDir;

    bool isFiring;
    bool stopFiring;

    private Vector3 v_velocity;

    public float moveSpeed;
    public float gravity;

    public Weapons weapons;

    public Transform spawnpoint;


    private bool isEnableAttack;
    private bool isContType2;
    // Start is called before the first frame update
    void Start()
    {
        /*if(!isContType2)
        {
            moveSpeed = 0.1f; // run
        }
        else
        {
            moveSpeed = 1f; // walk
        }

        */gravity = 0.5f;

       

        
    }

    // Update is called once per frame
    void Update()
    {
        //inputZ = Input.GetAxis("Vertical"); 
        //inputX = Input.GetAxis("Horizontal");

        inputX = _mngrJoyStick.inputHorizontal();
        inputZ = _mngrJoyStick.inputVertical();

        //inputZ = Input.GetAxis("Horizontal");
        //inputX = Input.GetAxis("Vertical");

        if (inputX == 0 && inputZ == 0)
        {
            _animator.SetBool("RUN", false);
        }
        else
        {
            _animator.SetBool("RUN", true); 
        }


        //attack
        if(isFiring)
        {
           makeFireVariableFalse();
           //weapon.Fire(enemyTag);
           
        }

        if(Input.GetButtonDown("Fire1") && isEnableAttack)
        {
            _animator.SetTrigger("triggerAttack");
        }
        
    }

    public void PointerDown()
    {
        _animator.SetBool("Firing", true);
        stopFiring = false;
        makeFireVariableTrue();
    }

    public void PointerUp()
    {
        _animator.SetBool("Firing", false);
       isFiring = false;
       stopFiring = true;
    }

    void makeFireVariableTrue()
    {
        isFiring = true;
    }

    void makeFireVariableFalse()
    {
        isFiring = false;
        if(stopFiring == false)
        {
            Invoke("makeFireVariableTrue", weapons.firerate);
        }
    }

    private void FixedUpdate()
    {

        //gravity
        if(_charController.isGrounded)
        {
            v_movement.y = 0f;
        }
        else
        {
            v_movement.y -= gravity * Time.deltaTime;
        }

        //movement
        v_movement = new Vector3(inputX * moveSpeed, v_movement.y, inputZ * moveSpeed);
        _charController.Move(v_movement);

        //rotation
        if(inputX != 0 || inputZ != 0)
        {
            Vector3 lookDir = new Vector3(v_movement.x, 0, v_movement.z);
            meshPlayer.rotation = Quaternion.LookRotation(lookDir);
            Indicator.rotation = Quaternion.LookRotation(lookDir);
        }
        
    }
}
