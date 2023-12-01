using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon_2 : MonoBehaviour
{
    /*This is script handles the basic physics of a gun with high recoil rate..like the AK 47*/
    public float cooldownSpeed;
 
    public float fireRate;
 
    public float recoilCooldown;
 
    private float accuracy;
 
    public float maxSpreadAngle;
 
    public float timeTillMaxSpread;
 
    public GameObject bullet;

    bool isFiring;
    bool stopFiring;

    private bool isEnableAttack;
    private bool isContType2;

    private bool fire;

    public Animator _animator;

    //public JoystickShoot shooter;
 
    public GameObject shootPoint;
    public Transform spawnpoint;

    public GameObject _muzzleeffect;
 
    public AudioSource gunshot;
 
    public AudioClip singleShot;
 
    // Start is called before the first frame update
    void Start()
    {
 
    }
 
    // Update is called once per frame
    void Update()
    {
        cooldownSpeed += Time.deltaTime * 60f;

        if(isFiring == true)
        {
           accuracy += Time.deltaTime * 4f;
            if (cooldownSpeed >= fireRate)
            {
                Shoot();
                gunshot.PlayOneShot(singleShot);
                
                cooldownSpeed = 0;
                recoilCooldown = 1;
            }
        }
        if(isFiring == false)
        {
            recoilCooldown -= Time.deltaTime;
            if(recoilCooldown <= 1)
            {
                accuracy = 0.0f;
            }
        }

        if(Input.GetButtonDown("Fire1") && isEnableAttack)
        {
            _animator.SetTrigger("triggerAttack");
        }
    }

    public void PointerDown()
    {
        _animator.SetBool("Firing", true);
        //shooter.shootBullet();
        stopFiring = false;
        isFiring = true;
    }

    public void PointerUp()
    {
        _animator.SetBool("Firing", false);
       isFiring = false;
       stopFiring = true;
    }
 
    void Shoot()
    {
        RaycastHit hit;
 
        Quaternion fireRotation = Quaternion.LookRotation(transform.forward);
 
        float currentSpread = Mathf.Lerp(0.0f, maxSpreadAngle, accuracy / timeTillMaxSpread);
 
        fireRotation = Quaternion.RotateTowards(fireRotation, Random.rotation, Random.Range(0.0f, currentSpread));
 
        if (Physics.Raycast(transform.position, fireRotation * Vector3.forward, out hit, Mathf.Infinity))
        {
            GameObject tempBullet = Instantiate(bullet, shootPoint.transform.position, fireRotation);
            //Instantiate(bullet, shootPoint.transform.position, fireRotation);
            Instantiate(_muzzleeffect, shootPoint.transform.position, fireRotation);
            tempBullet.GetComponent<MoveBullet>().hitPoint = hit.point;
        }
    }
}
