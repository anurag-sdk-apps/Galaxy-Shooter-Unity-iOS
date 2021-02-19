using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Freestar;

/**
 * Modify for your own application.  Corresponds to Assets/Scenes/FreestarAdsSampleScene
 * which is a scene that contains a button to load ads.
 * If you want to run the sample, hook up this script to the Canvas
 * and then hook up the loadRewardedAd method to the button.
*/

namespace Freestar
{

    public class AdManager : MonoBehaviour, FreestarRewardedAdCallbackReceiver, FreestarInterstitialAdCallbackReceiver, FreestarBannerAdCallbackReceiver
    {

        private const string TAG = "AdManager";

        public static AdManager instance;
        public UIManager uiManager;
        public GameManager gameManager;
        private string callBackStatus;
        private bool isInterstitialAdLoaded;
        private bool isRewardedAdLoaded;

        private void Awake()
        {
            instance = this;
        }

        private void Start()
        {
            log("Start");

            FreestarUnityBridge.SetAdRequestTestMode(true, "xxxxxxxx");  //OPTIONAL TEST MODE
            FreestarUnityBridge.ShowPartnerChooser(true); //ONLY FOR TESTING PURPOSES; TURN OFF FOR PRODUCTION!

#if UNITY_ANDROID
            FreestarUnityBridge.initWithAPIKey("XqjhRR");  //Android TEST KEY  Replace with yours in production.
#endif

#if UNITY_IOS
            FreestarUnityBridge.initWithAPIKey("P8RIA3");  //iOS TEST KEY  Replace with yours in production.
#endif

            FreestarUnityBridge.setBannerAdListener(this);
            FreestarUnityBridge.setInterstitialAdListener(this);
            FreestarUnityBridge.setRewardedAdListener(this);
            uiManager = GameObject.Find("Canvas").GetComponent<UIManager>();
            if (uiManager == null)
            {
                Debug.Log("Can not find UIManager ");
            }
            gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

            if (gameManager == null)
            {
                Debug.Log("Can not find gameManager");
            }
            isRewardedAdLoaded = false;
            isInterstitialAdLoaded = false;
            InvokeRepeating("loadSmallBannerAd", 20.0f, 40.0f);
        }

        void OnApplicationFocus(bool hasFocus)
        {
            if (hasFocus)
            {
                FreestarUnityBridge.Resume();
            }
            else
            {
                FreestarUnityBridge.Pause();
            }
        }


        public void onInterstitialAdLoaded(string placement)
        {
            closeBanners();
            if (gameManager.gameOver)
            {
                showInterstitialAd();
            }
            else
            {
                isInterstitialAdLoaded = true;
            }
            //interstitial ad is ready!  You can display now, or you can wait until a later time.
            updateStatusUI("Interstitial Ad Winner: " + FreestarUnityBridge.GetInterstitialAdWinner(placement) + " Placement: [" + placement + "]");

        }
        public void onInterstitialAdFailed(string placement)
        {
            updateStatusUI("Interstitial Ad: no-fillunRegisterAdListener");
            //no need to pre-fetch the next ad here.  this will be done internally and automatically.
        }
        public void onInterstitialAdShown(string placement)
        {

        }
        public void onInterstitialAdClicked(string placement)
        {

        }
        public void onInterstitialAdDismissed(string placement)
        {
            gameManager.ResumeBackgroundMusic();
        }

        public void onRewardedAdLoaded(string placement)
        {
            closeBanners();
            updateStatusUI("Rewarded Ad Winner: " + FreestarUnityBridge.GetRewardedAdWinner(placement) + " Placement: [" + placement + "]");
            if (!gameManager.gameOver)
            {
                showRewardedAd();
            }
            else
            {
                isRewardedAdLoaded = true;
            }
        }
        public void onRewardedAdFailed(string placement)
        {
            updateStatusUI("Rewarded Ad: no-fill");
            uiManager.adFailedPanel.SetActive(true);
            Invoke("closeMessagePanels", 8.0f);
            Invoke("GameOver", 10.0f);
        }
        public void onRewardedAdShown(string placement)
        {

        }
        public void onRewardedAdFinished(string placement)
        {
            uiManager.earnLivePanel.SetActive(true);
            uiManager.UpdateEarnLiveStatus(true);
            gameManager.gamePause = false;
            // Invoke("ResumeGame", 10.0f);
        }
        public void onRewardedAdDismissed(string placement)
        {
            //no need to pre-fetch the next ad here.  this will be done internally and automatically.
            //TODO: OR REWARD THE USER HERE
            gameManager.ResumeBackgroundMusic();
            gameManager.UpdateResumeGameStatus(true);
            Invoke("closeMessagePanels", 2.0f);
        }

