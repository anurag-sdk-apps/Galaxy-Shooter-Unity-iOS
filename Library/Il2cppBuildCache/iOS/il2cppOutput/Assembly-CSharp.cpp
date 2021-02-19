#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Int32Enum>
struct Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09;
// System.Action`1<Balaso.AppTrackingTransparency/AuthorizationStatus>
struct Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Freestar.AdManager
struct AdManager_t2F03E384E6359CA43FA97E24C69702365861A034;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// Balaso.AppTrackingTransparency
struct AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834;
// AppTrackingTransparencyExample
struct AppTrackingTransparencyExample_tAE917351B1F2BEF1DFA943284F17FCFDA7070FE0;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BGScroller
struct BGScroller_tC9AEAC7CF76463CFC02EC52AFBD29C22860C7F41;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// Boundary
struct Boundary_tE54FD347658847911B3544434B71A381209DC436;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// EnemyAI
struct EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// ExplosionEffect
struct ExplosionEffect_t6E12084ED1B1E6571EB22AC1A185A0E631F65D3A;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// Freestar.FreestarBannerAdCallbackReceiver
struct FreestarBannerAdCallbackReceiver_tEA762F014EA4FF6D986DD16EFD35ABAF9825F100;
// Freestar.FreestarIOSBannerMessagePasser
struct FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8;
// Freestar.FreestarIOSInterstitialMessagePasser
struct FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536;
// Freestar.FreestarIOSRewardedMessagePasser
struct FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4;
// Freestar.FreestarInterstitialAdCallbackReceiver
struct FreestarInterstitialAdCallbackReceiver_tD85B2187A68B35EE9809E7FDAEB764082DEE0F1E;
// Freestar.FreestarRewardedAdCallbackReceiver
struct FreestarRewardedAdCallbackReceiver_t5A3B2C404862581F9C7FC8820F893314AE55FE22;
// Freestar.FreestarUnityBridge
struct FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Laser
struct Laser_t128A4BF0CB0C0349676F7C0999823F8A05E87ABA;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// PlayerAnimation
struct PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// Powerup
struct Powerup_t1D4F23DF6CDB4E3979A5EF7570DF003354E387E5;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SimpleTouchAreaButton
struct SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15;
// SimpleTouchPad
struct SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C;
// SpawnManager
struct SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Balaso.AppTrackingTransparency/AppTrackingTransparencyCallback
struct AppTrackingTransparencyCallback_t40DFDE8BF747E57724D8ADD8D638DD1A6A11D1C4;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Player/<SpeedBoostPowerDownRoutine>d__37
struct U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F;
// Player/<TripleShootPowerDownRoutine>d__36
struct U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91;
// SpawnManager/<EnemySpawnRoutine>d__5
struct U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1;
// SpawnManager/<PowerupSpawnRoutine>d__6
struct U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdManager_t2F03E384E6359CA43FA97E24C69702365861A034_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppTrackingTransparencyCallback_t40DFDE8BF747E57724D8ADD8D638DD1A6A11D1C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthorizationStatus_t11108D54ED10456FFB9652A518D81138C0ECD677_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FreestarBannerAdCallbackReceiver_tEA762F014EA4FF6D986DD16EFD35ABAF9825F100_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FreestarInterstitialAdCallbackReceiver_tD85B2187A68B35EE9809E7FDAEB764082DEE0F1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FreestarRewardedAdCallbackReceiver_t5A3B2C404862581F9C7FC8820F893314AE55FE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral047A9CFE49A27D353E63BAAC07785FD6BDCE6D51;
IL2CPP_EXTERN_C String_t* _stringLiteral0BDC1CB888AE05C61D0AF5CE7E6BC76BBAF18C0F;
IL2CPP_EXTERN_C String_t* _stringLiteral11FABC036BA993CD01CAD9FDC0DA0CECDDE23574;
IL2CPP_EXTERN_C String_t* _stringLiteral16F64B48CE03AD2C8628DC640D3E60B17532257D;
IL2CPP_EXTERN_C String_t* _stringLiteral17EF9FEC8F511A0070ECD396DBF2ECAABC86A425;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral28671DE3595A2AADFCF98126D9B30D8D20DC00CA;
IL2CPP_EXTERN_C String_t* _stringLiteral2AEDC8D36B32EA96B27BF61DA83F3470C316222E;
IL2CPP_EXTERN_C String_t* _stringLiteral2DCC566281E77A2B467D1186F6CD91586EA866B8;
IL2CPP_EXTERN_C String_t* _stringLiteral31303BEB2EAB561468708782BBBC983E9AEE054A;
IL2CPP_EXTERN_C String_t* _stringLiteral33DA5C36016B709269B204F99F0C4A1546733320;
IL2CPP_EXTERN_C String_t* _stringLiteral3CB162A7FC3FDA311A764ABC2C6FA859701E33B2;
IL2CPP_EXTERN_C String_t* _stringLiteral48A737B69728B9E54718E735C8E8E3AF09367C1F;
IL2CPP_EXTERN_C String_t* _stringLiteral4B2E8CCAE7ECA35EB81FCCECE00ECE4A5FCD6C80;
IL2CPP_EXTERN_C String_t* _stringLiteral54A72DBF45493D5880064C999B549B9F95FFFD5C;
IL2CPP_EXTERN_C String_t* _stringLiteral55A7C8D8E10B10C86C0541A969C727A52C45D579;
IL2CPP_EXTERN_C String_t* _stringLiteral56D92B2B75B1AF512D22FF5FE6E2C2111AB054D0;
IL2CPP_EXTERN_C String_t* _stringLiteral591F161FEB7D9FCAA857FFD1DDE7984A3C4D92DD;
IL2CPP_EXTERN_C String_t* _stringLiteral5A12E64C285A43EE258D15AE96138179CA5633F9;
IL2CPP_EXTERN_C String_t* _stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347;
IL2CPP_EXTERN_C String_t* _stringLiteral5F41240A531B8B859B73C7053B2D9AACBC0AA2D1;
IL2CPP_EXTERN_C String_t* _stringLiteral6016AF1CE72794A6C2FF2B0D3605A9649CE69719;
IL2CPP_EXTERN_C String_t* _stringLiteral643FDB4D2A9EA1C41111CA9FA068940D621F65DF;
IL2CPP_EXTERN_C String_t* _stringLiteral650B39C76C0369B694601CD1448018A56343EF70;
IL2CPP_EXTERN_C String_t* _stringLiteral66CF118C39DA81533BC0878C188680B7B39CEC67;
IL2CPP_EXTERN_C String_t* _stringLiteral67AFB11C3BFD8879E7E721D7CA3BFB3CD46BDF35;
IL2CPP_EXTERN_C String_t* _stringLiteral6C19EA4D2A3CE2275F85C301779C3522123C1A78;
IL2CPP_EXTERN_C String_t* _stringLiteral7945B43921F79DEDCC4031E76ED386FD62EFC9FB;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral8A560514643146E282BB2C48A78DD596FF7F9D82;
IL2CPP_EXTERN_C String_t* _stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7;
IL2CPP_EXTERN_C String_t* _stringLiteral8F4A54945873144BE1912E4265D020DF6D954726;
IL2CPP_EXTERN_C String_t* _stringLiteral8F7B647D6A9D6703EA47D986375D4FE5069C047F;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8F056F1DB76BFE7511A051F84F4CADE907C3A3;
IL2CPP_EXTERN_C String_t* _stringLiteral97A249A2A74108800884ABC8B3DF03589F1372B0;
IL2CPP_EXTERN_C String_t* _stringLiteral99CC765D76A0B678F8EC10737EB6940A697E5FC1;
IL2CPP_EXTERN_C String_t* _stringLiteral9A54DA45EF9D46857C618300198F6FBDC15D9751;
IL2CPP_EXTERN_C String_t* _stringLiteral9AB430B43118408E1AFC329EE27D258F421FEBDA;
IL2CPP_EXTERN_C String_t* _stringLiteral9D42A4444D66A10CC6A2327C63B261AF8CE6F707;
IL2CPP_EXTERN_C String_t* _stringLiteral9EFABDB339F18869864BBBA1ABA3CE156E710717;
IL2CPP_EXTERN_C String_t* _stringLiteral9F92B120A19B5052E25F19123527ADAF4420A949;
IL2CPP_EXTERN_C String_t* _stringLiteralA01A6E097F1B7A2E8F7C758BDAE1DA75F9AE9E7D;
IL2CPP_EXTERN_C String_t* _stringLiteralA101CFCEBDBD32E83492639B7E70E5F35394E802;
IL2CPP_EXTERN_C String_t* _stringLiteralA2E991D972C4687330768B06727CE5D6F245D853;
IL2CPP_EXTERN_C String_t* _stringLiteralA6BD706B5320EB6EA76E09716A8F1509A94DB59A;
IL2CPP_EXTERN_C String_t* _stringLiteralA8F3E0FC79EA858955FEF64B9C8A6AB1C418F01C;
IL2CPP_EXTERN_C String_t* _stringLiteralB17325C47E763EB7B3B3BF062AE30931D13759C8;
IL2CPP_EXTERN_C String_t* _stringLiteralB1C044EC81CAB3BA6DEBF115FE3CAD065CBBF24C;
IL2CPP_EXTERN_C String_t* _stringLiteralB3C54D2B8751B7794E226ABD84653A3A986DC56B;
IL2CPP_EXTERN_C String_t* _stringLiteralB58EA1A00DFED492CAFFA4370C8A6B6EA41F532A;
IL2CPP_EXTERN_C String_t* _stringLiteralBB307652D67794FC66E1BB69DB1C3CE8E69ECF5B;
IL2CPP_EXTERN_C String_t* _stringLiteralBC25E2F021E6B33AD9AD34154967A434DB57E66E;
IL2CPP_EXTERN_C String_t* _stringLiteralBD3ED8CAF53672069BA43574C7FDEACF72DB0655;
IL2CPP_EXTERN_C String_t* _stringLiteralBE91EE827215DF8F672F577D68C933A99EA24C8F;
IL2CPP_EXTERN_C String_t* _stringLiteralC19D986E4D2E638C4AE7484CADC76F22CF4305B3;
IL2CPP_EXTERN_C String_t* _stringLiteralC1C5DF70D2547D43E891BED7C408177580788726;
IL2CPP_EXTERN_C String_t* _stringLiteralC4261FD64CD90376B162E3FB14ED04C46C35F4B9;
IL2CPP_EXTERN_C String_t* _stringLiteralC4729003974FAD5B6DB818D6F6E15CAE806267CC;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7;
IL2CPP_EXTERN_C String_t* _stringLiteralCA7ADB93377BDB68259E3198B9F9412F19818CD0;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD6F009E4272DEE267D2A461A7AAFCD20495CDA79;
IL2CPP_EXTERN_C String_t* _stringLiteralD8F7C1CDC4D6F3E58556D0E5331D7D0CA827DCB0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC267124F1BC4775959337DB00E0EACF8E5EEA07;
IL2CPP_EXTERN_C String_t* _stringLiteralDE41B9365BD178ECDC95C1756BAB7CCD2117362D;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralE38A345E3DB07836E905E964269714ADE73E6C95;
IL2CPP_EXTERN_C String_t* _stringLiteralE615EB491B32AE89103D8E0B05128CCD746AFABA;
IL2CPP_EXTERN_C String_t* _stringLiteralE97A9F452A1925B875DD71ED956CA8AE4893303B;
IL2CPP_EXTERN_C String_t* _stringLiteralEAE72AD313F267852E89CBD8F08DA5ECCD426BB6;
IL2CPP_EXTERN_C String_t* _stringLiteralEC22BD4D14681E58858CB204C2B2FC09D51D79CF;
IL2CPP_EXTERN_C String_t* _stringLiteralF033E850D9B45F6070E784A20F39003B74D82425;
IL2CPP_EXTERN_C String_t* _stringLiteralF2E5FA24F15522F9C120655F6EFA3F5DD143867F;
IL2CPP_EXTERN_C String_t* _stringLiteralF38DF56A332F565C46C62965BDBEA505742B6C9C;
IL2CPP_EXTERN_C String_t* _stringLiteralF7D178C7B3A7C13230F80E8AF536907F9CE7FD31;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C String_t* _stringLiteralFE1A3D479601E6166CE5E927065D3A1E515EF5AA;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m3A9225C248762C7A2610EFFEBFC176B9D9FDD500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m825DC9C3F0F51FFF82330621EDEA90555FEA155B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppTrackingTransparencyExample_OnAuthorizationRequestDone_m2E8FB46D783F613F774F21F16A4BC5F9772EBF5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppTrackingTransparency_appTrackingTransparencyCallbackReceived_m7FEFC1C457826F49C206185207E5A5DC71A114D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_OnAuthorizationRequestDone_m6CF2894B5126639A9CDA953980458A6A8138C19F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8_m8E63640DE7964FAA9E4D7E3B3EEDC9FB4CA92861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536_m76E953A4FD7AC9B759F0C215AF3FBDEA50AA1311_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4_m2218B29B04864C97645EC0A28E529AD7F08CDA0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAdManager_t2F03E384E6359CA43FA97E24C69702365861A034_m7C355AF1EC2A3E14F39C811E497F8F6A2E6FE134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15_mB64C94A6504D5D08FAADD24659474ACDF74A639F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C_m24E8F88F1507CA4A81418F2CEB0DC7C05C6C3411_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE_m7830182BC2D4BE0BC6B2D1EDF77854F0C5F8C0AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_mDC004D56EC7E86057B44F99042E6EE2CFC3ACE4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_mF39BECE846CAFA75ABEC9642352F69B31FACEE0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnemySpawnRoutineU3Ed__5_System_Collections_IEnumerator_Reset_m21A0B60180064D71CF4BC0E91F9EA235C765A65F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPowerupSpawnRoutineU3Ed__6_System_Collections_IEnumerator_Reset_m774225A6532BF3363571E40AB748C3762911667E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpeedBoostPowerDownRoutineU3Ed__37_System_Collections_IEnumerator_Reset_mE883E7D0FB92A6233C33EB96228AAA89DB876E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTripleShootPowerDownRoutineU3Ed__36_System_Collections_IEnumerator_Reset_m3E4F482804BDF9DB95EE5E094F0ECE1AB1B8CBBE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// Balaso.AppTrackingTransparency
struct  AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834  : public RuntimeObject
{
public:

public:
};

struct AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_StaticFields
{
public:
	// System.Action`1<Balaso.AppTrackingTransparency/AuthorizationStatus> Balaso.AppTrackingTransparency::OnAuthorizationRequestDone
	Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF * ___OnAuthorizationRequestDone_0;

public:
	inline static int32_t get_offset_of_OnAuthorizationRequestDone_0() { return static_cast<int32_t>(offsetof(AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_StaticFields, ___OnAuthorizationRequestDone_0)); }
	inline Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF * get_OnAuthorizationRequestDone_0() const { return ___OnAuthorizationRequestDone_0; }
	inline Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF ** get_address_of_OnAuthorizationRequestDone_0() { return &___OnAuthorizationRequestDone_0; }
	inline void set_OnAuthorizationRequestDone_0(Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF * value)
	{
		___OnAuthorizationRequestDone_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAuthorizationRequestDone_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Boundary
struct  Boundary_tE54FD347658847911B3544434B71A381209DC436  : public RuntimeObject
{
public:
	// System.Single Boundary::xMin
	float ___xMin_0;
	// System.Single Boundary::xMax
	float ___xMax_1;
	// System.Single Boundary::yMin
	float ___yMin_2;
	// System.Single Boundary::yMax
	float ___yMax_3;

public:
	inline static int32_t get_offset_of_xMin_0() { return static_cast<int32_t>(offsetof(Boundary_tE54FD347658847911B3544434B71A381209DC436, ___xMin_0)); }
	inline float get_xMin_0() const { return ___xMin_0; }
	inline float* get_address_of_xMin_0() { return &___xMin_0; }
	inline void set_xMin_0(float value)
	{
		___xMin_0 = value;
	}

	inline static int32_t get_offset_of_xMax_1() { return static_cast<int32_t>(offsetof(Boundary_tE54FD347658847911B3544434B71A381209DC436, ___xMax_1)); }
	inline float get_xMax_1() const { return ___xMax_1; }
	inline float* get_address_of_xMax_1() { return &___xMax_1; }
	inline void set_xMax_1(float value)
	{
		___xMax_1 = value;
	}

	inline static int32_t get_offset_of_yMin_2() { return static_cast<int32_t>(offsetof(Boundary_tE54FD347658847911B3544434B71A381209DC436, ___yMin_2)); }
	inline float get_yMin_2() const { return ___yMin_2; }
	inline float* get_address_of_yMin_2() { return &___yMin_2; }
	inline void set_yMin_2(float value)
	{
		___yMin_2 = value;
	}

	inline static int32_t get_offset_of_yMax_3() { return static_cast<int32_t>(offsetof(Boundary_tE54FD347658847911B3544434B71A381209DC436, ___yMax_3)); }
	inline float get_yMax_3() const { return ___yMax_3; }
	inline float* get_address_of_yMax_3() { return &___yMax_3; }
	inline void set_yMax_3(float value)
	{
		___yMax_3 = value;
	}
};


// Freestar.FreestarConstants
struct  FreestarConstants_t845D06AFDB14451B766BB7C7C44E23B930D66473  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Player/<SpeedBoostPowerDownRoutine>d__37
struct  U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F  : public RuntimeObject
{
public:
	// System.Int32 Player/<SpeedBoostPowerDownRoutine>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Player/<SpeedBoostPowerDownRoutine>d__37::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Player Player/<SpeedBoostPowerDownRoutine>d__37::<>4__this
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F, ___U3CU3E4__this_2)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Player/<TripleShootPowerDownRoutine>d__36
struct  U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91  : public RuntimeObject
{
public:
	// System.Int32 Player/<TripleShootPowerDownRoutine>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Player/<TripleShootPowerDownRoutine>d__36::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Player Player/<TripleShootPowerDownRoutine>d__36::<>4__this
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91, ___U3CU3E4__this_2)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// SpawnManager/<EnemySpawnRoutine>d__5
struct  U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1  : public RuntimeObject
{
public:
	// System.Int32 SpawnManager/<EnemySpawnRoutine>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpawnManager/<EnemySpawnRoutine>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SpawnManager SpawnManager/<EnemySpawnRoutine>d__5::<>4__this
	SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * ___U3CU3E4__this_2;
	// System.Single SpawnManager/<EnemySpawnRoutine>d__5::<randomX>5__1
	float ___U3CrandomXU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1, ___U3CU3E4__this_2)); }
	inline SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrandomXU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1, ___U3CrandomXU3E5__1_3)); }
	inline float get_U3CrandomXU3E5__1_3() const { return ___U3CrandomXU3E5__1_3; }
	inline float* get_address_of_U3CrandomXU3E5__1_3() { return &___U3CrandomXU3E5__1_3; }
	inline void set_U3CrandomXU3E5__1_3(float value)
	{
		___U3CrandomXU3E5__1_3 = value;
	}
};


// SpawnManager/<PowerupSpawnRoutine>d__6
struct  U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D  : public RuntimeObject
{
public:
	// System.Int32 SpawnManager/<PowerupSpawnRoutine>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpawnManager/<PowerupSpawnRoutine>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SpawnManager SpawnManager/<PowerupSpawnRoutine>d__6::<>4__this
	SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * ___U3CU3E4__this_2;
	// System.Int32 SpawnManager/<PowerupSpawnRoutine>d__6::<randomPowerup>5__1
	int32_t ___U3CrandomPowerupU3E5__1_3;
	// System.Single SpawnManager/<PowerupSpawnRoutine>d__6::<randomX>5__2
	float ___U3CrandomXU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D, ___U3CU3E4__this_2)); }
	inline SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrandomPowerupU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D, ___U3CrandomPowerupU3E5__1_3)); }
	inline int32_t get_U3CrandomPowerupU3E5__1_3() const { return ___U3CrandomPowerupU3E5__1_3; }
	inline int32_t* get_address_of_U3CrandomPowerupU3E5__1_3() { return &___U3CrandomPowerupU3E5__1_3; }
	inline void set_U3CrandomPowerupU3E5__1_3(int32_t value)
	{
		___U3CrandomPowerupU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CrandomXU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D, ___U3CrandomXU3E5__2_4)); }
	inline float get_U3CrandomXU3E5__2_4() const { return ___U3CrandomXU3E5__2_4; }
	inline float* get_address_of_U3CrandomXU3E5__2_4() { return &___U3CrandomXU3E5__2_4; }
	inline void set_U3CrandomXU3E5__2_4(float value)
	{
		___U3CrandomXU3E5__2_4 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.AsyncOperation
struct  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Bounds
struct  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Balaso.AppTrackingTransparency/AuthorizationStatus
struct  AuthorizationStatus_t11108D54ED10456FFB9652A518D81138C0ECD677 
{
public:
	// System.Int32 Balaso.AppTrackingTransparency/AuthorizationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthorizationStatus_t11108D54ED10456FFB9652A518D81138C0ECD677, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.Sprite
struct  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<Balaso.AppTrackingTransparency/AuthorizationStatus>
struct  Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Balaso.AppTrackingTransparency/AppTrackingTransparencyCallback
struct  AppTrackingTransparencyCallback_t40DFDE8BF747E57724D8ADD8D638DD1A6A11D1C4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Freestar.AdManager
struct  AdManager_t2F03E384E6359CA43FA97E24C69702365861A034  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UIManager Freestar.AdManager::uiManager
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * ___uiManager_6;
	// GameManager Freestar.AdManager::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_7;
	// System.String Freestar.AdManager::callBackStatus
	String_t* ___callBackStatus_8;
	// System.Boolean Freestar.AdManager::isInterstitialAdLoaded
	bool ___isInterstitialAdLoaded_9;
	// System.Boolean Freestar.AdManager::isRewardedAdLoaded
	bool ___isRewardedAdLoaded_10;

public:
	inline static int32_t get_offset_of_uiManager_6() { return static_cast<int32_t>(offsetof(AdManager_t2F03E384E6359CA43FA97E24C69702365861A034, ___uiManager_6)); }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * get_uiManager_6() const { return ___uiManager_6; }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 ** get_address_of_uiManager_6() { return &___uiManager_6; }
	inline void set_uiManager_6(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * value)
	{
		___uiManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_gameManager_7() { return static_cast<int32_t>(offsetof(AdManager_t2F03E384E6359CA43FA97E24C69702365861A034, ___gameManager_7)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_7() const { return ___gameManager_7; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_7() { return &___gameManager_7; }
	inline void set_gameManager_7(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_7), (void*)value);
	}

	inline static int32_t get_offset_of_callBackStatus_8() { return static_cast<int32_t>(offsetof(AdManager_t2F03E384E6359CA43FA97E24C69702365861A034, ___callBackStatus_8)); }
	inline String_t* get_callBackStatus_8() const { return ___callBackStatus_8; }
	inline String_t** get_address_of_callBackStatus_8() { return &___callBackStatus_8; }
	inline void set_callBackStatus_8(String_t* value)
	{
		___callBackStatus_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callBackStatus_8), (void*)value);
	}

	inline static int32_t get_offset_of_isInterstitialAdLoaded_9() { return static_cast<int32_t>(offsetof(AdManager_t2F03E384E6359CA43FA97E24C69702365861A034, ___isInterstitialAdLoaded_9)); }
	inline bool get_isInterstitialAdLoaded_9() const { return ___isInterstitialAdLoaded_9; }
	inline bool* get_address_of_isInterstitialAdLoaded_9() { return &___isInterstitialAdLoaded_9; }
	inline void set_isInterstitialAdLoaded_9(bool value)
	{
		___isInterstitialAdLoaded_9 = value;
	}

	inline static int32_t get_offset_of_isRewardedAdLoaded_10() { return static_cast<int32_t>(offsetof(AdManager_t2F03E384E6359CA43FA97E24C69702365861A034, ___isRewardedAdLoaded_10)); }
	inline bool get_isRewardedAdLoaded_10() const { return ___isRewardedAdLoaded_10; }
	inline bool* get_address_of_isRewardedAdLoaded_10() { return &___isRewardedAdLoaded_10; }
	inline void set_isRewardedAdLoaded_10(bool value)
	{
		___isRewardedAdLoaded_10 = value;
	}
};

struct AdManager_t2F03E384E6359CA43FA97E24C69702365861A034_StaticFields
{
public:
	// Freestar.AdManager Freestar.AdManager::instance
	AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(AdManager_t2F03E384E6359CA43FA97E24C69702365861A034_StaticFields, ___instance_5)); }
	inline AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * get_instance_5() const { return ___instance_5; }
	inline AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_5), (void*)value);
	}
};


// AppTrackingTransparencyExample
struct  AppTrackingTransparencyExample_tAE917351B1F2BEF1DFA943284F17FCFDA7070FE0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.AudioSource
struct  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BGScroller
struct  BGScroller_tC9AEAC7CF76463CFC02EC52AFBD29C22860C7F41  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single BGScroller::scrollSpeed
	float ___scrollSpeed_4;
	// System.Single BGScroller::tileSize
	float ___tileSize_5;
	// UnityEngine.Vector3 BGScroller::startPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPosition_6;

public:
	inline static int32_t get_offset_of_scrollSpeed_4() { return static_cast<int32_t>(offsetof(BGScroller_tC9AEAC7CF76463CFC02EC52AFBD29C22860C7F41, ___scrollSpeed_4)); }
	inline float get_scrollSpeed_4() const { return ___scrollSpeed_4; }
	inline float* get_address_of_scrollSpeed_4() { return &___scrollSpeed_4; }
	inline void set_scrollSpeed_4(float value)
	{
		___scrollSpeed_4 = value;
	}

	inline static int32_t get_offset_of_tileSize_5() { return static_cast<int32_t>(offsetof(BGScroller_tC9AEAC7CF76463CFC02EC52AFBD29C22860C7F41, ___tileSize_5)); }
	inline float get_tileSize_5() const { return ___tileSize_5; }
	inline float* get_address_of_tileSize_5() { return &___tileSize_5; }
	inline void set_tileSize_5(float value)
	{
		___tileSize_5 = value;
	}

	inline static int32_t get_offset_of_startPosition_6() { return static_cast<int32_t>(offsetof(BGScroller_tC9AEAC7CF76463CFC02EC52AFBD29C22860C7F41, ___startPosition_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPosition_6() const { return ___startPosition_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPosition_6() { return &___startPosition_6; }
	inline void set_startPosition_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPosition_6 = value;
	}
};


// UnityEngine.BoxCollider2D
struct  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// EnemyAI
struct  EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single EnemyAI::speed
	float ___speed_4;
	// UnityEngine.GameObject EnemyAI::enemyExplosionPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyExplosionPrefab_5;
	// UIManager EnemyAI::uiManager
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * ___uiManager_6;
	// UnityEngine.AudioClip EnemyAI::audioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___audioClip_7;
	// GameManager EnemyAI::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_8;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_enemyExplosionPrefab_5() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___enemyExplosionPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyExplosionPrefab_5() const { return ___enemyExplosionPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyExplosionPrefab_5() { return &___enemyExplosionPrefab_5; }
	inline void set_enemyExplosionPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyExplosionPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyExplosionPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_uiManager_6() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___uiManager_6)); }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * get_uiManager_6() const { return ___uiManager_6; }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 ** get_address_of_uiManager_6() { return &___uiManager_6; }
	inline void set_uiManager_6(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * value)
	{
		___uiManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_audioClip_7() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___audioClip_7)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_audioClip_7() const { return ___audioClip_7; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_audioClip_7() { return &___audioClip_7; }
	inline void set_audioClip_7(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___audioClip_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioClip_7), (void*)value);
	}

	inline static int32_t get_offset_of_gameManager_8() { return static_cast<int32_t>(offsetof(EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82, ___gameManager_8)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_8() const { return ___gameManager_8; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_8() { return &___gameManager_8; }
	inline void set_gameManager_8(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_8), (void*)value);
	}
};


// ExplosionEffect
struct  ExplosionEffect_t6E12084ED1B1E6571EB22AC1A185A0E631F65D3A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Freestar.FreestarIOSBannerMessagePasser
struct  FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Freestar.FreestarBannerAdCallbackReceiver Freestar.FreestarIOSBannerMessagePasser::receiver
	RuntimeObject* ___receiver_4;

public:
	inline static int32_t get_offset_of_receiver_4() { return static_cast<int32_t>(offsetof(FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8, ___receiver_4)); }
	inline RuntimeObject* get_receiver_4() const { return ___receiver_4; }
	inline RuntimeObject** get_address_of_receiver_4() { return &___receiver_4; }
	inline void set_receiver_4(RuntimeObject* value)
	{
		___receiver_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiver_4), (void*)value);
	}
};


// Freestar.FreestarIOSInterstitialMessagePasser
struct  FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Freestar.FreestarInterstitialAdCallbackReceiver Freestar.FreestarIOSInterstitialMessagePasser::receiver
	RuntimeObject* ___receiver_4;

public:
	inline static int32_t get_offset_of_receiver_4() { return static_cast<int32_t>(offsetof(FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536, ___receiver_4)); }
	inline RuntimeObject* get_receiver_4() const { return ___receiver_4; }
	inline RuntimeObject** get_address_of_receiver_4() { return &___receiver_4; }
	inline void set_receiver_4(RuntimeObject* value)
	{
		___receiver_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiver_4), (void*)value);
	}
};


// Freestar.FreestarIOSRewardedMessagePasser
struct  FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Freestar.FreestarRewardedAdCallbackReceiver Freestar.FreestarIOSRewardedMessagePasser::receiver
	RuntimeObject* ___receiver_4;

public:
	inline static int32_t get_offset_of_receiver_4() { return static_cast<int32_t>(offsetof(FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4, ___receiver_4)); }
	inline RuntimeObject* get_receiver_4() const { return ___receiver_4; }
	inline RuntimeObject** get_address_of_receiver_4() { return &___receiver_4; }
	inline void set_receiver_4(RuntimeObject* value)
	{
		___receiver_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiver_4), (void*)value);
	}
};


