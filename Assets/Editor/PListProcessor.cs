using System.IO;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;
using UnityEngine;

public class PListProcessor : MonoBehaviour
{
#if UNITY_IOS
    [PostProcessBuild]
    public static void OnPostprocessBuild(BuildTarget buildTarget,string path)
    {
       
        string appId = "ca-app-pub-3940256099942544~3347511713"; 

        string plistPath = Path.Combine(path, "Info.plist");
        PlistDocument plist = new PlistDocument();

        plist.ReadFromFile(plistPath);
        plist.root.SetString("GADApplicationIdentifier", appId);
        plist.root.SetString("CHP_TEST_ADS", "enable");
        plist.root.SetString("CHP_DEBUG.LOGGING_ENABLE", "true");
        PlistElementArray skAdnetwork =  plist.root.CreateArray("SKAdNetworkItems");
        PlistElementDict dic = skAdnetwork.AddDict();
        dic.SetString("SKAdNetworkIdentifier","22mmun2rn5.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "238da6jt44.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "24t9a8vw3c.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "2u9pt9hc89.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "3qy4746246.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "3rd42ekr43.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "3sh42y64q3.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "424m5254lk.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "4468km3ulz.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "44jx6755aq.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "44n7hlldy6.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "488r3q3dtq.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "4dzt52r2t5.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "4fzdc2evr5.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "4pfyvq9l8r.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "523jb4fst2.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "578prtvx9j.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "5a6flpkh64.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "5l3tpt7t6e.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "5lm9lj6jb7.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "737z793b9f.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "7953jerfzd.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "7rz58n8ntl.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "7ug5zh24hu.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "8s468mfl3y.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "97r2b46745.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "9rd848q2bz.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "9t245vhmpl.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "9yg77x724h.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "av6w8kgt66.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "bvpn9ufa9b.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "c6k4g5qg8m.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "cg4yq2srnc.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "cj5566h2ga.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "cstr6suwn9.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "ecpz2srf59.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "ejvt5qm6ak.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "f38h382jlk.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "f73kdq92p3.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "ggvn48r87g.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "glqzh8vgby.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "gta9lk7p23.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "gvmwg8q7h5.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "hs6bdukanm.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "kbd757ywx3.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "klf5c3l5u5.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "lr83yxwka7.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "ludvb6z3bs.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "m8dbw4sv7c.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "mlmmfzh3r3.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "mls7yz5dvl.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "mtkv5xtk9e.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "n38lu8286q.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "n66cz3y3bx.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "n9x2a789qt.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "nzq8sh4pbs.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "p78axxw29g.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "ppxm28t8ap.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "prcb7njmu6.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "pu4na253f3.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "s39g8k73mm.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "t38b2kh725.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "tl55sbb4fm.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "u679fj5vs4.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "uw77j35x4d.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "v72qych5uu.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "v79kvwwj4g.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "v9wttpbfk9.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "w9q455wk68.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "wg4vff78zm.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "wzmmz9fp6w.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "xy9t38ct57.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "yclnxrl5pm.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "ydx93a7ass.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "yrqqpx2mcb.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "z4gj7hsk7h.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "zmvfpc5aq8.skadnetwork");
        dic.SetString("SKAdNetworkIdentifier", "g28c52eehv.skadnetwork");
        //plist.root.SetBoolean("CHP_DEBUG.LOGGING_ENABLE", true);
        File.WriteAllText(plistPath, plist.WriteToString());
    }
#endif
}