        public void onBannerAdShowing(string placement, int adSize)
        {
            log("onBannerAdShowing placement=[" + placement + "] adSize: " + adSize);
        }

        public void onBannerAdClicked(string placement, int adSize)
        {
            log("onBannerAdClicked placement=[" + placement + "] adSize: " + adSize);
        }

        public void onBannerAdFailed(string placement, int adSize)
        {
            log("onBannerAdFailed placement=[" + placement + "] adSize: " + adSize);
        }


        //===============Interstitial Ad Methods===============

        public void loadInterstitialAd()
        {
            gameManager.PauseBackgroundMusic();
            if (isInterstitialAdLoaded)
            {
                showInterstitialAd();
            }
            else
            {
                FreestarUnityBridge.loadInterstitialAd("");
            }
            log("Load Interstitial Ad...");

        }

        private void showInterstitialAd()
        {
            log("Show Interstitial Ad...");
            FreestarUnityBridge.showInterstitialAd("");
        }

        public void loadSmallBannerAd()
        {
            log("Load Small Banner Ad...");
            if (FreestarUnityBridge.IsBannerAdShowing(null, FreestarConstants.BANNER_AD_SIZE_300x250))
                FreestarUnityBridge.CloseBannerAd(null, FreestarConstants.BANNER_AD_SIZE_300x250);

            FreestarUnityBridge.ShowBannerAd(null, FreestarConstants.BANNER_AD_SIZE_320x50, FreestarConstants.BANNER_AD_POSITION_BOTTOM);
        }

        public void loadMRECBannerAd()
        {
            log("Load MREC Banner Ad...");
            if (FreestarUnityBridge.IsBannerAdShowing(null, FreestarConstants.BANNER_AD_SIZE_320x50))
                FreestarUnityBridge.CloseBannerAd(null, FreestarConstants.BANNER_AD_SIZE_320x50);

            FreestarUnityBridge.ShowBannerAd(null, FreestarConstants.BANNER_AD_SIZE_300x250, FreestarConstants.BANNER_AD_POSITION_BOTTOM);
        }


        void closeBanners()
        {
            if (FreestarUnityBridge.IsBannerAdShowing(null, FreestarConstants.BANNER_AD_SIZE_320x50))
            {
                FreestarUnityBridge.CloseBannerAd(null, FreestarConstants.BANNER_AD_SIZE_320x50);
            }

            if (FreestarUnityBridge.IsBannerAdShowing(null, FreestarConstants.BANNER_AD_SIZE_300x250))
            {
                FreestarUnityBridge.CloseBannerAd(null, FreestarConstants.BANNER_AD_SIZE_300x250);
            }

        }
        //===============Rewarded Video Ad Methods===============
        /**
         * Called when Load Rewarded Ad button is clicked
         */
        public void loadRewardedAd()
        {
            gameManager.PauseBackgroundMusic();
            if (isRewardedAdLoaded)
            {
                showRewardedAd();
            }
            else
            {
                FreestarUnityBridge.loadRewardedAd("");
            }
            log("Load Reward Ad...");

        }

        private void showRewardedAd()           //called when btnShowReward Clicked
        {
            log("Show Reward Ad...");
            FreestarUnityBridge.showRewardedAd("", 30, "coins", "", "qwer1234");
        }

        private void updateStatusUI(string newStatus)
        {
            callBackStatus = newStatus;

        }

        //Be sure to unRegister before loading a new scene.
        private void unRegisterAdListener()
        {
            FreestarUnityBridge.removeBannerAdListener();
            FreestarUnityBridge.removeRewardedAdListener();
            FreestarUnityBridge.removeInterstitialAdListener();
        }

        private void OnDestroy()
        {
            log("OnDestroy Remove Ad event listener");
            unRegisterAdListener();
        }

        private void log(string msg)
        {
            Debug.Log(TAG + " " + msg);
        }

        void ResumeGame()
        {
            gameManager.UpdateResumeGameStatus(true);
        }
        void GameOver()
        {
            Destroy(GameObject.Find("Player(Clone)"));
            gameManager.gameOver = true;
        }

        void closeMessagePanels()
        {
            uiManager.earnLivePanel.SetActive(false);
            uiManager.adFailedPanel.SetActive(false);
        }
    }

}