// Freestar.FreestarUnityBridge
struct  FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields
{
public:
	// Freestar.FreestarInterstitialAdCallbackReceiver Freestar.FreestarUnityBridge::interRec
	RuntimeObject* ___interRec_4;
	// Freestar.FreestarRewardedAdCallbackReceiver Freestar.FreestarUnityBridge::rewardRec
	RuntimeObject* ___rewardRec_5;
	// Freestar.FreestarBannerAdCallbackReceiver Freestar.FreestarUnityBridge::bannerRec
	RuntimeObject* ___bannerRec_6;
	// Freestar.FreestarIOSBannerMessagePasser Freestar.FreestarUnityBridge::bannerMiddleman
	FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8 * ___bannerMiddleman_7;
	// Freestar.FreestarIOSInterstitialMessagePasser Freestar.FreestarUnityBridge::interstitialMiddleman
	FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536 * ___interstitialMiddleman_8;
	// Freestar.FreestarIOSRewardedMessagePasser Freestar.FreestarUnityBridge::rewardedMiddleman
	FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4 * ___rewardedMiddleman_9;

public:
	inline static int32_t get_offset_of_interRec_4() { return static_cast<int32_t>(offsetof(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields, ___interRec_4)); }
	inline RuntimeObject* get_interRec_4() const { return ___interRec_4; }
	inline RuntimeObject** get_address_of_interRec_4() { return &___interRec_4; }
	inline void set_interRec_4(RuntimeObject* value)
	{
		___interRec_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interRec_4), (void*)value);
	}

	inline static int32_t get_offset_of_rewardRec_5() { return static_cast<int32_t>(offsetof(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields, ___rewardRec_5)); }
	inline RuntimeObject* get_rewardRec_5() const { return ___rewardRec_5; }
	inline RuntimeObject** get_address_of_rewardRec_5() { return &___rewardRec_5; }
	inline void set_rewardRec_5(RuntimeObject* value)
	{
		___rewardRec_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rewardRec_5), (void*)value);
	}

	inline static int32_t get_offset_of_bannerRec_6() { return static_cast<int32_t>(offsetof(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields, ___bannerRec_6)); }
	inline RuntimeObject* get_bannerRec_6() const { return ___bannerRec_6; }
	inline RuntimeObject** get_address_of_bannerRec_6() { return &___bannerRec_6; }
	inline void set_bannerRec_6(RuntimeObject* value)
	{
		___bannerRec_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bannerRec_6), (void*)value);
	}

	inline static int32_t get_offset_of_bannerMiddleman_7() { return static_cast<int32_t>(offsetof(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields, ___bannerMiddleman_7)); }
	inline FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8 * get_bannerMiddleman_7() const { return ___bannerMiddleman_7; }
	inline FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8 ** get_address_of_bannerMiddleman_7() { return &___bannerMiddleman_7; }
	inline void set_bannerMiddleman_7(FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8 * value)
	{
		___bannerMiddleman_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bannerMiddleman_7), (void*)value);
	}

	inline static int32_t get_offset_of_interstitialMiddleman_8() { return static_cast<int32_t>(offsetof(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields, ___interstitialMiddleman_8)); }
	inline FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536 * get_interstitialMiddleman_8() const { return ___interstitialMiddleman_8; }
	inline FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536 ** get_address_of_interstitialMiddleman_8() { return &___interstitialMiddleman_8; }
	inline void set_interstitialMiddleman_8(FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536 * value)
	{
		___interstitialMiddleman_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interstitialMiddleman_8), (void*)value);
	}

	inline static int32_t get_offset_of_rewardedMiddleman_9() { return static_cast<int32_t>(offsetof(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields, ___rewardedMiddleman_9)); }
	inline FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4 * get_rewardedMiddleman_9() const { return ___rewardedMiddleman_9; }
	inline FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4 ** get_address_of_rewardedMiddleman_9() { return &___rewardedMiddleman_9; }
	inline void set_rewardedMiddleman_9(FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4 * value)
	{
		___rewardedMiddleman_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rewardedMiddleman_9), (void*)value);
	}
};


// GameManager
struct  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean GameManager::gameOver
	bool ___gameOver_4;
	// System.Boolean GameManager::gamePause
	bool ___gamePause_5;
	// UnityEngine.GameObject GameManager::playerPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playerPrefab_6;
	// UIManager GameManager::uiManager
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * ___uiManager_7;
	// Freestar.AdManager GameManager::adManager
	AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * ___adManager_8;
	// System.Single GameManager::timeRemaining
	float ___timeRemaining_9;
	// System.Boolean GameManager::timerIsRunning
	bool ___timerIsRunning_10;
	// UnityEngine.UI.Text GameManager::startText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___startText_11;
	// System.Boolean GameManager::resumeGame
	bool ___resumeGame_12;
	// Player GameManager::player
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___player_13;

public:
	inline static int32_t get_offset_of_gameOver_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameOver_4)); }
	inline bool get_gameOver_4() const { return ___gameOver_4; }
	inline bool* get_address_of_gameOver_4() { return &___gameOver_4; }
	inline void set_gameOver_4(bool value)
	{
		___gameOver_4 = value;
	}

	inline static int32_t get_offset_of_gamePause_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gamePause_5)); }
	inline bool get_gamePause_5() const { return ___gamePause_5; }
	inline bool* get_address_of_gamePause_5() { return &___gamePause_5; }
	inline void set_gamePause_5(bool value)
	{
		___gamePause_5 = value;
	}

	inline static int32_t get_offset_of_playerPrefab_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___playerPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playerPrefab_6() const { return ___playerPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playerPrefab_6() { return &___playerPrefab_6; }
	inline void set_playerPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playerPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_uiManager_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___uiManager_7)); }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * get_uiManager_7() const { return ___uiManager_7; }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 ** get_address_of_uiManager_7() { return &___uiManager_7; }
	inline void set_uiManager_7(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * value)
	{
		___uiManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiManager_7), (void*)value);
	}

	inline static int32_t get_offset_of_adManager_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___adManager_8)); }
	inline AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * get_adManager_8() const { return ___adManager_8; }
	inline AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 ** get_address_of_adManager_8() { return &___adManager_8; }
	inline void set_adManager_8(AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * value)
	{
		___adManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_timeRemaining_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___timeRemaining_9)); }
	inline float get_timeRemaining_9() const { return ___timeRemaining_9; }
	inline float* get_address_of_timeRemaining_9() { return &___timeRemaining_9; }
	inline void set_timeRemaining_9(float value)
	{
		___timeRemaining_9 = value;
	}

	inline static int32_t get_offset_of_timerIsRunning_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___timerIsRunning_10)); }
	inline bool get_timerIsRunning_10() const { return ___timerIsRunning_10; }
	inline bool* get_address_of_timerIsRunning_10() { return &___timerIsRunning_10; }
	inline void set_timerIsRunning_10(bool value)
	{
		___timerIsRunning_10 = value;
	}

	inline static int32_t get_offset_of_startText_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___startText_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_startText_11() const { return ___startText_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_startText_11() { return &___startText_11; }
	inline void set_startText_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___startText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startText_11), (void*)value);
	}

	inline static int32_t get_offset_of_resumeGame_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___resumeGame_12)); }
	inline bool get_resumeGame_12() const { return ___resumeGame_12; }
	inline bool* get_address_of_resumeGame_12() { return &___resumeGame_12; }
	inline void set_resumeGame_12(bool value)
	{
		___resumeGame_12 = value;
	}

	inline static int32_t get_offset_of_player_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___player_13)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_player_13() const { return ___player_13; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_player_13() { return &___player_13; }
	inline void set_player_13(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___player_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_13), (void*)value);
	}
};


// Laser
struct  Laser_t128A4BF0CB0C0349676F7C0999823F8A05E87ABA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Laser::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Laser_t128A4BF0CB0C0349676F7C0999823F8A05E87ABA, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};


// Player
struct  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Player::canTripleShoot
	bool ___canTripleShoot_4;
	// System.Boolean Player::isSpeedBoosterActive
	bool ___isSpeedBoosterActive_5;
	// System.Boolean Player::shieldsActive
	bool ___shieldsActive_6;
	// UnityEngine.GameObject Player::explosionPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___explosionPrefab_7;
	// UnityEngine.GameObject Player::laserPrefeb
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laserPrefeb_8;
	// UnityEngine.GameObject Player::tripleShotPrefeb
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tripleShotPrefeb_9;
	// UnityEngine.GameObject Player::shieldGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shieldGameObject_10;
	// System.Single Player::fireRate
	float ___fireRate_11;
	// System.Single Player::canFire
	float ___canFire_12;
	// System.Single Player::speed
	float ___speed_13;
	// System.Single Player::tilt
	float ___tilt_14;
	// Boundary Player::boundary
	Boundary_tE54FD347658847911B3544434B71A381209DC436 * ___boundary_15;
	// System.Int32 Player::lives
	int32_t ___lives_16;
	// System.Single Player::xMin
	float ___xMin_17;
	// System.Single Player::xMax
	float ___xMax_18;
	// System.Single Player::yMin
	float ___yMin_19;
	// System.Single Player::yMax
	float ___yMax_20;
	// System.Single Player::playerWidth
	float ___playerWidth_21;
	// System.Single Player::playerHeight
	float ___playerHeight_22;
	// UIManager Player::uiManager
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * ___uiManager_23;
	// GameManager Player::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_24;
	// SpawnManager Player::spawnManager
	SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * ___spawnManager_25;
	// UnityEngine.AudioSource Player::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_26;
	// SimpleTouchPad Player::touchPad
	SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C * ___touchPad_27;
	// SimpleTouchAreaButton Player::areaButton
	SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15 * ___areaButton_28;
	// UnityEngine.Quaternion Player::calibrationQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___calibrationQuaternion_29;

public:
	inline static int32_t get_offset_of_canTripleShoot_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___canTripleShoot_4)); }
	inline bool get_canTripleShoot_4() const { return ___canTripleShoot_4; }
	inline bool* get_address_of_canTripleShoot_4() { return &___canTripleShoot_4; }
	inline void set_canTripleShoot_4(bool value)
	{
		___canTripleShoot_4 = value;
	}

	inline static int32_t get_offset_of_isSpeedBoosterActive_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isSpeedBoosterActive_5)); }
	inline bool get_isSpeedBoosterActive_5() const { return ___isSpeedBoosterActive_5; }
	inline bool* get_address_of_isSpeedBoosterActive_5() { return &___isSpeedBoosterActive_5; }
	inline void set_isSpeedBoosterActive_5(bool value)
	{
		___isSpeedBoosterActive_5 = value;
	}

	inline static int32_t get_offset_of_shieldsActive_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___shieldsActive_6)); }
	inline bool get_shieldsActive_6() const { return ___shieldsActive_6; }
	inline bool* get_address_of_shieldsActive_6() { return &___shieldsActive_6; }
	inline void set_shieldsActive_6(bool value)
	{
		___shieldsActive_6 = value;
	}

	inline static int32_t get_offset_of_explosionPrefab_7() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___explosionPrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_explosionPrefab_7() const { return ___explosionPrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_explosionPrefab_7() { return &___explosionPrefab_7; }
	inline void set_explosionPrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___explosionPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosionPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_laserPrefeb_8() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___laserPrefeb_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laserPrefeb_8() const { return ___laserPrefeb_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laserPrefeb_8() { return &___laserPrefeb_8; }
	inline void set_laserPrefeb_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laserPrefeb_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laserPrefeb_8), (void*)value);
	}

	inline static int32_t get_offset_of_tripleShotPrefeb_9() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___tripleShotPrefeb_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tripleShotPrefeb_9() const { return ___tripleShotPrefeb_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tripleShotPrefeb_9() { return &___tripleShotPrefeb_9; }
	inline void set_tripleShotPrefeb_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tripleShotPrefeb_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tripleShotPrefeb_9), (void*)value);
	}

	inline static int32_t get_offset_of_shieldGameObject_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___shieldGameObject_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shieldGameObject_10() const { return ___shieldGameObject_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shieldGameObject_10() { return &___shieldGameObject_10; }
	inline void set_shieldGameObject_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shieldGameObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shieldGameObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_fireRate_11() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___fireRate_11)); }
	inline float get_fireRate_11() const { return ___fireRate_11; }
	inline float* get_address_of_fireRate_11() { return &___fireRate_11; }
	inline void set_fireRate_11(float value)
	{
		___fireRate_11 = value;
	}

	inline static int32_t get_offset_of_canFire_12() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___canFire_12)); }
	inline float get_canFire_12() const { return ___canFire_12; }
	inline float* get_address_of_canFire_12() { return &___canFire_12; }
	inline void set_canFire_12(float value)
	{
		___canFire_12 = value;
	}

	inline static int32_t get_offset_of_speed_13() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___speed_13)); }
	inline float get_speed_13() const { return ___speed_13; }
	inline float* get_address_of_speed_13() { return &___speed_13; }
	inline void set_speed_13(float value)
	{
		___speed_13 = value;
	}

	inline static int32_t get_offset_of_tilt_14() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___tilt_14)); }
	inline float get_tilt_14() const { return ___tilt_14; }
	inline float* get_address_of_tilt_14() { return &___tilt_14; }
	inline void set_tilt_14(float value)
	{
		___tilt_14 = value;
	}

	inline static int32_t get_offset_of_boundary_15() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___boundary_15)); }
	inline Boundary_tE54FD347658847911B3544434B71A381209DC436 * get_boundary_15() const { return ___boundary_15; }
	inline Boundary_tE54FD347658847911B3544434B71A381209DC436 ** get_address_of_boundary_15() { return &___boundary_15; }
	inline void set_boundary_15(Boundary_tE54FD347658847911B3544434B71A381209DC436 * value)
	{
		___boundary_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundary_15), (void*)value);
	}

	inline static int32_t get_offset_of_lives_16() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___lives_16)); }
	inline int32_t get_lives_16() const { return ___lives_16; }
	inline int32_t* get_address_of_lives_16() { return &___lives_16; }
	inline void set_lives_16(int32_t value)
	{
		___lives_16 = value;
	}

	inline static int32_t get_offset_of_xMin_17() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___xMin_17)); }
	inline float get_xMin_17() const { return ___xMin_17; }
	inline float* get_address_of_xMin_17() { return &___xMin_17; }
	inline void set_xMin_17(float value)
	{
		___xMin_17 = value;
	}

	inline static int32_t get_offset_of_xMax_18() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___xMax_18)); }
	inline float get_xMax_18() const { return ___xMax_18; }
	inline float* get_address_of_xMax_18() { return &___xMax_18; }
	inline void set_xMax_18(float value)
	{
		___xMax_18 = value;
	}

	inline static int32_t get_offset_of_yMin_19() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___yMin_19)); }
	inline float get_yMin_19() const { return ___yMin_19; }
	inline float* get_address_of_yMin_19() { return &___yMin_19; }
	inline void set_yMin_19(float value)
	{
		___yMin_19 = value;
	}

	inline static int32_t get_offset_of_yMax_20() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___yMax_20)); }
	inline float get_yMax_20() const { return ___yMax_20; }
	inline float* get_address_of_yMax_20() { return &___yMax_20; }
	inline void set_yMax_20(float value)
	{
		___yMax_20 = value;
	}

	inline static int32_t get_offset_of_playerWidth_21() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___playerWidth_21)); }
	inline float get_playerWidth_21() const { return ___playerWidth_21; }
	inline float* get_address_of_playerWidth_21() { return &___playerWidth_21; }
	inline void set_playerWidth_21(float value)
	{
		___playerWidth_21 = value;
	}

	inline static int32_t get_offset_of_playerHeight_22() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___playerHeight_22)); }
	inline float get_playerHeight_22() const { return ___playerHeight_22; }
	inline float* get_address_of_playerHeight_22() { return &___playerHeight_22; }
	inline void set_playerHeight_22(float value)
	{
		___playerHeight_22 = value;
	}

	inline static int32_t get_offset_of_uiManager_23() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___uiManager_23)); }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * get_uiManager_23() const { return ___uiManager_23; }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 ** get_address_of_uiManager_23() { return &___uiManager_23; }
	inline void set_uiManager_23(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * value)
	{
		___uiManager_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiManager_23), (void*)value);
	}

	inline static int32_t get_offset_of_gameManager_24() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___gameManager_24)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_24() const { return ___gameManager_24; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_24() { return &___gameManager_24; }
	inline void set_gameManager_24(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_24), (void*)value);
	}

	inline static int32_t get_offset_of_spawnManager_25() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___spawnManager_25)); }
	inline SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * get_spawnManager_25() const { return ___spawnManager_25; }
	inline SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE ** get_address_of_spawnManager_25() { return &___spawnManager_25; }
	inline void set_spawnManager_25(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * value)
	{
		___spawnManager_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnManager_25), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_26() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___audioSource_26)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_26() const { return ___audioSource_26; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_26() { return &___audioSource_26; }
	inline void set_audioSource_26(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_26), (void*)value);
	}

	inline static int32_t get_offset_of_touchPad_27() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___touchPad_27)); }
	inline SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C * get_touchPad_27() const { return ___touchPad_27; }
	inline SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C ** get_address_of_touchPad_27() { return &___touchPad_27; }
	inline void set_touchPad_27(SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C * value)
	{
		___touchPad_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchPad_27), (void*)value);
	}

	inline static int32_t get_offset_of_areaButton_28() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___areaButton_28)); }
	inline SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15 * get_areaButton_28() const { return ___areaButton_28; }
	inline SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15 ** get_address_of_areaButton_28() { return &___areaButton_28; }
	inline void set_areaButton_28(SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15 * value)
	{
		___areaButton_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___areaButton_28), (void*)value);
	}

	inline static int32_t get_offset_of_calibrationQuaternion_29() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___calibrationQuaternion_29)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_calibrationQuaternion_29() const { return ___calibrationQuaternion_29; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_calibrationQuaternion_29() { return &___calibrationQuaternion_29; }
	inline void set_calibrationQuaternion_29(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___calibrationQuaternion_29 = value;
	}
};


// PlayerAnimation
struct  PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator PlayerAnimation::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_4;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856, ___animator_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_4() const { return ___animator_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_4), (void*)value);
	}
};


// Powerup
struct  Powerup_t1D4F23DF6CDB4E3979A5EF7570DF003354E387E5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Powerup::speed
	float ___speed_4;
	// System.Int32 Powerup::powerupID
	int32_t ___powerupID_5;
	// UnityEngine.AudioClip Powerup::audioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___audioClip_6;
	// GameManager Powerup::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_7;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Powerup_t1D4F23DF6CDB4E3979A5EF7570DF003354E387E5, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_powerupID_5() { return static_cast<int32_t>(offsetof(Powerup_t1D4F23DF6CDB4E3979A5EF7570DF003354E387E5, ___powerupID_5)); }
	inline int32_t get_powerupID_5() const { return ___powerupID_5; }
	inline int32_t* get_address_of_powerupID_5() { return &___powerupID_5; }
	inline void set_powerupID_5(int32_t value)
	{
		___powerupID_5 = value;
	}

	inline static int32_t get_offset_of_audioClip_6() { return static_cast<int32_t>(offsetof(Powerup_t1D4F23DF6CDB4E3979A5EF7570DF003354E387E5, ___audioClip_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_audioClip_6() const { return ___audioClip_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_audioClip_6() { return &___audioClip_6; }
	inline void set_audioClip_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___audioClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_gameManager_7() { return static_cast<int32_t>(offsetof(Powerup_t1D4F23DF6CDB4E3979A5EF7570DF003354E387E5, ___gameManager_7)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_7() const { return ___gameManager_7; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_7() { return &___gameManager_7; }
	inline void set_gameManager_7(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_7), (void*)value);
	}
};


// SimpleTouchAreaButton
struct  SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean SimpleTouchAreaButton::touched
	bool ___touched_4;
	// System.Int32 SimpleTouchAreaButton::pointerID
	int32_t ___pointerID_5;
	// System.Boolean SimpleTouchAreaButton::canFire
	bool ___canFire_6;

public:
	inline static int32_t get_offset_of_touched_4() { return static_cast<int32_t>(offsetof(SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15, ___touched_4)); }
	inline bool get_touched_4() const { return ___touched_4; }
	inline bool* get_address_of_touched_4() { return &___touched_4; }
	inline void set_touched_4(bool value)
	{
		___touched_4 = value;
	}

	inline static int32_t get_offset_of_pointerID_5() { return static_cast<int32_t>(offsetof(SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15, ___pointerID_5)); }
	inline int32_t get_pointerID_5() const { return ___pointerID_5; }
	inline int32_t* get_address_of_pointerID_5() { return &___pointerID_5; }
	inline void set_pointerID_5(int32_t value)
	{
		___pointerID_5 = value;
	}

	inline static int32_t get_offset_of_canFire_6() { return static_cast<int32_t>(offsetof(SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15, ___canFire_6)); }
	inline bool get_canFire_6() const { return ___canFire_6; }
	inline bool* get_address_of_canFire_6() { return &___canFire_6; }
	inline void set_canFire_6(bool value)
	{
		___canFire_6 = value;
	}
};


// SimpleTouchPad
struct  SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single SimpleTouchPad::smoothing
	float ___smoothing_4;
	// UnityEngine.Vector2 SimpleTouchPad::origin
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin_5;
	// UnityEngine.Vector2 SimpleTouchPad::direction
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction_6;
	// UnityEngine.Vector2 SimpleTouchPad::smoothDirection
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___smoothDirection_7;
	// System.Boolean SimpleTouchPad::touched
	bool ___touched_8;
	// System.Int32 SimpleTouchPad::pointerID
	int32_t ___pointerID_9;

public:
	inline static int32_t get_offset_of_smoothing_4() { return static_cast<int32_t>(offsetof(SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C, ___smoothing_4)); }
	inline float get_smoothing_4() const { return ___smoothing_4; }
	inline float* get_address_of_smoothing_4() { return &___smoothing_4; }
	inline void set_smoothing_4(float value)
	{
		___smoothing_4 = value;
	}

	inline static int32_t get_offset_of_origin_5() { return static_cast<int32_t>(offsetof(SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C, ___origin_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_origin_5() const { return ___origin_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_origin_5() { return &___origin_5; }
	inline void set_origin_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___origin_5 = value;
	}

	inline static int32_t get_offset_of_direction_6() { return static_cast<int32_t>(offsetof(SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C, ___direction_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_direction_6() const { return ___direction_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_direction_6() { return &___direction_6; }
	inline void set_direction_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___direction_6 = value;
	}

	inline static int32_t get_offset_of_smoothDirection_7() { return static_cast<int32_t>(offsetof(SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C, ___smoothDirection_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_smoothDirection_7() const { return ___smoothDirection_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_smoothDirection_7() { return &___smoothDirection_7; }
	inline void set_smoothDirection_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___smoothDirection_7 = value;
	}

	inline static int32_t get_offset_of_touched_8() { return static_cast<int32_t>(offsetof(SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C, ___touched_8)); }
	inline bool get_touched_8() const { return ___touched_8; }
	inline bool* get_address_of_touched_8() { return &___touched_8; }
	inline void set_touched_8(bool value)
	{
		___touched_8 = value;
	}

	inline static int32_t get_offset_of_pointerID_9() { return static_cast<int32_t>(offsetof(SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C, ___pointerID_9)); }
	inline int32_t get_pointerID_9() const { return ___pointerID_9; }
	inline int32_t* get_address_of_pointerID_9() { return &___pointerID_9; }
	inline void set_pointerID_9(int32_t value)
	{
		___pointerID_9 = value;
	}
};


// SpawnManager
struct  SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject SpawnManager::enemyShipPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyShipPrefab_4;
	// UnityEngine.GameObject[] SpawnManager::powerups
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___powerups_5;
	// GameManager SpawnManager::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_6;

public:
	inline static int32_t get_offset_of_enemyShipPrefab_4() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___enemyShipPrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyShipPrefab_4() const { return ___enemyShipPrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyShipPrefab_4() { return &___enemyShipPrefab_4; }
	inline void set_enemyShipPrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyShipPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyShipPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_powerups_5() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___powerups_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_powerups_5() const { return ___powerups_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_powerups_5() { return &___powerups_5; }
	inline void set_powerups_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___powerups_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___powerups_5), (void*)value);
	}

	inline static int32_t get_offset_of_gameManager_6() { return static_cast<int32_t>(offsetof(SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE, ___gameManager_6)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_6() const { return ___gameManager_6; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_6() { return &___gameManager_6; }
	inline void set_gameManager_6(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_6), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIManager
struct  UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite[] UIManager::lives
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___lives_4;
	// UnityEngine.UI.Image UIManager::livesImageDisplay
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___livesImageDisplay_5;
	// UnityEngine.UI.Text UIManager::currentScoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___currentScoreText_6;
	// UnityEngine.UI.Text UIManager::totalScoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___totalScoreText_7;
	// UnityEngine.UI.Text UIManager::bestScoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___bestScoreText_8;
	// UnityEngine.UI.Text UIManager::gameOverTotalScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___gameOverTotalScore_9;
	// UnityEngine.UI.Text UIManager::gameOverBestScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___gameOverBestScore_10;
	// System.Int32 UIManager::currentScore
	int32_t ___currentScore_11;
	// System.Int32 UIManager::totalScore
	int32_t ___totalScore_12;
	// System.Int32 UIManager::bestScore
	int32_t ___bestScore_13;
	// UnityEngine.GameObject UIManager::titleScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___titleScreen_14;
	// GameManager UIManager::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_15;
	// UnityEngine.GameObject UIManager::restartButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___restartButton_16;
	// UnityEngine.GameObject UIManager::quitButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___quitButton_17;
	// UnityEngine.GameObject UIManager::gamePausePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gamePausePanel_18;
	// UnityEngine.GameObject UIManager::gameOverMessagePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverMessagePanel_19;
	// UnityEngine.GameObject UIManager::gameOverPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverPanel_20;
	// System.Boolean UIManager::earnLive
	bool ___earnLive_21;
	// UnityEngine.GameObject UIManager::earnLivePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___earnLivePanel_22;
	// UnityEngine.GameObject UIManager::adFailedPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___adFailedPanel_23;

public:
	inline static int32_t get_offset_of_lives_4() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___lives_4)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_lives_4() const { return ___lives_4; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_lives_4() { return &___lives_4; }
	inline void set_lives_4(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___lives_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lives_4), (void*)value);
	}

	inline static int32_t get_offset_of_livesImageDisplay_5() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___livesImageDisplay_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_livesImageDisplay_5() const { return ___livesImageDisplay_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_livesImageDisplay_5() { return &___livesImageDisplay_5; }
	inline void set_livesImageDisplay_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___livesImageDisplay_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livesImageDisplay_5), (void*)value);
	}

	inline static int32_t get_offset_of_currentScoreText_6() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___currentScoreText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_currentScoreText_6() const { return ___currentScoreText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_currentScoreText_6() { return &___currentScoreText_6; }
	inline void set_currentScoreText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___currentScoreText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentScoreText_6), (void*)value);
	}

	inline static int32_t get_offset_of_totalScoreText_7() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___totalScoreText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_totalScoreText_7() const { return ___totalScoreText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_totalScoreText_7() { return &___totalScoreText_7; }
	inline void set_totalScoreText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___totalScoreText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___totalScoreText_7), (void*)value);
	}

	inline static int32_t get_offset_of_bestScoreText_8() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___bestScoreText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_bestScoreText_8() const { return ___bestScoreText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_bestScoreText_8() { return &___bestScoreText_8; }
	inline void set_bestScoreText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___bestScoreText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestScoreText_8), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverTotalScore_9() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___gameOverTotalScore_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_gameOverTotalScore_9() const { return ___gameOverTotalScore_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_gameOverTotalScore_9() { return &___gameOverTotalScore_9; }
	inline void set_gameOverTotalScore_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___gameOverTotalScore_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverTotalScore_9), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverBestScore_10() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___gameOverBestScore_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_gameOverBestScore_10() const { return ___gameOverBestScore_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_gameOverBestScore_10() { return &___gameOverBestScore_10; }
	inline void set_gameOverBestScore_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___gameOverBestScore_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverBestScore_10), (void*)value);
	}

	inline static int32_t get_offset_of_currentScore_11() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___currentScore_11)); }
	inline int32_t get_currentScore_11() const { return ___currentScore_11; }
	inline int32_t* get_address_of_currentScore_11() { return &___currentScore_11; }
	inline void set_currentScore_11(int32_t value)
	{
		___currentScore_11 = value;
	}

	inline static int32_t get_offset_of_totalScore_12() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___totalScore_12)); }
	inline int32_t get_totalScore_12() const { return ___totalScore_12; }
	inline int32_t* get_address_of_totalScore_12() { return &___totalScore_12; }
	inline void set_totalScore_12(int32_t value)
	{
		___totalScore_12 = value;
	}

	inline static int32_t get_offset_of_bestScore_13() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___bestScore_13)); }
	inline int32_t get_bestScore_13() const { return ___bestScore_13; }
	inline int32_t* get_address_of_bestScore_13() { return &___bestScore_13; }
	inline void set_bestScore_13(int32_t value)
	{
		___bestScore_13 = value;
	}

	inline static int32_t get_offset_of_titleScreen_14() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___titleScreen_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_titleScreen_14() const { return ___titleScreen_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_titleScreen_14() { return &___titleScreen_14; }
	inline void set_titleScreen_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___titleScreen_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___titleScreen_14), (void*)value);
	}

	inline static int32_t get_offset_of_gameManager_15() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___gameManager_15)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_15() const { return ___gameManager_15; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_15() { return &___gameManager_15; }
	inline void set_gameManager_15(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_15), (void*)value);
	}

	inline static int32_t get_offset_of_restartButton_16() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___restartButton_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_restartButton_16() const { return ___restartButton_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_restartButton_16() { return &___restartButton_16; }
	inline void set_restartButton_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___restartButton_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___restartButton_16), (void*)value);
	}

	inline static int32_t get_offset_of_quitButton_17() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___quitButton_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_quitButton_17() const { return ___quitButton_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_quitButton_17() { return &___quitButton_17; }
	inline void set_quitButton_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___quitButton_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quitButton_17), (void*)value);
	}

	inline static int32_t get_offset_of_gamePausePanel_18() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___gamePausePanel_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gamePausePanel_18() const { return ___gamePausePanel_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gamePausePanel_18() { return &___gamePausePanel_18; }
	inline void set_gamePausePanel_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gamePausePanel_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gamePausePanel_18), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverMessagePanel_19() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___gameOverMessagePanel_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverMessagePanel_19() const { return ___gameOverMessagePanel_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverMessagePanel_19() { return &___gameOverMessagePanel_19; }
	inline void set_gameOverMessagePanel_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverMessagePanel_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverMessagePanel_19), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverPanel_20() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___gameOverPanel_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverPanel_20() const { return ___gameOverPanel_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverPanel_20() { return &___gameOverPanel_20; }
	inline void set_gameOverPanel_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverPanel_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverPanel_20), (void*)value);
	}

	inline static int32_t get_offset_of_earnLive_21() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___earnLive_21)); }
	inline bool get_earnLive_21() const { return ___earnLive_21; }
	inline bool* get_address_of_earnLive_21() { return &___earnLive_21; }
	inline void set_earnLive_21(bool value)
	{
		___earnLive_21 = value;
	}

	inline static int32_t get_offset_of_earnLivePanel_22() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___earnLivePanel_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_earnLivePanel_22() const { return ___earnLivePanel_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_earnLivePanel_22() { return &___earnLivePanel_22; }
	inline void set_earnLivePanel_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___earnLivePanel_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___earnLivePanel_22), (void*)value);
	}

	inline static int32_t get_offset_of_adFailedPanel_23() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___adFailedPanel_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_adFailedPanel_23() const { return ___adFailedPanel_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_adFailedPanel_23() { return &___adFailedPanel_23; }
	inline void set_adFailedPanel_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___adFailedPanel_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adFailedPanel_23), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m2652E72792A278523D6D8962CBBEA84177BB4556_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);

