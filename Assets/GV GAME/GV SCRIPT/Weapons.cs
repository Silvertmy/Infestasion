using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapons : MonoBehaviour
{
    [SerializeField]
    public float damage;

    [SerializeField]
    public float firerate;

    [SerializeField]
    public float firedistance;

    [SerializeField]
    private Transform bulletPoint;

    private bool fireCooldown;
    private RaycastHit hit;

    private EnemyLife enemylife;

    public HealthController _healthbar;



    // Start is called before the first frame update
    public void Start()
    {
        GameObject Enemybots = GameObject.FindGameObjectWithTag("enemylife");
        enemylife = Enemybots.GetComponent<EnemyLife>();
    }

    public void Fire(string enemyTag)
    {
        if(fireCooldown) return;

        Ray ray = new Ray();
        ray.origin = bulletPoint.position;
        ray.direction = bulletPoint.TransformDirection(Vector3.forward);

        Debug.DrawRay(ray.origin, ray.direction*firedistance, Color.green);

        if(Physics.Raycast(ray, out hit, firedistance))
        {
            if(hit.collider.CompareTag(enemyTag))
            {
                /*var healthctrl = hit.collider.GetComponent<HealthController>();
                healthctrl.ApplyDamage(damage);*/
                
            }
            enemylife.Damaging();
            
        }
        //StartCoroutine(StopCooldownAfterTime());
        //fireCooldown = true;

        
    }

    private IEnumerator StopCooldownAfterTime()
    {
        yield return new WaitForSeconds(firerate);
        fireCooldown = false;
    }

    /*public bool useTap()
    {
        return firerate == 0;
    }*/
}
