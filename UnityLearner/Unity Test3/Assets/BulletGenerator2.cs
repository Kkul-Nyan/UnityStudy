using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletGenerator2 : MonoBehaviour
{
    public GameObject bulletPrefab;
    private float time = 0.0f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        this.time += Time.deltaTime;
        if(this.time > 1.0f)
        {
            Shoot();
            print("1초마다 실행!");
            this.time = 0.0f;
        }

        if(Input.GetMouseButtonDown(0))
        {
            GameObject bullet = Instantiate(bulletPrefab, transform.position, transform.rotation);

            //BulletController에서 총알 발사
            bullet.GetComponent<BulletController>().ShoottoPlayer();
        } 
    }

    public void Shoot()
    {
        GameObject bullet = Instantiate(bulletPrefab, transform.position, transform.rotation);
        bullet.GetComponent<BulletController>().ShoottoPlayer();
    }
}
