using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Boundary
{
    public float xMin, xMax, yMin, yMax;
}
public class Player : MonoBehaviour
{

    public bool canTripleShoot = false;
    public bool isSpeedBoosterActive = false;
    public bool shieldsActive = false;
    [SerializeField]
    public GameObject explosionPrefab;
    [SerializeField]
    public GameObject laserPrefeb;
    [SerializeField]
    public GameObject tripleShotPrefeb;
    [SerializeField]
    public GameObject shieldGameObject;
    //[SerializeField]
    //public GameObject[] engines;
    [SerializeField]
    public float fireRate = 0.25f;
    [SerializeField]
    public float canFire = 0.0f;

    [SerializeField]
    private float speed = 5.0f;
    public float tilt;
    public Boundary boundary;
    public int lives = 3;
    private float xMin, xMax, yMin, yMax;
    private float playerWidth;
    private float playerHeight;
    private UIManager uiManager;
    private GameManager gameManager;
    private SpawnManager spawnManager;
    private AudioSource audioSource;
    public SimpleTouchPad touchPad;
    public SimpleTouchAreaButton areaButton;
    private Quaternion calibrationQuaternion;
    //  private int hitCount = 0;
    // Start is called before the first frame update
    void Start()
    {

        CalibrateAccelerometer();


        //Debug.Log("x position" + transform.position.x);
        //transform.position = new Vector3(0, -4.08f, 0);
        uiManager = GameObject.Find("Canvas").GetComponent<UIManager>();
        if (uiManager != null && uiManager.EarnLiveStatus())
        {
            lives = 1;
            EnableShields();
        }
        if (uiManager != null)
        {
            uiManager.UpdateLives(lives);
        }
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        spawnManager = GameObject.Find("SpawnManager").GetComponent<SpawnManager>();

        if (spawnManager != null)
        {
            spawnManager.StartSpawnRoutine();
        }

        touchPad = GameObject.Find("MovementZone").GetComponent<SimpleTouchPad>();
        areaButton = GameObject.Find("FireZone").GetComponent<SimpleTouchAreaButton>();
        audioSource = GetComponent<AudioSource>();
        float camDistance = Vector3.Distance(transform.position, Camera.main.transform.position);
        Vector2 bottomCorner = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, camDistance));
        Vector2 topCorner = Camera.main.ViewportToWorldPoint(new Vector3(1, 1, camDistance));
        BoxCollider2D playerCollider = GetComponent<BoxCollider2D>();
        playerWidth = playerCollider.bounds.extents.x;
        playerHeight = playerCollider.bounds.extents.y;

        xMin = bottomCorner.x + playerWidth;
        xMax = topCorner.x - playerWidth;
        //reserving the space for bottom banner
        yMin = bottomCorner.y + (playerHeight * 2);// 
        //adding 3.0f so that player never reach to max y
        yMax = topCorner.y - playerHeight - 3.0f;

    }

    // Update is called once per frame
    void Update()
    {
        // Movement();
        if (Time.time > canFire && areaButton.CanFire())
        {
            Shoot();
            canFire = Time.time + fireRate;
        }
    }

    //Used to calibrate the Iput.acceleration input
    void CalibrateAccelerometer()
    {
        Vector3 accelerationSnapshot = Input.acceleration;
        Quaternion rotateQuaternion = Quaternion.FromToRotation(new Vector3(0.0f, 0.0f, -1.0f), accelerationSnapshot);
        calibrationQuaternion = Quaternion.Inverse(rotateQuaternion);
    }

    //Get the 'calibrated' value from the Input
    Vector3 FixAcceleration(Vector3 acceleration)
    {
        Vector3 fixedAcceleration = calibrationQuaternion * acceleration;
        return fixedAcceleration;
    }

    private void Shoot()
    {

        audioSource.Play();
        if (canTripleShoot == true)
        {
            Instantiate(laserPrefeb, transform.position + new Vector3(-0.55f, 0.06f, 0), Quaternion.identity);
            Instantiate(laserPrefeb, transform.position + new Vector3(0, 1.01f, 0), Quaternion.identity);
            Instantiate(laserPrefeb, transform.position + new Vector3(0.55f, 0.06f, 0), Quaternion.identity);
            //Instantiate(tripleShotPrefeb, transform.position, Quaternion.identity);
        }
        else
        {
            Instantiate(laserPrefeb, transform.position + new Vector3(0, 1.01f, 0), Quaternion.identity);
        }

    }
    //public void Movement()
    void FixedUpdate()
    {

        //float horizontalInput = Input.GetAxis("Horizontal");
        //float vertitalInput = Input.GetAxis("Vertical");

        Vector2 direction = touchPad.GetDirection();
        Vector3 movement = new Vector3(direction.x, direction.y);
        //Debug.Log("touch pad direction.... " + direction);
        //Debug.Log("player direction x " + touchPad.GetDirectionValue().x);
        //Debug.Log("player direction y " + touchPad.GetDirectionValue().y);
       

        if (isSpeedBoosterActive)
        {
           // transform.Translate(movement * speed * 1.5f * Time.deltaTime);
            //transform.Translate(movement * speed * 1.5f * Time.deltaTime);
            GetComponent<Rigidbody2D>().velocity = movement * speed * 1.5f;
        }
        else
        {
            //transform.Translate(movement * speed * Time.deltaTime);
            //transform.Translate(movement * speed * Time.deltaTime);
            GetComponent<Rigidbody2D>().velocity = movement * speed;

        }

        GetComponent<Rigidbody2D>().position = new Vector2
         (
             Mathf.Clamp(GetComponent<Rigidbody2D>().position.x, xMin,xMax),
             Mathf.Clamp(GetComponent<Rigidbody2D>().position.y, yMin,yMax)
            
         );

        GetComponent<Rigidbody2D>().rotation = GetComponent<Rigidbody2D>().velocity.x * -tilt;

        //if (transform.position.y > 0)
        //{
        //    transform.position = new Vector3(transform.position.x, 0, 0);
        //}
        //else if (transform.position.y < -4.33f)
        //{
        //    transform.position = new Vector3(transform.position.x, -4.33f, 0);
        //}

        //if (transform.position.x > 2.95f)
        //{
        //    transform.position = new Vector3(-2.95f, transform.position.y, 0);
        //}
        //else if (transform.position.x < -2.95f)
        //{
        //    transform.position = new Vector3(2.95f, transform.position.y, 0);
        //}
    }




    public void Damage()
    {


        if (shieldsActive)
        {
            shieldsActive = false;
            shieldGameObject.SetActive(false);
            return;
        }

        //hitCount++;

        //if (hitCount == 1)
        //{
        //    engines[0].SetActive(true);
        //}
        //else if (hitCount == 2)
        //{
        //    engines[1].SetActive(true);
        //}

        lives--;
        uiManager.UpdateLives(lives);
        if (lives < 1 && gameManager.gamePause == false)
        {
            Instantiate(explosionPrefab, transform.position, Quaternion.identity);
            gameManager.gameOver = true;
            uiManager.ShowTitleScreen();
            Destroy(this.gameObject);
        }
    }


    public void TripleShotPowerupOn()
    {
        canTripleShoot = true;
        StartCoroutine(TripleShootPowerDownRoutine());
    }
    public void SpeedBoostPowerupOn()
    {
        isSpeedBoosterActive = true;
        StartCoroutine(SpeedBoostPowerDownRoutine());
    }
    public void EnableShields()
    {
        shieldsActive = true;
        shieldGameObject.SetActive(true);
    }
    IEnumerator TripleShootPowerDownRoutine()
    {
        yield return new WaitForSeconds(5.0f);
        canTripleShoot = false;
    }

    IEnumerator SpeedBoostPowerDownRoutine()
    {
        yield return new WaitForSeconds(5.0f);
        isSpeedBoosterActive = false;
    }
}
