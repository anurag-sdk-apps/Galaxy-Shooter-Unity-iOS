using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Freestar;
using Balaso; // importing plugin with namespace Balaso


public class GameManager : MonoBehaviour
{
    public bool gameOver = true;
    public bool gamePause;
    public GameObject playerPrefab;
    private UIManager uiManager;
    private AdManager adManager;
    private float timeRemaining = 3;
    private bool timerIsRunning = false;
    public Text startText;
    private bool resumeGame;
    private Player player;

     void Awake(){

       #if UNITY_IOS
            AppTrackingTransparency.RegisterAppForAdNetworkAttribution();
            AppTrackingTransparency.UpdateConversionValue(3);
        #endif
          }


    // Start is called before the first frame update
    void Start()
    {

      #if UNITY_IOS
            AppTrackingTransparency.OnAuthorizationRequestDone += OnAuthorizationRequestDone;

            AppTrackingTransparency.AuthorizationStatus currentStatus = AppTrackingTransparency.TrackingAuthorizationStatus;
            Debug.Log(string.Format("Current authorization status: {0}", currentStatus.ToString()));
            if (currentStatus != AppTrackingTransparency.AuthorizationStatus.AUTHORIZED)
            {
                Debug.Log("Requesting authorization...");
                AppTrackingTransparency.RequestTrackingAuthorization();
            }
         #endif


        uiManager = GameObject.Find("Canvas").GetComponent<UIManager>();
        if (uiManager == null)
        {
            Debug.Log("Can not find UIManager ");
        }
        adManager = GameObject.Find("AdManager").GetComponent<AdManager>();
        if (adManager == null)
        {
            Debug.Log("Can not find AdManager ");
        }
        timerIsRunning = true;
        gamePause = false;
        resumeGame = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (gameOver)
        {
            if (timerIsRunning)
            {
                if (timeRemaining > 0)
                {
                    timeRemaining -= Time.deltaTime;
                    startText.text = (timeRemaining).ToString("0");
                }
                else
                {
                    timeRemaining = 0;
                    timerIsRunning = false;
                    gameOver = false;
                    Instantiate(playerPrefab, Vector3.zero, Quaternion.identity);
                    startText.text = "";

                }
            }
            uiManager.ShowTitleScreen();
            uiManager.ShowRestart();
            //startText.text = "Game Over!";
        }
        else
        {
            uiManager.HideTitileScreen();
            // uiManager.ShowQuit();


        }

        if (!gamePause && !gameOver && resumeGame)
        {
            Destroy(GameObject.Find("Player(Clone)"));
            resumeGame = false;
            Instantiate(playerPrefab, Vector3.zero, Quaternion.identity);
        }
    }

    public bool GameStatus()
    {
        return gamePause;
    }

    public void SkipAd()
    {
        uiManager.gamePausePanel.SetActive(false);
        uiManager.gameOverMessagePanel.SetActive(true);
    }

    public void GameOverMessage()
    {
        Destroy(GameObject.Find("Player(Clone)"));
        uiManager.gameOverMessagePanel.SetActive(false);
        gameOver = true;
        adManager.loadInterstitialAd();
    }

    public void UpdateStatus()
    {
        gamePause = false;
    }

    public void RewardedAdRequest()
    {
        uiManager.gamePausePanel.SetActive(false);
        adManager.loadRewardedAd();
    }

    public bool ResumeGameStatus()
    {
        return resumeGame;
    }

    public void UpdateResumeGameStatus(bool gamestatus)
    {
        resumeGame = gamestatus;
    }

    public void Restart()
    {
        SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex);
    }

    public void PauseBackgroundMusic()
    {
         GameObject.FindGameObjectWithTag("MainCamera").GetComponent<AudioSource>().Pause();
    }

    public void ResumeBackgroundMusic()
    {
        GameObject.FindGameObjectWithTag("MainCamera").GetComponent<AudioSource>().Play();
    }

    public void QuitGame()
    {
        Application.Quit();

    }

    #if UNITY_IOS

        /// <summary>
        /// Callback invoked with the user's decision
        /// </summary>
        /// <param name="status"></param>
        private void OnAuthorizationRequestDone(AppTrackingTransparency.AuthorizationStatus status)
        {
            switch (status)
            {
                case AppTrackingTransparency.AuthorizationStatus.NOT_DETERMINED:
                    Debug.Log("AuthorizationStatus: NOT_DETERMINED");
                    break;
                case AppTrackingTransparency.AuthorizationStatus.RESTRICTED:
                    Debug.Log("AuthorizationStatus: RESTRICTED");
                    break;
                case AppTrackingTransparency.AuthorizationStatus.DENIED:
                    Debug.Log("AuthorizationStatus: DENIED");
                    break;
                case AppTrackingTransparency.AuthorizationStatus.AUTHORIZED:
                    Debug.Log("AuthorizationStatus: AUTHORIZED");
                    break;
            }

            // Obtain IDFA
            Debug.Log(string.Format("IDFA: {0}", AppTrackingTransparency.IdentifierForAdvertising()));
        }
#endif
    }