// System.Void Freestar.AdManager::log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_log_m21090FC527F2DF60FD75528EFA44C7D9B4808B25 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::SetAdRequestTestMode(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_SetAdRequestTestMode_m0B750FF10373242651E2210FD015D686150C75BA (bool ___isTestMode0, String_t* ___testID1, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::ShowPartnerChooser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_ShowPartnerChooser_m54EDD5CE704DCD49983845765913794BD971B264 (bool ___showPartnerChooser0, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::initWithAPIKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_initWithAPIKey_m113F0CBE23C73FC378EF0D68954B0F593346562C (String_t* ___apiKey0, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::setBannerAdListener(Freestar.FreestarBannerAdCallbackReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_setBannerAdListener_m30111F9003CEB07AA8B8D56933F126986421AC58 (RuntimeObject* ___listener0, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::setInterstitialAdListener(Freestar.FreestarInterstitialAdCallbackReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_setInterstitialAdListener_m99AAE45CF335DBE9C8B28C5DA064CC3CF0CED21F (RuntimeObject* ___listener0, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::setRewardedAdListener(Freestar.FreestarRewardedAdCallbackReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_setRewardedAdListener_mD26AB3D252EC5DF36E7146078A253B9981E09A89 (RuntimeObject* ___listener0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UIManager>()
inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * GameObject_GetComponent_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_mDC004D56EC7E86057B44F99042E6EE2CFC3ACE4E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GameManager>()
inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_Resume_mA88E712EF9E893B666396E56E56ED687C985E8FA (const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_Pause_m5F366A6530D8C0327BB99355F510818906009A13 (const RuntimeMethod* method);
// System.Void Freestar.AdManager::closeBanners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_closeBanners_m0A3509B1859E00BEB142026734968CAEA037C23C (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method);
// System.Void Freestar.AdManager::showInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_showInterstitialAd_mAA58095116BA0B610249ACABDBF9727540742310 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method);
// System.String Freestar.FreestarUnityBridge::GetInterstitialAdWinner(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FreestarUnityBridge_GetInterstitialAdWinner_mED404EA5CE632A7FE0035AD3641DB50BE64AD392 (String_t* ___placement0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void Freestar.AdManager::updateStatusUI(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_updateStatusUI_m60B723A7FB4F56B8D2770D5B7F6018AF45E954E6 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___newStatus0, const RuntimeMethod* method);
// System.Void GameManager::ResumeBackgroundMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResumeBackgroundMusic_m6B82DDF7EA1A305D9476937C7267534894234838 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.String Freestar.FreestarUnityBridge::GetRewardedAdWinner(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FreestarUnityBridge_GetRewardedAdWinner_m9A18090099F0322A5C1773B01A33321F29AE98F5 (String_t* ___placement0, const RuntimeMethod* method);
// System.Void Freestar.AdManager::showRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_showRewardedAd_m7E19A16A3A41A69871B90B1F12B74F3F04C19A59 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Void UIManager::UpdateEarnLiveStatus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateEarnLiveStatus_m73D8110D49BB26BE9C7961B7EE59CB902373431C (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, bool ___livestatus0, const RuntimeMethod* method);
// System.Void GameManager::UpdateResumeGameStatus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateResumeGameStatus_mFB49713B4DF05E1492E79C1866725574446044B9 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, bool ___gamestatus0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void GameManager::PauseBackgroundMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PauseBackgroundMusic_mA813D8371D28C1536DF528BA18BFA0573BF29A66 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::loadInterstitialAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_loadInterstitialAd_m24A10BA4BFCA25F1A448977B6FC1B3AC47033F35 (String_t* ___placement0, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::showInterstitialAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_showInterstitialAd_mF9BC5CA44607B6C35470CD9796641135425679CF (String_t* ___placement0, const RuntimeMethod* method);
// System.Boolean Freestar.FreestarUnityBridge::IsBannerAdShowing(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FreestarUnityBridge_IsBannerAdShowing_m2BB717C0EB94BB8B3164BD63277EFE3843A23508 (String_t* ___placement0, int32_t ___bannerAdSize1, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::CloseBannerAd(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_CloseBannerAd_mA373DCF7BBEBC07CA7B733E2D95EF4BC98F575AF (String_t* ___placement0, int32_t ___bannerAdSize1, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::ShowBannerAd(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_ShowBannerAd_m46699BF0816FD63AAC02A56D164F26AFE750D3FD (String_t* ___placement0, int32_t ___bannerAdSize1, int32_t ___bannerAdPosition2, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::loadRewardedAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_loadRewardedAd_mB9124BDF9A7BFD8DE3F1C9AB166FD694999DB771 (String_t* ___placement0, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::showRewardedAd(System.String,System.Int32,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_showRewardedAd_mB16284DE2713CA574024D531941DAFE560A469B3 (String_t* ___placement0, int32_t ___rewardAmount1, String_t* ___rewardName2, String_t* ___userId3, String_t* ___secretKey4, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::removeBannerAdListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_removeBannerAdListener_m001738D144BFF03C76BBBF982FA81E529D2640B5 (const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::removeRewardedAdListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_removeRewardedAdListener_m572879FF35F2EE25DB1F9BDC7AA6FC96D3828787 (const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::removeInterstitialAdListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_removeInterstitialAdListener_mB533DD68F4264ED5E79E84990377D4FC7FCD64A7 (const RuntimeMethod* method);
// System.Void Freestar.AdManager::unRegisterAdListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_unRegisterAdListener_m5E1DC338EAEABA28B7399DF82529F6E7C2061B4D (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Balaso.AppTrackingTransparency::appTrackingTransparencyCallbackReceived(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparency_appTrackingTransparencyCallbackReceived_m7FEFC1C457826F49C206185207E5A5DC71A114D0 (int32_t ___result0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Action`1<Balaso.AppTrackingTransparency/AuthorizationStatus>::Invoke(!0)
inline void Action_1_Invoke_m3A9225C248762C7A2610EFFEBFC176B9D9FDD500 (Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF *, int32_t, const RuntimeMethod*))Action_1_Invoke_m2652E72792A278523D6D8962CBBEA84177BB4556_gshared)(__this, ___obj0, method);
}
// System.Int32 Balaso.AppTrackingTransparency::trackingAuthorizationStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppTrackingTransparency_trackingAuthorizationStatus_mA779B7A9037A814E182C2089A7C57CCA5D4F6EB9 (const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void Balaso.AppTrackingTransparency::updateConversionValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparency_updateConversionValue_m8E22817BBD13A178DDA97F38576083FB9CA8FC97 (int32_t ___value0, const RuntimeMethod* method);
// System.Void Balaso.AppTrackingTransparency::registerAppForAdNetworkAttribution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparency_registerAppForAdNetworkAttribution_m25D3DA60EEC8EC5DE0A5AE34BD8CC29044FB91C7 (const RuntimeMethod* method);
// System.Void Balaso.AppTrackingTransparency/AppTrackingTransparencyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparencyCallback__ctor_m54BE9F376E38551D59E6E568E65B48FE3AF81EB1 (AppTrackingTransparencyCallback_t40DFDE8BF747E57724D8ADD8D638DD1A6A11D1C4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Balaso.AppTrackingTransparency::requestTrackingAuthorization(Balaso.AppTrackingTransparency/AppTrackingTransparencyCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparency_requestTrackingAuthorization_mC1402DAA52762CCC283012C8C343B06BB47160F8 (AppTrackingTransparencyCallback_t40DFDE8BF747E57724D8ADD8D638DD1A6A11D1C4 * ___callback0, const RuntimeMethod* method);
// System.String Balaso.AppTrackingTransparency::identifierForAdvertising()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppTrackingTransparency_identifierForAdvertising_mE11449F973881BFCA4A54B7A69C861696F0E9634 (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Balaso.AppTrackingTransparency::RegisterAppForAdNetworkAttribution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparency_RegisterAppForAdNetworkAttribution_m6F26C8114C0B4DB5ACD6ED9910CD9086EE37A384 (const RuntimeMethod* method);
// System.Void Balaso.AppTrackingTransparency::UpdateConversionValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparency_UpdateConversionValue_m948C205F74D21F30E29E81215696CB77F4A2348C (int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<Balaso.AppTrackingTransparency/AuthorizationStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m825DC9C3F0F51FFF82330621EDEA90555FEA155B (Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// Balaso.AppTrackingTransparency/AuthorizationStatus Balaso.AppTrackingTransparency::get_TrackingAuthorizationStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppTrackingTransparency_get_TrackingAuthorizationStatus_m189119ADA59FC38F9E55BCAD55491B368DC073F9 (const RuntimeMethod* method);
// System.Void Balaso.AppTrackingTransparency::RequestTrackingAuthorization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparency_RequestTrackingAuthorization_m9A302B61A91AA36EF7E63E8AA141E572BC3B686B (const RuntimeMethod* method);
// System.String Balaso.AppTrackingTransparency::IdentifierForAdvertising()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppTrackingTransparency_IdentifierForAdvertising_m478D58E42030B71FA9C6964069659D2736639D1F (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE (float ___t0, float ___length1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UIManager::UpdateScores(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateScores_m717632F6A4DAC456F694C6C95CB3E772E1D24A45 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, int32_t ___score0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, float ___volume2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Player::Damage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Damage_mC0B33743234347979F505E277CDF4AE51EB4F3C3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::_initWithAPIKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__initWithAPIKey_m12F582D1ED827D74DD0E7103C1E5B4748DFA43AA (String_t* ___apiKey0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Freestar.FreestarIOSBannerMessagePasser>()
inline FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8 * GameObject_AddComponent_TisFreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8_m8E63640DE7964FAA9E4D7E3B3EEDC9FB4CA92861 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::_setBannerListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__setBannerListener_m442E39C725FFC0205A2338CAD5D554689FB384F1 (String_t* ___listenerName0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Freestar.FreestarIOSInterstitialMessagePasser>()
inline FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536 * GameObject_AddComponent_TisFreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536_m76E953A4FD7AC9B759F0C215AF3FBDEA50AA1311 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Freestar.FreestarUnityBridge::_setInterstitialListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__setInterstitialListener_m5A982F1E573E1DA8053F2D3F5F66EF4B09FACAF2 (String_t* ___listenerName0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Freestar.FreestarIOSRewardedMessagePasser>()
inline FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4 * GameObject_AddComponent_TisFreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4_m2218B29B04864C97645EC0A28E529AD7F08CDA0C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Freestar.FreestarUnityBridge::_setRewardedListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__setRewardedListener_mCAF1FA39D5B2CD35052A21B678FF8EDB305E3A18 (String_t* ___listenerName0, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::_loadInterstitialAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__loadInterstitialAd_m356772C2180BF260475616FD616BF2C5C544F9D4 (String_t* ___placement0, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::_showInterstitialAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__showInterstitialAd_m38B1000C1B64962E94FFA36A1E31D6CC1FA194EB (String_t* ___placement0, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::_loadRewardedAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__loadRewardedAd_mC44BA8E97E6FECF2A860E6F617B47224B3B33A5C (String_t* ___placement0, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::_showRewardedAd(System.String,System.Int32,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__showRewardedAd_m7AAF5E313D736FB5D7B85F854754AD9EA21A72F4 (String_t* ___placement0, int32_t ___rewardAmount1, String_t* ___rewardName2, String_t* ___userId3, String_t* ___secretKey4, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::_setDemograpics(System.Int32,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__setDemograpics_m925FE484AAAA9729C4910875AEBC2789B50AA62A (int32_t ___age0, String_t* ___birthDate1, String_t* ___gender2, String_t* ___maritalStatus3, String_t* ___ethnicity4, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::_setLocation(System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__setLocation_mD1F98348AE8F0CF3252C9A3BDD1CA399A1BCD655 (String_t* ___dmaCode0, String_t* ___postal1, String_t* ___curPostal2, String_t* ___latitude3, String_t* ___longitude4, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::_setPrivacySettings(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__setPrivacySettings_mAA98B5A044C9FA1A84C22D1D270479BA97DCD90B (bool ___gdprApplies0, String_t* ___gdprConsentString1, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::_setCustomSegmentProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__setCustomSegmentProperty_m530C4B1474C1046DC2447605DE53FE9135440C6B (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.String Freestar.FreestarUnityBridge::_getCustomSegmentProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FreestarUnityBridge__getCustomSegmentProperty_m3BC5B2465AE09AA9F1448D9B3420CCF458D6C5DC (String_t* ___key0, const RuntimeMethod* method);
// System.String Freestar.FreestarUnityBridge::_getAllCustomSegmentProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FreestarUnityBridge__getAllCustomSegmentProperties_mE0CACF8D7514AEA5C425B69D7C6E3FB2AE82D8D9 (const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Collections.Generic.Dictionary`2<System.String,System.String>>(System.String)
inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * JsonUtility_FromJson_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_mF39BECE846CAFA75ABEC9642352F69B31FACEE0F (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void Freestar.FreestarUnityBridge::_deleteCustomSegmentProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__deleteCustomSegmentProperty_m09F329A801DAA6BEE81A84ACA821D6947EA310DB (String_t* ___key0, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::_deleteAllCustomSegmentProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__deleteAllCustomSegmentProperties_m7774D1A341430663787706A1F5D1590FB310BFD1 (const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::_showBannerAd(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__showBannerAd_mE24471DCF4C314D89CD3689B76ABE5FACBE841E1 (String_t* ___placement0, int32_t ___bannerAdSize1, int32_t ___bannerAdPosition2, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::_isBannerAdShowing(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__isBannerAdShowing_m72F12237D04CFACE53AF769C4E79E46DCE2D0ADD (String_t* ___placement0, int32_t ___bannerAdSize1, const RuntimeMethod* method);
// System.Void Freestar.FreestarUnityBridge::_closeBannerAd(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__closeBannerAd_m79F222E93C153D02228FE6D53C31C198058A073D (String_t* ___placement0, int32_t ___bannerAdSize1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Freestar.AdManager>()
inline AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * GameObject_GetComponent_TisAdManager_t2F03E384E6359CA43FA97E24C69702365861A034_m7C355AF1EC2A3E14F39C811E497F8F6A2E6FE134 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UIManager::ShowTitleScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowTitleScreen_m5050DC3B2AED7B05628A996FD84191A7E4C51274 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::ShowRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowRestart_mF1539A460CA5ADAFC327CF5AC303DB62F6EF25F2 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::HideTitileScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_HideTitileScreen_mDE6720D778B8A0075F652C75E82EFE077778FAFD (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void Freestar.AdManager::loadInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_loadInterstitialAd_m02643EE91EFD104DDDD831380CF98BA036B6E020 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method);
// System.Void Freestar.AdManager::loadRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_loadRewardedAd_mCF3DEB44FCDE41ABD9A8CFB699D19F1B0002DA20 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Void Player::CalibrateAccelerometer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CalibrateAccelerometer_mA75AE4959D12EB0FC9685ABF93D947B7D2B25B2F (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Boolean UIManager::EarnLiveStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIManager_EarnLiveStatus_m8F540B9F803D1FD1FE7B167C33C74F573AF3E6BB (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void Player::EnableShields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_EnableShields_mAE51431FC97B24FE3CC00EF350519D79CC466236 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void UIManager::UpdateLives(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateLives_m9EE8B586755461468D6E5EBE58ECD8B3A8DB5B63 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, int32_t ___currentLives0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<SpawnManager>()
inline SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * GameObject_GetComponent_TisSpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE_m7830182BC2D4BE0BC6B2D1EDF77854F0C5F8C0AD (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void SpawnManager::StartSpawnRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_StartSpawnRoutine_m6F2E3140486F0CE5B1DEF6C51FF62B20DF60CF7E (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<SimpleTouchPad>()
inline SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C * GameObject_GetComponent_TisSimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C_m24E8F88F1507CA4A81418F2CEB0DC7C05C6C3411 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<SimpleTouchAreaButton>()
inline SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15 * GameObject_GetComponent_TisSimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15_mB64C94A6504D5D08FAADD24659474ACDF74A639F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8 (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_extents_mA54D7497D65DCF21CA952FA754B9D1086305FF02 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Boolean SimpleTouchAreaButton::CanFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleTouchAreaButton_CanFire_m26D751CEE5E54DA2D243DB5BA1D87292D39DD181 (SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15 * __this, const RuntimeMethod* method);
// System.Void Player::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Shoot_mC8E486C923C1BCCA822D42E01A7CC1D71CD4A1D4 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector2 SimpleTouchPad::GetDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SimpleTouchPad_GetDirection_m8E5F92DA199FD6D07CA9D52E15C4527D5CA3ADD4 (SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_position_m1604084713EB195D44B8B411D4BCAFA5941E3413 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_rotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_rotation_m4982A0057C1FEB61323B58C7A791E8A0D0CD8C77 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator Player::TripleShootPowerDownRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_TripleShootPowerDownRoutine_m91A66D71D98A367A6AE0D621A1A1111432DB3A0D (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator Player::SpeedBoostPowerDownRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_SpeedBoostPowerDownRoutine_mD98F2BD1B6817B4091E46B8DD24B1891048CBE2D (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player/<TripleShootPowerDownRoutine>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTripleShootPowerDownRoutineU3Ed__36__ctor_m27743384BA1228045A2C3504F90ACE3D1A47C65D (U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Player/<SpeedBoostPowerDownRoutine>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedBoostPowerDownRoutineU3Ed__37__ctor_m72BC991AAECAEC95F687978352F4B49C7DFA1A9B (U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Void Player::TripleShotPowerupOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_TripleShotPowerupOn_m5F630EB6B12BBEFB07F3FE77CD0ABACA5641AB55 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::SpeedBoostPowerupOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SpeedBoostPowerupOn_mCAA4F91A207344CEEAF4189FEB0BF73F6D7A2948 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m50BE6AA34EE21DA6BE7AF07AAC9115CAB6B0636A_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___current0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Collections.IEnumerator SpawnManager::EnemySpawnRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnManager_EnemySpawnRoutine_m6B5A4EA61F3C7450F1C703C3BB3827755AE05334 (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator SpawnManager::PowerupSpawnRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnManager_PowerupSpawnRoutine_m1F59B66ECEFCF39D7B8779D3C4CA672B5C8C984D (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method);
// System.Void SpawnManager/<EnemySpawnRoutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnemySpawnRoutineU3Ed__5__ctor_m34FCC08F1231E31042670E47FFAC5D5B9E58BA91 (U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void SpawnManager/<PowerupSpawnRoutine>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPowerupSpawnRoutineU3Ed__6__ctor_m5031C43DCDDBD47D773DDB8030F8EE615D9B1FA2 (U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UIManager::ShowGamePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowGamePause_mE9BDD231381857614B9117CDE56707A443EEF7DB (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::UpdateCurrentScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateCurrentScore_m4457A1FCB84E2E30C7AE8DFBA0E11DE0E9611513 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::UpdateTotalScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateTotalScore_m1647558309C498278BCE88BC11EE3EB522C98982 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::UpdateBestScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateBestScore_mCB693C8B7859B168E1CD66004FB193E7E6D785A9 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL requestTrackingAuthorization(Il2CppMethodPointer);
IL2CPP_EXTERN_C char* DEFAULT_CALL identifierForAdvertising();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL trackingAuthorizationStatus();
IL2CPP_EXTERN_C void DEFAULT_CALL registerAppForAdNetworkAttribution();
IL2CPP_EXTERN_C void DEFAULT_CALL updateConversionValue(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _initWithAPIKey(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _setInterstitialListener(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _setRewardedListener(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _setBannerListener(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _loadInterstitialAd(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _showInterstitialAd(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _loadRewardedAd(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _showRewardedAd(char*, int32_t, char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _setDemograpics(int32_t, char*, char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _setLocation(char*, char*, char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _setPrivacySettings(int32_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _setCustomSegmentProperty(char*, char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL _getCustomSegmentProperty(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL _getAllCustomSegmentProperties();
IL2CPP_EXTERN_C void DEFAULT_CALL _deleteCustomSegmentProperty(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _deleteAllCustomSegmentProperties();
IL2CPP_EXTERN_C void DEFAULT_CALL _showBannerAd(char*, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _isBannerAdShowing(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _closeBannerAd(char*, int32_t);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Freestar.AdManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_Awake_m36FA0FF01060DFB0B646460E5E3AA920C1D07BCE (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdManager_t2F03E384E6359CA43FA97E24C69702365861A034_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((AdManager_t2F03E384E6359CA43FA97E24C69702365861A034_StaticFields*)il2cpp_codegen_static_fields_for(AdManager_t2F03E384E6359CA43FA97E24C69702365861A034_il2cpp_TypeInfo_var))->set_instance_5(__this);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_Start_mC096B2B45985099CB11DDEFF2F722CD32727FA78 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_mDC004D56EC7E86057B44F99042E6EE2CFC3ACE4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11FABC036BA993CD01CAD9FDC0DA0CECDDE23574);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54A72DBF45493D5880064C999B549B9F95FFFD5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99CC765D76A0B678F8EC10737EB6940A697E5FC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8F7C1CDC4D6F3E58556D0E5331D7D0CA827DCB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE1A3D479601E6166CE5E927065D3A1E515EF5AA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// log("Start");
		AdManager_log_m21090FC527F2DF60FD75528EFA44C7D9B4808B25(__this, _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, /*hidden argument*/NULL);
		// FreestarUnityBridge.SetAdRequestTestMode(true, "xxxxxxxx");  //OPTIONAL TEST MODE
		FreestarUnityBridge_SetAdRequestTestMode_m0B750FF10373242651E2210FD015D686150C75BA((bool)1, _stringLiteralD8F7C1CDC4D6F3E58556D0E5331D7D0CA827DCB0, /*hidden argument*/NULL);
		// FreestarUnityBridge.ShowPartnerChooser(true); //ONLY FOR TESTING PURPOSES; TURN OFF FOR PRODUCTION!
		FreestarUnityBridge_ShowPartnerChooser_m54EDD5CE704DCD49983845765913794BD971B264((bool)1, /*hidden argument*/NULL);
		// FreestarUnityBridge.initWithAPIKey("P8RIA3");  //iOS TEST KEY  Replace with yours in production.
		FreestarUnityBridge_initWithAPIKey_m113F0CBE23C73FC378EF0D68954B0F593346562C(_stringLiteral11FABC036BA993CD01CAD9FDC0DA0CECDDE23574, /*hidden argument*/NULL);
		// FreestarUnityBridge.setBannerAdListener(this);
		FreestarUnityBridge_setBannerAdListener_m30111F9003CEB07AA8B8D56933F126986421AC58(__this, /*hidden argument*/NULL);
		// FreestarUnityBridge.setInterstitialAdListener(this);
		FreestarUnityBridge_setInterstitialAdListener_m99AAE45CF335DBE9C8B28C5DA064CC3CF0CED21F(__this, /*hidden argument*/NULL);
		// FreestarUnityBridge.setRewardedAdListener(this);
		FreestarUnityBridge_setRewardedAdListener_mD26AB3D252EC5DF36E7146078A253B9981E09A89(__this, /*hidden argument*/NULL);
		// uiManager = GameObject.Find("Canvas").GetComponent<UIManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, /*hidden argument*/NULL);
		NullCheck(L_0);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_1;
		L_1 = GameObject_GetComponent_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_mDC004D56EC7E86057B44F99042E6EE2CFC3ACE4E(L_0, /*hidden argument*/GameObject_GetComponent_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_mDC004D56EC7E86057B44F99042E6EE2CFC3ACE4E_RuntimeMethod_var);
		__this->set_uiManager_6(L_1);
		// if (uiManager == null)
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_2 = __this->get_uiManager_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0072;
		}
	}
	{
		// Debug.Log("Can not find UIManager ");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral99CC765D76A0B678F8EC10737EB6940A697E5FC1, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_6;
		L_6 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_5, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_gameManager_7(L_6);
		// if (gameManager == null)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = __this->get_gameManager_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_00a4;
		}
	}
	{
		// Debug.Log("Can not find gameManager");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFE1A3D479601E6166CE5E927065D3A1E515EF5AA, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		// isRewardedAdLoaded = false;
		__this->set_isRewardedAdLoaded_10((bool)0);
		// isInterstitialAdLoaded = false;
		__this->set_isInterstitialAdLoaded_9((bool)0);
		// InvokeRepeating("loadSmallBannerAd", 20.0f, 40.0f);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteral54A72DBF45493D5880064C999B549B9F95FFFD5C, (20.0f), (40.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_OnApplicationFocus_mD550DB8121E58E80810CE4EA41C8E3312F38D6E8 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (hasFocus)
		bool L_0 = ___hasFocus0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// FreestarUnityBridge.Resume();
		FreestarUnityBridge_Resume_mA88E712EF9E893B666396E56E56ED687C985E8FA(/*hidden argument*/NULL);
		goto IL_0018;
	}

IL_0010:
	{
		// FreestarUnityBridge.Pause();
		FreestarUnityBridge_Pause_m5F366A6530D8C0327BB99355F510818906009A13(/*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Freestar.AdManager::onInterstitialAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_onInterstitialAdLoaded_m1AE090CC7787C4904B4FA83E5C5AB9D147000B0A (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB430B43118408E1AFC329EE27D258F421FEBDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC22BD4D14681E58858CB204C2B2FC09D51D79CF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// closeBanners();
		AdManager_closeBanners_m0A3509B1859E00BEB142026734968CAEA037C23C(__this, /*hidden argument*/NULL);
		// if (gameManager.gameOver)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gameManager_7();
		NullCheck(L_0);
		bool L_1 = L_0->get_gameOver_4();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// showInterstitialAd();
		AdManager_showInterstitialAd_mAA58095116BA0B610249ACABDBF9727540742310(__this, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_0022:
	{
		// isInterstitialAdLoaded = true;
		__this->set_isInterstitialAdLoaded_9((bool)1);
	}

IL_002b:
	{
		// updateStatusUI("Interstitial Ad Winner: " + FreestarUnityBridge.GetInterstitialAdWinner(placement) + " Placement: [" + placement + "]");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral9AB430B43118408E1AFC329EE27D258F421FEBDA);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9AB430B43118408E1AFC329EE27D258F421FEBDA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		String_t* L_6 = ___placement0;
		String_t* L_7;
		L_7 = FreestarUnityBridge_GetInterstitialAdWinner_mED404EA5CE632A7FE0035AD3641DB50BE64AD392(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralEC22BD4D14681E58858CB204C2B2FC09D51D79CF);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralEC22BD4D14681E58858CB204C2B2FC09D51D79CF);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		String_t* L_10 = ___placement0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		String_t* L_12;
		L_12 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_11, /*hidden argument*/NULL);
		AdManager_updateStatusUI_m60B723A7FB4F56B8D2770D5B7F6018AF45E954E6(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::onInterstitialAdFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_onInterstitialAdFailed_mE837EDC39E1A0E57CE2962476441A2F0E87946DB (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC19D986E4D2E638C4AE7484CADC76F22CF4305B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateStatusUI("Interstitial Ad: no-fillunRegisterAdListener");
		AdManager_updateStatusUI_m60B723A7FB4F56B8D2770D5B7F6018AF45E954E6(__this, _stringLiteralC19D986E4D2E638C4AE7484CADC76F22CF4305B3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::onInterstitialAdShown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_onInterstitialAdShown_m30B01DB819D0120606857FB5F7AC73CFC9F821F9 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Freestar.AdManager::onInterstitialAdClicked(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_onInterstitialAdClicked_mD8E3A11EF01480708C7BE312E63D8D446852621D (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Freestar.AdManager::onInterstitialAdDismissed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_onInterstitialAdDismissed_mBBD51D7DECE3A378601E50CFB5BBFD43ABF12DF1 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	{
		// gameManager.ResumeBackgroundMusic();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gameManager_7();
		NullCheck(L_0);
		GameManager_ResumeBackgroundMusic_m6B82DDF7EA1A305D9476937C7267534894234838(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::onRewardedAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_onRewardedAdLoaded_mC55BC8E1108EA8454F0E1A979818BCA6FBE6B792 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA01A6E097F1B7A2E8F7C758BDAE1DA75F9AE9E7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC22BD4D14681E58858CB204C2B2FC09D51D79CF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// closeBanners();
		AdManager_closeBanners_m0A3509B1859E00BEB142026734968CAEA037C23C(__this, /*hidden argument*/NULL);
		// updateStatusUI("Rewarded Ad Winner: " + FreestarUnityBridge.GetRewardedAdWinner(placement) + " Placement: [" + placement + "]");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA01A6E097F1B7A2E8F7C758BDAE1DA75F9AE9E7D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA01A6E097F1B7A2E8F7C758BDAE1DA75F9AE9E7D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		String_t* L_3 = ___placement0;
		String_t* L_4;
		L_4 = FreestarUnityBridge_GetRewardedAdWinner_m9A18090099F0322A5C1773B01A33321F29AE98F5(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralEC22BD4D14681E58858CB204C2B2FC09D51D79CF);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralEC22BD4D14681E58858CB204C2B2FC09D51D79CF);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		String_t* L_7 = ___placement0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		String_t* L_9;
		L_9 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_8, /*hidden argument*/NULL);
		AdManager_updateStatusUI_m60B723A7FB4F56B8D2770D5B7F6018AF45E954E6(__this, L_9, /*hidden argument*/NULL);
		// if (!gameManager.gameOver)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_10 = __this->get_gameManager_7();
		NullCheck(L_10);
		bool L_11 = L_10->get_gameOver_4();
		V_0 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// showRewardedAd();
		AdManager_showRewardedAd_m7E19A16A3A41A69871B90B1F12B74F3F04C19A59(__this, /*hidden argument*/NULL);
		goto IL_0065;
	}

IL_005c:
	{
		// isRewardedAdLoaded = true;
		__this->set_isRewardedAdLoaded_10((bool)1);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Freestar.AdManager::onRewardedAdFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_onRewardedAdFailed_mE471AADCEBF7383A6E8270A07F28A65F05545D5B (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC25E2F021E6B33AD9AD34154967A434DB57E66E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA7ADB93377BDB68259E3198B9F9412F19818CD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateStatusUI("Rewarded Ad: no-fill");
		AdManager_updateStatusUI_m60B723A7FB4F56B8D2770D5B7F6018AF45E954E6(__this, _stringLiteralCA7ADB93377BDB68259E3198B9F9412F19818CD0, /*hidden argument*/NULL);
		// uiManager.adFailedPanel.SetActive(true);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_0 = __this->get_uiManager_6();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_adFailedPanel_23();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// Invoke("closeMessagePanels", 8.0f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralBC25E2F021E6B33AD9AD34154967A434DB57E66E, (8.0f), /*hidden argument*/NULL);
		// Invoke("GameOver", 10.0f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, (10.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::onRewardedAdShown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_onRewardedAdShown_m1FEF3D9B3AC082435F218080B0ABEEFDDFE3A88D (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Freestar.AdManager::onRewardedAdFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_onRewardedAdFinished_mA36352DA20B694820935FF44541AA62C4001C05B (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	{
		// uiManager.earnLivePanel.SetActive(true);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_0 = __this->get_uiManager_6();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_earnLivePanel_22();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// uiManager.UpdateEarnLiveStatus(true);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_2 = __this->get_uiManager_6();
		NullCheck(L_2);
		UIManager_UpdateEarnLiveStatus_m73D8110D49BB26BE9C7961B7EE59CB902373431C(L_2, (bool)1, /*hidden argument*/NULL);
		// gameManager.gamePause = false;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3 = __this->get_gameManager_7();
		NullCheck(L_3);
		L_3->set_gamePause_5((bool)0);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::onRewardedAdDismissed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_onRewardedAdDismissed_m4F9B5D1193EFF4CE82A94FD269FB8CF75D3D05DE (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC25E2F021E6B33AD9AD34154967A434DB57E66E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager.ResumeBackgroundMusic();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gameManager_7();
		NullCheck(L_0);
		GameManager_ResumeBackgroundMusic_m6B82DDF7EA1A305D9476937C7267534894234838(L_0, /*hidden argument*/NULL);
		// gameManager.UpdateResumeGameStatus(true);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_gameManager_7();
		NullCheck(L_1);
		GameManager_UpdateResumeGameStatus_mFB49713B4DF05E1492E79C1866725574446044B9(L_1, (bool)1, /*hidden argument*/NULL);
		// Invoke("closeMessagePanels", 2.0f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralBC25E2F021E6B33AD9AD34154967A434DB57E66E, (2.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::onBannerAdShowing(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_onBannerAdShowing_mBCD013CF95F427286EDECFED560F74B03AB56049 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___placement0, int32_t ___adSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31303BEB2EAB561468708782BBBC983E9AEE054A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB307652D67794FC66E1BB69DB1C3CE8E69ECF5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// log("onBannerAdShowing placement=[" + placement + "] adSize: " + adSize);
		String_t* L_0 = ___placement0;
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___adSize1), /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralBB307652D67794FC66E1BB69DB1C3CE8E69ECF5B, L_0, _stringLiteral31303BEB2EAB561468708782BBBC983E9AEE054A, L_1, /*hidden argument*/NULL);
		AdManager_log_m21090FC527F2DF60FD75528EFA44C7D9B4808B25(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::onBannerAdClicked(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_onBannerAdClicked_mD033670F8896376471567113553C80B3612BE8B2 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___placement0, int32_t ___adSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31303BEB2EAB561468708782BBBC983E9AEE054A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8F3E0FC79EA858955FEF64B9C8A6AB1C418F01C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// log("onBannerAdClicked placement=[" + placement + "] adSize: " + adSize);
		String_t* L_0 = ___placement0;
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___adSize1), /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralA8F3E0FC79EA858955FEF64B9C8A6AB1C418F01C, L_0, _stringLiteral31303BEB2EAB561468708782BBBC983E9AEE054A, L_1, /*hidden argument*/NULL);
		AdManager_log_m21090FC527F2DF60FD75528EFA44C7D9B4808B25(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::onBannerAdFailed(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_onBannerAdFailed_mF543C4DA4B2C96CA5E0FE4D3198D89DDA0D5AE1F (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___placement0, int32_t ___adSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31303BEB2EAB561468708782BBBC983E9AEE054A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66CF118C39DA81533BC0878C188680B7B39CEC67);
		s_Il2CppMethodInitialized = true;
	}
	{
		// log("onBannerAdFailed placement=[" + placement + "] adSize: " + adSize);
		String_t* L_0 = ___placement0;
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___adSize1), /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral66CF118C39DA81533BC0878C188680B7B39CEC67, L_0, _stringLiteral31303BEB2EAB561468708782BBBC983E9AEE054A, L_1, /*hidden argument*/NULL);
		AdManager_log_m21090FC527F2DF60FD75528EFA44C7D9B4808B25(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::loadInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_loadInterstitialAd_m02643EE91EFD104DDDD831380CF98BA036B6E020 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD3ED8CAF53672069BA43574C7FDEACF72DB0655);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// gameManager.PauseBackgroundMusic();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gameManager_7();
		NullCheck(L_0);
		GameManager_PauseBackgroundMusic_mA813D8371D28C1536DF528BA18BFA0573BF29A66(L_0, /*hidden argument*/NULL);
		// if (isInterstitialAdLoaded)
		bool L_1 = __this->get_isInterstitialAdLoaded_9();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// showInterstitialAd();
		AdManager_showInterstitialAd_mAA58095116BA0B610249ACABDBF9727540742310(__this, /*hidden argument*/NULL);
		goto IL_002f;
	}

IL_0022:
	{
		// FreestarUnityBridge.loadInterstitialAd("");
		FreestarUnityBridge_loadInterstitialAd_m24A10BA4BFCA25F1A448977B6FC1B3AC47033F35(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// log("Load Interstitial Ad...");
		AdManager_log_m21090FC527F2DF60FD75528EFA44C7D9B4808B25(__this, _stringLiteralBD3ED8CAF53672069BA43574C7FDEACF72DB0655, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::showInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_showInterstitialAd_mAA58095116BA0B610249ACABDBF9727540742310 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB58EA1A00DFED492CAFFA4370C8A6B6EA41F532A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// log("Show Interstitial Ad...");
		AdManager_log_m21090FC527F2DF60FD75528EFA44C7D9B4808B25(__this, _stringLiteralB58EA1A00DFED492CAFFA4370C8A6B6EA41F532A, /*hidden argument*/NULL);
		// FreestarUnityBridge.showInterstitialAd("");
		FreestarUnityBridge_showInterstitialAd_mF9BC5CA44607B6C35470CD9796641135425679CF(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::loadSmallBannerAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_loadSmallBannerAd_mEDA871EA7FF07F394B6B65B8F63FCE7C524CD12A (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral650B39C76C0369B694601CD1448018A56343EF70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// log("Load Small Banner Ad...");
		AdManager_log_m21090FC527F2DF60FD75528EFA44C7D9B4808B25(__this, _stringLiteral650B39C76C0369B694601CD1448018A56343EF70, /*hidden argument*/NULL);
		// if (FreestarUnityBridge.IsBannerAdShowing(null, FreestarConstants.BANNER_AD_SIZE_300x250))
		bool L_0;
		L_0 = FreestarUnityBridge_IsBannerAdShowing_m2BB717C0EB94BB8B3164BD63277EFE3843A23508((String_t*)NULL, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// FreestarUnityBridge.CloseBannerAd(null, FreestarConstants.BANNER_AD_SIZE_300x250);
		FreestarUnityBridge_CloseBannerAd_mA373DCF7BBEBC07CA7B733E2D95EF4BC98F575AF((String_t*)NULL, 1, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// FreestarUnityBridge.ShowBannerAd(null, FreestarConstants.BANNER_AD_SIZE_320x50, FreestarConstants.BANNER_AD_POSITION_BOTTOM);
		FreestarUnityBridge_ShowBannerAd_m46699BF0816FD63AAC02A56D164F26AFE750D3FD((String_t*)NULL, 0, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::loadMRECBannerAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_loadMRECBannerAd_m8EE8D6906949732026D15269A26027FE762828CF (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6F009E4272DEE267D2A461A7AAFCD20495CDA79);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// log("Load MREC Banner Ad...");
		AdManager_log_m21090FC527F2DF60FD75528EFA44C7D9B4808B25(__this, _stringLiteralD6F009E4272DEE267D2A461A7AAFCD20495CDA79, /*hidden argument*/NULL);
		// if (FreestarUnityBridge.IsBannerAdShowing(null, FreestarConstants.BANNER_AD_SIZE_320x50))
		bool L_0;
		L_0 = FreestarUnityBridge_IsBannerAdShowing_m2BB717C0EB94BB8B3164BD63277EFE3843A23508((String_t*)NULL, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// FreestarUnityBridge.CloseBannerAd(null, FreestarConstants.BANNER_AD_SIZE_320x50);
		FreestarUnityBridge_CloseBannerAd_mA373DCF7BBEBC07CA7B733E2D95EF4BC98F575AF((String_t*)NULL, 0, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// FreestarUnityBridge.ShowBannerAd(null, FreestarConstants.BANNER_AD_SIZE_300x250, FreestarConstants.BANNER_AD_POSITION_BOTTOM);
		FreestarUnityBridge_ShowBannerAd_m46699BF0816FD63AAC02A56D164F26AFE750D3FD((String_t*)NULL, 1, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::closeBanners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_closeBanners_m0A3509B1859E00BEB142026734968CAEA037C23C (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (FreestarUnityBridge.IsBannerAdShowing(null, FreestarConstants.BANNER_AD_SIZE_320x50))
		bool L_0;
		L_0 = FreestarUnityBridge_IsBannerAdShowing_m2BB717C0EB94BB8B3164BD63277EFE3843A23508((String_t*)NULL, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// FreestarUnityBridge.CloseBannerAd(null, FreestarConstants.BANNER_AD_SIZE_320x50);
		FreestarUnityBridge_CloseBannerAd_mA373DCF7BBEBC07CA7B733E2D95EF4BC98F575AF((String_t*)NULL, 0, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// if (FreestarUnityBridge.IsBannerAdShowing(null, FreestarConstants.BANNER_AD_SIZE_300x250))
		bool L_2;
		L_2 = FreestarUnityBridge_IsBannerAdShowing_m2BB717C0EB94BB8B3164BD63277EFE3843A23508((String_t*)NULL, 1, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// FreestarUnityBridge.CloseBannerAd(null, FreestarConstants.BANNER_AD_SIZE_300x250);
		FreestarUnityBridge_CloseBannerAd_mA373DCF7BBEBC07CA7B733E2D95EF4BC98F575AF((String_t*)NULL, 1, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Freestar.AdManager::loadRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_loadRewardedAd_mCF3DEB44FCDE41ABD9A8CFB699D19F1B0002DA20 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE91EE827215DF8F672F577D68C933A99EA24C8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// gameManager.PauseBackgroundMusic();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gameManager_7();
		NullCheck(L_0);
		GameManager_PauseBackgroundMusic_mA813D8371D28C1536DF528BA18BFA0573BF29A66(L_0, /*hidden argument*/NULL);
		// if (isRewardedAdLoaded)
		bool L_1 = __this->get_isRewardedAdLoaded_10();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// showRewardedAd();
		AdManager_showRewardedAd_m7E19A16A3A41A69871B90B1F12B74F3F04C19A59(__this, /*hidden argument*/NULL);
		goto IL_002f;
	}

IL_0022:
	{
		// FreestarUnityBridge.loadRewardedAd("");
		FreestarUnityBridge_loadRewardedAd_mB9124BDF9A7BFD8DE3F1C9AB166FD694999DB771(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// log("Load Reward Ad...");
		AdManager_log_m21090FC527F2DF60FD75528EFA44C7D9B4808B25(__this, _stringLiteralBE91EE827215DF8F672F577D68C933A99EA24C8F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::showRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_showRewardedAd_m7E19A16A3A41A69871B90B1F12B74F3F04C19A59 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral047A9CFE49A27D353E63BAAC07785FD6BDCE6D51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16F64B48CE03AD2C8628DC640D3E60B17532257D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1C5DF70D2547D43E891BED7C408177580788726);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// log("Show Reward Ad...");
		AdManager_log_m21090FC527F2DF60FD75528EFA44C7D9B4808B25(__this, _stringLiteral047A9CFE49A27D353E63BAAC07785FD6BDCE6D51, /*hidden argument*/NULL);
		// FreestarUnityBridge.showRewardedAd("", 30, "coins", "", "qwer1234");
		FreestarUnityBridge_showRewardedAd_mB16284DE2713CA574024D531941DAFE560A469B3(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, ((int32_t)30), _stringLiteral16F64B48CE03AD2C8628DC640D3E60B17532257D, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralC1C5DF70D2547D43E891BED7C408177580788726, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::updateStatusUI(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_updateStatusUI_m60B723A7FB4F56B8D2770D5B7F6018AF45E954E6 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___newStatus0, const RuntimeMethod* method)
{
	{
		// callBackStatus = newStatus;
		String_t* L_0 = ___newStatus0;
		__this->set_callBackStatus_8(L_0);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::unRegisterAdListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_unRegisterAdListener_m5E1DC338EAEABA28B7399DF82529F6E7C2061B4D (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method)
{
	{
		// FreestarUnityBridge.removeBannerAdListener();
		FreestarUnityBridge_removeBannerAdListener_m001738D144BFF03C76BBBF982FA81E529D2640B5(/*hidden argument*/NULL);
		// FreestarUnityBridge.removeRewardedAdListener();
		FreestarUnityBridge_removeRewardedAdListener_m572879FF35F2EE25DB1F9BDC7AA6FC96D3828787(/*hidden argument*/NULL);
		// FreestarUnityBridge.removeInterstitialAdListener();
		FreestarUnityBridge_removeInterstitialAdListener_mB533DD68F4264ED5E79E84990377D4FC7FCD64A7(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_OnDestroy_mAC801D5FBDE3F18088F1CC16F33B187ED1D698C1 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F92B120A19B5052E25F19123527ADAF4420A949);
		s_Il2CppMethodInitialized = true;
	}
	{
		// log("OnDestroy Remove Ad event listener");
		AdManager_log_m21090FC527F2DF60FD75528EFA44C7D9B4808B25(__this, _stringLiteral9F92B120A19B5052E25F19123527ADAF4420A949, /*hidden argument*/NULL);
		// unRegisterAdListener();
		AdManager_unRegisterAdListener_m5E1DC338EAEABA28B7399DF82529F6E7C2061B4D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_log_m21090FC527F2DF60FD75528EFA44C7D9B4808B25 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral591F161FEB7D9FCAA857FFD1DDE7984A3C4D92DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(TAG + " " + msg);
		String_t* L_0 = ___msg0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral591F161FEB7D9FCAA857FFD1DDE7984A3C4D92DD, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_ResumeGame_mB9B25753A7EC2BF27A5E870FF81EE0ED88FD2E8B (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method)
{
	{
		// gameManager.UpdateResumeGameStatus(true);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gameManager_7();
		NullCheck(L_0);
		GameManager_UpdateResumeGameStatus_mFB49713B4DF05E1492E79C1866725574446044B9(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_GameOver_mC3C0D4B00626000DB75E5DC7BD6E6FCD203B2659 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6016AF1CE72794A6C2FF2B0D3605A9649CE69719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(GameObject.Find("Player(Clone)"));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral6016AF1CE72794A6C2FF2B0D3605A9649CE69719, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// gameManager.gameOver = true;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_gameManager_7();
		NullCheck(L_1);
		L_1->set_gameOver_4((bool)1);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::closeMessagePanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_closeMessagePanels_mB480921A780E17C971B080F226448849D27C3F84 (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method)
{
	{
		// uiManager.earnLivePanel.SetActive(false);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_0 = __this->get_uiManager_6();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_earnLivePanel_22();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// uiManager.adFailedPanel.SetActive(false);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_2 = __this->get_uiManager_6();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2->get_adFailedPanel_23();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.AdManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager__ctor_m33B7C9F809B26C298E72DC5D7C454DFC85E987FE (AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AppTrackingTransparency_appTrackingTransparencyCallbackReceived_m7FEFC1C457826F49C206185207E5A5DC71A114D0(int32_t ___result0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	AppTrackingTransparency_appTrackingTransparencyCallbackReceived_m7FEFC1C457826F49C206185207E5A5DC71A114D0(___result0, NULL);

}
// System.Void Balaso.AppTrackingTransparency::appTrackingTransparencyCallbackReceived(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparency_appTrackingTransparencyCallbackReceived_m7FEFC1C457826F49C206185207E5A5DC71A114D0 (int32_t ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m3A9225C248762C7A2610EFFEBFC176B9D9FDD500_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE41B9365BD178ECDC95C1756BAB7CCD2117362D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Debug.Log(string.Format("UnityAppTrackingTransparencyCallback received: {0}", result));
		int32_t L_0 = ___result0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralDE41B9365BD178ECDC95C1756BAB7CCD2117362D, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// if (OnAuthorizationRequestDone != null)
		Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF * L_4 = ((AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_StaticFields*)il2cpp_codegen_static_fields_for(AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_il2cpp_TypeInfo_var))->get_OnAuthorizationRequestDone_0();
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0087;
		}
	}
	{
		// switch (result)
		int32_t L_6 = ___result0;
		V_2 = L_6;
		int32_t L_7 = V_2;
		V_1 = L_7;
		int32_t L_8 = V_1;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0040;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_005c;
			}
			case 3:
			{
				goto IL_006a;
			}
		}
	}
	{
		goto IL_0078;
	}

IL_0040:
	{
		// OnAuthorizationRequestDone(AuthorizationStatus.NOT_DETERMINED);
		Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF * L_9 = ((AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_StaticFields*)il2cpp_codegen_static_fields_for(AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_il2cpp_TypeInfo_var))->get_OnAuthorizationRequestDone_0();
		NullCheck(L_9);
		Action_1_Invoke_m3A9225C248762C7A2610EFFEBFC176B9D9FDD500(L_9, 0, /*hidden argument*/Action_1_Invoke_m3A9225C248762C7A2610EFFEBFC176B9D9FDD500_RuntimeMethod_var);
		// break;
		goto IL_0086;
	}

IL_004e:
	{
		// OnAuthorizationRequestDone(AuthorizationStatus.RESTRICTED);
		Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF * L_10 = ((AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_StaticFields*)il2cpp_codegen_static_fields_for(AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_il2cpp_TypeInfo_var))->get_OnAuthorizationRequestDone_0();
		NullCheck(L_10);
		Action_1_Invoke_m3A9225C248762C7A2610EFFEBFC176B9D9FDD500(L_10, 1, /*hidden argument*/Action_1_Invoke_m3A9225C248762C7A2610EFFEBFC176B9D9FDD500_RuntimeMethod_var);
		// break;
		goto IL_0086;
	}

IL_005c:
	{
		// OnAuthorizationRequestDone(AuthorizationStatus.DENIED);
		Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF * L_11 = ((AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_StaticFields*)il2cpp_codegen_static_fields_for(AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_il2cpp_TypeInfo_var))->get_OnAuthorizationRequestDone_0();
		NullCheck(L_11);
		Action_1_Invoke_m3A9225C248762C7A2610EFFEBFC176B9D9FDD500(L_11, 2, /*hidden argument*/Action_1_Invoke_m3A9225C248762C7A2610EFFEBFC176B9D9FDD500_RuntimeMethod_var);
		// break;
		goto IL_0086;
	}

IL_006a:
	{
		// OnAuthorizationRequestDone(AuthorizationStatus.AUTHORIZED);
		Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF * L_12 = ((AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_StaticFields*)il2cpp_codegen_static_fields_for(AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_il2cpp_TypeInfo_var))->get_OnAuthorizationRequestDone_0();
		NullCheck(L_12);
		Action_1_Invoke_m3A9225C248762C7A2610EFFEBFC176B9D9FDD500(L_12, 3, /*hidden argument*/Action_1_Invoke_m3A9225C248762C7A2610EFFEBFC176B9D9FDD500_RuntimeMethod_var);
		// break;
		goto IL_0086;
	}

IL_0078:
	{
		// OnAuthorizationRequestDone(AuthorizationStatus.NOT_DETERMINED);
		Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF * L_13 = ((AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_StaticFields*)il2cpp_codegen_static_fields_for(AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_il2cpp_TypeInfo_var))->get_OnAuthorizationRequestDone_0();
		NullCheck(L_13);
		Action_1_Invoke_m3A9225C248762C7A2610EFFEBFC176B9D9FDD500(L_13, 0, /*hidden argument*/Action_1_Invoke_m3A9225C248762C7A2610EFFEBFC176B9D9FDD500_RuntimeMethod_var);
		// break;
		goto IL_0086;
	}

IL_0086:
	{
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void Balaso.AppTrackingTransparency::requestTrackingAuthorization(Balaso.AppTrackingTransparency/AppTrackingTransparencyCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparency_requestTrackingAuthorization_mC1402DAA52762CCC283012C8C343B06BB47160F8 (AppTrackingTransparencyCallback_t40DFDE8BF747E57724D8ADD8D638DD1A6A11D1C4 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(requestTrackingAuthorization)(____callback0_marshaled);

}
// System.String Balaso.AppTrackingTransparency::identifierForAdvertising()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppTrackingTransparency_identifierForAdvertising_mE11449F973881BFCA4A54B7A69C861696F0E9634 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(identifierForAdvertising)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Int32 Balaso.AppTrackingTransparency::trackingAuthorizationStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppTrackingTransparency_trackingAuthorizationStatus_mA779B7A9037A814E182C2089A7C57CCA5D4F6EB9 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(trackingAuthorizationStatus)();

	return returnValue;
}
// System.Void Balaso.AppTrackingTransparency::registerAppForAdNetworkAttribution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparency_registerAppForAdNetworkAttribution_m25D3DA60EEC8EC5DE0A5AE34BD8CC29044FB91C7 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(registerAppForAdNetworkAttribution)();

}
// System.Void Balaso.AppTrackingTransparency::updateConversionValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparency_updateConversionValue_m8E22817BBD13A178DDA97F38576083FB9CA8FC97 (int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(updateConversionValue)(___value0);

}
// Balaso.AppTrackingTransparency/AuthorizationStatus Balaso.AppTrackingTransparency::get_TrackingAuthorizationStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AppTrackingTransparency_get_TrackingAuthorizationStatus_m189119ADA59FC38F9E55BCAD55491B368DC073F9 (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return (AuthorizationStatus) trackingAuthorizationStatus();
		int32_t L_0;
		L_0 = AppTrackingTransparency_trackingAuthorizationStatus_mA779B7A9037A814E182C2089A7C57CCA5D4F6EB9(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Balaso.AppTrackingTransparency::UpdateConversionValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparency_UpdateConversionValue_m948C205F74D21F30E29E81215696CB77F4A2348C (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17EF9FEC8F511A0070ECD396DBF2ECAABC86A425);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC267124F1BC4775959337DB00E0EACF8E5EEA07);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.Log(string.Format("Updating conversion value to {0}", value));
		int32_t L_2 = ___value0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral17EF9FEC8F511A0070ECD396DBF2ECAABC86A425, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// updateConversionValue(value);
		int32_t L_6 = ___value0;
		AppTrackingTransparency_updateConversionValue_m8E22817BBD13A178DDA97F38576083FB9CA8FC97(L_6, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_002e:
	{
		// Debug.Log(string.Format("Platform '{0}' not supported", Application.platform));
		int32_t L_7;
		L_7 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralDC267124F1BC4775959337DB00E0EACF8E5EEA07, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_10, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void Balaso.AppTrackingTransparency::RegisterAppForAdNetworkAttribution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparency_RegisterAppForAdNetworkAttribution_m6F26C8114C0B4DB5ACD6ED9910CD9086EE37A384 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7945B43921F79DEDCC4031E76ED386FD62EFC9FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC267124F1BC4775959337DB00E0EACF8E5EEA07);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// Debug.Log("Registering App for Ad Network Attribution");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral7945B43921F79DEDCC4031E76ED386FD62EFC9FB, /*hidden argument*/NULL);
		// registerAppForAdNetworkAttribution();
		AppTrackingTransparency_registerAppForAdNetworkAttribution_m25D3DA60EEC8EC5DE0A5AE34BD8CC29044FB91C7(/*hidden argument*/NULL);
		goto IL_003e;
	}

IL_0022:
	{
		// Debug.Log(string.Format("Platform '{0}' not supported", Application.platform));
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralDC267124F1BC4775959337DB00E0EACF8E5EEA07, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Balaso.AppTrackingTransparency::RequestTrackingAuthorization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparency_RequestTrackingAuthorization_m9A302B61A91AA36EF7E63E8AA141E572BC3B686B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppTrackingTransparencyCallback_t40DFDE8BF747E57724D8ADD8D638DD1A6A11D1C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppTrackingTransparency_appTrackingTransparencyCallbackReceived_m7FEFC1C457826F49C206185207E5A5DC71A114D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC267124F1BC4775959337DB00E0EACF8E5EEA07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE38A345E3DB07836E905E964269714ADE73E6C95);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.Log("Requesting authorization to iOS...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE38A345E3DB07836E905E964269714ADE73E6C95, /*hidden argument*/NULL);
		// requestTrackingAuthorization(appTrackingTransparencyCallbackReceived);
		AppTrackingTransparencyCallback_t40DFDE8BF747E57724D8ADD8D638DD1A6A11D1C4 * L_2 = (AppTrackingTransparencyCallback_t40DFDE8BF747E57724D8ADD8D638DD1A6A11D1C4 *)il2cpp_codegen_object_new(AppTrackingTransparencyCallback_t40DFDE8BF747E57724D8ADD8D638DD1A6A11D1C4_il2cpp_TypeInfo_var);
		AppTrackingTransparencyCallback__ctor_m54BE9F376E38551D59E6E568E65B48FE3AF81EB1(L_2, NULL, (intptr_t)((intptr_t)AppTrackingTransparency_appTrackingTransparencyCallbackReceived_m7FEFC1C457826F49C206185207E5A5DC71A114D0_RuntimeMethod_var), /*hidden argument*/NULL);
		AppTrackingTransparency_requestTrackingAuthorization_mC1402DAA52762CCC283012C8C343B06BB47160F8(L_2, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_002e:
	{
		// Debug.Log(string.Format("Platform '{0}' not supported", Application.platform));
		int32_t L_3;
		L_3 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralDC267124F1BC4775959337DB00E0EACF8E5EEA07, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.String Balaso.AppTrackingTransparency::IdentifierForAdvertising()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppTrackingTransparency_IdentifierForAdvertising_m478D58E42030B71FA9C6964069659D2736639D1F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC267124F1BC4775959337DB00E0EACF8E5EEA07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2E5FA24F15522F9C120655F6EFA3F5DD143867F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// if (Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.Log("Obtaining IDFA from iOS...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF2E5FA24F15522F9C120655F6EFA3F5DD143867F, /*hidden argument*/NULL);
		// string idfa = identifierForAdvertising();
		String_t* L_2;
		L_2 = AppTrackingTransparency_identifierForAdvertising_mE11449F973881BFCA4A54B7A69C861696F0E9634(/*hidden argument*/NULL);
		V_1 = L_2;
		// return string.IsNullOrEmpty(idfa) ? null : idfa;
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_5 = V_1;
		G_B4_0 = L_5;
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = ((String_t*)(NULL));
	}

IL_002b:
	{
		V_2 = G_B4_0;
		goto IL_004d;
	}

IL_002e:
	{
		// Debug.Log(string.Format("Platform '{0}' not supported", Application.platform));
		int32_t L_6;
		L_6 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralDC267124F1BC4775959337DB00E0EACF8E5EEA07, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_9, /*hidden argument*/NULL);
		// return null;
		V_2 = (String_t*)NULL;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		String_t* L_10 = V_2;
		return L_10;
	}
}
// System.Void Balaso.AppTrackingTransparency::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparency__ctor_m332F7E1D82AB8EF5DB6CFB3EF68510A366995711 (AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AppTrackingTransparencyExample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparencyExample_Awake_mF94BE2F3CFD5CD7B065C67B892CE1BF521A8F520 (AppTrackingTransparencyExample_tAE917351B1F2BEF1DFA943284F17FCFDA7070FE0 * __this, const RuntimeMethod* method)
{
	{
		// AppTrackingTransparency.RegisterAppForAdNetworkAttribution();
		AppTrackingTransparency_RegisterAppForAdNetworkAttribution_m6F26C8114C0B4DB5ACD6ED9910CD9086EE37A384(/*hidden argument*/NULL);
		// AppTrackingTransparency.UpdateConversionValue(3);
		AppTrackingTransparency_UpdateConversionValue_m948C205F74D21F30E29E81215696CB77F4A2348C(3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppTrackingTransparencyExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparencyExample_Start_m0ABB30A077CB4514ADFADF900A61354B0BA7890D (AppTrackingTransparencyExample_tAE917351B1F2BEF1DFA943284F17FCFDA7070FE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m825DC9C3F0F51FFF82330621EDEA90555FEA155B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppTrackingTransparencyExample_OnAuthorizationRequestDone_m2E8FB46D783F613F774F21F16A4BC5F9772EBF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationStatus_t11108D54ED10456FFB9652A518D81138C0ECD677_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D92B2B75B1AF512D22FF5FE6E2C2111AB054D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C19EA4D2A3CE2275F85C301779C3522123C1A78);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// AppTrackingTransparency.OnAuthorizationRequestDone += OnAuthorizationRequestDone;
		Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF * L_0 = ((AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_StaticFields*)il2cpp_codegen_static_fields_for(AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_il2cpp_TypeInfo_var))->get_OnAuthorizationRequestDone_0();
		Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF * L_1 = (Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF *)il2cpp_codegen_object_new(Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF_il2cpp_TypeInfo_var);
		Action_1__ctor_m825DC9C3F0F51FFF82330621EDEA90555FEA155B(L_1, __this, (intptr_t)((intptr_t)AppTrackingTransparencyExample_OnAuthorizationRequestDone_m2E8FB46D783F613F774F21F16A4BC5F9772EBF5D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m825DC9C3F0F51FFF82330621EDEA90555FEA155B_RuntimeMethod_var);
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_StaticFields*)il2cpp_codegen_static_fields_for(AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_il2cpp_TypeInfo_var))->set_OnAuthorizationRequestDone_0(((Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF *)CastclassSealed((RuntimeObject*)L_2, Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF_il2cpp_TypeInfo_var)));
		// AppTrackingTransparency.AuthorizationStatus currentStatus = AppTrackingTransparency.TrackingAuthorizationStatus;
		int32_t L_3;
		L_3 = AppTrackingTransparency_get_TrackingAuthorizationStatus_m189119ADA59FC38F9E55BCAD55491B368DC073F9(/*hidden argument*/NULL);
		V_0 = L_3;
		// Debug.Log(string.Format("Current authorization status: {0}", currentStatus.ToString()));
		RuntimeObject * L_4 = Box(AuthorizationStatus_t11108D54ED10456FFB9652A518D81138C0ECD677_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		V_0 = *(int32_t*)UnBox(L_4);
		String_t* L_6;
		L_6 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral56D92B2B75B1AF512D22FF5FE6E2C2111AB054D0, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
		// if (currentStatus != AppTrackingTransparency.AuthorizationStatus.AUTHORIZED)
		int32_t L_7 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0062;
		}
	}
	{
		// Debug.Log("Requesting authorization...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6C19EA4D2A3CE2275F85C301779C3522123C1A78, /*hidden argument*/NULL);
		// AppTrackingTransparency.RequestTrackingAuthorization();
		AppTrackingTransparency_RequestTrackingAuthorization_m9A302B61A91AA36EF7E63E8AA141E572BC3B686B(/*hidden argument*/NULL);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void AppTrackingTransparencyExample::OnAuthorizationRequestDone(Balaso.AppTrackingTransparency/AuthorizationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparencyExample_OnAuthorizationRequestDone_m2E8FB46D783F613F774F21F16A4BC5F9772EBF5D (AppTrackingTransparencyExample_tAE917351B1F2BEF1DFA943284F17FCFDA7070FE0 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AEDC8D36B32EA96B27BF61DA83F3470C316222E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CB162A7FC3FDA311A764ABC2C6FA859701E33B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral643FDB4D2A9EA1C41111CA9FA068940D621F65DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F4A54945873144BE1912E4265D020DF6D954726);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8F056F1DB76BFE7511A051F84F4CADE907C3A3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch(status)
		int32_t L_0 = ___status0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0037;
			}
			case 3:
			{
				goto IL_0044;
			}
		}
	}
	{
		goto IL_0051;
	}

IL_001d:
	{
		// Debug.Log("AuthorizationStatus: NOT_DETERMINED");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8F8F056F1DB76BFE7511A051F84F4CADE907C3A3, /*hidden argument*/NULL);
		// break;
		goto IL_0051;
	}

IL_002a:
	{
		// Debug.Log("AuthorizationStatus: RESTRICTED");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral643FDB4D2A9EA1C41111CA9FA068940D621F65DF, /*hidden argument*/NULL);
		// break;
		goto IL_0051;
	}

IL_0037:
	{
		// Debug.Log("AuthorizationStatus: DENIED");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3CB162A7FC3FDA311A764ABC2C6FA859701E33B2, /*hidden argument*/NULL);
		// break;
		goto IL_0051;
	}

IL_0044:
	{
		// Debug.Log("AuthorizationStatus: AUTHORIZED");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2AEDC8D36B32EA96B27BF61DA83F3470C316222E, /*hidden argument*/NULL);
		// break;
		goto IL_0051;
	}

IL_0051:
	{
		// Debug.Log(string.Format("IDFA: {0}", AppTrackingTransparency.IdentifierForAdvertising()));
		String_t* L_3;
		L_3 = AppTrackingTransparency_IdentifierForAdvertising_m478D58E42030B71FA9C6964069659D2736639D1F(/*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral8F4A54945873144BE1912E4265D020DF6D954726, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AppTrackingTransparencyExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparencyExample__ctor_m6A1A0B839902364C6071A85AE164588B0AA5AB2B (AppTrackingTransparencyExample_tAE917351B1F2BEF1DFA943284F17FCFDA7070FE0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BGScroller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGScroller_Start_m798A0B7E3086114E9522C9F3A199C3835DE70CCE (BGScroller_tC9AEAC7CF76463CFC02EC52AFBD29C22860C7F41 * __this, const RuntimeMethod* method)
{
	{
		// startPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_startPosition_6(L_1);
		// }
		return;
	}
}
// System.Void BGScroller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGScroller_Update_m9E56B533FCECCF65FAA64A7ACA4CDE3BBA4FC610 (BGScroller_tC9AEAC7CF76463CFC02EC52AFBD29C22860C7F41 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// float newPosition = Mathf.Repeat(Time.time * scrollSpeed, tileSize);
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_scrollSpeed_4();
		float L_2 = __this->get_tileSize_5();
		float L_3;
		L_3 = Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE(((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// transform.position = startPosition + Vector3.down * newPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_startPosition_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		float L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BGScroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGScroller__ctor_m29247627096BE7B1CE9FB865D62DC2EEFB47C233 (BGScroller_tC9AEAC7CF76463CFC02EC52AFBD29C22860C7F41 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Boundary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary__ctor_m4579D134A5CA94475A31A63501985143D3AC6F3B (Boundary_tE54FD347658847911B3544434B71A381209DC436 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyAI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Start_mC5494C97D0214D04302BAE4F82F48D13AD0D25BE (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_mDC004D56EC7E86057B44F99042E6EE2CFC3ACE4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// uiManager = GameObject.Find("Canvas").GetComponent<UIManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, /*hidden argument*/NULL);
		NullCheck(L_0);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_1;
		L_1 = GameObject_GetComponent_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_mDC004D56EC7E86057B44F99042E6EE2CFC3ACE4E(L_0, /*hidden argument*/GameObject_GetComponent_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_mDC004D56EC7E86057B44F99042E6EE2CFC3ACE4E_RuntimeMethod_var);
		__this->set_uiManager_6(L_1);
		// gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3;
		L_3 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_2, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_gameManager_8(L_3);
		// }
		return;
	}
}
// System.Void EnemyAI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Update_mBB23B2D10604094D0D5BDD6D02A5C51DFCDFAA84 (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		// if (!gameManager.gamePause)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gameManager_8();
		NullCheck(L_0);
		bool L_1 = L_0->get_gamePause_5();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0086;
		}
	}
	{
		// transform.Translate(Vector3.down * speed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		float L_5 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_3, L_8, /*hidden argument*/NULL);
		// if (transform.position.y < -7)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		V_1 = (bool)((((float)L_11) < ((float)(-7.0f)))? 1 : 0);
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0083;
		}
	}
	{
		// float randomX = Random.Range(-2.45f, 2.45f);
		float L_13;
		L_13 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-2.45000005f), (2.45000005f), /*hidden argument*/NULL);
		V_2 = L_13;
		// transform.position = new Vector3(randomX, 7, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_15 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), L_15, (7.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_16, /*hidden argument*/NULL);
	}

IL_0083:
	{
		goto IL_0094;
	}

IL_0086:
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_17, /*hidden argument*/NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void EnemyAI::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_OnTriggerEnter2D_m8870FD282AF9CA199DD125AD217C4E6A56E85D8E (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BDC1CB888AE05C61D0AF5CE7E6BC76BBAF18C0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * V_3 = NULL;
	bool V_4 = false;
	{
		// if (other.tag == "Laser")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral0BDC1CB888AE05C61D0AF5CE7E6BC76BBAF18C0F, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00ab;
		}
	}
	{
		// if (other.transform.parent != null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___other0;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		// Destroy(other.transform.parent.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9 = ___other0;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_12, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___other0;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_14, /*hidden argument*/NULL);
		// Instantiate(enemyExplosionPrefab, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_enemyExplosionPrefab_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_15, L_17, L_18, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// uiManager.UpdateScores(10);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_20 = __this->get_uiManager_6();
		NullCheck(L_20);
		UIManager_UpdateScores_m717632F6A4DAC456F694C6C95CB3E772E1D24A45(L_20, ((int32_t)10), /*hidden argument*/NULL);
		// AudioSource.PlayClipAtPoint(audioClip, Camera.main.transform.position, 1f);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_21 = __this->get_audioClip_7();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_22;
		L_22 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC(L_21, L_24, (1.0f), /*hidden argument*/NULL);
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_25, /*hidden argument*/NULL);
		goto IL_0126;
	}

IL_00ab:
	{
		// else if (other.tag == "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_26 = ___other0;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_26, /*hidden argument*/NULL);
		bool L_28;
		L_28 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_27, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		V_2 = L_28;
		bool L_29 = V_2;
		if (!L_29)
		{
			goto IL_0126;
		}
	}
	{
		// Player player = other.GetComponent<Player>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_30 = ___other0;
		NullCheck(L_30);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_31;
		L_31 = Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B(L_30, /*hidden argument*/Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		V_3 = L_31;
		// if (player != null)
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_32 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_32, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_33;
		bool L_34 = V_4;
		if (!L_34)
		{
			goto IL_00dd;
		}
	}
	{
		// player.Damage();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_35 = V_3;
		NullCheck(L_35);
		Player_Damage_mC0B33743234347979F505E277CDF4AE51EB4F3C3(L_35, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		// Instantiate(enemyExplosionPrefab, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_enemyExplosionPrefab_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
		L_39 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_36, L_38, L_39, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// AudioSource.PlayClipAtPoint(audioClip, Camera.main.transform.position, 1f);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_41 = __this->get_audioClip_7();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_42;
		L_42 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_43, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC(L_41, L_44, (1.0f), /*hidden argument*/NULL);
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_45, /*hidden argument*/NULL);
	}

IL_0126:
	{
		// }
		return;
	}
}
// System.Void EnemyAI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI__ctor_mAF4FEC29EA4ADF864B4641448BFF55028ED4B3BC (EnemyAI_t145CB41D735873AEEB5EE9C216137FAC2BC8CA82 * __this, const RuntimeMethod* method)
{
	{
		// private float speed = 5.0f;
		__this->set_speed_4((5.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExplosionEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplosionEffect_Start_m114E0697B288070283BF7000D3089ED09BA78C00 (ExplosionEffect_t6E12084ED1B1E6571EB22AC1A185A0E631F65D3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(this.gameObject, 4f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_0, (4.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ExplosionEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplosionEffect__ctor_mD224D64AF9D80091A524D453FBE7F9277DC2AB38 (ExplosionEffect_t6E12084ED1B1E6571EB22AC1A185A0E631F65D3A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Freestar.FreestarIOSBannerMessagePasser::BannerAdShown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarIOSBannerMessagePasser_BannerAdShown_m73ACD989F987A8D885F79618867D08864D2AD72D (FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8 * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreestarBannerAdCallbackReceiver_tEA762F014EA4FF6D986DD16EFD35ABAF9825F100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	{
		// string[] elems = data.Split(',');
		String_t* L_0 = ___data0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// this.receiver.onBannerAdShowing(elems[0], int.Parse(elems[1]));
		RuntimeObject* L_4 = __this->get_receiver_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 1;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11;
		L_11 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_10, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(0 /* System.Void Freestar.FreestarBannerAdCallbackReceiver::onBannerAdShowing(System.String,System.Int32) */, FreestarBannerAdCallbackReceiver_tEA762F014EA4FF6D986DD16EFD35ABAF9825F100_il2cpp_TypeInfo_var, L_4, L_7, L_11);
		// }
		return;
	}
}
// System.Void Freestar.FreestarIOSBannerMessagePasser::BannerAdClicked(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarIOSBannerMessagePasser_BannerAdClicked_mD5FCD99D7C43722B71B46C9B11BF21658625532D (FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8 * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreestarBannerAdCallbackReceiver_tEA762F014EA4FF6D986DD16EFD35ABAF9825F100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	{
		// string[] elems = data.Split(',');
		String_t* L_0 = ___data0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// this.receiver.onBannerAdClicked(elems[0], int.Parse(elems[1]));
		RuntimeObject* L_4 = __this->get_receiver_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 1;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11;
		L_11 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_10, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void Freestar.FreestarBannerAdCallbackReceiver::onBannerAdClicked(System.String,System.Int32) */, FreestarBannerAdCallbackReceiver_tEA762F014EA4FF6D986DD16EFD35ABAF9825F100_il2cpp_TypeInfo_var, L_4, L_7, L_11);
		// }
		return;
	}
}
// System.Void Freestar.FreestarIOSBannerMessagePasser::BannerAdFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarIOSBannerMessagePasser_BannerAdFailed_m883288B9A0C3329DD3A4E8CA5137D21BEDF3ACF4 (FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8 * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreestarBannerAdCallbackReceiver_tEA762F014EA4FF6D986DD16EFD35ABAF9825F100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	{
		// string[] elems = data.Split(',');
		String_t* L_0 = ___data0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// this.receiver.onBannerAdFailed(elems[0], int.Parse(elems[1]));
		RuntimeObject* L_4 = __this->get_receiver_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 1;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11;
		L_11 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_10, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(2 /* System.Void Freestar.FreestarBannerAdCallbackReceiver::onBannerAdFailed(System.String,System.Int32) */, FreestarBannerAdCallbackReceiver_tEA762F014EA4FF6D986DD16EFD35ABAF9825F100_il2cpp_TypeInfo_var, L_4, L_7, L_11);
		// }
		return;
	}
}
// System.Void Freestar.FreestarIOSBannerMessagePasser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarIOSBannerMessagePasser__ctor_m1325126FD45D1F0CAB018003572F4F41B033ED30 (FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Freestar.FreestarIOSInterstitialMessagePasser::onInterstitialAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarIOSInterstitialMessagePasser_onInterstitialAdLoaded_m945565B1521866737937C5C7E86A72013C5CC005 (FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreestarInterstitialAdCallbackReceiver_tD85B2187A68B35EE9809E7FDAEB764082DEE0F1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.receiver.onInterstitialAdLoaded(placement);
		RuntimeObject* L_0 = __this->get_receiver_4();
		String_t* L_1 = ___placement0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void Freestar.FreestarInterstitialAdCallbackReceiver::onInterstitialAdLoaded(System.String) */, FreestarInterstitialAdCallbackReceiver_tD85B2187A68B35EE9809E7FDAEB764082DEE0F1E_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Freestar.FreestarIOSInterstitialMessagePasser::onInterstitialAdFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarIOSInterstitialMessagePasser_onInterstitialAdFailed_m3719114F88EC1B7615638A7988E693F55FEF0841 (FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreestarInterstitialAdCallbackReceiver_tD85B2187A68B35EE9809E7FDAEB764082DEE0F1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.receiver.onInterstitialAdFailed(placement);
		RuntimeObject* L_0 = __this->get_receiver_4();
		String_t* L_1 = ___placement0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Freestar.FreestarInterstitialAdCallbackReceiver::onInterstitialAdFailed(System.String) */, FreestarInterstitialAdCallbackReceiver_tD85B2187A68B35EE9809E7FDAEB764082DEE0F1E_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Freestar.FreestarIOSInterstitialMessagePasser::onInterstitialAdShown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarIOSInterstitialMessagePasser_onInterstitialAdShown_m45164DFF9EC736758C05970672A2FB76DA599D07 (FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreestarInterstitialAdCallbackReceiver_tD85B2187A68B35EE9809E7FDAEB764082DEE0F1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.receiver.onInterstitialAdShown(placement);
		RuntimeObject* L_0 = __this->get_receiver_4();
		String_t* L_1 = ___placement0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Freestar.FreestarInterstitialAdCallbackReceiver::onInterstitialAdShown(System.String) */, FreestarInterstitialAdCallbackReceiver_tD85B2187A68B35EE9809E7FDAEB764082DEE0F1E_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Freestar.FreestarIOSInterstitialMessagePasser::onInterstitialAdClicked(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarIOSInterstitialMessagePasser_onInterstitialAdClicked_mB0673558D88C23CD9C2CA583F9191A0527F47E0B (FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreestarInterstitialAdCallbackReceiver_tD85B2187A68B35EE9809E7FDAEB764082DEE0F1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.receiver.onInterstitialAdClicked(placement);
		RuntimeObject* L_0 = __this->get_receiver_4();
		String_t* L_1 = ___placement0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void Freestar.FreestarInterstitialAdCallbackReceiver::onInterstitialAdClicked(System.String) */, FreestarInterstitialAdCallbackReceiver_tD85B2187A68B35EE9809E7FDAEB764082DEE0F1E_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Freestar.FreestarIOSInterstitialMessagePasser::onInterstitialAdDismissed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarIOSInterstitialMessagePasser_onInterstitialAdDismissed_m004EA3F727A11C7E44F8E20A8755CBE0C4669680 (FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreestarInterstitialAdCallbackReceiver_tD85B2187A68B35EE9809E7FDAEB764082DEE0F1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.receiver.onInterstitialAdDismissed(placement);
		RuntimeObject* L_0 = __this->get_receiver_4();
		String_t* L_1 = ___placement0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void Freestar.FreestarInterstitialAdCallbackReceiver::onInterstitialAdDismissed(System.String) */, FreestarInterstitialAdCallbackReceiver_tD85B2187A68B35EE9809E7FDAEB764082DEE0F1E_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Freestar.FreestarIOSInterstitialMessagePasser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarIOSInterstitialMessagePasser__ctor_m5E37C037F8B47AC901CB651D50478A1002417665 (FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Freestar.FreestarIOSRewardedMessagePasser::onRewardedAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarIOSRewardedMessagePasser_onRewardedAdLoaded_mAA654F532FC1DBFC8F2A9179DDACA4AA60BDD6B0 (FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreestarRewardedAdCallbackReceiver_t5A3B2C404862581F9C7FC8820F893314AE55FE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.receiver.onRewardedAdLoaded(placement);
		RuntimeObject* L_0 = __this->get_receiver_4();
		String_t* L_1 = ___placement0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void Freestar.FreestarRewardedAdCallbackReceiver::onRewardedAdLoaded(System.String) */, FreestarRewardedAdCallbackReceiver_t5A3B2C404862581F9C7FC8820F893314AE55FE22_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Freestar.FreestarIOSRewardedMessagePasser::onRewardedAdFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarIOSRewardedMessagePasser_onRewardedAdFailed_mE6E788DD241DB4C492EAA8D44B03AA1C25EE62FB (FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreestarRewardedAdCallbackReceiver_t5A3B2C404862581F9C7FC8820F893314AE55FE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.receiver.onRewardedAdFailed(placement);
		RuntimeObject* L_0 = __this->get_receiver_4();
		String_t* L_1 = ___placement0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Freestar.FreestarRewardedAdCallbackReceiver::onRewardedAdFailed(System.String) */, FreestarRewardedAdCallbackReceiver_t5A3B2C404862581F9C7FC8820F893314AE55FE22_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Freestar.FreestarIOSRewardedMessagePasser::onRewardedAdShown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarIOSRewardedMessagePasser_onRewardedAdShown_mD7AFF580BB5594E331E2CE698B25C4F010227FFC (FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreestarRewardedAdCallbackReceiver_t5A3B2C404862581F9C7FC8820F893314AE55FE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.receiver.onRewardedAdShown(placement);
		RuntimeObject* L_0 = __this->get_receiver_4();
		String_t* L_1 = ___placement0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Freestar.FreestarRewardedAdCallbackReceiver::onRewardedAdShown(System.String) */, FreestarRewardedAdCallbackReceiver_t5A3B2C404862581F9C7FC8820F893314AE55FE22_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Freestar.FreestarIOSRewardedMessagePasser::onRewardedAdFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarIOSRewardedMessagePasser_onRewardedAdFinished_m0EA8E055EAB84B1D275322F299A1EFAA60B51D10 (FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreestarRewardedAdCallbackReceiver_t5A3B2C404862581F9C7FC8820F893314AE55FE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.receiver.onRewardedAdFinished(placement);
		RuntimeObject* L_0 = __this->get_receiver_4();
		String_t* L_1 = ___placement0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void Freestar.FreestarRewardedAdCallbackReceiver::onRewardedAdFinished(System.String) */, FreestarRewardedAdCallbackReceiver_t5A3B2C404862581F9C7FC8820F893314AE55FE22_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Freestar.FreestarIOSRewardedMessagePasser::onRewardedAdDismissed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarIOSRewardedMessagePasser_onRewardedAdDismissed_mD70525603643E5D38062A3B03EC2CFA7326BD1EC (FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4 * __this, String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreestarRewardedAdCallbackReceiver_t5A3B2C404862581F9C7FC8820F893314AE55FE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.receiver.onRewardedAdDismissed(placement);
		RuntimeObject* L_0 = __this->get_receiver_4();
		String_t* L_1 = ___placement0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void Freestar.FreestarRewardedAdCallbackReceiver::onRewardedAdDismissed(System.String) */, FreestarRewardedAdCallbackReceiver_t5A3B2C404862581F9C7FC8820F893314AE55FE22_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Freestar.FreestarIOSRewardedMessagePasser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarIOSRewardedMessagePasser__ctor_m59391F716FE25AE705086DF49203000B3DD2BEAB (FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Freestar.FreestarUnityBridge::_initWithAPIKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__initWithAPIKey_m12F582D1ED827D74DD0E7103C1E5B4748DFA43AA (String_t* ___apiKey0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___apiKey0' to native representation
	char* ____apiKey0_marshaled = NULL;
	____apiKey0_marshaled = il2cpp_codegen_marshal_string(___apiKey0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_initWithAPIKey)(____apiKey0_marshaled);

	// Marshaling cleanup of parameter '___apiKey0' native representation
	il2cpp_codegen_marshal_free(____apiKey0_marshaled);
	____apiKey0_marshaled = NULL;

}
// System.Void Freestar.FreestarUnityBridge::_setInterstitialListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__setInterstitialListener_m5A982F1E573E1DA8053F2D3F5F66EF4B09FACAF2 (String_t* ___listenerName0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___listenerName0' to native representation
	char* ____listenerName0_marshaled = NULL;
	____listenerName0_marshaled = il2cpp_codegen_marshal_string(___listenerName0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_setInterstitialListener)(____listenerName0_marshaled);

	// Marshaling cleanup of parameter '___listenerName0' native representation
	il2cpp_codegen_marshal_free(____listenerName0_marshaled);
	____listenerName0_marshaled = NULL;

}
// System.Void Freestar.FreestarUnityBridge::_setRewardedListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__setRewardedListener_mCAF1FA39D5B2CD35052A21B678FF8EDB305E3A18 (String_t* ___listenerName0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___listenerName0' to native representation
	char* ____listenerName0_marshaled = NULL;
	____listenerName0_marshaled = il2cpp_codegen_marshal_string(___listenerName0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_setRewardedListener)(____listenerName0_marshaled);

	// Marshaling cleanup of parameter '___listenerName0' native representation
	il2cpp_codegen_marshal_free(____listenerName0_marshaled);
	____listenerName0_marshaled = NULL;

}
// System.Void Freestar.FreestarUnityBridge::_setBannerListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__setBannerListener_m442E39C725FFC0205A2338CAD5D554689FB384F1 (String_t* ___listenerName0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___listenerName0' to native representation
	char* ____listenerName0_marshaled = NULL;
	____listenerName0_marshaled = il2cpp_codegen_marshal_string(___listenerName0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_setBannerListener)(____listenerName0_marshaled);

	// Marshaling cleanup of parameter '___listenerName0' native representation
	il2cpp_codegen_marshal_free(____listenerName0_marshaled);
	____listenerName0_marshaled = NULL;

}
// System.Void Freestar.FreestarUnityBridge::_loadInterstitialAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__loadInterstitialAd_m356772C2180BF260475616FD616BF2C5C544F9D4 (String_t* ___placement0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___placement0' to native representation
	char* ____placement0_marshaled = NULL;
	____placement0_marshaled = il2cpp_codegen_marshal_string(___placement0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_loadInterstitialAd)(____placement0_marshaled);

	// Marshaling cleanup of parameter '___placement0' native representation
	il2cpp_codegen_marshal_free(____placement0_marshaled);
	____placement0_marshaled = NULL;

}
// System.Void Freestar.FreestarUnityBridge::_showInterstitialAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__showInterstitialAd_m38B1000C1B64962E94FFA36A1E31D6CC1FA194EB (String_t* ___placement0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___placement0' to native representation
	char* ____placement0_marshaled = NULL;
	____placement0_marshaled = il2cpp_codegen_marshal_string(___placement0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_showInterstitialAd)(____placement0_marshaled);

	// Marshaling cleanup of parameter '___placement0' native representation
	il2cpp_codegen_marshal_free(____placement0_marshaled);
	____placement0_marshaled = NULL;

}
// System.Void Freestar.FreestarUnityBridge::_loadRewardedAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__loadRewardedAd_mC44BA8E97E6FECF2A860E6F617B47224B3B33A5C (String_t* ___placement0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___placement0' to native representation
	char* ____placement0_marshaled = NULL;
	____placement0_marshaled = il2cpp_codegen_marshal_string(___placement0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_loadRewardedAd)(____placement0_marshaled);

	// Marshaling cleanup of parameter '___placement0' native representation
	il2cpp_codegen_marshal_free(____placement0_marshaled);
	____placement0_marshaled = NULL;

}
// System.Void Freestar.FreestarUnityBridge::_showRewardedAd(System.String,System.Int32,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__showRewardedAd_m7AAF5E313D736FB5D7B85F854754AD9EA21A72F4 (String_t* ___placement0, int32_t ___rewardAmount1, String_t* ___rewardName2, String_t* ___userId3, String_t* ___secretKey4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, char*, char*, char*);

	// Marshaling of parameter '___placement0' to native representation
	char* ____placement0_marshaled = NULL;
	____placement0_marshaled = il2cpp_codegen_marshal_string(___placement0);

	// Marshaling of parameter '___rewardName2' to native representation
	char* ____rewardName2_marshaled = NULL;
	____rewardName2_marshaled = il2cpp_codegen_marshal_string(___rewardName2);

	// Marshaling of parameter '___userId3' to native representation
	char* ____userId3_marshaled = NULL;
	____userId3_marshaled = il2cpp_codegen_marshal_string(___userId3);

	// Marshaling of parameter '___secretKey4' to native representation
	char* ____secretKey4_marshaled = NULL;
	____secretKey4_marshaled = il2cpp_codegen_marshal_string(___secretKey4);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_showRewardedAd)(____placement0_marshaled, ___rewardAmount1, ____rewardName2_marshaled, ____userId3_marshaled, ____secretKey4_marshaled);

	// Marshaling cleanup of parameter '___placement0' native representation
	il2cpp_codegen_marshal_free(____placement0_marshaled);
	____placement0_marshaled = NULL;

	// Marshaling cleanup of parameter '___rewardName2' native representation
	il2cpp_codegen_marshal_free(____rewardName2_marshaled);
	____rewardName2_marshaled = NULL;

	// Marshaling cleanup of parameter '___userId3' native representation
	il2cpp_codegen_marshal_free(____userId3_marshaled);
	____userId3_marshaled = NULL;

	// Marshaling cleanup of parameter '___secretKey4' native representation
	il2cpp_codegen_marshal_free(____secretKey4_marshaled);
	____secretKey4_marshaled = NULL;

}
// System.Void Freestar.FreestarUnityBridge::_setDemograpics(System.Int32,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__setDemograpics_m925FE484AAAA9729C4910875AEBC2789B50AA62A (int32_t ___age0, String_t* ___birthDate1, String_t* ___gender2, String_t* ___maritalStatus3, String_t* ___ethnicity4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*, char*);

	// Marshaling of parameter '___birthDate1' to native representation
	char* ____birthDate1_marshaled = NULL;
	____birthDate1_marshaled = il2cpp_codegen_marshal_string(___birthDate1);

	// Marshaling of parameter '___gender2' to native representation
	char* ____gender2_marshaled = NULL;
	____gender2_marshaled = il2cpp_codegen_marshal_string(___gender2);

	// Marshaling of parameter '___maritalStatus3' to native representation
	char* ____maritalStatus3_marshaled = NULL;
	____maritalStatus3_marshaled = il2cpp_codegen_marshal_string(___maritalStatus3);

	// Marshaling of parameter '___ethnicity4' to native representation
	char* ____ethnicity4_marshaled = NULL;
	____ethnicity4_marshaled = il2cpp_codegen_marshal_string(___ethnicity4);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_setDemograpics)(___age0, ____birthDate1_marshaled, ____gender2_marshaled, ____maritalStatus3_marshaled, ____ethnicity4_marshaled);

	// Marshaling cleanup of parameter '___birthDate1' native representation
	il2cpp_codegen_marshal_free(____birthDate1_marshaled);
	____birthDate1_marshaled = NULL;

	// Marshaling cleanup of parameter '___gender2' native representation
	il2cpp_codegen_marshal_free(____gender2_marshaled);
	____gender2_marshaled = NULL;

	// Marshaling cleanup of parameter '___maritalStatus3' native representation
	il2cpp_codegen_marshal_free(____maritalStatus3_marshaled);
	____maritalStatus3_marshaled = NULL;

	// Marshaling cleanup of parameter '___ethnicity4' native representation
	il2cpp_codegen_marshal_free(____ethnicity4_marshaled);
	____ethnicity4_marshaled = NULL;

}
// System.Void Freestar.FreestarUnityBridge::_setLocation(System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__setLocation_mD1F98348AE8F0CF3252C9A3BDD1CA399A1BCD655 (String_t* ___dmaCode0, String_t* ___postal1, String_t* ___curPostal2, String_t* ___latitude3, String_t* ___longitude4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*, char*, char*);

	// Marshaling of parameter '___dmaCode0' to native representation
	char* ____dmaCode0_marshaled = NULL;
	____dmaCode0_marshaled = il2cpp_codegen_marshal_string(___dmaCode0);

	// Marshaling of parameter '___postal1' to native representation
	char* ____postal1_marshaled = NULL;
	____postal1_marshaled = il2cpp_codegen_marshal_string(___postal1);

	// Marshaling of parameter '___curPostal2' to native representation
	char* ____curPostal2_marshaled = NULL;
	____curPostal2_marshaled = il2cpp_codegen_marshal_string(___curPostal2);

	// Marshaling of parameter '___latitude3' to native representation
	char* ____latitude3_marshaled = NULL;
	____latitude3_marshaled = il2cpp_codegen_marshal_string(___latitude3);

	// Marshaling of parameter '___longitude4' to native representation
	char* ____longitude4_marshaled = NULL;
	____longitude4_marshaled = il2cpp_codegen_marshal_string(___longitude4);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_setLocation)(____dmaCode0_marshaled, ____postal1_marshaled, ____curPostal2_marshaled, ____latitude3_marshaled, ____longitude4_marshaled);

	// Marshaling cleanup of parameter '___dmaCode0' native representation
	il2cpp_codegen_marshal_free(____dmaCode0_marshaled);
	____dmaCode0_marshaled = NULL;

	// Marshaling cleanup of parameter '___postal1' native representation
	il2cpp_codegen_marshal_free(____postal1_marshaled);
	____postal1_marshaled = NULL;

	// Marshaling cleanup of parameter '___curPostal2' native representation
	il2cpp_codegen_marshal_free(____curPostal2_marshaled);
	____curPostal2_marshaled = NULL;

	// Marshaling cleanup of parameter '___latitude3' native representation
	il2cpp_codegen_marshal_free(____latitude3_marshaled);
	____latitude3_marshaled = NULL;

	// Marshaling cleanup of parameter '___longitude4' native representation
	il2cpp_codegen_marshal_free(____longitude4_marshaled);
	____longitude4_marshaled = NULL;

}
// System.Void Freestar.FreestarUnityBridge::_setPrivacySettings(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__setPrivacySettings_mAA98B5A044C9FA1A84C22D1D270479BA97DCD90B (bool ___gdprApplies0, String_t* ___gdprConsentString1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);

	// Marshaling of parameter '___gdprConsentString1' to native representation
	char* ____gdprConsentString1_marshaled = NULL;
	____gdprConsentString1_marshaled = il2cpp_codegen_marshal_string(___gdprConsentString1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_setPrivacySettings)(static_cast<int32_t>(___gdprApplies0), ____gdprConsentString1_marshaled);

	// Marshaling cleanup of parameter '___gdprConsentString1' native representation
	il2cpp_codegen_marshal_free(____gdprConsentString1_marshaled);
	____gdprConsentString1_marshaled = NULL;

}
// System.Void Freestar.FreestarUnityBridge::_setCustomSegmentProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__setCustomSegmentProperty_m530C4B1474C1046DC2447605DE53FE9135440C6B (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Marshaling of parameter '___value1' to native representation
	char* ____value1_marshaled = NULL;
	____value1_marshaled = il2cpp_codegen_marshal_string(___value1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_setCustomSegmentProperty)(____key0_marshaled, ____value1_marshaled);

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	// Marshaling cleanup of parameter '___value1' native representation
	il2cpp_codegen_marshal_free(____value1_marshaled);
	____value1_marshaled = NULL;

}
// System.String Freestar.FreestarUnityBridge::_getCustomSegmentProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FreestarUnityBridge__getCustomSegmentProperty_m3BC5B2465AE09AA9F1448D9B3420CCF458D6C5DC (String_t* ___key0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_getCustomSegmentProperty)(____key0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String Freestar.FreestarUnityBridge::_getAllCustomSegmentProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FreestarUnityBridge__getAllCustomSegmentProperties_mE0CACF8D7514AEA5C425B69D7C6E3FB2AE82D8D9 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_getAllCustomSegmentProperties)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Freestar.FreestarUnityBridge::_deleteCustomSegmentProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__deleteCustomSegmentProperty_m09F329A801DAA6BEE81A84ACA821D6947EA310DB (String_t* ___key0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_deleteCustomSegmentProperty)(____key0_marshaled);

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

}
// System.Void Freestar.FreestarUnityBridge::_deleteAllCustomSegmentProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__deleteAllCustomSegmentProperties_m7774D1A341430663787706A1F5D1590FB310BFD1 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_deleteAllCustomSegmentProperties)();

}
// System.Void Freestar.FreestarUnityBridge::_showBannerAd(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__showBannerAd_mE24471DCF4C314D89CD3689B76ABE5FACBE841E1 (String_t* ___placement0, int32_t ___bannerAdSize1, int32_t ___bannerAdPosition2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t);

	// Marshaling of parameter '___placement0' to native representation
	char* ____placement0_marshaled = NULL;
	____placement0_marshaled = il2cpp_codegen_marshal_string(___placement0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_showBannerAd)(____placement0_marshaled, ___bannerAdSize1, ___bannerAdPosition2);

	// Marshaling cleanup of parameter '___placement0' native representation
	il2cpp_codegen_marshal_free(____placement0_marshaled);
	____placement0_marshaled = NULL;

}
// System.Void Freestar.FreestarUnityBridge::_isBannerAdShowing(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__isBannerAdShowing_m72F12237D04CFACE53AF769C4E79E46DCE2D0ADD (String_t* ___placement0, int32_t ___bannerAdSize1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___placement0' to native representation
	char* ____placement0_marshaled = NULL;
	____placement0_marshaled = il2cpp_codegen_marshal_string(___placement0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_isBannerAdShowing)(____placement0_marshaled, ___bannerAdSize1);

	// Marshaling cleanup of parameter '___placement0' native representation
	il2cpp_codegen_marshal_free(____placement0_marshaled);
	____placement0_marshaled = NULL;

}
// System.Void Freestar.FreestarUnityBridge::_closeBannerAd(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__closeBannerAd_m79F222E93C153D02228FE6D53C31C198058A073D (String_t* ___placement0, int32_t ___bannerAdSize1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___placement0' to native representation
	char* ____placement0_marshaled = NULL;
	____placement0_marshaled = il2cpp_codegen_marshal_string(___placement0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_closeBannerAd)(____placement0_marshaled, ___bannerAdSize1);

	// Marshaling cleanup of parameter '___placement0' native representation
	il2cpp_codegen_marshal_free(____placement0_marshaled);
	____placement0_marshaled = NULL;

}
// System.Void Freestar.FreestarUnityBridge::initWithAPIKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_initWithAPIKey_m113F0CBE23C73FC378EF0D68954B0F593346562C (String_t* ___apiKey0, const RuntimeMethod* method)
{
	{
		// _initWithAPIKey(apiKey);
		String_t* L_0 = ___apiKey0;
		FreestarUnityBridge__initWithAPIKey_m12F582D1ED827D74DD0E7103C1E5B4748DFA43AA(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::setBannerAdListener(Freestar.FreestarBannerAdCallbackReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_setBannerAdListener_m30111F9003CEB07AA8B8D56933F126986421AC58 (RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8_m8E63640DE7964FAA9E4D7E3B3EEDC9FB4CA92861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55A7C8D8E10B10C86C0541A969C727A52C45D579);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAE72AD313F267852E89CBD8F08DA5ECCD426BB6);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject obj = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// bannerMiddleman = obj.AddComponent<FreestarIOSBannerMessagePasser>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		NullCheck(L_1);
		FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8 * L_2;
		L_2 = GameObject_AddComponent_TisFreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8_m8E63640DE7964FAA9E4D7E3B3EEDC9FB4CA92861(L_1, /*hidden argument*/GameObject_AddComponent_TisFreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8_m8E63640DE7964FAA9E4D7E3B3EEDC9FB4CA92861_RuntimeMethod_var);
		((FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields*)il2cpp_codegen_static_fields_for(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var))->set_bannerMiddleman_7(L_2);
		// bannerMiddleman.receiver = listener;
		FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8 * L_3 = ((FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields*)il2cpp_codegen_static_fields_for(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var))->get_bannerMiddleman_7();
		RuntimeObject* L_4 = ___listener0;
		NullCheck(L_3);
		L_3->set_receiver_4(L_4);
		// Debug.Log("middleman object is " + bannerMiddleman.ToString());
		FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8 * L_5 = ((FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields*)il2cpp_codegen_static_fields_for(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var))->get_bannerMiddleman_7();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEAE72AD313F267852E89CBD8F08DA5ECCD426BB6, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_7, /*hidden argument*/NULL);
		// bannerMiddleman.name = "FSTRMiddleBanner" + listener.ToString();
		FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8 * L_8 = ((FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields*)il2cpp_codegen_static_fields_for(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var))->get_bannerMiddleman_7();
		RuntimeObject* L_9 = ___listener0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral55A7C8D8E10B10C86C0541A969C727A52C45D579, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_8, L_11, /*hidden argument*/NULL);
		// _setBannerListener(bannerMiddleman.name);
		FreestarIOSBannerMessagePasser_t0AB6286B9A9DA4D014C513A9F0B48CD2631518C8 * L_12 = ((FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields*)il2cpp_codegen_static_fields_for(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var))->get_bannerMiddleman_7();
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_12, /*hidden argument*/NULL);
		FreestarUnityBridge__setBannerListener_m442E39C725FFC0205A2338CAD5D554689FB384F1(L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::setInterstitialAdListener(Freestar.FreestarInterstitialAdCallbackReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_setInterstitialAdListener_m99AAE45CF335DBE9C8B28C5DA064CC3CF0CED21F (RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536_m76E953A4FD7AC9B759F0C215AF3FBDEA50AA1311_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7D178C7B3A7C13230F80E8AF536907F9CE7FD31);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject obj = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// interstitialMiddleman = obj.AddComponent<FreestarIOSInterstitialMessagePasser>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		NullCheck(L_1);
		FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536 * L_2;
		L_2 = GameObject_AddComponent_TisFreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536_m76E953A4FD7AC9B759F0C215AF3FBDEA50AA1311(L_1, /*hidden argument*/GameObject_AddComponent_TisFreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536_m76E953A4FD7AC9B759F0C215AF3FBDEA50AA1311_RuntimeMethod_var);
		((FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields*)il2cpp_codegen_static_fields_for(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var))->set_interstitialMiddleman_8(L_2);
		// interstitialMiddleman.receiver = listener;
		FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536 * L_3 = ((FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields*)il2cpp_codegen_static_fields_for(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var))->get_interstitialMiddleman_8();
		RuntimeObject* L_4 = ___listener0;
		NullCheck(L_3);
		L_3->set_receiver_4(L_4);
		// interstitialMiddleman.name = "FSTRMiddleInterstitial" + listener.ToString();
		FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536 * L_5 = ((FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields*)il2cpp_codegen_static_fields_for(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var))->get_interstitialMiddleman_8();
		RuntimeObject* L_6 = ___listener0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF7D178C7B3A7C13230F80E8AF536907F9CE7FD31, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_5, L_8, /*hidden argument*/NULL);
		// _setInterstitialListener(interstitialMiddleman.name);
		FreestarIOSInterstitialMessagePasser_t8C4350510A57283F5019DFE6C83AEDF409016536 * L_9 = ((FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields*)il2cpp_codegen_static_fields_for(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var))->get_interstitialMiddleman_8();
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_9, /*hidden argument*/NULL);
		FreestarUnityBridge__setInterstitialListener_m5A982F1E573E1DA8053F2D3F5F66EF4B09FACAF2(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::setRewardedAdListener(Freestar.FreestarRewardedAdCallbackReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_setRewardedAdListener_mD26AB3D252EC5DF36E7146078A253B9981E09A89 (RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4_m2218B29B04864C97645EC0A28E529AD7F08CDA0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4261FD64CD90376B162E3FB14ED04C46C35F4B9);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject obj = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// rewardedMiddleman = obj.AddComponent<FreestarIOSRewardedMessagePasser>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		NullCheck(L_1);
		FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4 * L_2;
		L_2 = GameObject_AddComponent_TisFreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4_m2218B29B04864C97645EC0A28E529AD7F08CDA0C(L_1, /*hidden argument*/GameObject_AddComponent_TisFreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4_m2218B29B04864C97645EC0A28E529AD7F08CDA0C_RuntimeMethod_var);
		((FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields*)il2cpp_codegen_static_fields_for(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var))->set_rewardedMiddleman_9(L_2);
		// rewardedMiddleman.receiver = listener;
		FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4 * L_3 = ((FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields*)il2cpp_codegen_static_fields_for(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var))->get_rewardedMiddleman_9();
		RuntimeObject* L_4 = ___listener0;
		NullCheck(L_3);
		L_3->set_receiver_4(L_4);
		// rewardedMiddleman.name = "FSTRMiddleRewarded" + listener.ToString();
		FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4 * L_5 = ((FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields*)il2cpp_codegen_static_fields_for(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var))->get_rewardedMiddleman_9();
		RuntimeObject* L_6 = ___listener0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralC4261FD64CD90376B162E3FB14ED04C46C35F4B9, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_5, L_8, /*hidden argument*/NULL);
		// _setRewardedListener(rewardedMiddleman.name);
		FreestarIOSRewardedMessagePasser_t487D6A8D85ED2A1132B4AE6A91D01EB707432EF4 * L_9 = ((FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_StaticFields*)il2cpp_codegen_static_fields_for(FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB_il2cpp_TypeInfo_var))->get_rewardedMiddleman_9();
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_9, /*hidden argument*/NULL);
		FreestarUnityBridge__setRewardedListener_mCAF1FA39D5B2CD35052A21B678FF8EDB305E3A18(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::removeInterstitialAdListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_removeInterstitialAdListener_mB533DD68F4264ED5E79E84990377D4FC7FCD64A7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _setInterstitialListener("");
		FreestarUnityBridge__setInterstitialListener_m5A982F1E573E1DA8053F2D3F5F66EF4B09FACAF2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::removeRewardedAdListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_removeRewardedAdListener_m572879FF35F2EE25DB1F9BDC7AA6FC96D3828787 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _setRewardedListener("");
		FreestarUnityBridge__setRewardedListener_mCAF1FA39D5B2CD35052A21B678FF8EDB305E3A18(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::removeBannerAdListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_removeBannerAdListener_m001738D144BFF03C76BBBF982FA81E529D2640B5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _setBannerListener("");
		FreestarUnityBridge__setBannerListener_m442E39C725FFC0205A2338CAD5D554689FB384F1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::loadInterstitialAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_loadInterstitialAd_m24A10BA4BFCA25F1A448977B6FC1B3AC47033F35 (String_t* ___placement0, const RuntimeMethod* method)
{
	{
		// _loadInterstitialAd(placement);
		String_t* L_0 = ___placement0;
		FreestarUnityBridge__loadInterstitialAd_m356772C2180BF260475616FD616BF2C5C544F9D4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::showInterstitialAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_showInterstitialAd_mF9BC5CA44607B6C35470CD9796641135425679CF (String_t* ___placement0, const RuntimeMethod* method)
{
	{
		// _showInterstitialAd(placement);
		String_t* L_0 = ___placement0;
		FreestarUnityBridge__showInterstitialAd_m38B1000C1B64962E94FFA36A1E31D6CC1FA194EB(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::loadRewardedAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_loadRewardedAd_mB9124BDF9A7BFD8DE3F1C9AB166FD694999DB771 (String_t* ___placement0, const RuntimeMethod* method)
{
	{
		// _loadRewardedAd(placement);
		String_t* L_0 = ___placement0;
		FreestarUnityBridge__loadRewardedAd_mC44BA8E97E6FECF2A860E6F617B47224B3B33A5C(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::showRewardedAd(System.String,System.Int32,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_showRewardedAd_mB16284DE2713CA574024D531941DAFE560A469B3 (String_t* ___placement0, int32_t ___rewardAmount1, String_t* ___rewardName2, String_t* ___userId3, String_t* ___secretKey4, const RuntimeMethod* method)
{
	{
		// _showRewardedAd(placement, rewardAmount, rewardName, userId, secretKey);
		String_t* L_0 = ___placement0;
		int32_t L_1 = ___rewardAmount1;
		String_t* L_2 = ___rewardName2;
		String_t* L_3 = ___userId3;
		String_t* L_4 = ___secretKey4;
		FreestarUnityBridge__showRewardedAd_m7AAF5E313D736FB5D7B85F854754AD9EA21A72F4(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::SetAdRequestUserParams(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_SetAdRequestUserParams_m958E8DD3514E4970D870435531393919CCF7CD17 (int32_t ___age0, String_t* ___birthDate1, String_t* ___gender2, String_t* ___maritalStatus3, String_t* ___ethnicity4, String_t* ___dmaCode5, String_t* ___postal6, String_t* ___curPostal7, String_t* ___latitude8, String_t* ___longitude9, const RuntimeMethod* method)
{
	{
		// _setDemograpics(age, birthDate, gender, maritalStatus, ethnicity);
		int32_t L_0 = ___age0;
		String_t* L_1 = ___birthDate1;
		String_t* L_2 = ___gender2;
		String_t* L_3 = ___maritalStatus3;
		String_t* L_4 = ___ethnicity4;
		FreestarUnityBridge__setDemograpics_m925FE484AAAA9729C4910875AEBC2789B50AA62A(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::setDemograpics(System.Int32,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_setDemograpics_mDAA8AC3C650C853F7C1745602F5E3807714A98C2 (int32_t ___age0, String_t* ___birthDate1, String_t* ___gender2, String_t* ___maritalStatus3, String_t* ___ethnicity4, const RuntimeMethod* method)
{
	{
		// _setDemograpics(age,birthDate,gender,maritalStatus,ethnicity);
		int32_t L_0 = ___age0;
		String_t* L_1 = ___birthDate1;
		String_t* L_2 = ___gender2;
		String_t* L_3 = ___maritalStatus3;
		String_t* L_4 = ___ethnicity4;
		FreestarUnityBridge__setDemograpics_m925FE484AAAA9729C4910875AEBC2789B50AA62A(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::setLocation(System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_setLocation_mD5CC7A94EFB5BF0D053ADAC19C2DB418D656B40A (String_t* ___dmaCode0, String_t* ___postal1, String_t* ___curPostal2, String_t* ___latitude3, String_t* ___longitude4, const RuntimeMethod* method)
{
	{
		// _setLocation(dmaCode, postal, curPostal, latitude, longitude);
		String_t* L_0 = ___dmaCode0;
		String_t* L_1 = ___postal1;
		String_t* L_2 = ___curPostal2;
		String_t* L_3 = ___latitude3;
		String_t* L_4 = ___longitude4;
		FreestarUnityBridge__setLocation_mD1F98348AE8F0CF3252C9A3BDD1CA399A1BCD655(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::setPrivacySettings(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_setPrivacySettings_m23BFF3B86B69E1A5CA585A4B2A2F1955053AA32C (bool ___gdprApplies0, String_t* ___gdprConsentString1, const RuntimeMethod* method)
{
	{
		// _setPrivacySettings(gdprApplies,gdprConsentString);
		bool L_0 = ___gdprApplies0;
		String_t* L_1 = ___gdprConsentString1;
		FreestarUnityBridge__setPrivacySettings_mAA98B5A044C9FA1A84C22D1D270479BA97DCD90B(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::setCustomSegmentProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_setCustomSegmentProperty_m4A9A92F7AF22DA3B329118EE432D3A9799340D10 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		// _setCustomSegmentProperty(key,value);
		String_t* L_0 = ___key0;
		String_t* L_1 = ___value1;
		FreestarUnityBridge__setCustomSegmentProperty_m530C4B1474C1046DC2447605DE53FE9135440C6B(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Freestar.FreestarUnityBridge::getCustomSegmentProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FreestarUnityBridge_getCustomSegmentProperty_m408646BCDFA22F48D56D1732624ECAC895EBD5CD (String_t* ___key0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return _getCustomSegmentProperty(key);
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = FreestarUnityBridge__getCustomSegmentProperty_m3BC5B2465AE09AA9F1448D9B3420CCF458D6C5DC(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Freestar.FreestarUnityBridge::getAllCustomSegmentProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * FreestarUnityBridge_getAllCustomSegmentProperties_m0DC35A31B28103A7BCD6B25BE71CAC2603F3166D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_mF39BECE846CAFA75ABEC9642352F69B31FACEE0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_1 = NULL;
	{
		// string jsonRep = _getAllCustomSegmentProperties();
		String_t* L_0;
		L_0 = FreestarUnityBridge__getAllCustomSegmentProperties_mE0CACF8D7514AEA5C425B69D7C6E3FB2AE82D8D9(/*hidden argument*/NULL);
		V_0 = L_0;
		// return JsonUtility.FromJson<Dictionary<string, string>>(jsonRep);
		String_t* L_1 = V_0;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2;
		L_2 = JsonUtility_FromJson_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_mF39BECE846CAFA75ABEC9642352F69B31FACEE0F(L_1, /*hidden argument*/JsonUtility_FromJson_TisDictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_mF39BECE846CAFA75ABEC9642352F69B31FACEE0F_RuntimeMethod_var);
		V_1 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = V_1;
		return L_3;
	}
}
// System.Void Freestar.FreestarUnityBridge::deleteCustomSegmentProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_deleteCustomSegmentProperty_m4634B8ABFC6A2149D13D5673A843CA8E3AFDF688 (String_t* ___key0, const RuntimeMethod* method)
{
	{
		// _deleteCustomSegmentProperty(key);
		String_t* L_0 = ___key0;
		FreestarUnityBridge__deleteCustomSegmentProperty_m09F329A801DAA6BEE81A84ACA821D6947EA310DB(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::deleteAllCustomSegmentProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_deleteAllCustomSegmentProperties_m5F815672F4A69E8073FE134172228309794BAE44 (const RuntimeMethod* method)
{
	{
		// _deleteAllCustomSegmentProperties();
		FreestarUnityBridge__deleteAllCustomSegmentProperties_m7774D1A341430663787706A1F5D1590FB310BFD1(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::SetAdRequestTestMode(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_SetAdRequestTestMode_m0B750FF10373242651E2210FD015D686150C75BA (bool ___isTestMode0, String_t* ___testID1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F7B647D6A9D6703EA47D986375D4FE5069C047F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("SetAdRequestTestMode api not available on iOS yet");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8F7B647D6A9D6703EA47D986375D4FE5069C047F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Freestar.FreestarUnityBridge::IsRewardedAdAvailableToShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FreestarUnityBridge_IsRewardedAdAvailableToShow_m42BAA5DFF45F6BC7E80B227ED4C6F500273D34DB (String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28671DE3595A2AADFCF98126D9B30D8D20DC00CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A54DA45EF9D46857C618300198F6FBDC15D9751);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// Debug.Log("FreestarUnityBridge Check Reward Ad...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral28671DE3595A2AADFCF98126D9B30D8D20DC00CA, /*hidden argument*/NULL);
		// bool isAvailable = false;
		V_0 = (bool)0;
		// Debug.Log("IsRewardedAdAvailableToShow api not available on iOS yet");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9A54DA45EF9D46857C618300198F6FBDC15D9751, /*hidden argument*/NULL);
		// return isAvailable;
		bool L_0 = V_0;
		V_1 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_1 = V_1;
		return L_1;
	}
}
// System.Boolean Freestar.FreestarUnityBridge::IsInterstitialAdAvailableToShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FreestarUnityBridge_IsInterstitialAdAvailableToShow_mC86BB43DC8418831C74BCA0636B61DA799DBBCF0 (String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A560514643146E282BB2C48A78DD596FF7F9D82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97A249A2A74108800884ABC8B3DF03589F1372B0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// Debug.Log("FreestarUnityBridge Check Interstitial Ad...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral97A249A2A74108800884ABC8B3DF03589F1372B0, /*hidden argument*/NULL);
		// bool isAvailable = false;
		V_0 = (bool)0;
		// Debug.Log("IsInterstitialAdAvailableToShow api not available on iOS yet");   //TODO
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8A560514643146E282BB2C48A78DD596FF7F9D82, /*hidden argument*/NULL);
		// return isAvailable;
		bool L_0 = V_0;
		V_1 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_1 = V_1;
		return L_1;
	}
}
// System.Void Freestar.FreestarUnityBridge::SetUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_SetUserId_m15E1A8BC62E848145D38C9811DBA07D4737E5E53 (String_t* ___userId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D42A4444D66A10CC6A2327C63B261AF8CE6F707);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EFABDB339F18869864BBBA1ABA3CE156E710717);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("SetUserId: " + userId);
		String_t* L_0 = ___userId0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9EFABDB339F18869864BBBA1ABA3CE156E710717, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// Debug.Log("SetUserId api not available on iOS yet");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9D42A4444D66A10CC6A2327C63B261AF8CE6F707, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::ShowPartnerChooser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_ShowPartnerChooser_m54EDD5CE704DCD49983845765913794BD971B264 (bool ___showPartnerChooser0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4729003974FAD5B6DB818D6F6E15CAE806267CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("ShowPartnerChooser api not available on iOS yet");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC4729003974FAD5B6DB818D6F6E15CAE806267CC, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Freestar.FreestarUnityBridge::GetRewardedAdWinner(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FreestarUnityBridge_GetRewardedAdWinner_m9A18090099F0322A5C1773B01A33321F29AE98F5 (String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2E991D972C4687330768B06727CE5D6F245D853);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// Debug.Log("GetRewardedAdWinner api not available on iOS yet");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA2E991D972C4687330768B06727CE5D6F245D853, /*hidden argument*/NULL);
		// return "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.String Freestar.FreestarUnityBridge::GetInterstitialAdWinner(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FreestarUnityBridge_GetInterstitialAdWinner_mED404EA5CE632A7FE0035AD3641DB50BE64AD392 (String_t* ___placement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6BD706B5320EB6EA76E09716A8F1509A94DB59A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// Debug.Log("GetInterstitialAdWinner api not available on iOS yet");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA6BD706B5320EB6EA76E09716A8F1509A94DB59A, /*hidden argument*/NULL);
		// return "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void Freestar.FreestarUnityBridge::ShowBannerAd(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_ShowBannerAd_m46699BF0816FD63AAC02A56D164F26AFE750D3FD (String_t* ___placement0, int32_t ___bannerAdSize1, int32_t ___bannerAdPosition2, const RuntimeMethod* method)
{
	{
		// _showBannerAd(placement, bannerAdSize, bannerAdPosition);
		String_t* L_0 = ___placement0;
		int32_t L_1 = ___bannerAdSize1;
		int32_t L_2 = ___bannerAdPosition2;
		FreestarUnityBridge__showBannerAd_mE24471DCF4C314D89CD3689B76ABE5FACBE841E1(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Freestar.FreestarUnityBridge::IsBannerAdShowing(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FreestarUnityBridge_IsBannerAdShowing_m2BB717C0EB94BB8B3164BD63277EFE3843A23508 (String_t* ___placement0, int32_t ___bannerAdSize1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// _isBannerAdShowing(placement, bannerAdSize);
		String_t* L_0 = ___placement0;
		int32_t L_1 = ___bannerAdSize1;
		FreestarUnityBridge__isBannerAdShowing_m72F12237D04CFACE53AF769C4E79E46DCE2D0ADD(L_0, L_1, /*hidden argument*/NULL);
		// return false;
		V_0 = (bool)0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Freestar.FreestarUnityBridge::CloseBannerAd(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_CloseBannerAd_mA373DCF7BBEBC07CA7B733E2D95EF4BC98F575AF (String_t* ___placement0, int32_t ___bannerAdSize1, const RuntimeMethod* method)
{
	{
		// _closeBannerAd(placement, bannerAdSize);
		String_t* L_0 = ___placement0;
		int32_t L_1 = ___bannerAdSize1;
		FreestarUnityBridge__closeBannerAd_m79F222E93C153D02228FE6D53C31C198058A073D(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_Pause_m5F366A6530D8C0327BB99355F510818906009A13 (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge_Resume_mA88E712EF9E893B666396E56E56ED687C985E8FA (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Freestar.FreestarUnityBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreestarUnityBridge__ctor_m45D0999D1A708BB10D0B86F05724DF23CEE40B4F (FreestarUnityBridge_t4B33E29ACC3801E138B7C8C3B1385C9047F439CB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// AppTrackingTransparency.RegisterAppForAdNetworkAttribution();
		AppTrackingTransparency_RegisterAppForAdNetworkAttribution_m6F26C8114C0B4DB5ACD6ED9910CD9086EE37A384(/*hidden argument*/NULL);
		// AppTrackingTransparency.UpdateConversionValue(3);
		AppTrackingTransparency_UpdateConversionValue_m948C205F74D21F30E29E81215696CB77F4A2348C(3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m825DC9C3F0F51FFF82330621EDEA90555FEA155B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorizationStatus_t11108D54ED10456FFB9652A518D81138C0ECD677_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_OnAuthorizationRequestDone_m6CF2894B5126639A9CDA953980458A6A8138C19F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAdManager_t2F03E384E6359CA43FA97E24C69702365861A034_m7C355AF1EC2A3E14F39C811E497F8F6A2E6FE134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_mDC004D56EC7E86057B44F99042E6EE2CFC3ACE4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D92B2B75B1AF512D22FF5FE6E2C2111AB054D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C19EA4D2A3CE2275F85C301779C3522123C1A78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99CC765D76A0B678F8EC10737EB6940A697E5FC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA101CFCEBDBD32E83492639B7E70E5F35394E802);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38DF56A332F565C46C62965BDBEA505742B6C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// AppTrackingTransparency.OnAuthorizationRequestDone += OnAuthorizationRequestDone;
		Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF * L_0 = ((AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_StaticFields*)il2cpp_codegen_static_fields_for(AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_il2cpp_TypeInfo_var))->get_OnAuthorizationRequestDone_0();
		Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF * L_1 = (Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF *)il2cpp_codegen_object_new(Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF_il2cpp_TypeInfo_var);
		Action_1__ctor_m825DC9C3F0F51FFF82330621EDEA90555FEA155B(L_1, __this, (intptr_t)((intptr_t)GameManager_OnAuthorizationRequestDone_m6CF2894B5126639A9CDA953980458A6A8138C19F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m825DC9C3F0F51FFF82330621EDEA90555FEA155B_RuntimeMethod_var);
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_StaticFields*)il2cpp_codegen_static_fields_for(AppTrackingTransparency_t1DB77DE7AE98116C271D155632458A2FB18B4834_il2cpp_TypeInfo_var))->set_OnAuthorizationRequestDone_0(((Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF *)CastclassSealed((RuntimeObject*)L_2, Action_1_t02EE07F2E4EF3001BD0BED5D083489A823D5DEFF_il2cpp_TypeInfo_var)));
		// AppTrackingTransparency.AuthorizationStatus currentStatus = AppTrackingTransparency.TrackingAuthorizationStatus;
		int32_t L_3;
		L_3 = AppTrackingTransparency_get_TrackingAuthorizationStatus_m189119ADA59FC38F9E55BCAD55491B368DC073F9(/*hidden argument*/NULL);
		V_0 = L_3;
		// Debug.Log(string.Format("Current authorization status: {0}", currentStatus.ToString()));
		RuntimeObject * L_4 = Box(AuthorizationStatus_t11108D54ED10456FFB9652A518D81138C0ECD677_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		V_0 = *(int32_t*)UnBox(L_4);
		String_t* L_6;
		L_6 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral56D92B2B75B1AF512D22FF5FE6E2C2111AB054D0, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
		// if (currentStatus != AppTrackingTransparency.AuthorizationStatus.AUTHORIZED)
		int32_t L_7 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0062;
		}
	}
	{
		// Debug.Log("Requesting authorization...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6C19EA4D2A3CE2275F85C301779C3522123C1A78, /*hidden argument*/NULL);
		// AppTrackingTransparency.RequestTrackingAuthorization();
		AppTrackingTransparency_RequestTrackingAuthorization_m9A302B61A91AA36EF7E63E8AA141E572BC3B686B(/*hidden argument*/NULL);
	}

IL_0062:
	{
		// uiManager = GameObject.Find("Canvas").GetComponent<UIManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, /*hidden argument*/NULL);
		NullCheck(L_9);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_10;
		L_10 = GameObject_GetComponent_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_mDC004D56EC7E86057B44F99042E6EE2CFC3ACE4E(L_9, /*hidden argument*/GameObject_GetComponent_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_mDC004D56EC7E86057B44F99042E6EE2CFC3ACE4E_RuntimeMethod_var);
		__this->set_uiManager_7(L_10);
		// if (uiManager == null)
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_11 = __this->get_uiManager_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_12;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0094;
		}
	}
	{
		// Debug.Log("Can not find UIManager ");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral99CC765D76A0B678F8EC10737EB6940A697E5FC1, /*hidden argument*/NULL);
	}

IL_0094:
	{
		// adManager = GameObject.Find("AdManager").GetComponent<AdManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralA101CFCEBDBD32E83492639B7E70E5F35394E802, /*hidden argument*/NULL);
		NullCheck(L_14);
		AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * L_15;
		L_15 = GameObject_GetComponent_TisAdManager_t2F03E384E6359CA43FA97E24C69702365861A034_m7C355AF1EC2A3E14F39C811E497F8F6A2E6FE134(L_14, /*hidden argument*/GameObject_GetComponent_TisAdManager_t2F03E384E6359CA43FA97E24C69702365861A034_m7C355AF1EC2A3E14F39C811E497F8F6A2E6FE134_RuntimeMethod_var);
		__this->set_adManager_8(L_15);
		// if (adManager == null)
		AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * L_16 = __this->get_adManager_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_17;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00c6;
		}
	}
	{
		// Debug.Log("Can not find AdManager ");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF38DF56A332F565C46C62965BDBEA505742B6C9C, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		// timerIsRunning = true;
		__this->set_timerIsRunning_10((bool)1);
		// gamePause = false;
		__this->set_gamePause_5((bool)0);
		// resumeGame = false;
		__this->set_resumeGame_12((bool)0);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6016AF1CE72794A6C2FF2B0D3605A9649CE69719);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B12_0 = 0;
	{
		// if (gameOver)
		bool L_0 = __this->get_gameOver_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00be;
		}
	}
	{
		// if (timerIsRunning)
		bool L_2 = __this->get_timerIsRunning_10();
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00a3;
		}
	}
	{
		// if (timeRemaining > 0)
		float L_4 = __this->get_timeRemaining_9();
		V_2 = (bool)((((float)L_4) > ((float)(0.0f)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0060;
		}
	}
	{
		// timeRemaining -= Time.deltaTime;
		float L_6 = __this->get_timeRemaining_9();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeRemaining_9(((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)));
		// startText.text = (timeRemaining).ToString("0");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_startText_11();
		float* L_9 = __this->get_address_of_timeRemaining_9();
		String_t* L_10;
		L_10 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_9, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
		goto IL_00a2;
	}

IL_0060:
	{
		// timeRemaining = 0;
		__this->set_timeRemaining_9((0.0f));
		// timerIsRunning = false;
		__this->set_timerIsRunning_10((bool)0);
		// gameOver = false;
		__this->set_gameOver_4((bool)0);
		// Instantiate(playerPrefab, Vector3.zero, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_playerPrefab_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_11, L_12, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// startText.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_startText_11();
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_00a2:
	{
	}

IL_00a3:
	{
		// uiManager.ShowTitleScreen();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_16 = __this->get_uiManager_7();
		NullCheck(L_16);
		UIManager_ShowTitleScreen_m5050DC3B2AED7B05628A996FD84191A7E4C51274(L_16, /*hidden argument*/NULL);
		// uiManager.ShowRestart();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_17 = __this->get_uiManager_7();
		NullCheck(L_17);
		UIManager_ShowRestart_mF1539A460CA5ADAFC327CF5AC303DB62F6EF25F2(L_17, /*hidden argument*/NULL);
		goto IL_00cc;
	}

IL_00be:
	{
		// uiManager.HideTitileScreen();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_18 = __this->get_uiManager_7();
		NullCheck(L_18);
		UIManager_HideTitileScreen_mDE6720D778B8A0075F652C75E82EFE077778FAFD(L_18, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		// if (!gamePause && !gameOver && resumeGame)
		bool L_19 = __this->get_gamePause_5();
		if (L_19)
		{
			goto IL_00e4;
		}
	}
	{
		bool L_20 = __this->get_gameOver_4();
		if (L_20)
		{
			goto IL_00e4;
		}
	}
	{
		bool L_21 = __this->get_resumeGame_12();
		G_B12_0 = ((int32_t)(L_21));
		goto IL_00e5;
	}

IL_00e4:
	{
		G_B12_0 = 0;
	}

IL_00e5:
	{
		V_3 = (bool)G_B12_0;
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_0118;
		}
	}
	{
		// Destroy(GameObject.Find("Player(Clone)"));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral6016AF1CE72794A6C2FF2B0D3605A9649CE69719, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_23, /*hidden argument*/NULL);
		// resumeGame = false;
		__this->set_resumeGame_12((bool)0);
		// Instantiate(playerPrefab, Vector3.zero, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_playerPrefab_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_24, L_25, L_26, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_0118:
	{
		// }
		return;
	}
}
// System.Boolean GameManager::GameStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_GameStatus_m3803160CA2C5CCFCA1183C6C2FB7759AD2EDE435 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return gamePause;
		bool L_0 = __this->get_gamePause_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void GameManager::SkipAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SkipAd_mFFF70454672E7F5FBE2ABF347B37155EEA76BCBC (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// uiManager.gamePausePanel.SetActive(false);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_0 = __this->get_uiManager_7();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_gamePausePanel_18();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// uiManager.gameOverMessagePanel.SetActive(true);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_2 = __this->get_uiManager_7();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2->get_gameOverMessagePanel_19();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::GameOverMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOverMessage_m4748C66E4407EBB2AC8B113F7C64C3CBFCA55248 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6016AF1CE72794A6C2FF2B0D3605A9649CE69719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(GameObject.Find("Player(Clone)"));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral6016AF1CE72794A6C2FF2B0D3605A9649CE69719, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// uiManager.gameOverMessagePanel.SetActive(false);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_1 = __this->get_uiManager_7();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1->get_gameOverMessagePanel_19();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// gameOver = true;
		__this->set_gameOver_4((bool)1);
		// adManager.loadInterstitialAd();
		AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * L_3 = __this->get_adManager_8();
		NullCheck(L_3);
		AdManager_loadInterstitialAd_m02643EE91EFD104DDDD831380CF98BA036B6E020(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::UpdateStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateStatus_mBB55BCB2F030D37822D9A3315761728D95CF4CE6 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// gamePause = false;
		__this->set_gamePause_5((bool)0);
		// }
		return;
	}
}
// System.Void GameManager::RewardedAdRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RewardedAdRequest_mAB9754E993DF8EF000C8036719C4D3624BA0073D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// uiManager.gamePausePanel.SetActive(false);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_0 = __this->get_uiManager_7();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_gamePausePanel_18();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// adManager.loadRewardedAd();
		AdManager_t2F03E384E6359CA43FA97E24C69702365861A034 * L_2 = __this->get_adManager_8();
		NullCheck(L_2);
		AdManager_loadRewardedAd_mCF3DEB44FCDE41ABD9A8CFB699D19F1B0002DA20(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean GameManager::ResumeGameStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_ResumeGameStatus_m4F8DB33083448C9D3CE45B588DDCD54E09DB490B (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return resumeGame;
		bool L_0 = __this->get_resumeGame_12();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void GameManager::UpdateResumeGameStatus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateResumeGameStatus_mFB49713B4DF05E1492E79C1866725574446044B9 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, bool ___gamestatus0, const RuntimeMethod* method)
{
	{
		// resumeGame = gamestatus;
		bool L_0 = ___gamestatus0;
		__this->set_resumeGame_12(L_0);
		// }
		return;
	}
}
// System.Void GameManager::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Restart_m1E9741B5443E1FF65B0BE1A20A8F584C90394654 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_2;
		L_2 = SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::PauseBackgroundMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PauseBackgroundMusic_mA813D8371D28C1536DF528BA18BFA0573BF29A66 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.FindGameObjectWithTag("MainCamera").GetComponent<AudioSource>().Pause();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_0, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		NullCheck(L_1);
		AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::ResumeBackgroundMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResumeBackgroundMusic_m6B82DDF7EA1A305D9476937C7267534894234838 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.FindGameObjectWithTag("MainCamera").GetComponent<AudioSource>().Play();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_0, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		NullCheck(L_1);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_QuitGame_mB499D5DDCD90223C6FBF396BF466D86BC6BFC230 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnAuthorizationRequestDone(Balaso.AppTrackingTransparency/AuthorizationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnAuthorizationRequestDone_m6CF2894B5126639A9CDA953980458A6A8138C19F (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AEDC8D36B32EA96B27BF61DA83F3470C316222E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CB162A7FC3FDA311A764ABC2C6FA859701E33B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral643FDB4D2A9EA1C41111CA9FA068940D621F65DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F4A54945873144BE1912E4265D020DF6D954726);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8F056F1DB76BFE7511A051F84F4CADE907C3A3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (status)
		int32_t L_0 = ___status0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0037;
			}
			case 3:
			{
				goto IL_0044;
			}
		}
	}
	{
		goto IL_0051;
	}

IL_001d:
	{
		// Debug.Log("AuthorizationStatus: NOT_DETERMINED");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8F8F056F1DB76BFE7511A051F84F4CADE907C3A3, /*hidden argument*/NULL);
		// break;
		goto IL_0051;
	}

IL_002a:
	{
		// Debug.Log("AuthorizationStatus: RESTRICTED");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral643FDB4D2A9EA1C41111CA9FA068940D621F65DF, /*hidden argument*/NULL);
		// break;
		goto IL_0051;
	}

IL_0037:
	{
		// Debug.Log("AuthorizationStatus: DENIED");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3CB162A7FC3FDA311A764ABC2C6FA859701E33B2, /*hidden argument*/NULL);
		// break;
		goto IL_0051;
	}

IL_0044:
	{
		// Debug.Log("AuthorizationStatus: AUTHORIZED");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2AEDC8D36B32EA96B27BF61DA83F3470C316222E, /*hidden argument*/NULL);
		// break;
		goto IL_0051;
	}

IL_0051:
	{
		// Debug.Log(string.Format("IDFA: {0}", AppTrackingTransparency.IdentifierForAdvertising()));
		String_t* L_3;
		L_3 = AppTrackingTransparency_IdentifierForAdvertising_m478D58E42030B71FA9C6964069659D2736639D1F(/*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral8F4A54945873144BE1912E4265D020DF6D954726, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public bool gameOver = true;
		__this->set_gameOver_4((bool)1);
		// private float timeRemaining = 3;
		__this->set_timeRemaining_9((3.0f));
		// private bool timerIsRunning = false;
		__this->set_timerIsRunning_10((bool)0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Laser::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Laser_Start_m2ED780B1D3554CE1EA69A58AAEBC8720D284D9CD (Laser_t128A4BF0CB0C0349676F7C0999823F8A05E87ABA * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Laser::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Laser_Update_mF7AF88BE6F4EEB42638D921A1B4F818279B64957 (Laser_t128A4BF0CB0C0349676F7C0999823F8A05E87ABA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// transform.Translate(Vector3.up * speed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_2 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_0, L_5, /*hidden argument*/NULL);
		// if (transform.position.y >= 6)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		V_0 = (bool)((((int32_t)((!(((float)L_8) >= ((float)(6.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		// if (transform.parent != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_12;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_0073;
		}
	}
	{
		// Destroy(transform.parent.gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_16, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_17, /*hidden argument*/NULL);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void Laser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Laser__ctor_mEE165BF77F7AC80E6261725C4A19E12DA1D64781 (Laser_t128A4BF0CB0C0349676F7C0999823F8A05E87ABA * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 10.0f;
		__this->set_speed_4((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15_mB64C94A6504D5D08FAADD24659474ACDF74A639F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C_m24E8F88F1507CA4A81418F2CEB0DC7C05C6C3411_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE_m7830182BC2D4BE0BC6B2D1EDF77854F0C5F8C0AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_mDC004D56EC7E86057B44F99042E6EE2CFC3ACE4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F41240A531B8B859B73C7053B2D9AACBC0AA2D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB17325C47E763EB7B3B3BF062AE30931D13759C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE615EB491B32AE89103D8E0B05128CCD746AFABA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B3_0 = 0;
	{
		// CalibrateAccelerometer();
		Player_CalibrateAccelerometer_mA75AE4959D12EB0FC9685ABF93D947B7D2B25B2F(__this, /*hidden argument*/NULL);
		// uiManager = GameObject.Find("Canvas").GetComponent<UIManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, /*hidden argument*/NULL);
		NullCheck(L_0);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_1;
		L_1 = GameObject_GetComponent_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_mDC004D56EC7E86057B44F99042E6EE2CFC3ACE4E(L_0, /*hidden argument*/GameObject_GetComponent_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_mDC004D56EC7E86057B44F99042E6EE2CFC3ACE4E_RuntimeMethod_var);
		__this->set_uiManager_23(L_1);
		// if (uiManager != null && uiManager.EarnLiveStatus())
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_2 = __this->get_uiManager_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_4 = __this->get_uiManager_23();
		NullCheck(L_4);
		bool L_5;
		L_5 = UIManager_EarnLiveStatus_m8F540B9F803D1FD1FE7B167C33C74F573AF3E6BB(L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0039;
	}

IL_0038:
	{
		G_B3_0 = 0;
	}

IL_0039:
	{
		V_4 = (bool)G_B3_0;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		// lives = 1;
		__this->set_lives_16(1);
		// EnableShields();
		Player_EnableShields_mAE51431FC97B24FE3CC00EF350519D79CC466236(__this, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// if (uiManager != null)
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_7 = __this->get_uiManager_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_8;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		// uiManager.UpdateLives(lives);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_10 = __this->get_uiManager_23();
		int32_t L_11 = __this->get_lives_16();
		NullCheck(L_10);
		UIManager_UpdateLives_m9EE8B586755461468D6E5EBE58ECD8B3A8DB5B63(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0075:
	{
		// gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_13;
		L_13 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_12, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_gameManager_24(L_13);
		// spawnManager = GameObject.Find("SpawnManager").GetComponent<SpawnManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralB17325C47E763EB7B3B3BF062AE30931D13759C8, /*hidden argument*/NULL);
		NullCheck(L_14);
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_15;
		L_15 = GameObject_GetComponent_TisSpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE_m7830182BC2D4BE0BC6B2D1EDF77854F0C5F8C0AD(L_14, /*hidden argument*/GameObject_GetComponent_TisSpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE_m7830182BC2D4BE0BC6B2D1EDF77854F0C5F8C0AD_RuntimeMethod_var);
		__this->set_spawnManager_25(L_15);
		// if (spawnManager != null)
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_16 = __this->get_spawnManager_25();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00bf;
		}
	}
	{
		// spawnManager.StartSpawnRoutine();
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_19 = __this->get_spawnManager_25();
		NullCheck(L_19);
		SpawnManager_StartSpawnRoutine_m6F2E3140486F0CE5B1DEF6C51FF62B20DF60CF7E(L_19, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		// touchPad = GameObject.Find("MovementZone").GetComponent<SimpleTouchPad>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralE615EB491B32AE89103D8E0B05128CCD746AFABA, /*hidden argument*/NULL);
		NullCheck(L_20);
		SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C * L_21;
		L_21 = GameObject_GetComponent_TisSimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C_m24E8F88F1507CA4A81418F2CEB0DC7C05C6C3411(L_20, /*hidden argument*/GameObject_GetComponent_TisSimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C_m24E8F88F1507CA4A81418F2CEB0DC7C05C6C3411_RuntimeMethod_var);
		__this->set_touchPad_27(L_21);
		// areaButton = GameObject.Find("FireZone").GetComponent<SimpleTouchAreaButton>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5F41240A531B8B859B73C7053B2D9AACBC0AA2D1, /*hidden argument*/NULL);
		NullCheck(L_22);
		SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15 * L_23;
		L_23 = GameObject_GetComponent_TisSimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15_mB64C94A6504D5D08FAADD24659474ACDF74A639F(L_22, /*hidden argument*/GameObject_GetComponent_TisSimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15_mB64C94A6504D5D08FAADD24659474ACDF74A639F_RuntimeMethod_var);
		__this->set_areaButton_28(L_23);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_24;
		L_24 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_26(L_24);
		// float camDistance = Vector3.Distance(transform.position, Camera.main.transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_27;
		L_27 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		float L_30;
		L_30 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_26, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		// Vector2 bottomCorner = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, camDistance));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_31;
		L_31 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		float L_32 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_33), (0.0f), (0.0f), L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116(L_31, L_33, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_34, /*hidden argument*/NULL);
		V_1 = L_35;
		// Vector2 topCorner = Camera.main.ViewportToWorldPoint(new Vector3(1, 1, camDistance));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_36;
		L_36 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		float L_37 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_38), (1.0f), (1.0f), L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116(L_36, L_38, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
		L_40 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_39, /*hidden argument*/NULL);
		V_2 = L_40;
		// BoxCollider2D playerCollider = GetComponent<BoxCollider2D>();
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_41;
		L_41 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		V_3 = L_41;
		// playerWidth = playerCollider.bounds.extents.x;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_42 = V_3;
		NullCheck(L_42);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_43;
		L_43 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_42, /*hidden argument*/NULL);
		V_7 = L_43;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Bounds_get_extents_mA54D7497D65DCF21CA952FA754B9D1086305FF02((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_7), /*hidden argument*/NULL);
		float L_45 = L_44.get_x_2();
		__this->set_playerWidth_21(L_45);
		// playerHeight = playerCollider.bounds.extents.y;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_46 = V_3;
		NullCheck(L_46);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_47;
		L_47 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_46, /*hidden argument*/NULL);
		V_7 = L_47;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Bounds_get_extents_mA54D7497D65DCF21CA952FA754B9D1086305FF02((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_7), /*hidden argument*/NULL);
		float L_49 = L_48.get_y_3();
		__this->set_playerHeight_22(L_49);
		// xMin = bottomCorner.x + playerWidth;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50 = V_1;
		float L_51 = L_50.get_x_0();
		float L_52 = __this->get_playerWidth_21();
		__this->set_xMin_17(((float)il2cpp_codegen_add((float)L_51, (float)L_52)));
		// xMax = topCorner.x - playerWidth;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_53 = V_2;
		float L_54 = L_53.get_x_0();
		float L_55 = __this->get_playerWidth_21();
		__this->set_xMax_18(((float)il2cpp_codegen_subtract((float)L_54, (float)L_55)));
		// yMin = bottomCorner.y + (playerHeight * 2);//
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_56 = V_1;
		float L_57 = L_56.get_y_1();
		float L_58 = __this->get_playerHeight_22();
		__this->set_yMin_19(((float)il2cpp_codegen_add((float)L_57, (float)((float)il2cpp_codegen_multiply((float)L_58, (float)(2.0f))))));
		// yMax = topCorner.y - playerHeight - 3.0f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_59 = V_2;
		float L_60 = L_59.get_y_1();
		float L_61 = __this->get_playerHeight_22();
		__this->set_yMax_20(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_60, (float)L_61)), (float)(3.0f))));
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Time.time > canFire && areaButton.CanFire())
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_canFire_12();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_001b;
		}
	}
	{
		SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15 * L_2 = __this->get_areaButton_28();
		NullCheck(L_2);
		bool L_3;
		L_3 = SimpleTouchAreaButton_CanFire_m26D751CEE5E54DA2D243DB5BA1D87292D39DD181(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// Shoot();
		Player_Shoot_mC8E486C923C1BCCA822D42E01A7CC1D71CD4A1D4(__this, /*hidden argument*/NULL);
		// canFire = Time.time + fireRate;
		float L_5;
		L_5 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_6 = __this->get_fireRate_11();
		__this->set_canFire_12(((float)il2cpp_codegen_add((float)L_5, (float)L_6)));
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Player::CalibrateAccelerometer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CalibrateAccelerometer_mA75AE4959D12EB0FC9685ABF93D947B7D2B25B2F (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 accelerationSnapshot = Input.acceleration;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		V_0 = L_0;
		// Quaternion rotateQuaternion = Quaternion.FromToRotation(new Vector3(0.0f, 0.0f, -1.0f), accelerationSnapshot);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// calibrationQuaternion = Quaternion.Inverse(rotateQuaternion);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_4, /*hidden argument*/NULL);
		__this->set_calibrationQuaternion_29(L_5);
		// }
		return;
	}
}
// UnityEngine.Vector3 Player::FixAcceleration(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Player_FixAcceleration_mF8309FD1520E082F52E55AC1BF7FB3A83600D70B (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___acceleration0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 fixedAcceleration = calibrationQuaternion * acceleration;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_calibrationQuaternion_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___acceleration0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// return fixedAcceleration;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		V_1 = L_3;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_1;
		return L_4;
	}
}
// System.Void Player::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Shoot_mC8E486C923C1BCCA822D42E01A7CC1D71CD4A1D4 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_26();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// if (canTripleShoot == true)
		bool L_1 = __this->get_canTripleShoot_4();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00bd;
		}
	}
	{
		// Instantiate(laserPrefeb, transform.position + new Vector3(-0.55f, 0.06f, 0), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_laserPrefeb_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (-0.550000012f), (0.0599999987f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_5, L_6, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_3, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Instantiate(laserPrefeb, transform.position + new Vector3(0, 1.01f, 0), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_laserPrefeb_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), (0.0f), (1.00999999f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_13, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_10, L_14, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Instantiate(laserPrefeb, transform.position + new Vector3(0.55f, 0.06f, 0), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_laserPrefeb_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), (0.550000012f), (0.0599999987f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_19, L_20, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_17, L_21, L_22, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		goto IL_00f4;
	}

IL_00bd:
	{
		// Instantiate(laserPrefeb, transform.position + new Vector3(0, 1.01f, 0), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_laserPrefeb_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_27), (0.0f), (1.00999999f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_26, L_27, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
		L_29 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_24, L_28, L_29, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_00f4:
	{
		// }
		return;
	}
}
// System.Void Player::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FixedUpdate_mD7447EDFC86F29A3E5FBDEF7E0139535BD4C5088 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// Vector2 direction = touchPad.GetDirection();
		SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C * L_0 = __this->get_touchPad_27();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = SimpleTouchPad_GetDirection_m8E5F92DA199FD6D07CA9D52E15C4527D5CA3ADD4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector3 movement = new Vector3(direction.x, direction.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = V_0;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
		float L_5 = L_4.get_y_1();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), L_3, L_5, /*hidden argument*/NULL);
		// if (isSpeedBoosterActive)
		bool L_6 = __this->get_isSpeedBoosterActive_5();
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		// GetComponent<Rigidbody2D>().velocity = movement * speed * 1.5f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_8;
		L_8 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_1;
		float L_10 = __this->get_speed_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, (1.5f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_8);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_8, L_13, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_0055:
	{
		// GetComponent<Rigidbody2D>().velocity = movement * speed;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_14;
		L_14 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_1;
		float L_16 = __this->get_speed_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, L_16, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_14, L_18, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// GetComponent<Rigidbody2D>().position = new Vector2
		//  (
		//      Mathf.Clamp(GetComponent<Rigidbody2D>().position.x, xMin,xMax),
		//      Mathf.Clamp(GetComponent<Rigidbody2D>().position.y, yMin,yMax)
		// 
		//  );
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_19;
		L_19 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_20;
		L_20 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_20);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_x_0();
		float L_23 = __this->get_xMin_17();
		float L_24 = __this->get_xMax_18();
		float L_25;
		L_25 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_22, L_23, L_24, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_26;
		L_26 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_26);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		L_27 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_y_1();
		float L_29 = __this->get_yMin_19();
		float L_30 = __this->get_yMax_20();
		float L_31;
		L_31 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_28, L_29, L_30, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_32), L_25, L_31, /*hidden argument*/NULL);
		NullCheck(L_19);
		Rigidbody2D_set_position_m1604084713EB195D44B8B411D4BCAFA5941E3413(L_19, L_32, /*hidden argument*/NULL);
		// GetComponent<Rigidbody2D>().rotation = GetComponent<Rigidbody2D>().velocity.x * -tilt;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_33;
		L_33 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_34;
		L_34 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_34);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_x_0();
		float L_37 = __this->get_tilt_14();
		NullCheck(L_33);
		Rigidbody2D_set_rotation_m4982A0057C1FEB61323B58C7A791E8A0D0CD8C77(L_33, ((float)il2cpp_codegen_multiply((float)L_36, (float)((-L_37)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Damage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Damage_mC0B33743234347979F505E277CDF4AE51EB4F3C3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if (shieldsActive)
		bool L_0 = __this->get_shieldsActive_6();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// shieldsActive = false;
		__this->set_shieldsActive_6((bool)0);
		// shieldGameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_shieldGameObject_10();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// return;
		goto IL_00a5;
	}

IL_0025:
	{
		// lives--;
		int32_t L_3 = __this->get_lives_16();
		__this->set_lives_16(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)));
		// uiManager.UpdateLives(lives);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_4 = __this->get_uiManager_23();
		int32_t L_5 = __this->get_lives_16();
		NullCheck(L_4);
		UIManager_UpdateLives_m9EE8B586755461468D6E5EBE58ECD8B3A8DB5B63(L_4, L_5, /*hidden argument*/NULL);
		// if (lives < 1 && gameManager.gamePause == false)
		int32_t L_6 = __this->get_lives_16();
		if ((((int32_t)L_6) >= ((int32_t)1)))
		{
			goto IL_005e;
		}
	}
	{
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = __this->get_gameManager_24();
		NullCheck(L_7);
		bool L_8 = L_7->get_gamePause_5();
		G_B5_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B5_0 = 0;
	}

IL_005f:
	{
		V_1 = (bool)G_B5_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_00a5;
		}
	}
	{
		// Instantiate(explosionPrefab, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_explosionPrefab_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_10, L_12, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// gameManager.gameOver = true;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_15 = __this->get_gameManager_24();
		NullCheck(L_15);
		L_15->set_gameOver_4((bool)1);
		// uiManager.ShowTitleScreen();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_16 = __this->get_uiManager_23();
		NullCheck(L_16);
		UIManager_ShowTitleScreen_m5050DC3B2AED7B05628A996FD84191A7E4C51274(L_16, /*hidden argument*/NULL);
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_17, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void Player::TripleShotPowerupOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_TripleShotPowerupOn_m5F630EB6B12BBEFB07F3FE77CD0ABACA5641AB55 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// canTripleShoot = true;
		__this->set_canTripleShoot_4((bool)1);
		// StartCoroutine(TripleShootPowerDownRoutine());
		RuntimeObject* L_0;
		L_0 = Player_TripleShootPowerDownRoutine_m91A66D71D98A367A6AE0D621A1A1111432DB3A0D(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::SpeedBoostPowerupOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SpeedBoostPowerupOn_mCAA4F91A207344CEEAF4189FEB0BF73F6D7A2948 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// isSpeedBoosterActive = true;
		__this->set_isSpeedBoosterActive_5((bool)1);
		// StartCoroutine(SpeedBoostPowerDownRoutine());
		RuntimeObject* L_0;
		L_0 = Player_SpeedBoostPowerDownRoutine_mD98F2BD1B6817B4091E46B8DD24B1891048CBE2D(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::EnableShields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_EnableShields_mAE51431FC97B24FE3CC00EF350519D79CC466236 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// shieldsActive = true;
		__this->set_shieldsActive_6((bool)1);
		// shieldGameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_shieldGameObject_10();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Player::TripleShootPowerDownRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_TripleShootPowerDownRoutine_m91A66D71D98A367A6AE0D621A1A1111432DB3A0D (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91 * L_0 = (U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91 *)il2cpp_codegen_object_new(U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91_il2cpp_TypeInfo_var);
		U3CTripleShootPowerDownRoutineU3Ed__36__ctor_m27743384BA1228045A2C3504F90ACE3D1A47C65D(L_0, 0, /*hidden argument*/NULL);
		U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Player::SpeedBoostPowerDownRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_SpeedBoostPowerDownRoutine_mD98F2BD1B6817B4091E46B8DD24B1891048CBE2D (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F * L_0 = (U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F *)il2cpp_codegen_object_new(U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F_il2cpp_TypeInfo_var);
		U3CSpeedBoostPowerDownRoutineU3Ed__37__ctor_m72BC991AAECAEC95F687978352F4B49C7DFA1A9B(L_0, 0, /*hidden argument*/NULL);
		U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// public bool canTripleShoot = false;
		__this->set_canTripleShoot_4((bool)0);
		// public bool isSpeedBoosterActive = false;
		__this->set_isSpeedBoosterActive_5((bool)0);
		// public bool shieldsActive = false;
		__this->set_shieldsActive_6((bool)0);
		// public float fireRate = 0.25f;
		__this->set_fireRate_11((0.25f));
		// public float canFire = 0.0f;
		__this->set_canFire_12((0.0f));
		// private float speed = 5.0f;
		__this->set_speed_13((5.0f));
		// public int lives = 3;
		__this->set_lives_16(3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerAnimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_Start_mB4F3F162C4F777E436706B3008561F22FE135429 (PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_animator_4(L_0);
		// }
		return;
	}
}
// System.Void PlayerAnimation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_Update_m24161E32CFBC1DB4A00E63C4B8AE2A2026189A03 (PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B2E8CCAE7ECA35EB81FCCECE00ECE4A5FCD6C80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C54D2B8751B7794E226ABD84653A3A986DC56B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)97), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)276), /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// animator.SetBool("LeftTurn", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_animator_4();
		NullCheck(L_3);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_3, _stringLiteralB3C54D2B8751B7794E226ABD84653A3A986DC56B, (bool)1, /*hidden argument*/NULL);
		// animator.SetBool("RightTurn", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_animator_4();
		NullCheck(L_4);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_4, _stringLiteral4B2E8CCAE7ECA35EB81FCCECE00ECE4A5FCD6C80, (bool)0, /*hidden argument*/NULL);
		goto IL_0083;
	}

IL_0043:
	{
		// else if (Input.GetKeyUp(KeyCode.A) || Input.GetKeyUp(KeyCode.LeftArrow))
		bool L_5;
		L_5 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)97), /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0058;
		}
	}
	{
		bool L_6;
		L_6 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)276), /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_6));
		goto IL_0059;
	}

IL_0058:
	{
		G_B8_0 = 1;
	}

IL_0059:
	{
		V_1 = (bool)G_B8_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0083;
		}
	}
	{
		// animator.SetBool("LeftTurn", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = __this->get_animator_4();
		NullCheck(L_8);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_8, _stringLiteralB3C54D2B8751B7794E226ABD84653A3A986DC56B, (bool)0, /*hidden argument*/NULL);
		// animator.SetBool("RightTurn", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = __this->get_animator_4();
		NullCheck(L_9);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_9, _stringLiteral4B2E8CCAE7ECA35EB81FCCECE00ECE4A5FCD6C80, (bool)0, /*hidden argument*/NULL);
	}

IL_0083:
	{
		// if (Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow))
		bool L_10;
		L_10 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)100), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0098;
		}
	}
	{
		bool L_11;
		L_11 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)275), /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_11));
		goto IL_0099;
	}

IL_0098:
	{
		G_B13_0 = 1;
	}

IL_0099:
	{
		V_2 = (bool)G_B13_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00c5;
		}
	}
	{
		// animator.SetBool("RightTurn", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_13 = __this->get_animator_4();
		NullCheck(L_13);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_13, _stringLiteral4B2E8CCAE7ECA35EB81FCCECE00ECE4A5FCD6C80, (bool)1, /*hidden argument*/NULL);
		// animator.SetBool("LeftTurn", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_14 = __this->get_animator_4();
		NullCheck(L_14);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_14, _stringLiteralB3C54D2B8751B7794E226ABD84653A3A986DC56B, (bool)0, /*hidden argument*/NULL);
		goto IL_0105;
	}

IL_00c5:
	{
		// else if (Input.GetKeyUp(KeyCode.D) || Input.GetKeyUp(KeyCode.RightArrow))
		bool L_15;
		L_15 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)100), /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00da;
		}
	}
	{
		bool L_16;
		L_16 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)275), /*hidden argument*/NULL);
		G_B18_0 = ((int32_t)(L_16));
		goto IL_00db;
	}

IL_00da:
	{
		G_B18_0 = 1;
	}

IL_00db:
	{
		V_3 = (bool)G_B18_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0105;
		}
	}
	{
		// animator.SetBool("RightTurn", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_18 = __this->get_animator_4();
		NullCheck(L_18);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_18, _stringLiteral4B2E8CCAE7ECA35EB81FCCECE00ECE4A5FCD6C80, (bool)0, /*hidden argument*/NULL);
		// animator.SetBool("LeftTurn", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_19 = __this->get_animator_4();
		NullCheck(L_19);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_19, _stringLiteralB3C54D2B8751B7794E226ABD84653A3A986DC56B, (bool)0, /*hidden argument*/NULL);
	}

IL_0105:
	{
		// }
		return;
	}
}
// System.Void PlayerAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation__ctor_m6712BFFFBAA031003247E1E6F34C1D9C197CF268 (PlayerAnimation_t2E7A370F56890DC507333C63255F94BBAB647856 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Powerup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Powerup_Start_m5813C4F6ECEE9AAD685CA3FD0214692AFB3A9C03 (Powerup_t1D4F23DF6CDB4E3979A5EF7570DF003354E387E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_gameManager_7(L_1);
		// }
		return;
	}
}
// System.Void Powerup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Powerup_Update_mB50D0FFECB14DE8A98B30C9D20515358E9841C01 (Powerup_t1D4F23DF6CDB4E3979A5EF7570DF003354E387E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!gameManager.gamePause)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gameManager_7();
		NullCheck(L_0);
		bool L_1 = L_0->get_gamePause_5();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_006b;
		}
	}
	{
		// transform.Translate(Vector3.down * speed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		float L_5 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_3, L_8, /*hidden argument*/NULL);
		// if (transform.position.y < -7.4)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		V_1 = (bool)((((double)((double)((double)L_11))) < ((double)(-7.4000000000000004)))? 1 : 0);
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0068;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_13, /*hidden argument*/NULL);
	}

IL_0068:
	{
		goto IL_0079;
	}

IL_006b:
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_14, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void Powerup::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Powerup_OnTriggerEnter2D_m6C59F2D77A726749A0E682C8D831A276300F21BD (Powerup_t1D4F23DF6CDB4E3979A5EF7570DF003354E387E5 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (other.tag == "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00a4;
		}
	}
	{
		// Player player = other.GetComponent<Player>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___other0;
		NullCheck(L_4);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_5;
		L_5 = Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B(L_4, /*hidden argument*/Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		V_1 = L_5;
		// AudioSource.PlayClipAtPoint(audioClip, Camera.main.transform.position, 1f);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = __this->get_audioClip_6();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7;
		L_7 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC(L_6, L_9, (1.0f), /*hidden argument*/NULL);
		// if (player != null)
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0097;
		}
	}
	{
		// if (powerupID == 0)
		int32_t L_13 = __this->get_powerupID_5();
		V_3 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		// player.TripleShotPowerupOn();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_15 = V_1;
		NullCheck(L_15);
		Player_TripleShotPowerupOn_m5F630EB6B12BBEFB07F3FE77CD0ABACA5641AB55(L_15, /*hidden argument*/NULL);
		goto IL_0096;
	}

IL_0064:
	{
		// else if (powerupID == 1)
		int32_t L_16 = __this->get_powerupID_5();
		V_4 = (bool)((((int32_t)L_16) == ((int32_t)1))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007e;
		}
	}
	{
		// player.SpeedBoostPowerupOn();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_18 = V_1;
		NullCheck(L_18);
		Player_SpeedBoostPowerupOn_mCAA4F91A207344CEEAF4189FEB0BF73F6D7A2948(L_18, /*hidden argument*/NULL);
		goto IL_0096;
	}

IL_007e:
	{
		// else if (powerupID == 2)
		int32_t L_19 = __this->get_powerupID_5();
		V_5 = (bool)((((int32_t)L_19) == ((int32_t)2))? 1 : 0);
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_0096;
		}
	}
	{
		// player.EnableShields();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_21 = V_1;
		NullCheck(L_21);
		Player_EnableShields_mAE51431FC97B24FE3CC00EF350519D79CC466236(L_21, /*hidden argument*/NULL);
	}

IL_0096:
	{
	}

IL_0097:
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_22, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		// }
		return;
	}
}
// System.Void Powerup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Powerup__ctor_m8A07335BF37378BFB09408B62E746F3A9081C6AD (Powerup_t1D4F23DF6CDB4E3979A5EF7570DF003354E387E5 * __this, const RuntimeMethod* method)
{
	{
		// private float speed = 3.0f;
		__this->set_speed_4((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleTouchAreaButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTouchAreaButton_Awake_m0769DDEA28AF5BEF57792813BEDE43A15576371D (SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15 * __this, const RuntimeMethod* method)
{
	{
		// touched = false;
		__this->set_touched_4((bool)0);
		// }
		return;
	}
}
// System.Void SimpleTouchAreaButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTouchAreaButton_OnPointerDown_mBEC5BC59A34769519F9921B133841CCF623EB3EB (SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (!touched)
		bool L_0 = __this->get_touched_4();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// touched = true;
		__this->set_touched_4((bool)1);
		// pointerID = data.pointerId;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___data0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PointerEventData_get_pointerId_m50BE6AA34EE21DA6BE7AF07AAC9115CAB6B0636A_inline(L_2, /*hidden argument*/NULL);
		__this->set_pointerID_5(L_3);
		// canFire = true;
		__this->set_canFire_6((bool)1);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void SimpleTouchAreaButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTouchAreaButton_OnPointerUp_m74414618CC47C7F7704D4A3B5FB779D81E9E4848 (SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (data.pointerId == pointerID)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PointerEventData_get_pointerId_m50BE6AA34EE21DA6BE7AF07AAC9115CAB6B0636A_inline(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_pointerID_5();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// canFire = false;
		__this->set_canFire_6((bool)0);
		// touched = false;
		__this->set_touched_4((bool)0);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Boolean SimpleTouchAreaButton::CanFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleTouchAreaButton_CanFire_m26D751CEE5E54DA2D243DB5BA1D87292D39DD181 (SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return canFire;
		bool L_0 = __this->get_canFire_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleTouchAreaButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTouchAreaButton__ctor_mD2C8BF93CB6E4068140380F201483946AF43C81E (SimpleTouchAreaButton_t8C6710ACE630D37218DD57517E3F9D8BDB3F6F15 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleTouchPad::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTouchPad_Awake_mA0CC23D62613B6B2BB7AA2F1B0DC669D438D0C10 (SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C * __this, const RuntimeMethod* method)
{
	{
		// direction = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_direction_6(L_0);
		// touched = false;
		__this->set_touched_8((bool)0);
		// }
		return;
	}
}
// System.Void SimpleTouchPad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTouchPad_OnPointerDown_m0F4F5BB0501F63052FDCFA28D192113E5DF208C5 (SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (!touched)
		bool L_0 = __this->get_touched_8();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// touched = true;
		__this->set_touched_8((bool)1);
		// pointerID = data.pointerId;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___data0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PointerEventData_get_pointerId_m50BE6AA34EE21DA6BE7AF07AAC9115CAB6B0636A_inline(L_2, /*hidden argument*/NULL);
		__this->set_pointerID_9(L_3);
		// origin = data.position;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_4 = ___data0;
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_4, /*hidden argument*/NULL);
		__this->set_origin_5(L_5);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void SimpleTouchPad::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTouchPad_OnDrag_mDC9A810CD53D7187EEA369C5377D18C8D1A036AC (SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	bool V_0 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (data.pointerId == pointerID)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PointerEventData_get_pointerId_m50BE6AA34EE21DA6BE7AF07AAC9115CAB6B0636A_inline(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_pointerID_9();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// Vector2 currentPosition = data.position;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_4 = ___data0;
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// Vector2 directionRaw = currentPosition - origin;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = __this->get_origin_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// direction = directionRaw.normalized;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), /*hidden argument*/NULL);
		__this->set_direction_6(L_9);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void SimpleTouchPad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTouchPad_OnPointerUp_m9FAD9A87D10E2F5498F4E4C5DAA76162FC567628 (SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (data.pointerId == pointerID)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PointerEventData_get_pointerId_m50BE6AA34EE21DA6BE7AF07AAC9115CAB6B0636A_inline(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_pointerID_9();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// direction = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		__this->set_direction_6(L_5);
		// touched = false;
		__this->set_touched_8((bool)0);
	}

IL_002c:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 SimpleTouchPad::GetDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SimpleTouchPad_GetDirection_m8E5F92DA199FD6D07CA9D52E15C4527D5CA3ADD4 (SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// smoothDirection = Vector2.MoveTowards(smoothDirection, direction, smoothing);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_smoothDirection_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = __this->get_direction_6();
		float L_2 = __this->get_smoothing_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89(L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_smoothDirection_7(L_3);
		// return smoothDirection;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = __this->get_smoothDirection_7();
		V_0 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Vector2 SimpleTouchPad::GetDirectionValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  SimpleTouchPad_GetDirectionValue_m7C3E9A212AAD7F3B54DDDBA09C617738E428A789 (SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return direction;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_direction_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = V_0;
		return L_1;
	}
}
// System.Void SimpleTouchPad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleTouchPad__ctor_mAC5859B8C06C897343768E67E626069876F502D5 (SimpleTouchPad_t73CF1F4E33E93548AE3E433AC432592188D3384C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpawnManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_Start_mFA050B5C59C7CC47F4430CA0F5A646051D5442CB (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE1A3D479601E6166CE5E927065D3A1E515EF5AA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_gameManager_6(L_1);
		// if (gameManager == null)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = __this->get_gameManager_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// Debug.Log("Can not find gameManager");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFE1A3D479601E6166CE5E927065D3A1E515EF5AA, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void SpawnManager::StartSpawnRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_StartSpawnRoutine_m6F2E3140486F0CE5B1DEF6C51FF62B20DF60CF7E (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(EnemySpawnRoutine());
		RuntimeObject* L_0;
		L_0 = SpawnManager_EnemySpawnRoutine_m6B5A4EA61F3C7450F1C703C3BB3827755AE05334(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// StartCoroutine(PowerupSpawnRoutine());
		RuntimeObject* L_2;
		L_2 = SpawnManager_PowerupSpawnRoutine_m1F59B66ECEFCF39D7B8779D3C4CA672B5C8C984D(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SpawnManager::EnemySpawnRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnManager_EnemySpawnRoutine_m6B5A4EA61F3C7450F1C703C3BB3827755AE05334 (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1 * L_0 = (U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1 *)il2cpp_codegen_object_new(U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1_il2cpp_TypeInfo_var);
		U3CEnemySpawnRoutineU3Ed__5__ctor_m34FCC08F1231E31042670E47FFAC5D5B9E58BA91(L_0, 0, /*hidden argument*/NULL);
		U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SpawnManager::PowerupSpawnRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnManager_PowerupSpawnRoutine_m1F59B66ECEFCF39D7B8779D3C4CA672B5C8C984D (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D * L_0 = (U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D *)il2cpp_codegen_object_new(U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D_il2cpp_TypeInfo_var);
		U3CPowerupSpawnRoutineU3Ed__6__ctor_m5031C43DCDDBD47D773DDB8030F8EE615D9B1FA2(L_0, 0, /*hidden argument*/NULL);
		U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void SpawnManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager__ctor_mBCD48EEAB1EB733A88D47C85ACC373C796F20E59 (SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Start_mAA4B371DC406146E84A9D8803B9C861939B2E04E (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48A737B69728B9E54718E735C8E8E3AF09367C1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A12E64C285A43EE258D15AE96138179CA5633F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1C044EC81CAB3BA6DEBF115FE3CAD065CBBF24C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF033E850D9B45F6070E784A20F39003B74D82425);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE1A3D479601E6166CE5E927065D3A1E515EF5AA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_gameManager_15(L_1);
		// if (gameManager == null)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = __this->get_gameManager_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// Debug.Log("Can not find gameManager");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFE1A3D479601E6166CE5E927065D3A1E515EF5AA, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// gamePausePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_gamePausePanel_18();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// gameOverPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_gameOverPanel_20();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// gameOverMessagePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_gameOverMessagePanel_19();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// earnLivePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_earnLivePanel_22();
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// adFailedPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_adFailedPanel_23();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// if (PlayerPrefs.GetInt("earnLiveScore", 0) > 0)
		int32_t L_10;
		L_10 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral48A737B69728B9E54718E735C8E8E3AF09367C1F, 0, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_00a7;
		}
	}
	{
		// currentScore = PlayerPrefs.GetInt("earnLiveScore", 0);
		int32_t L_12;
		L_12 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral48A737B69728B9E54718E735C8E8E3AF09367C1F, 0, /*hidden argument*/NULL);
		__this->set_currentScore_11(L_12);
		// PlayerPrefs.SetInt("earnLiveScore", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral48A737B69728B9E54718E735C8E8E3AF09367C1F, 0, /*hidden argument*/NULL);
		goto IL_00b0;
	}

IL_00a7:
	{
		// currentScore = 0;
		__this->set_currentScore_11(0);
	}

IL_00b0:
	{
		// totalScore = PlayerPrefs.GetInt("totalScore", 0);
		int32_t L_13;
		L_13 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralB1C044EC81CAB3BA6DEBF115FE3CAD065CBBF24C, 0, /*hidden argument*/NULL);
		__this->set_totalScore_12(L_13);
		// bestScore = PlayerPrefs.GetInt("bestScore", 0);
		int32_t L_14;
		L_14 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7, 0, /*hidden argument*/NULL);
		__this->set_bestScore_13(L_14);
		// currentScoreText.text = "Score: " + currentScore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_currentScoreText_6();
		int32_t* L_16 = __this->get_address_of_currentScore_11();
		String_t* L_17;
		L_17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_18);
		// totalScoreText.text = "Total Score: " + totalScore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_totalScoreText_7();
		int32_t* L_20 = __this->get_address_of_totalScore_12();
		String_t* L_21;
		L_21 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_20, /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5A12E64C285A43EE258D15AE96138179CA5633F9, L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_22);
		// bestScoreText.text = "Best Score: " + bestScore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = __this->get_bestScoreText_8();
		int32_t* L_24 = __this->get_address_of_bestScore_13();
		String_t* L_25;
		L_25 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_24, /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF033E850D9B45F6070E784A20F39003B74D82425, L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_26);
		// }
		return;
	}
}
// System.Void UIManager::UpdateLives(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateLives_m9EE8B586755461468D6E5EBE58ECD8B3A8DB5B63 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, int32_t ___currentLives0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// livesImageDisplay.sprite = lives[currentLives];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_livesImageDisplay_5();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_1 = __this->get_lives_4();
		int32_t L_2 = ___currentLives0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_0, L_4, /*hidden argument*/NULL);
		// if (currentLives < 1)
		int32_t L_5 = ___currentLives0;
		V_0 = (bool)((((int32_t)L_5) < ((int32_t)1))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		// gameManager.gamePause = true;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = __this->get_gameManager_15();
		NullCheck(L_7);
		L_7->set_gamePause_5((bool)1);
		// ShowGamePause();
		UIManager_ShowGamePause_mE9BDD231381857614B9117CDE56707A443EEF7DB(__this, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void UIManager::UpdateScores(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateScores_m717632F6A4DAC456F694C6C95CB3E772E1D24A45 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, int32_t ___score0, const RuntimeMethod* method)
{
	{
		// currentScore += score;
		int32_t L_0 = __this->get_currentScore_11();
		int32_t L_1 = ___score0;
		__this->set_currentScore_11(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// totalScore += score;
		int32_t L_2 = __this->get_totalScore_12();
		int32_t L_3 = ___score0;
		__this->set_totalScore_12(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		// UpdateCurrentScore();
		UIManager_UpdateCurrentScore_m4457A1FCB84E2E30C7AE8DFBA0E11DE0E9611513(__this, /*hidden argument*/NULL);
		// UpdateTotalScore();
		UIManager_UpdateTotalScore_m1647558309C498278BCE88BC11EE3EB522C98982(__this, /*hidden argument*/NULL);
		// UpdateBestScore();
		UIManager_UpdateBestScore_mCB693C8B7859B168E1CD66004FB193E7E6D785A9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::UpdateCurrentScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateCurrentScore_m4457A1FCB84E2E30C7AE8DFBA0E11DE0E9611513 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67AFB11C3BFD8879E7E721D7CA3BFB3CD46BDF35);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("currentScore", currentScore);
		int32_t L_0 = __this->get_currentScore_11();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral67AFB11C3BFD8879E7E721D7CA3BFB3CD46BDF35, L_0, /*hidden argument*/NULL);
		// currentScoreText.text = "Score: " + currentScore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_currentScoreText_6();
		int32_t* L_2 = __this->get_address_of_currentScore_11();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void UIManager::UpdateTotalScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateTotalScore_m1647558309C498278BCE88BC11EE3EB522C98982 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A12E64C285A43EE258D15AE96138179CA5633F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1C044EC81CAB3BA6DEBF115FE3CAD065CBBF24C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("totalScore", totalScore);
		int32_t L_0 = __this->get_totalScore_12();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralB1C044EC81CAB3BA6DEBF115FE3CAD065CBBF24C, L_0, /*hidden argument*/NULL);
		// totalScoreText.text = "Total Score: " + totalScore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_totalScoreText_7();
		int32_t* L_2 = __this->get_address_of_totalScore_12();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5A12E64C285A43EE258D15AE96138179CA5633F9, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void UIManager::UpdateBestScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateBestScore_mCB693C8B7859B168E1CD66004FB193E7E6D785A9 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67AFB11C3BFD8879E7E721D7CA3BFB3CD46BDF35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF033E850D9B45F6070E784A20F39003B74D82425);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (PlayerPrefs.GetInt("currentScore", 0) > PlayerPrefs.GetInt("bestScore", 0))
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral67AFB11C3BFD8879E7E721D7CA3BFB3CD46BDF35, 0, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7, 0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0064;
		}
	}
	{
		// currentScore = PlayerPrefs.GetInt("currentScore", 0);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral67AFB11C3BFD8879E7E721D7CA3BFB3CD46BDF35, 0, /*hidden argument*/NULL);
		__this->set_currentScore_11(L_3);
		// PlayerPrefs.SetInt("bestScore", currentScore);
		int32_t L_4 = __this->get_currentScore_11();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7, L_4, /*hidden argument*/NULL);
		// bestScoreText.text = "Best Score: " + currentScore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_bestScoreText_8();
		int32_t* L_6 = __this->get_address_of_currentScore_11();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF033E850D9B45F6070E784A20F39003B74D82425, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		goto IL_0098;
	}

IL_0064:
	{
		// PlayerPrefs.SetInt("bestScore", bestScore);
		int32_t L_9 = __this->get_bestScore_13();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7, L_9, /*hidden argument*/NULL);
		// bestScoreText.text = "Best Score: " + bestScore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_bestScoreText_8();
		int32_t* L_11 = __this->get_address_of_bestScore_13();
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF033E850D9B45F6070E784A20F39003B74D82425, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void UIManager::ShowTitleScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowTitleScreen_m5050DC3B2AED7B05628A996FD84191A7E4C51274 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCC566281E77A2B467D1186F6CD91586EA866B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33DA5C36016B709269B204F99F0C4A1546733320);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48A737B69728B9E54718E735C8E8E3AF09367C1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67AFB11C3BFD8879E7E721D7CA3BFB3CD46BDF35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1C044EC81CAB3BA6DEBF115FE3CAD065CBBF24C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE97A9F452A1925B875DD71ED956CA8AE4893303B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// titleScreen.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_titleScreen_14();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// gameOverPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_gameOverPanel_20();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// gameOverTotalScore.text = "Your's total score:  " + PlayerPrefs.GetInt("totalScore", 0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_gameOverTotalScore_9();
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralB1C044EC81CAB3BA6DEBF115FE3CAD065CBBF24C, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2DCC566281E77A2B467D1186F6CD91586EA866B8, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// if (PlayerPrefs.GetInt("bestScore", 0) > 0)
		int32_t L_6;
		L_6 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7, 0, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_6) > ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0083;
		}
	}
	{
		// gameOverBestScore.text = "Your's best score:  " + PlayerPrefs.GetInt("bestScore", 0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_gameOverBestScore_10();
		int32_t L_9;
		L_9 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7, 0, /*hidden argument*/NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral33DA5C36016B709269B204F99F0C4A1546733320, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		goto IL_00ae;
	}

IL_0083:
	{
		// gameOverBestScore.text = "Your's best score: " + PlayerPrefs.GetInt("currentScore", 0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_gameOverBestScore_10();
		int32_t L_13;
		L_13 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral67AFB11C3BFD8879E7E721D7CA3BFB3CD46BDF35, 0, /*hidden argument*/NULL);
		V_0 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE97A9F452A1925B875DD71ED956CA8AE4893303B, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
	}

IL_00ae:
	{
		// PlayerPrefs.SetInt("currentScore", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral67AFB11C3BFD8879E7E721D7CA3BFB3CD46BDF35, 0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("earnLiveScore", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral48A737B69728B9E54718E735C8E8E3AF09367C1F, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::HideTitileScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_HideTitileScreen_mDE6720D778B8A0075F652C75E82EFE077778FAFD (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// titleScreen.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_titleScreen_14();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// gameOverPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_gameOverPanel_20();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::ShowRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowRestart_mF1539A460CA5ADAFC327CF5AC303DB62F6EF25F2 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (gameManager.gameOver)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gameManager_15();
		NullCheck(L_0);
		bool L_1 = L_0->get_gameOver_4();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// restartButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_restartButton_16();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// quitButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_quitButton_17();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_002e:
	{
		// restartButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_restartButton_16();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// quitButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_quitButton_17();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void UIManager::ShowGamePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowGamePause_mE9BDD231381857614B9117CDE56707A443EEF7DB (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// gamePausePanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gamePausePanel_18();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UIManager::EarnLiveStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIManager_EarnLiveStatus_m8F540B9F803D1FD1FE7B167C33C74F573AF3E6BB (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return earnLive;
		bool L_0 = __this->get_earnLive_21();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UIManager::UpdateEarnLiveStatus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateEarnLiveStatus_m73D8110D49BB26BE9C7961B7EE59CB902373431C (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, bool ___livestatus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48A737B69728B9E54718E735C8E8E3AF09367C1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// earnLive = livestatus;
		bool L_0 = ___livestatus0;
		__this->set_earnLive_21(L_0);
		// PlayerPrefs.SetInt("earnLiveScore", currentScore);
		int32_t L_1 = __this->get_currentScore_11();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral48A737B69728B9E54718E735C8E8E3AF09367C1F, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mDADE1D724D40AF63AE78D51FC1CF1FE4784B4D4B (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// private bool earnLive = false;
		__this->set_earnLive_21((bool)0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AppTrackingTransparencyCallback_t40DFDE8BF747E57724D8ADD8D638DD1A6A11D1C4 (AppTrackingTransparencyCallback_t40DFDE8BF747E57724D8ADD8D638DD1A6A11D1C4 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___result0);

}
// System.Void Balaso.AppTrackingTransparency/AppTrackingTransparencyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparencyCallback__ctor_m54BE9F376E38551D59E6E568E65B48FE3AF81EB1 (AppTrackingTransparencyCallback_t40DFDE8BF747E57724D8ADD8D638DD1A6A11D1C4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Balaso.AppTrackingTransparency/AppTrackingTransparencyCallback::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparencyCallback_Invoke_mA386E59DD77DDE78996DAC9F22AF52231FCF0B62 (AppTrackingTransparencyCallback_t40DFDE8BF747E57724D8ADD8D638DD1A6A11D1C4 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___result0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___result0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Balaso.AppTrackingTransparency/AppTrackingTransparencyCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppTrackingTransparencyCallback_BeginInvoke_mA61C0D00D3E53D232D336A7BD9BFB3EFFB3903B1 (AppTrackingTransparencyCallback_t40DFDE8BF747E57724D8ADD8D638DD1A6A11D1C4 * __this, int32_t ___result0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___result0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Balaso.AppTrackingTransparency/AppTrackingTransparencyCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppTrackingTransparencyCallback_EndInvoke_m16B884C2AFC6BA42B8D6D36C6CCDA54D72A2DE8E (AppTrackingTransparencyCallback_t40DFDE8BF747E57724D8ADD8D638DD1A6A11D1C4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player/<SpeedBoostPowerDownRoutine>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedBoostPowerDownRoutineU3Ed__37__ctor_m72BC991AAECAEC95F687978352F4B49C7DFA1A9B (U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Player/<SpeedBoostPowerDownRoutine>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedBoostPowerDownRoutineU3Ed__37_System_IDisposable_Dispose_m0A73B5EFC2CBB31520B2F8D11953AF7273C87F5B (U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Player/<SpeedBoostPowerDownRoutine>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpeedBoostPowerDownRoutineU3Ed__37_MoveNext_m925F60469B1AD8501B5DDD6ECF984894A983DE5E (U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(5.0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isSpeedBoosterActive = false;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		L_4->set_isSpeedBoosterActive_5((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object Player/<SpeedBoostPowerDownRoutine>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpeedBoostPowerDownRoutineU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB434C926DEF6EE72A3647AE4B18A6DBFC40A01A3 (U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Player/<SpeedBoostPowerDownRoutine>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedBoostPowerDownRoutineU3Ed__37_System_Collections_IEnumerator_Reset_mE883E7D0FB92A6233C33EB96228AAA89DB876E5D (U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpeedBoostPowerDownRoutineU3Ed__37_System_Collections_IEnumerator_Reset_mE883E7D0FB92A6233C33EB96228AAA89DB876E5D_RuntimeMethod_var)));
	}
}
// System.Object Player/<SpeedBoostPowerDownRoutine>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpeedBoostPowerDownRoutineU3Ed__37_System_Collections_IEnumerator_get_Current_m502490B0BE7FAB7E2013AC6CC98887E401F65E7F (U3CSpeedBoostPowerDownRoutineU3Ed__37_t0192997F1F6484576DC692D76D4CB718EE2C7B0F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player/<TripleShootPowerDownRoutine>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTripleShootPowerDownRoutineU3Ed__36__ctor_m27743384BA1228045A2C3504F90ACE3D1A47C65D (U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Player/<TripleShootPowerDownRoutine>d__36::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTripleShootPowerDownRoutineU3Ed__36_System_IDisposable_Dispose_m3BF5922AEEFB8289A8D3022D563BC27CC1CF8FCD (U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Player/<TripleShootPowerDownRoutine>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTripleShootPowerDownRoutineU3Ed__36_MoveNext_m967D506BB0534226D5BE6E77F169DBF00AB01603 (U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(5.0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// canTripleShoot = false;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		L_4->set_canTripleShoot_4((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object Player/<TripleShootPowerDownRoutine>d__36::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTripleShootPowerDownRoutineU3Ed__36_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC745230C4E837DF35DE34173DB5E3DEA500CFD66 (U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Player/<TripleShootPowerDownRoutine>d__36::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTripleShootPowerDownRoutineU3Ed__36_System_Collections_IEnumerator_Reset_m3E4F482804BDF9DB95EE5E094F0ECE1AB1B8CBBE (U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTripleShootPowerDownRoutineU3Ed__36_System_Collections_IEnumerator_Reset_m3E4F482804BDF9DB95EE5E094F0ECE1AB1B8CBBE_RuntimeMethod_var)));
	}
}
// System.Object Player/<TripleShootPowerDownRoutine>d__36::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTripleShootPowerDownRoutineU3Ed__36_System_Collections_IEnumerator_get_Current_m569054F64252E6FADEEB3A96E5EB0561EF2B335A (U3CTripleShootPowerDownRoutineU3Ed__36_tA271231F46ECE951294536232AB3FA9D7815AD91 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpawnManager/<EnemySpawnRoutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnemySpawnRoutineU3Ed__5__ctor_m34FCC08F1231E31042670E47FFAC5D5B9E58BA91 (U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SpawnManager/<EnemySpawnRoutine>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnemySpawnRoutineU3Ed__5_System_IDisposable_Dispose_mEE84CADA3BCA9102C0EE4B8F4094F37D2B7A9BDA (U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SpawnManager/<EnemySpawnRoutine>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnemySpawnRoutineU3Ed__5_MoveNext_m8509D276D2B638A883BCE9C7BCD1C13AEBB93178 (U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B13_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_007c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0084;
	}

IL_0022:
	{
		// float randomX = Random.Range(-2.35f, 2.35f);
		float L_3;
		L_3 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-2.3499999f), (2.3499999f), /*hidden argument*/NULL);
		__this->set_U3CrandomXU3E5__1_3(L_3);
		// Instantiate(enemyShipPrefab, new Vector3(randomX, 7, 0), Quaternion.identity);
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_enemyShipPrefab_4();
		float L_6 = __this->get_U3CrandomXU3E5__1_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), L_6, (7.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// yield return new WaitForSeconds(5.0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_10 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_10, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_007c:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0084:
	{
		// while (gameManager.gameOver == false && gameManager.gamePause == false)
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_11 = __this->get_U3CU3E4__this_2();
		NullCheck(L_11);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_12 = L_11->get_gameManager_6();
		NullCheck(L_12);
		bool L_13 = L_12->get_gameOver_4();
		if (L_13)
		{
			goto IL_00ab;
		}
	}
	{
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_14 = __this->get_U3CU3E4__this_2();
		NullCheck(L_14);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_15 = L_14->get_gameManager_6();
		NullCheck(L_15);
		bool L_16 = L_15->get_gamePause_5();
		G_B13_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B13_0 = 0;
	}

IL_00ac:
	{
		V_1 = (bool)G_B13_0;
		bool L_17 = V_1;
		if (L_17)
		{
			goto IL_0022;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SpawnManager/<EnemySpawnRoutine>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnemySpawnRoutineU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC58B1339ABE385D2F8B6C313E30FF4FB1E324BB3 (U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SpawnManager/<EnemySpawnRoutine>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnemySpawnRoutineU3Ed__5_System_Collections_IEnumerator_Reset_m21A0B60180064D71CF4BC0E91F9EA235C765A65F (U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnemySpawnRoutineU3Ed__5_System_Collections_IEnumerator_Reset_m21A0B60180064D71CF4BC0E91F9EA235C765A65F_RuntimeMethod_var)));
	}
}
// System.Object SpawnManager/<EnemySpawnRoutine>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnemySpawnRoutineU3Ed__5_System_Collections_IEnumerator_get_Current_m500587BDEB9971A7F45471394C2B75A4B983AE6E (U3CEnemySpawnRoutineU3Ed__5_tA6EAFA617076086410BDBA295DABBE24B31EE5C1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpawnManager/<PowerupSpawnRoutine>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPowerupSpawnRoutineU3Ed__6__ctor_m5031C43DCDDBD47D773DDB8030F8EE615D9B1FA2 (U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SpawnManager/<PowerupSpawnRoutine>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPowerupSpawnRoutineU3Ed__6_System_IDisposable_Dispose_m439EF66A9C24100CF31ADC61478E607AD115089E (U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SpawnManager/<PowerupSpawnRoutine>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPowerupSpawnRoutineU3Ed__6_MoveNext_mD6FF305FB9C2C82EEB07FD3E8476AFEFED33D713 (U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B13_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0090;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0098;
	}

IL_0022:
	{
		// int randomPowerup = Random.Range(0, 3);
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 3, /*hidden argument*/NULL);
		__this->set_U3CrandomPowerupU3E5__1_3(L_3);
		// float randomX = Random.Range(-2.35f, 2.35f);
		float L_4;
		L_4 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-2.3499999f), (2.3499999f), /*hidden argument*/NULL);
		__this->set_U3CrandomXU3E5__2_4(L_4);
		// Instantiate(powerups[randomPowerup], new Vector3(randomX, 7, 0), Quaternion.identity);
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = L_5->get_powerups_5();
		int32_t L_7 = __this->get_U3CrandomPowerupU3E5__1_3();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = __this->get_U3CrandomXU3E5__2_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), L_10, (7.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_9, L_11, L_12, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// yield return new WaitForSeconds(5.0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_14 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_14, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0090:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0098:
	{
		// while (gameManager.gameOver == false && gameManager.gamePause == false)
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_15 = __this->get_U3CU3E4__this_2();
		NullCheck(L_15);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_16 = L_15->get_gameManager_6();
		NullCheck(L_16);
		bool L_17 = L_16->get_gameOver_4();
		if (L_17)
		{
			goto IL_00bf;
		}
	}
	{
		SpawnManager_t1E3383A95511E3FC4496CA224E61F0409C7FA6BE * L_18 = __this->get_U3CU3E4__this_2();
		NullCheck(L_18);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_19 = L_18->get_gameManager_6();
		NullCheck(L_19);
		bool L_20 = L_19->get_gamePause_5();
		G_B13_0 = ((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		goto IL_00c0;
	}

IL_00bf:
	{
		G_B13_0 = 0;
	}

IL_00c0:
	{
		V_1 = (bool)G_B13_0;
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_0022;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SpawnManager/<PowerupSpawnRoutine>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPowerupSpawnRoutineU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m484BB0851A7E0717D797642111545B9677AA45BB (U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SpawnManager/<PowerupSpawnRoutine>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPowerupSpawnRoutineU3Ed__6_System_Collections_IEnumerator_Reset_m774225A6532BF3363571E40AB748C3762911667E (U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPowerupSpawnRoutineU3Ed__6_System_Collections_IEnumerator_Reset_m774225A6532BF3363571E40AB748C3762911667E_RuntimeMethod_var)));
	}
}
// System.Object SpawnManager/<PowerupSpawnRoutine>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPowerupSpawnRoutineU3Ed__6_System_Collections_IEnumerator_get_Current_mFADF43A429B3DF52540DC76B77716A30F4525A06 (U3CPowerupSpawnRoutineU3Ed__6_t90D3316C23EDBCD0F8FC6BFEDCC10D103E77252D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m50BE6AA34EE21DA6BE7AF07AAC9115CAB6B0636A_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public int pointerId { get; set; }
		int32_t L_0 = __this->get_U3CpointerIdU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CpositionU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
