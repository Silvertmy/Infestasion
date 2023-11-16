#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<TouchLocation>
struct List_1_t36088A9408436D3F14F90FF593E4D628753B35B9;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<TouchLocation>
struct Predicate_1_tC47250C71B8625ECCF4159B020D64CB1BE358368;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.Animator[]
struct AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TouchLocation[]
struct TouchLocationU5BU5D_t803C97EB969D99AE63A74BF2CA756FC129977F39;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityStandardAssets.Cameras.AbstractTargetFollower
struct AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// BULL_ACTIVE
struct BULL_ACTIVE_t78EC829D874D8DAC1B6F835502311EDA108E6C80;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// BulletSpeed
struct BulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D;
// Calculator
struct Calculator_t389638575C84A8A1DFB078C20898C5BE1449CCCF;
// CamerShake
struct CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraFol
struct CameraFol_t310D292663B30F9CD9CD814E0283686F41B36F99;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// CharacterHealth
struct CharacterHealth_t66AE08E0DD000B0034391D9447ADFF0E73653A69;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// CollidingBox
struct CollidingBox_tC669B420C0A0FA3ADC055A75FFFF51218191B26C;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CrossMouse
struct CrossMouse_tCB4F764449B21A1CEF6BDC85525073EC9B02E005;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Door_Mechanism_1
struct Door_Mechanism_1_tDF834CCD7FF50A82EE6905134B32EF0B2AD90B94;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// EnemyAI
struct EnemyAI_t062D6559860346BBF7415F088B566404469B3C50;
// EnemyAI_2
struct EnemyAI_2_tB10A5D37D3123B39E1E619898841689F057BCE16;
// EnemyFollowAI
struct EnemyFollowAI_tFAEA2DEEACCB5FFA7AF39B74464ED8983879C981;
// EnemyHealth
struct EnemyHealth_t2937DFCC8299F967896C0B08F9D3E3F2816AA53D;
// EnemyLife
struct EnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FiringScript
struct FiringScript_t31B6F0AEEFD2E881E0F174E2F21788382B8278D5;
// FollowCam
struct FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityStandardAssets.Cameras.FreeLookCam
struct FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GarH
struct GarH_tA1E58EFD36124D61FF65A78293E0CA07DD80EC82;
// GiantDamage
struct GiantDamage_tBE7B195551389867D164EA3A41E2ACFB2C2323B2;
// GiantLife
struct GiantLife_t336CE74172B20EDE8D681600A1C2C0E6623CC61E;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HealthController
struct HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8;
// HostageHealth
struct HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Joystick
struct Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A;
// JoystickShoot
struct JoystickShoot_t874A67A96B80A2A285066412AE2441745DFFC265;
// LevelGameSystem
struct LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC;
// LookatMouse
struct LookatMouse_t778DC7E8BA0362F9A106293A413C583034EA61C7;
// MajorZombie
struct MajorZombie_t75C0B1A23D2A9ACFA2E166A4263AE619529B0FC5;
// ManageContChar2
struct ManageContChar2_t3F99C5A21BCD1575D4BD0839EB637E50601DF94C;
// ManageContCharMove
struct ManageContCharMove_tE340DF67C26C917A1031A7E3C0391AAFB9FAF797;
// ManagerControlRot
struct ManagerControlRot_t58D6D04DD546CB59B47A7C48392ADE824D505453;
// ManagerJoyStick
struct ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveBullet
struct MoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6;
// MultipleTouch
struct MultipleTouch_tBA257E575E5E27F0251FD9717B92ECD31F68C129;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OptionScript
struct OptionScript_tC34BBAC056FE53C928E70FCBE378B9A4777DE375;
// ParticleDestroy
struct ParticleDestroy_t4D8EF5DB589DA408FB299FE30FC0DC4CF0D01022;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityStandardAssets.Cameras.PivotBasedCameraRig
struct PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13;
// PlayerLife
struct PlayerLife_t148880044E384DF6D482766356838134F900C2E3;
// PlayerMove
struct PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// ROTATE
struct ROTATE_t2EBA711A93338BD821974C17EC80AD535AD071D8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SelfRotation
struct SelfRotation_t42ED2474CFF99E8EC126EEFDD6DABA3F54CD286F;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// SpawnPref
struct SpawnPref_tF7305B8F9C26E6F66E097FFDCF70CAADBFFA6D89;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// SwitchToggle
struct SwitchToggle_t83F5713BF80951A736648FDC8EBADF0ADDDB60A9;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// TouchLocation
struct TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TriggerGem1
struct TriggerGem1_t96AB2BCAF504F3C59B5DD7EFAA3102BAFBF1C38B;
// TriggerGem2
struct TriggerGem2_tCD5DE01B6A4AD09B7954AA8B78B721736323048A;
// TriggerMe
struct TriggerMe_tC9F0681E8E33C26D1B81C05C713FAF0781824596;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// ViewJoystickManager
struct ViewJoystickManager_tB7402189536340D755C38B07A39BB5C5B9FB4424;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WeaponBOT
struct WeaponBOT_t15595F5DCC80EB2CE2C02F292748FEE0DAE17D53;
// WeaponController
struct WeaponController_t2E7D11FCBE8704BB2CCB69FF9693756E70147811;
// Weapon_2
struct Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D;
// Weapons
struct Weapons_t30925373DADE142BBB37448ECD15500F0A38182C;
// ZombieLife
struct ZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4;
// followEN
struct followEN_tB5575CBA370231EAD9FF4033D1551C3379642E04;
// timedown
struct timedown_t8336BD09D32D9A0F9DA1A3010E4E334395A17DC7;
// CamerShake/<Shake>d__0
struct U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MultipleTouch/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4;
// ParticleDestroy/<LoseTime>d__6
struct U3CLoseTimeU3Ed__6_t8C09AF88DAB81D3A498CE400E3826C4CB41C7F49;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// Weapons/<StopCooldownAfterTime>d__10
struct U3CStopCooldownAfterTimeU3Ed__10_tC6D6CCBC936AAEAD7FB2F2953085FE9F3281F0AB;
// timedown/<LoseTime>d__7
struct U3CLoseTimeU3Ed__7_tBE83675AFD37F6AFDC005A117BDAFE18F1D1F782;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t36088A9408436D3F14F90FF593E4D628753B35B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tC47250C71B8625ECCF4159B020D64CB1BE358368_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoseTimeU3Ed__6_t8C09AF88DAB81D3A498CE400E3826C4CB41C7F49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoseTimeU3Ed__7_tBE83675AFD37F6AFDC005A117BDAFE18F1D1F782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStopCooldownAfterTimeU3Ed__10_tC6D6CCBC936AAEAD7FB2F2953085FE9F3281F0AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral033E6F5D9EAF271D19A34302DC37033994EB091F;
IL2CPP_EXTERN_C String_t* _stringLiteral0B8764C8C85EE447A5BE5F13ED134DA87603EE0C;
IL2CPP_EXTERN_C String_t* _stringLiteral0EDEFB067C390BA42E348F3DCADB76DB4BE12FC0;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral291A935FB46F877A7F100F14B7AC7A6CB44AF3BD;
IL2CPP_EXTERN_C String_t* _stringLiteral2D7F0A601B5296DD16706E740FA1E95EE5A3058E;
IL2CPP_EXTERN_C String_t* _stringLiteral2FB7972B84BB2690F39BA26E45B44D883EF7BC11;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral39B40D41792F29F7CD36E6C1B1304273CD84F988;
IL2CPP_EXTERN_C String_t* _stringLiteral3C328FED8FA5A1FEDA936F2CF769768F0742C775;
IL2CPP_EXTERN_C String_t* _stringLiteral3DB6F2D0F1313591A2BA0F452AE1F2AFF6439E37;
IL2CPP_EXTERN_C String_t* _stringLiteral3F25536833AF0089E79326ADB060902FE82449BD;
IL2CPP_EXTERN_C String_t* _stringLiteral410E9BC8BA3E0E84911D5057DF030791535C1A7E;
IL2CPP_EXTERN_C String_t* _stringLiteral423D32C64DD7DF4DC84E96CED016B193CB121D59;
IL2CPP_EXTERN_C String_t* _stringLiteral45120797FA2682F55E6EB0E05BB4BC8E1250E3C8;
IL2CPP_EXTERN_C String_t* _stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7;
IL2CPP_EXTERN_C String_t* _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B;
IL2CPP_EXTERN_C String_t* _stringLiteral487D1E08ACDB1A82B040003803E7FF153A871B9C;
IL2CPP_EXTERN_C String_t* _stringLiteral4C459A33B11E3AB83E34CD4E146B521BA8ED64F5;
IL2CPP_EXTERN_C String_t* _stringLiteral4D0B62B1E6E0FE0C27CA3B8D95E5D8EC4253EDDE;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral5D6C5C7D9E928CBF5B4CE0053E0CD35A295B90AE;
IL2CPP_EXTERN_C String_t* _stringLiteral664DABBB1F96C857595AF4BB8A0CB71AC398FA3B;
IL2CPP_EXTERN_C String_t* _stringLiteral676E1309992ECD8CD1E6DB0EFFEB77A1B34AAFD8;
IL2CPP_EXTERN_C String_t* _stringLiteral7231B5BD6E759506CD6E022C1F29BE85D3FEC62F;
IL2CPP_EXTERN_C String_t* _stringLiteral743341BDE67F45E2E77619FAAB6036185639CAD8;
IL2CPP_EXTERN_C String_t* _stringLiteral796CDE6847A4FF4C998740E3B2E4F81A3625D68B;
IL2CPP_EXTERN_C String_t* _stringLiteral7AA0CF788759E982A5F45F96DF2BC514A7CAE15D;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral80DFB27CCC6CCF3576955208EDB98ABF86D1E5D8;
IL2CPP_EXTERN_C String_t* _stringLiteral847E51BCB4E213369426485C3E90E9F9A21C57CC;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteral94191D49E20F6FFDC5335E5BA11306634C29DD55;
IL2CPP_EXTERN_C String_t* _stringLiteralA7CA50FB480F64445BC691849272378C77C45D21;
IL2CPP_EXTERN_C String_t* _stringLiteralAFAE335F02C29A50BC5AF2B6A2CED1D883446150;
IL2CPP_EXTERN_C String_t* _stringLiteralB15927D4240AE553D7E967886A9A2E98E0595AFB;
IL2CPP_EXTERN_C String_t* _stringLiteralB71E2E364E2F2ED1BC4C611179CB01AC9A742776;
IL2CPP_EXTERN_C String_t* _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07;
IL2CPP_EXTERN_C String_t* _stringLiteralBCC1A653A8451839100C2815C538B2B7A46F73E6;
IL2CPP_EXTERN_C String_t* _stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5;
IL2CPP_EXTERN_C String_t* _stringLiteralCA587B6F4851F73D9E2260B6B181D16390C59262;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCB0DB6F4F3CA78AF9E7D8CDADB8863A90C0E3D6D;
IL2CPP_EXTERN_C String_t* _stringLiteralCFD4E60DD15E0CA1773C606F939355D53808C627;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDDD875B289DFB214638D87974909C69B8D8FB41F;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralE6DC48C404C38342FECF65DC3C9BB54B7FDD504A;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7_m90753D288AF766FD68F7845305B0BDB325009188_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D_m0D2D1066C72A694E605462DB867969655AB7139E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyFollowAI_tFAEA2DEEACCB5FFA7AF39B74464ED8983879C981_m31C3483EA58CF469237D24E6CBE25F706DE681DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A_m0E1E563031F990288CDBDA9E83DBC15806FE66B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGiantLife_t336CE74172B20EDE8D681600A1C2C0E6623CC61E_mD1CF7E25E317E3D8396EFF692C9F25AE324EC8D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57_m9DFB9AE953D3268C57CDCEEA6AA3020559D17760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMajorZombie_t75C0B1A23D2A9ACFA2E166A4263AE619529B0FC5_m6A2D04352C8A8EB2DF491C9B143799309D0ED9D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6_m25F1A4EB6E95DD389C2BF1632B0FD9FE9AD8F798_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerLife_t148880044E384DF6D482766356838134F900C2E3_m179C1342CB649F270B75CA22C6DB467409566887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4_m56626F5A49FE146412C26514C36C9158C45C453E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m745FE794EA3CE7C6CA4816750B645A5F83E4558A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m25C67A8B403FF8391A3B8F6FA64A289019FEC591_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m22572938BDBF55225CA4B78095C44A146D2FF6F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m66E04271209CD2436BB77CF3F12DE1E9DD46B0F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6A334501209E35E555A27F035DCCCE548C641CAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SwitchToggle_OnSwitch_mCA6FDEA52D061020A9D33B3F735EDC3EDC17ECB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m272F2A88BE49F32CE36C0AD3F382B06C413F770D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoseTimeU3Ed__6_System_Collections_IEnumerator_Reset_m1FFB397FD0C65E8C1D8FD37E6581B8D74D037B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoseTimeU3Ed__7_System_Collections_IEnumerator_Reset_m7BC102ACAE27BEF06C40948539B9D9DA9421BB31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShakeU3Ed__0_System_Collections_IEnumerator_Reset_m0F98C88262AA0088E1C93EA48C1A4DCA5EEE4B70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStopCooldownAfterTimeU3Ed__10_System_Collections_IEnumerator_Reset_m70EC30E5253BDAC5FEE35CAF7A0214CCF0566EA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CUpdateU3Eb__0_m477F31D84025E96E3546E51303A028E5714085F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CUpdateU3Eb__1_m01A84B3464759049F5097E99C797315238791C86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TouchLocation>
struct List_1_t36088A9408436D3F14F90FF593E4D628753B35B9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TouchLocationU5BU5D_t803C97EB969D99AE63A74BF2CA756FC129977F39* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t36088A9408436D3F14F90FF593E4D628753B35B9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TouchLocationU5BU5D_t803C97EB969D99AE63A74BF2CA756FC129977F39* ___s_emptyArray_5;
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// ParticleDestroy/<LoseTime>d__6
struct U3CLoseTimeU3Ed__6_t8C09AF88DAB81D3A498CE400E3826C4CB41C7F49  : public RuntimeObject
{
	// System.Int32 ParticleDestroy/<LoseTime>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ParticleDestroy/<LoseTime>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ParticleDestroy ParticleDestroy/<LoseTime>d__6::<>4__this
	ParticleDestroy_t4D8EF5DB589DA408FB299FE30FC0DC4CF0D01022* ___U3CU3E4__this_2;
};

// Weapons/<StopCooldownAfterTime>d__10
struct U3CStopCooldownAfterTimeU3Ed__10_tC6D6CCBC936AAEAD7FB2F2953085FE9F3281F0AB  : public RuntimeObject
{
	// System.Int32 Weapons/<StopCooldownAfterTime>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Weapons/<StopCooldownAfterTime>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Weapons Weapons/<StopCooldownAfterTime>d__10::<>4__this
	Weapons_t30925373DADE142BBB37448ECD15500F0A38182C* ___U3CU3E4__this_2;
};

// timedown/<LoseTime>d__7
struct U3CLoseTimeU3Ed__7_tBE83675AFD37F6AFDC005A117BDAFE18F1D1F782  : public RuntimeObject
{
	// System.Int32 timedown/<LoseTime>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object timedown/<LoseTime>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// timedown timedown/<LoseTime>d__7::<>4__this
	timedown_t8336BD09D32D9A0F9DA1A3010E4E334395A17DC7* ___U3CU3E4__this_2;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 
{
	// System.Boolean DG.Tweening.Plugins.Options.ColorOptions::alphaOnly
	bool ___alphaOnly_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_pinvoke
{
	int32_t ___alphaOnly_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_com
{
	int32_t ___alphaOnly_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
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
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;
};

// CamerShake/<Shake>d__0
struct U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C  : public RuntimeObject
{
	// System.Int32 CamerShake/<Shake>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CamerShake/<Shake>d__0::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CamerShake CamerShake/<Shake>d__0::<>4__this
	CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* ___U3CU3E4__this_2;
	// System.Single CamerShake/<Shake>d__0::magnitude
	float ___magnitude_3;
	// System.Single CamerShake/<Shake>d__0::duration
	float ___duration_4;
	// UnityEngine.Vector3 CamerShake/<Shake>d__0::<originalPos>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CoriginalPosU3E5__2_5;
	// System.Single CamerShake/<Shake>d__0::<elapsed>5__3
	float ___U3CelapsedU3E5__3_6;
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// MultipleTouch/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4  : public RuntimeObject
{
	// UnityEngine.Touch MultipleTouch/<>c__DisplayClass2_0::t
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___t_0;
};

// System.Predicate`1<TouchLocation>
struct Predicate_1_tC47250C71B8625ECCF4159B020D64CB1BE358368  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityStandardAssets.Cameras.AbstractTargetFollower
struct AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform UnityStandardAssets.Cameras.AbstractTargetFollower::m_Target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Target_4;
	// System.Boolean UnityStandardAssets.Cameras.AbstractTargetFollower::m_AutoTargetPlayer
	bool ___m_AutoTargetPlayer_5;
	// UnityStandardAssets.Cameras.AbstractTargetFollower/UpdateType UnityStandardAssets.Cameras.AbstractTargetFollower::m_UpdateType
	int32_t ___m_UpdateType_6;
	// UnityEngine.Rigidbody UnityStandardAssets.Cameras.AbstractTargetFollower::targetRigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___targetRigidbody_7;
};

// BULL_ACTIVE
struct BULL_ACTIVE_t78EC829D874D8DAC1B6F835502311EDA108E6C80  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BULL_ACTIVE::Damage
	float ___Damage_4;
};

// BulletSpeed
struct BulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform BulletSpeed::hitPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___hitPoint_4;
	// UnityEngine.GameObject BulletSpeed::dirt
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dirt_5;
	// UnityEngine.GameObject BulletSpeed::spark
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spark_6;
	// UnityEngine.GameObject BulletSpeed::explosive
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explosive_7;
	// System.Single BulletSpeed::Damage
	float ___Damage_8;
	// System.Int32 BulletSpeed::speed
	int32_t ___speed_9;
};

// Calculator
struct Calculator_t389638575C84A8A1DFB078C20898C5BE1449CCCF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Calculator::firstNum
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___firstNum_4;
	// UnityEngine.UI.Text Calculator::secondNum
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___secondNum_5;
	// UnityEngine.UI.Text Calculator::Ans
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Ans_6;
	// System.Int32 Calculator::First
	int32_t ___First_7;
	// System.Int32 Calculator::Second
	int32_t ___Second_8;
	// System.Int32 Calculator::Solution
	int32_t ___Solution_9;
	// System.Int32 Calculator::Choice
	int32_t ___Choice_10;
	// UnityEngine.GameObject Calculator::Ch1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Ch1_11;
	// UnityEngine.GameObject Calculator::Ch2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Ch2_12;
	// UnityEngine.GameObject Calculator::button1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___button1_13;
	// UnityEngine.GameObject Calculator::button2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___button2_14;
	// UnityEngine.GameObject Calculator::Solu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Solu_15;
	// LevelGameSystem Calculator::leveling
	LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* ___leveling_16;
	// System.Int32 Calculator::weaponAbility
	int32_t ___weaponAbility_17;
	// System.Int32 Calculator::GunRate
	int32_t ___GunRate_18;
};

// CamerShake
struct CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CameraFol
struct CameraFol_t310D292663B30F9CD9CD814E0283686F41B36F99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform CameraFol::targetObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetObject_4;
	// UnityEngine.Vector3 CameraFol::cameraoffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraoffset_5;
};

// CharacterHealth
struct CharacterHealth_t66AE08E0DD000B0034391D9447ADFF0E73653A69  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image CharacterHealth::_healthbarSprite
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____healthbarSprite_4;
	// PlayerLife CharacterHealth::playerLife
	PlayerLife_t148880044E384DF6D482766356838134F900C2E3* ___playerLife_5;
};

// CollidingBox
struct CollidingBox_tC669B420C0A0FA3ADC055A75FFFF51218191B26C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CrossMouse
struct CrossMouse_tCB4F764449B21A1CEF6BDC85525073EC9B02E005  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform CrossMouse::crosshair
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___crosshair_4;
};

// Door_Mechanism_1
struct Door_Mechanism_1_tDF834CCD7FF50A82EE6905134B32EF0B2AD90B94  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator Door_Mechanism_1::Door_Motion
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___Door_Motion_4;
	// UnityEngine.GameObject Door_Mechanism_1::entry
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___entry_5;
	// UnityEngine.GameObject Door_Mechanism_1::dipart
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dipart_6;
	// UnityEngine.GameObject Door_Mechanism_1::Hall01
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Hall01_7;
	// UnityEngine.GameObject Door_Mechanism_1::Hall02
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Hall02_8;
	// UnityEngine.GameObject Door_Mechanism_1::Hall03
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Hall03_9;
};

// EnemyAI
struct EnemyAI_t062D6559860346BBF7415F088B566404469B3C50  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AI.NavMeshAgent EnemyAI::agent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___agent_4;
	// UnityEngine.Transform EnemyAI::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_5;
	// UnityEngine.LayerMask EnemyAI::whatIsGround
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___whatIsGround_6;
	// UnityEngine.LayerMask EnemyAI::whatIsPlayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___whatIsPlayer_7;
	// UnityEngine.Vector3 EnemyAI::walkPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___walkPoint_8;
	// System.Boolean EnemyAI::walkPointSet
	bool ___walkPointSet_9;
	// System.Single EnemyAI::walkPointRange
	float ___walkPointRange_10;
	// System.Single EnemyAI::timeBetweenAttacks
	float ___timeBetweenAttacks_11;
	// System.Boolean EnemyAI::alreadyAttacked
	bool ___alreadyAttacked_12;
	// System.Single EnemyAI::sightRange
	float ___sightRange_13;
	// System.Single EnemyAI::attackRange
	float ___attackRange_14;
	// System.Boolean EnemyAI::playerInSightRange
	bool ___playerInSightRange_15;
	// System.Boolean EnemyAI::playerInAttackRange
	bool ___playerInAttackRange_16;
};

// EnemyAI_2
struct EnemyAI_2_tB10A5D37D3123B39E1E619898841689F057BCE16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform EnemyAI_2::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_4;
	// System.Single EnemyAI_2::dist
	float ___dist_5;
	// System.Single EnemyAI_2::moveSpeed
	float ___moveSpeed_6;
	// UnityEngine.GameObject EnemyAI_2::BORfire1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BORfire1_7;
	// UnityEngine.GameObject EnemyAI_2::BORfire2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BORfire2_8;
	// UnityEngine.GameObject EnemyAI_2::BORfire3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BORfire3_9;
	// UnityEngine.AI.NavMeshAgent EnemyAI_2::enemy
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___enemy_10;
	// System.Single EnemyAI_2::howclose_tolook
	float ___howclose_tolook_11;
	// System.Single EnemyAI_2::howclose_to_detect
	float ___howclose_to_detect_12;
	// System.Single EnemyAI_2::attackpos
	float ___attackpos_13;
	// System.Single EnemyAI_2::howclose_tomove
	float ___howclose_tomove_14;
	// UnityEngine.GameObject EnemyAI_2::Suspicious
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Suspicious_15;
	// UnityEngine.Animator EnemyAI_2::Attackmode_anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___Attackmode_anim_16;
	// UnityEngine.Vector3 EnemyAI_2::turn
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___turn_17;
	// System.Single EnemyAI_2::stopSpeed
	float ___stopSpeed_18;
	// System.Boolean EnemyAI_2::Ismoving
	bool ___Ismoving_19;
	// UnityEngine.Transform EnemyAI_2::detectionPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___detectionPoint_20;
	// System.Single EnemyAI_2::MaxDetectionDist
	float ___MaxDetectionDist_21;
};

// EnemyFollowAI
struct EnemyFollowAI_tFAEA2DEEACCB5FFA7AF39B74464ED8983879C981  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform EnemyFollowAI::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_4;
	// UnityEngine.AI.NavMeshAgent EnemyFollowAI::agent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___agent_5;
	// System.Single EnemyFollowAI::Damage
	float ___Damage_6;
	// HostageHealth EnemyFollowAI::hostagedamage
	HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57* ___hostagedamage_7;
	// UnityEngine.Animator[] EnemyFollowAI::anim
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* ___anim_8;
	// System.Single EnemyFollowAI::stoppingDistance
	float ___stoppingDistance_9;
};

// EnemyHealth
struct EnemyHealth_t2937DFCC8299F967896C0B08F9D3E3F2816AA53D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 EnemyHealth::currentHealth
	int32_t ___currentHealth_4;
};

// EnemyLife
struct EnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnemyLife::_maxHealth
	float ____maxHealth_4;
	// UnityEngine.GameObject EnemyLife::_deatheffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____deatheffect_5;
	// UnityEngine.GameObject EnemyLife::_hitEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____hitEffect_6;
	// System.Single EnemyLife::_currentHealth
	float ____currentHealth_7;
	// UnityEngine.UI.Text EnemyLife::currentHealth
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___currentHealth_8;
	// UnityEngine.AI.NavMeshAgent EnemyLife::navMeshAgent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___navMeshAgent_9;
	// MoveBullet EnemyLife::mvBullet
	MoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6* ___mvBullet_10;
	// UnityEngine.GameObject EnemyLife::FullBOT
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FullBOT_11;
	// UnityEngine.GameObject EnemyLife::Explode
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Explode_12;
	// CamerShake EnemyLife::cameraShake
	CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* ___cameraShake_13;
	// UnityEngine.Animator[] EnemyLife::anim
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* ___anim_14;
	// HealthController EnemyLife::_healthbar
	HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* ____healthbar_15;
};

// FiringScript
struct FiringScript_t31B6F0AEEFD2E881E0F174E2F21788382B8278D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single FiringScript::cooldownSpeed
	float ___cooldownSpeed_4;
	// System.Single FiringScript::fireRate
	float ___fireRate_5;
	// System.Single FiringScript::recoilCooldown
	float ___recoilCooldown_6;
	// System.Single FiringScript::accuracy
	float ___accuracy_7;
	// System.Single FiringScript::maxSpreadAngle
	float ___maxSpreadAngle_8;
	// System.Single FiringScript::timeTillMaxSpread
	float ___timeTillMaxSpread_9;
	// UnityEngine.GameObject FiringScript::bullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet_10;
	// System.Boolean FiringScript::isFiring
	bool ___isFiring_11;
	// System.Boolean FiringScript::stopFiring
	bool ___stopFiring_12;
	// System.Boolean FiringScript::isEnableAttack
	bool ___isEnableAttack_13;
	// System.Boolean FiringScript::isContType2
	bool ___isContType2_14;
	// System.Boolean FiringScript::fire
	bool ___fire_15;
	// UnityEngine.GameObject FiringScript::shootPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shootPoint_16;
	// UnityEngine.Transform FiringScript::spawnpoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnpoint_17;
};

// FollowCam
struct FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform FollowCam::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// System.Single FollowCam::smoothSpeed
	float ___smoothSpeed_5;
	// UnityEngine.Vector3 FollowCam::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_6;
};

// GarH
struct GarH_tA1E58EFD36124D61FF65A78293E0CA07DD80EC82  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera GarH::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_4;
	// UnityEngine.Collider GarH::planecollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___planecollider_5;
	// UnityEngine.RaycastHit GarH::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_6;
	// UnityEngine.Ray GarH::ray
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray_7;
};

// GiantDamage
struct GiantDamage_tBE7B195551389867D164EA3A41E2ACFB2C2323B2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GiantDamage::Ex
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Ex_4;
};

// GiantLife
struct GiantLife_t336CE74172B20EDE8D681600A1C2C0E6623CC61E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GiantLife::_maxHealth
	float ____maxHealth_4;
	// UnityEngine.GameObject GiantLife::_deatheffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____deatheffect_5;
	// UnityEngine.GameObject GiantLife::_hitEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____hitEffect_6;
	// System.Single GiantLife::_currentHealth
	float ____currentHealth_7;
	// UnityEngine.UI.Text GiantLife::currentHealth
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___currentHealth_8;
	// MoveBullet GiantLife::mvBullet
	MoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6* ___mvBullet_9;
	// UnityEngine.GameObject GiantLife::FullBOT
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FullBOT_10;
	// UnityEngine.GameObject GiantLife::Explode
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Explode_11;
	// CamerShake GiantLife::cameraShake
	CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* ___cameraShake_12;
	// HealthController GiantLife::_healthbar
	HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* ____healthbar_13;
};

// HealthController
struct HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image HealthController::_healthbarSprite
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____healthbarSprite_4;
	// EnemyLife HealthController::enemyLife
	EnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A* ___enemyLife_5;
	// UnityEngine.Camera HealthController::_cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____cam_6;
};

// HostageHealth
struct HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single HostageHealth::_maxHealth
	float ____maxHealth_4;
	// UnityEngine.GameObject HostageHealth::_deatheffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____deatheffect_5;
	// UnityEngine.GameObject HostageHealth::_hitEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____hitEffect_6;
	// System.Single HostageHealth::_currentHealth
	float ____currentHealth_7;
	// UnityEngine.UI.Text HostageHealth::currentHealth
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___currentHealth_8;
	// UnityEngine.GameObject HostageHealth::Explode
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Explode_9;
	// CamerShake HostageHealth::cameraShake
	CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* ___cameraShake_10;
	// HealthController HostageHealth::_healthbar
	HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* ____healthbar_11;
	// EnemyFollowAI HostageHealth::enemyfollow
	EnemyFollowAI_tFAEA2DEEACCB5FFA7AF39B74464ED8983879C981* ___enemyfollow_12;
	// MajorZombie HostageHealth::majorZombie
	MajorZombie_t75C0B1A23D2A9ACFA2E166A4263AE619529B0FC5* ___majorZombie_13;
	// LevelGameSystem HostageHealth::levels
	LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* ___levels_14;
};

// Joystick
struct Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Joystick::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_4;
	// System.Single Joystick::speed
	float ___speed_5;
	// System.Boolean Joystick::touchStart
	bool ___touchStart_6;
	// UnityEngine.Vector2 Joystick::pointA
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointA_7;
	// UnityEngine.Vector2 Joystick::pointB
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointB_8;
	// UnityEngine.Transform Joystick::circle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___circle_9;
	// UnityEngine.Transform Joystick::outerCircle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___outerCircle_10;
};

// JoystickShoot
struct JoystickShoot_t874A67A96B80A2A285066412AE2441745DFFC265  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform JoystickShoot::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_4;
	// System.Single JoystickShoot::speed
	float ___speed_5;
	// UnityEngine.UI.Image JoystickShoot::imgJoystickBg
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imgJoystickBg_6;
	// UnityEngine.UI.Image JoystickShoot::imgJoystick
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imgJoystick_7;
	// UnityEngine.Vector2 JoystickShoot::posInput
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___posInput_8;
	// UnityEngine.Transform JoystickShoot::circle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___circle_9;
	// UnityEngine.Transform JoystickShoot::outerCircle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___outerCircle_10;
	// ManagerJoyStick JoystickShoot::joymanager
	ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* ___joymanager_11;
	// Weapon_2 JoystickShoot::weapon
	Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D* ___weapon_12;
	// UnityEngine.Vector2 JoystickShoot::startingPoint
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startingPoint_13;
	// System.Int32 JoystickShoot::leftTouch
	int32_t ___leftTouch_14;
};

// LevelGameSystem
struct LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LevelGameSystem::Level
	int32_t ___Level_4;
	// UnityEngine.UI.Text LevelGameSystem::levelText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___levelText_5;
	// ZombieLife LevelGameSystem::zombieLife
	ZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4* ___zombieLife_6;
	// UnityEngine.GameObject LevelGameSystem::LevelComplete
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LevelComplete_7;
	// UnityEngine.GameObject LevelGameSystem::DeathMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___DeathMenu_8;
	// UnityEngine.GameObject LevelGameSystem::Dark
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Dark_9;
	// UnityEngine.GameObject LevelGameSystem::timedown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___timedown_10;
	// UnityEngine.Animator LevelGameSystem::OptionAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___OptionAnim_11;
	// System.Boolean LevelGameSystem::isPaused
	bool ___isPaused_12;
	// UnityEngine.GameObject LevelGameSystem::Effect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Effect_13;
	// UnityEngine.Animator[] LevelGameSystem::anim
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* ___anim_14;
	// System.Int32 LevelGameSystem::Cash
	int32_t ___Cash_15;
	// UnityEngine.UI.Text LevelGameSystem::cashpass
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___cashpass_16;
	// System.Int32 LevelGameSystem::CashScore
	int32_t ___CashScore_17;
	// UnityEngine.UI.Text LevelGameSystem::cashScoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___cashScoreText_18;
};

// LookatMouse
struct LookatMouse_t778DC7E8BA0362F9A106293A413C583034EA61C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single LookatMouse::rotationSpeed
	float ___rotationSpeed_4;
};

// MajorZombie
struct MajorZombie_t75C0B1A23D2A9ACFA2E166A4263AE619529B0FC5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform MajorZombie::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_4;
	// UnityEngine.AI.NavMeshAgent MajorZombie::agent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___agent_5;
	// System.Single MajorZombie::Damage
	float ___Damage_6;
	// HostageHealth MajorZombie::hostagedamage
	HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57* ___hostagedamage_7;
	// UnityEngine.Animator[] MajorZombie::anim
	AnimatorU5BU5D_tC96418EE48F8DA017567CAE0235488C27640E759* ___anim_8;
	// System.Single MajorZombie::stoppingDistance
	float ___stoppingDistance_9;
};

// ManageContChar2
struct ManageContChar2_t3F99C5A21BCD1575D4BD0839EB637E50601DF94C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CharacterController ManageContChar2::_charController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ____charController_4;
	// UnityEngine.Animator ManageContChar2::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_5;
	// ManagerJoyStick ManageContChar2::_mngrJoystick
	ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* ____mngrJoystick_6;
	// System.Single ManageContChar2::inputX
	float ___inputX_7;
	// System.Single ManageContChar2::inputY
	float ___inputY_8;
	// UnityEngine.Vector3 ManageContChar2::posMove
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posMove_9;
	// UnityEngine.Vector3 ManageContChar2::posRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posRotation_10;
	// System.Single ManageContChar2::moveSpeed
	float ___moveSpeed_11;
	// UnityEngine.Transform ManageContChar2::meshChar
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___meshChar_12;
};

// ManageContCharMove
struct ManageContCharMove_tE340DF67C26C917A1031A7E3C0391AAFB9FAF797  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CharacterController ManageContCharMove::_charController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ____charController_4;
	// UnityEngine.Animator ManageContCharMove::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_5;
	// ManagerJoyStick ManageContCharMove::_mngrJoystick
	ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* ____mngrJoystick_6;
	// System.Single ManageContCharMove::inputX
	float ___inputX_7;
	// System.Single ManageContCharMove::inputY
	float ___inputY_8;
	// UnityEngine.Vector3 ManageContCharMove::posMove
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posMove_9;
	// UnityEngine.Vector3 ManageContCharMove::posRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posRotation_10;
	// System.Single ManageContCharMove::moveSpeed
	float ___moveSpeed_11;
	// ManagerControlRot ManageContCharMove::_mngrConRot
	ManagerControlRot_t58D6D04DD546CB59B47A7C48392ADE824D505453* ____mngrConRot_12;
	// UnityEngine.Transform ManageContCharMove::meshChar
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___meshChar_13;
};

// ManagerControlRot
struct ManagerControlRot_t58D6D04DD546CB59B47A7C48392ADE824D505453  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image ManagerControlRot::areaofattack
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___areaofattack_4;
	// UnityEngine.UI.Image ManagerControlRot::stick
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___stick_5;
	// UnityEngine.Vector2 ManagerControlRot::posOut
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___posOut_6;
	// Weapon_2 ManagerControlRot::weapon
	Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D* ___weapon_7;
};

// ManagerJoyStick
struct ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image ManagerJoyStick::imgJoystickBg
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imgJoystickBg_4;
	// UnityEngine.UI.Image ManagerJoyStick::imgJoystick
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imgJoystick_5;
	// UnityEngine.Vector2 ManagerJoyStick::posInput
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___posInput_6;
};

// MoveBullet
struct MoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 MoveBullet::hitPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hitPoint_4;
	// UnityEngine.GameObject MoveBullet::dirt
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dirt_5;
	// UnityEngine.GameObject MoveBullet::spark
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spark_6;
	// UnityEngine.GameObject MoveBullet::explosive
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explosive_7;
	// System.Single MoveBullet::Damage
	float ___Damage_8;
	// System.Int32 MoveBullet::speed
	int32_t ___speed_9;
};

// MultipleTouch
struct MultipleTouch_tBA257E575E5E27F0251FD9717B92ECD31F68C129  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MultipleTouch::circle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___circle_4;
	// System.Collections.Generic.List`1<TouchLocation> MultipleTouch::touches
	List_1_t36088A9408436D3F14F90FF593E4D628753B35B9* ___touches_5;
};

// OptionScript
struct OptionScript_tC34BBAC056FE53C928E70FCBE378B9A4777DE375  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator OptionScript::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_4;
};

// ParticleDestroy
struct ParticleDestroy_t4D8EF5DB589DA408FB299FE30FC0DC4CF0D01022  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ParticleDestroy::interval
	float ___interval_4;
	// System.Int32 ParticleDestroy::timemet
	int32_t ___timemet_5;
	// System.Boolean ParticleDestroy::isRun
	bool ___isRun_6;
};

// PlayerLife
struct PlayerLife_t148880044E384DF6D482766356838134F900C2E3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerLife::_maxHealth
	float ____maxHealth_4;
	// UnityEngine.UI.Text PlayerLife::maxHealth
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___maxHealth_5;
	// UnityEngine.GameObject PlayerLife::_hitEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____hitEffect_6;
	// System.Single PlayerLife::_currentHealth
	float ____currentHealth_7;
	// UnityEngine.UI.Text PlayerLife::currentHealth
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___currentHealth_8;
	// BULL_ACTIVE PlayerLife::mvBullet
	BULL_ACTIVE_t78EC829D874D8DAC1B6F835502311EDA108E6C80* ___mvBullet_9;
	// UnityEngine.GameObject PlayerLife::FullPlayer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FullPlayer_10;
	// CharacterHealth PlayerLife::_healthbar
	CharacterHealth_t66AE08E0DD000B0034391D9447ADFF0E73653A69* ____healthbar_11;
};

// PlayerMove
struct PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CharacterController PlayerMove::_charController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ____charController_4;
	// UnityEngine.Animator PlayerMove::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_5;
	// UnityEngine.GameObject PlayerMove::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_6;
	// UnityEngine.Transform PlayerMove::meshPlayer
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___meshPlayer_7;
	// UnityEngine.Transform PlayerMove::Indicator
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Indicator_8;
	// ManagerJoyStick PlayerMove::_mngrJoyStick
	ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* ____mngrJoyStick_9;
	// Weapons PlayerMove::weapon
	Weapons_t30925373DADE142BBB37448ECD15500F0A38182C* ___weapon_10;
	// System.String PlayerMove::enemyTag
	String_t* ___enemyTag_11;
	// System.Boolean PlayerMove::fire
	bool ___fire_12;
	// System.Single PlayerMove::inputX
	float ___inputX_13;
	// System.Single PlayerMove::inputZ
	float ___inputZ_14;
	// UnityEngine.Vector3 PlayerMove::v_movement
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v_movement_15;
	// UnityEngine.Vector3 PlayerMove::v_lookDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v_lookDir_16;
	// System.Boolean PlayerMove::isFiring
	bool ___isFiring_17;
	// System.Boolean PlayerMove::stopFiring
	bool ___stopFiring_18;
	// UnityEngine.Vector3 PlayerMove::v_velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v_velocity_19;
	// System.Single PlayerMove::moveSpeed
	float ___moveSpeed_20;
	// System.Single PlayerMove::gravity
	float ___gravity_21;
	// Weapons PlayerMove::weapons
	Weapons_t30925373DADE142BBB37448ECD15500F0A38182C* ___weapons_22;
	// UnityEngine.Transform PlayerMove::spawnpoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnpoint_23;
	// System.Boolean PlayerMove::isEnableAttack
	bool ___isEnableAttack_24;
	// System.Boolean PlayerMove::isContType2
	bool ___isContType2_25;
};

// ROTATE
struct ROTATE_t2EBA711A93338BD821974C17EC80AD535AD071D8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ROTATE::x_axis
	int32_t ___x_axis_4;
	// System.Int32 ROTATE::y_axis
	int32_t ___y_axis_5;
	// System.Int32 ROTATE::z_axis
	int32_t ___z_axis_6;
};

// SelfRotation
struct SelfRotation_t42ED2474CFF99E8EC126EEFDD6DABA3F54CD286F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SelfRotation::Speed
	float ___Speed_4;
};

// SpawnPref
struct SpawnPref_tF7305B8F9C26E6F66E097FFDCF70CAADBFFA6D89  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SpawnPref::objectToSpawn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectToSpawn_4;
	// System.Int32 SpawnPref::numberOfObjects
	int32_t ___numberOfObjects_5;
	// UnityEngine.Transform SpawnPref::spawnTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnTransform_6;
	// System.Single SpawnPref::spawnRadius
	float ___spawnRadius_7;
};

// SwitchToggle
struct SwitchToggle_t83F5713BF80951A736648FDC8EBADF0ADDDB60A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform SwitchToggle::uiHandleRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___uiHandleRectTransform_4;
	// UnityEngine.Color SwitchToggle::backgroundActiveColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundActiveColor_5;
	// UnityEngine.Color SwitchToggle::handleActiveColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___handleActiveColor_6;
	// UnityEngine.UI.Image SwitchToggle::backgroundImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___backgroundImage_7;
	// UnityEngine.UI.Image SwitchToggle::handleImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___handleImage_8;
	// UnityEngine.Color SwitchToggle::backgroundDefaultColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundDefaultColor_9;
	// UnityEngine.Color SwitchToggle::handleDefaultColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___handleDefaultColor_10;
	// UnityEngine.UI.Toggle SwitchToggle::toggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_11;
	// UnityEngine.Vector2 SwitchToggle::handlePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___handlePosition_12;
};

// TouchLocation
struct TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 TouchLocation::touchId
	int32_t ___touchId_4;
	// UnityEngine.GameObject TouchLocation::circle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___circle_5;
};

// TriggerGem1
struct TriggerGem1_t96AB2BCAF504F3C59B5DD7EFAA3102BAFBF1C38B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TriggerGem1::Spark_BX
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Spark_BX_4;
	// UnityEngine.GameObject TriggerGem1::Award
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Award_5;
	// UnityEngine.GameObject TriggerGem1::Key1A
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Key1A_6;
	// UnityEngine.GameObject TriggerGem1::Key1B
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Key1B_7;
	// UnityEngine.GameObject TriggerGem1::activate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___activate_8;
};

// TriggerGem2
struct TriggerGem2_tCD5DE01B6A4AD09B7954AA8B78B721736323048A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TriggerGem2::Spark_BX
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Spark_BX_4;
	// UnityEngine.GameObject TriggerGem2::Award
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Award_5;
	// UnityEngine.GameObject TriggerGem2::Key1A
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Key1A_6;
	// UnityEngine.GameObject TriggerGem2::Key1B
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Key1B_7;
	// UnityEngine.GameObject TriggerGem2::activate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___activate_8;
};

// TriggerMe
struct TriggerMe_tC9F0681E8E33C26D1B81C05C713FAF0781824596  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TriggerMe::Spark_BX
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Spark_BX_4;
	// UnityEngine.GameObject TriggerMe::Award
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Award_5;
	// UnityEngine.Animator TriggerMe::ChestOpen
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___ChestOpen_6;
	// UnityEngine.GameObject TriggerMe::Key1A
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Key1A_7;
	// UnityEngine.GameObject TriggerMe::Key1B
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Key1B_8;
	// UnityEngine.GameObject TriggerMe::activate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___activate_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ViewJoystickManager
struct ViewJoystickManager_tB7402189536340D755C38B07A39BB5C5B9FB4424  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image ViewJoystickManager::imgJoystickBg
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imgJoystickBg_4;
	// UnityEngine.UI.Image ViewJoystickManager::imgJoystick
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imgJoystick_5;
	// UnityEngine.Vector2 ViewJoystickManager::posInput
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___posInput_6;
};

// WeaponBOT
struct WeaponBOT_t15595F5DCC80EB2CE2C02F292748FEE0DAE17D53  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single WeaponBOT::spawnInterval
	float ___spawnInterval_4;
	// System.Single WeaponBOT::timer
	float ___timer_5;
	// UnityEngine.GameObject WeaponBOT::objectPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectPrefab_6;
	// System.Single WeaponBOT::moveSpeed
	float ___moveSpeed_7;
};

// WeaponController
struct WeaponController_t2E7D11FCBE8704BB2CCB69FF9693756E70147811  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Weapon_2
struct Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Weapon_2::cooldownSpeed
	float ___cooldownSpeed_4;
	// System.Single Weapon_2::fireRate
	float ___fireRate_5;
	// System.Single Weapon_2::recoilCooldown
	float ___recoilCooldown_6;
	// System.Single Weapon_2::accuracy
	float ___accuracy_7;
	// System.Single Weapon_2::maxSpreadAngle
	float ___maxSpreadAngle_8;
	// System.Single Weapon_2::timeTillMaxSpread
	float ___timeTillMaxSpread_9;
	// UnityEngine.GameObject Weapon_2::bullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet_10;
	// System.Boolean Weapon_2::isFiring
	bool ___isFiring_11;
	// System.Boolean Weapon_2::stopFiring
	bool ___stopFiring_12;
	// System.Boolean Weapon_2::isEnableAttack
	bool ___isEnableAttack_13;
	// System.Boolean Weapon_2::isContType2
	bool ___isContType2_14;
	// System.Boolean Weapon_2::fire
	bool ___fire_15;
	// UnityEngine.Animator Weapon_2::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_16;
	// UnityEngine.GameObject Weapon_2::shootPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shootPoint_17;
	// UnityEngine.Transform Weapon_2::spawnpoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnpoint_18;
	// UnityEngine.GameObject Weapon_2::_muzzleeffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____muzzleeffect_19;
};

// Weapons
struct Weapons_t30925373DADE142BBB37448ECD15500F0A38182C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Weapons::damage
	float ___damage_4;
	// System.Single Weapons::firerate
	float ___firerate_5;
	// System.Single Weapons::firedistance
	float ___firedistance_6;
	// UnityEngine.Transform Weapons::bulletPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bulletPoint_7;
	// System.Boolean Weapons::fireCooldown
	bool ___fireCooldown_8;
	// UnityEngine.RaycastHit Weapons::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_9;
	// EnemyLife Weapons::enemylife
	EnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A* ___enemylife_10;
	// HealthController Weapons::_healthbar
	HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* ____healthbar_11;
};

// ZombieLife
struct ZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ZombieLife::_maxHealth
	float ____maxHealth_4;
	// UnityEngine.GameObject ZombieLife::_deatheffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____deatheffect_5;
	// UnityEngine.GameObject ZombieLife::_hitEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____hitEffect_6;
	// System.Int32 ZombieLife::DeadZombies
	int32_t ___DeadZombies_7;
	// System.Single ZombieLife::_currentHealth
	float ____currentHealth_8;
	// UnityEngine.UI.Text ZombieLife::currentHealth
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___currentHealth_9;
	// MoveBullet ZombieLife::mvBullet
	MoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6* ___mvBullet_10;
	// UnityEngine.GameObject ZombieLife::FullBOT
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FullBOT_11;
	// UnityEngine.GameObject ZombieLife::Explode
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Explode_12;
	// CamerShake ZombieLife::cameraShake
	CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* ___cameraShake_13;
	// HealthController ZombieLife::_healthbar
	HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* ____healthbar_14;
};

// followEN
struct followEN_tB5575CBA370231EAD9FF4033D1551C3379642E04  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform followEN::objectToFollow
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___objectToFollow_4;
	// System.Single followEN::followSpeed
	float ___followSpeed_5;
};

// timedown
struct timedown_t8336BD09D32D9A0F9DA1A3010E4E334395A17DC7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single timedown::interval
	float ___interval_4;
	// System.Int32 timedown::timemet
	int32_t ___timemet_5;
	// LevelGameSystem timedown::levelSystem
	LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* ___levelSystem_6;
	// System.Boolean timedown::isRun
	bool ___isRun_7;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityStandardAssets.Cameras.PivotBasedCameraRig
struct PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13  : public AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17
{
	// UnityEngine.Transform UnityStandardAssets.Cameras.PivotBasedCameraRig::m_Cam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Cam_8;
	// UnityEngine.Transform UnityStandardAssets.Cameras.PivotBasedCameraRig::m_Pivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Pivot_9;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.PivotBasedCameraRig::m_LastTargetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LastTargetPosition_10;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityStandardAssets.Cameras.FreeLookCam
struct FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E  : public PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13
{
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_MoveSpeed
	float ___m_MoveSpeed_11;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TurnSpeed
	float ___m_TurnSpeed_12;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TurnSmoothing
	float ___m_TurnSmoothing_13;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TiltMax
	float ___m_TiltMax_14;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TiltMin
	float ___m_TiltMin_15;
	// System.Boolean UnityStandardAssets.Cameras.FreeLookCam::m_LockCursor
	bool ___m_LockCursor_16;
	// System.Boolean UnityStandardAssets.Cameras.FreeLookCam::m_VerticalAutoReturn
	bool ___m_VerticalAutoReturn_17;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_LookAngle
	float ___m_LookAngle_18;
	// System.Single UnityStandardAssets.Cameras.FreeLookCam::m_TiltAngle
	float ___m_TiltAngle_19;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.FreeLookCam::m_PivotEulers
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PivotEulers_21;
	// UnityEngine.Quaternion UnityStandardAssets.Cameras.FreeLookCam::m_PivotTargetRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_PivotTargetRot_22;
	// UnityEngine.Quaternion UnityStandardAssets.Cameras.FreeLookCam::m_TransformTargetRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_TransformTargetRot_23;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
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
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m1889AEFA8CEF7472F2F292AA8DED9CE4AADB35CF_gshared (RuntimeObject* ___t0, int32_t ___ease1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<PlayerLife>()
inline PlayerLife_t148880044E384DF6D482766356838134F900C2E3* GameObject_GetComponent_TisPlayerLife_t148880044E384DF6D482766356838134F900C2E3_m179C1342CB649F270B75CA22C6DB467409566887 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayerLife_t148880044E384DF6D482766356838134F900C2E3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void PlayerLife::Damaging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLife_Damaging_mC049FBFB88BFBC59A6DC10BE9D9159070D665750 (PlayerLife_t148880044E384DF6D482766356838134F900C2E3* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void CamerShake/<Shake>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__0__ctor_mF25403169141C09965B31D9B1E8FBC45EAC1CD3A (U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<HostageHealth>()
inline HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57* GameObject_GetComponent_TisHostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57_m9DFB9AE953D3268C57CDCEEA6AA3020559D17760 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_velocity_m3C061136C7F338D33A5DE734B5C364326F6F4B31 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void HostageHealth::Damaging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostageHealth_Damaging_m234F754B86A3F0956E1B99392FBB3F9F564808B2 (HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.Component::GetComponent<CamerShake>()
inline CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* Component_GetComponent_TisCamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7_m90753D288AF766FD68F7845305B0BDB325009188 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void HealthController::UpdateHealthBar(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController_UpdateHealthBar_m9098A6D18A886A56F4FB9B474B4E6E19AFF42889 (HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* __this, float ___maxHealth0, float ___currentHealth1, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EnemyFollowAI>()
inline EnemyFollowAI_tFAEA2DEEACCB5FFA7AF39B74464ED8983879C981* GameObject_GetComponent_TisEnemyFollowAI_tFAEA2DEEACCB5FFA7AF39B74464ED8983879C981_m31C3483EA58CF469237D24E6CBE25F706DE681DD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemyFollowAI_tFAEA2DEEACCB5FFA7AF39B74464ED8983879C981* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<MajorZombie>()
inline MajorZombie_t75C0B1A23D2A9ACFA2E166A4263AE619529B0FC5* GameObject_GetComponent_TisMajorZombie_t75C0B1A23D2A9ACFA2E166A4263AE619529B0FC5_m6A2D04352C8A8EB2DF491C9B143799309D0ED9D1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MajorZombie_t75C0B1A23D2A9ACFA2E166A4263AE619529B0FC5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void LevelGameSystem::Replay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelGameSystem_Replay_m3AB564FAF7BE99CD5621D18C0B5FA27DD0B88BF2 (LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::ClampMagnitude(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, float ___maxLength1, const RuntimeMethod* method) ;
// System.Void Joystick::moveCharacter(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_moveCharacter_m4AB4741F5304BBF145C0A1CF85EA0BB5C75FAEED (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 JoystickShoot::getTouchPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 JoystickShoot_getTouchPosition_m05943F2150977456AFBF2A94AF252C27535E003E (JoystickShoot_t874A67A96B80A2A285066412AE2441745DFFC265* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchPosition0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Void Weapon_2::PointerDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_2_PointerDown_mF07FD74CA6F94D9029B7CED216E747BBBFF2CEEF (Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void Weapon_2::PointerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_2_PointerUp_m900075266C26C240B33721D0E848CC6245EED9B5 (Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void JoystickShoot::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickShoot_OnDrag_mF21266DF680952C7E080915EE830A6843DA07ADB (JoystickShoot_t874A67A96B80A2A285066412AE2441745DFFC265* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::RotateTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_RotateTowards_m3A0BCD584401D5341E1CB544B37764207258B234 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxRadiansDelta2, float ___maxMagnitudeDelta3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void HostageHealth::ZombieDamaging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostageHealth_ZombieDamaging_m231E2196809A03AF9DA740AE9B0F9108FD0B76B0 (HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57* __this, const RuntimeMethod* method) ;
// System.Void CharacterHealth::UpdateHealthBar(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterHealth_UpdateHealthBar_m61D8FCA71E58B3F6FFAFF66BCDDC4A8C9CFB196E (CharacterHealth_t66AE08E0DD000B0034391D9447ADFF0E73653A69* __this, float ___maxHealth0, float ___currentHealth1, const RuntimeMethod* method) ;
// System.Void SpawnPref::SpawnObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnPref_SpawnObjects_mF3A4E0364B59BA167EA09983F9E2891FE75CC9B9 (SpawnPref_tF7305B8F9C26E6F66E097FFDCF70CAADBFFA6D89* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___call0, method);
}
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void SwitchToggle::OnSwitch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchToggle_OnSwitch_mCA6FDEA52D061020A9D33B3F735EDC3EDC17ECB9 (SwitchToggle_t83F5713BF80951A736648FDC8EBADF0ADDDB60A9* __this, bool ___on0, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPos(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* DOTweenModuleUI_DOAnchorPos_m3572189AA21570B71014F4FEADC7BF6DA4ACE9B0 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>>(T,DG.Tweening.Ease)
inline TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* TweenSettingsExtensions_SetEase_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m272F2A88BE49F32CE36C0AD3F382B06C413F770D (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* (*) (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m1889AEFA8CEF7472F2F292AA8DED9CE4AADB35CF_gshared)(___t0, ___ease1, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Image,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleUI_DOColor_m0974A6D1FD2E3E54EBCDFE0B0A224DA1AD0416EF (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_gshared)(__this, ___call0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Door_Mechanism_1::OpenDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_Mechanism_1_OpenDoor_m60B2DBD3FFB00BEA51B0425B94BDDC79F4C82066 (Door_Mechanism_1_tDF834CCD7FF50A82EE6905134B32EF0B2AD90B94* __this, const RuntimeMethod* method) ;
// System.Void Door_Mechanism_1::CloseDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_Mechanism_1_CloseDoor_m8E90C0A6A6CE6DD482E80AB4EF8EA3AD7289E1B0 (Door_Mechanism_1_tDF834CCD7FF50A82EE6905134B32EF0B2AD90B94* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_m5E5FF963A4B356DFFCAF69B9AF9209DD1632EF17 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// System.Void EnemyAI::Patroling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Patroling_mECBB42625B8F5C2C32C072366CDF782BE5FF712B (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) ;
// System.Void EnemyAI::ChasePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_ChasePlayer_m8C4B95A30DC76C4BDB61706361636BC1C978AF7A (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) ;
// System.Void EnemyAI::AttackPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_AttackPlayer_m8937636FFF87584DD472F88DF262D7F66479E5E4 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) ;
// System.Void EnemyAI::SearchWalkPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_SearchWalkPoint_m705CAFC494EE562D7C8196755197847FD6D0564E (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mD4D68C5B2E8407DBF337DCC834C33C4F521ED5E7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::set_origin(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray_set_origin_m9B19A7BE86636111E3B16BCE08EAE030F37FE64D (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::set_direction(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray_set_direction_m8A8FF8101045BAE51BE5D5C1B6C21D0D5592DA98 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void EnemyAI_2::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_2_Move_m949254A6414371F18C2A83B21A5438920B95F5BC (EnemyAI_2_tB10A5D37D3123B39E1E619898841689F057BCE16* __this, const RuntimeMethod* method) ;
// System.Void EnemyAI_2::NotMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_2_NotMove_m6707E2156E11835BFE8E0DDD9C0A772F31FD2395 (EnemyAI_2_tB10A5D37D3123B39E1E619898841689F057BCE16* __this, const RuntimeMethod* method) ;
// System.Void FiringScript::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FiringScript_Shoot_mD6B874BDFA7175035D591B6B08E7ED482D7D69BF (FiringScript_t31B6F0AEEFD2E881E0F174E2F21788382B8278D5* __this, const RuntimeMethod* method) ;
// System.Void FiringScript::PointerDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FiringScript_PointerDown_m351BAD0907A391D182C8B758151B553E3C70E14D (FiringScript_t31B6F0AEEFD2E881E0F174E2F21788382B8278D5* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Random::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Random_get_rotation_mA99782158591D300375B107CA2C31D99E4FC7482 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::RotateTowards(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_RotateTowards_mD7C332050D876CB28A704B9005476BE06823F85F_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___from0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___to1, float ___maxDegreesDelta2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<BulletSpeed>()
inline BulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D* GameObject_GetComponent_TisBulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D_m0D2D1066C72A694E605462DB867969655AB7139E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void BulletSpeed::SetHitTransform(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BulletSpeed_SetHitTransform_m3BB7B03267F8FE4EF627101B7B5A714D9B449829_inline (BulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___hitTransform0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Single ManagerJoyStick::inputHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ManagerJoyStick_inputHorizontal_m6A1D39034A100B085671AC0771773D499FB943A0 (ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* __this, const RuntimeMethod* method) ;
// System.Single ManagerJoyStick::inputVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ManagerJoyStick_inputVertical_m7D41F1776E2005C7292A378AECECA687DFC6D019 (ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* __this, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// System.Single ManagerControlRot::InputRotHorizon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ManagerControlRot_InputRotHorizon_mB57C8519392668B3B42AEA35F9DD3B5033532C7C (ManagerControlRot_t58D6D04DD546CB59B47A7C48392ADE824D505453* __this, const RuntimeMethod* method) ;
// System.Single ManagerControlRot::InputRotVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ManagerControlRot_InputRotVertical_mDD40220E6B64473DFC64D7FB1F05FDC0A7835D76 (ManagerControlRot_t58D6D04DD546CB59B47A7C48392ADE824D505453* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void ManagerControlRot::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerControlRot_OnDrag_mD6F0F2A8CAA0D4295D3FF22F4B1888CB95CD3B23 (ManagerControlRot_t58D6D04DD546CB59B47A7C48392ADE824D505453* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void ManagerJoyStick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerJoyStick_OnDrag_m45B9E84A578EDA650F72BEC4CAEC70AA998E8DE9 (ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EnemyLife>()
inline EnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A* GameObject_GetComponent_TisEnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A_m0E1E563031F990288CDBDA9E83DBC15806FE66B0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EnemyLife::Damaging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyLife_Damaging_mED2446833C657FC823C12041389CA20BD1247DA7 (EnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GiantLife>()
inline GiantLife_t336CE74172B20EDE8D681600A1C2C0E6623CC61E* GameObject_GetComponent_TisGiantLife_t336CE74172B20EDE8D681600A1C2C0E6623CC61E_mD1CF7E25E317E3D8396EFF692C9F25AE324EC8D1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GiantLife_t336CE74172B20EDE8D681600A1C2C0E6623CC61E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GiantLife::Damaging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GiantLife_Damaging_m8F3D9CD3C40D741FEA5C7DF9C54AA43EC9003E25 (GiantLife_t336CE74172B20EDE8D681600A1C2C0E6623CC61E* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ZombieLife>()
inline ZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4* GameObject_GetComponent_TisZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4_m56626F5A49FE146412C26514C36C9158C45C453E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ZombieLife::Damaging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieLife_Damaging_mDAE240E96D4C0A7E6C5B953A112564E0AC3149E5 (ZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4* __this, const RuntimeMethod* method) ;
// System.Void MultipleTouch/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m0EB50B8748885F6FFFD40FE57F9CA54DDAF61649 (U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject MultipleTouch::createCircle(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MultipleTouch_createCircle_mE1C348420D55A350F61938489F85E7E80FCCD7C4 (MultipleTouch_tBA257E575E5E27F0251FD9717B92ECD31F68C129* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___t0, const RuntimeMethod* method) ;
// System.Void TouchLocation::.ctor(System.Int32,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchLocation__ctor_m756AA771D3B613E7B644A4111E99F3C09589449C (TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D* __this, int32_t ___newTouchId0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___newCircle1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TouchLocation>::Add(T)
inline void List_1_Add_m745FE794EA3CE7C6CA4816750B645A5F83E4558A_inline (List_1_t36088A9408436D3F14F90FF593E4D628753B35B9* __this, TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36088A9408436D3F14F90FF593E4D628753B35B9*, TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Predicate`1<TouchLocation>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m688A456E6781AFFFC7862320D6D4416164EF205A (Predicate_1_tC47250C71B8625ECCF4159B020D64CB1BE358368* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tC47250C71B8625ECCF4159B020D64CB1BE358368*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<TouchLocation>::Find(System.Predicate`1<T>)
inline TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D* List_1_Find_m25C67A8B403FF8391A3B8F6FA64A289019FEC591 (List_1_t36088A9408436D3F14F90FF593E4D628753B35B9* __this, Predicate_1_tC47250C71B8625ECCF4159B020D64CB1BE358368* ___match0, const RuntimeMethod* method)
{
	return ((  TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D* (*) (List_1_t36088A9408436D3F14F90FF593E4D628753B35B9*, Predicate_1_tC47250C71B8625ECCF4159B020D64CB1BE358368*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.Int32 System.Collections.Generic.List`1<TouchLocation>::IndexOf(T)
inline int32_t List_1_IndexOf_m22572938BDBF55225CA4B78095C44A146D2FF6F0 (List_1_t36088A9408436D3F14F90FF593E4D628753B35B9* __this, TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t36088A9408436D3F14F90FF593E4D628753B35B9*, TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<TouchLocation>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m66E04271209CD2436BB77CF3F12DE1E9DD46B0F8 (List_1_t36088A9408436D3F14F90FF593E4D628753B35B9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36088A9408436D3F14F90FF593E4D628753B35B9*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector2 MultipleTouch::getTouchPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MultipleTouch_getTouchPosition_mA21B3986B532350E9E652FE121B8EBC0C93E6923 (MultipleTouch_tBA257E575E5E27F0251FD9717B92ECD31F68C129* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchPosition0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TouchLocation>::.ctor()
inline void List_1__ctor_m6A334501209E35E555A27F035DCCCE548C641CAD (List_1_t36088A9408436D3F14F90FF593E4D628753B35B9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36088A9408436D3F14F90FF593E4D628753B35B9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void ParticleDestroy/<LoseTime>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoseTimeU3Ed__6__ctor_m427758FF48796CFDDBCD41BB7E60CEC052F5EC15 (U3CLoseTimeU3Ed__6_t8C09AF88DAB81D3A498CE400E3826C4CB41C7F49* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void PlayerMove::makeFireVariableFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_makeFireVariableFalse_m6BE3A2BD7ABECA903293F4696F5939FFDC5FED85 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void PlayerMove::makeFireVariableTrue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_makeFireVariableTrue_m7BCE2DB3B7451357ADEC16532E90BD6990DFCEBE (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
// System.Void ViewJoystickManager::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewJoystickManager_OnDrag_mBBC1672D09B3DD77A194D3A37F761AFBDC975919 (ViewJoystickManager_tB7402189536340D755C38B07A39BB5C5B9FB4424* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void Weapons/<StopCooldownAfterTime>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopCooldownAfterTimeU3Ed__10__ctor_mBBC435971E2891094BDF2704DB5831C4D48D0F4F (U3CStopCooldownAfterTimeU3Ed__10_tC6D6CCBC936AAEAD7FB2F2953085FE9F3281F0AB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Weapon_2::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_2_Shoot_mA7B0DD0C0B3CEE3C01679A2C5E11DD73821D2143 (Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<MoveBullet>()
inline MoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6* GameObject_GetComponent_TisMoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6_m25F1A4EB6E95DD389C2BF1632B0FD9FE9AD8F798 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// System.Void LevelGameSystem::Menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelGameSystem_Menu_m54D353715207883140B6C11EF2F962B689CF1934 (LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void timedown/<LoseTime>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoseTimeU3Ed__7__ctor_m91170BB7664508129199928AE36798224DC31063 (U3CLoseTimeU3Ed__7_tBE83675AFD37F6AFDC005A117BDAFE18F1D1F782* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void WeaponBOT::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBOT_Spawn_mC750ED657544A4906B3D977F0E48ECAAB4B90352 (WeaponBOT_t15595F5DCC80EB2CE2C02F292748FEE0DAE17D53* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FindAndTargetPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PivotBasedCameraRig_Awake_m3477C8EE2F83D51CCF81ADC1F8BEEDCB0A2F95B2 (PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4 (bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.FreeLookCam::HandleRotationMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_HandleRotationMovement_m0E9A0819AA068EFA603FB0CC3318FBE71827A97F (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PivotBasedCameraRig__ctor_m176687FB94C7FF07D4ED8B38A0529F370F9D51BA (PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower__ctor_m7BA92F6CC37CDA403608738E4F6CB8EB43889A98 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m445E005E6F9211283EEA3F0BD4FF2DC20FE3640A_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::SlerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_SlerpUnclamped_mB38920352A1B11369D782F78E183568CAFA82C0F (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) ;
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
// System.Void BULL_ACTIVE::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BULL_ACTIVE_Start_m65A3CC3F6709CC77A88DCB7CE3C12433DD063BBE (BULL_ACTIVE_t78EC829D874D8DAC1B6F835502311EDA108E6C80* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BULL_ACTIVE::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BULL_ACTIVE_Update_m4194E03245DF27323838A417D50845DAA4A29A7C (BULL_ACTIVE_t78EC829D874D8DAC1B6F835502311EDA108E6C80* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BULL_ACTIVE::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BULL_ACTIVE_OnCollisionEnter_m577EE528772D768C314364206859D5B674334E0E (BULL_ACTIVE_t78EC829D874D8DAC1B6F835502311EDA108E6C80* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerLife_t148880044E384DF6D482766356838134F900C2E3_m179C1342CB649F270B75CA22C6DB467409566887_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45120797FA2682F55E6EB0E05BB4BC8E1250E3C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6DC48C404C38342FECF65DC3C9BB54B7FDD504A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.tag == "Player")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___col0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// col.gameObject.GetComponent<PlayerLife>().Damaging();
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___col0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_4, NULL);
		NullCheck(L_5);
		PlayerLife_t148880044E384DF6D482766356838134F900C2E3* L_6;
		L_6 = GameObject_GetComponent_TisPlayerLife_t148880044E384DF6D482766356838134F900C2E3_m179C1342CB649F270B75CA22C6DB467409566887(L_5, GameObject_GetComponent_TisPlayerLife_t148880044E384DF6D482766356838134F900C2E3_m179C1342CB649F270B75CA22C6DB467409566887_RuntimeMethod_var);
		NullCheck(L_6);
		PlayerLife_Damaging_mC049FBFB88BFBC59A6DC10BE9D9159070D665750(L_6, NULL);
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
	}

IL_0032:
	{
		// if (col.gameObject.tag == "Contain")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_8 = ___col0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteral45120797FA2682F55E6EB0E05BB4BC8E1250E3C8, NULL);
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_12, NULL);
	}

IL_0054:
	{
		// if (col.gameObject.tag == "Environment")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_13 = ___col0;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_13, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_14, NULL);
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteralE6DC48C404C38342FECF65DC3C9BB54B7FDD504A, NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_17, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void BULL_ACTIVE::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BULL_ACTIVE__ctor_mEFC96AD8B0DF6E166CB5FDE7BBF9DA744B8455AC (BULL_ACTIVE_t78EC829D874D8DAC1B6F835502311EDA108E6C80* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Calculator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Calculator_Start_mAE8F32E38508E8BBFA5EBB95B5415A31ED9F561B (Calculator_t389638575C84A8A1DFB078C20898C5BE1449CCCF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Calculator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Calculator_Update_m1624B2F741C9CC51C200C8D759DFD6DC70817C7D (Calculator_t389638575C84A8A1DFB078C20898C5BE1449CCCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	String_t* G_B4_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	String_t* G_B6_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_1 = NULL;
	{
		// firstNum.text =  "" + First;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___firstNum_4;
		int32_t* L_1 = (&__this->___First_7);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_0;
			goto IL_001a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_001a:
	{
		NullCheck(G_B2_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// secondNum.text =  "" + Second;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___secondNum_5;
		int32_t* L_5 = (&__this->___Second_8);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = L_4;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_4;
			goto IL_0039;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B4_1, G_B4_0);
		// Ans.text =  "" + Solution;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___Ans_6;
		int32_t* L_9 = (&__this->___Solution_9);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		String_t* L_11 = L_10;
		G_B5_0 = L_11;
		G_B5_1 = L_8;
		if (L_11)
		{
			G_B6_0 = L_11;
			G_B6_1 = L_8;
			goto IL_0058;
		}
	}
	{
		G_B6_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B6_1 = G_B5_1;
	}

IL_0058:
	{
		NullCheck(G_B6_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B6_1, G_B6_0);
		// First = weaponAbility;
		int32_t L_12 = __this->___weaponAbility_17;
		__this->___First_7 = L_12;
		// Second = leveling.Level;
		LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* L_13 = __this->___leveling_16;
		NullCheck(L_13);
		int32_t L_14 = L_13->___Level_4;
		__this->___Second_8 = L_14;
		// if(Choice == 1)
		int32_t L_15 = __this->___Choice_10;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_00c9;
		}
	}
	{
		// Ch1.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___Ch1_11;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_16, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// Ch2.gameObject.SetActive(false); // Times
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___Ch2_12;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_18, NULL);
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
		// Solution = First * Second;
		int32_t L_20 = __this->___First_7;
		int32_t L_21 = __this->___Second_8;
		__this->___Solution_9 = ((int32_t)il2cpp_codegen_multiply(L_20, L_21));
		// Solu.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___Solu_15;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_22, NULL);
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
	}

IL_00c9:
	{
		// if(Choice == 2)
		int32_t L_24 = __this->___Choice_10;
		if ((!(((uint32_t)L_24) == ((uint32_t)2))))
		{
			goto IL_0118;
		}
	}
	{
		// Ch1.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___Ch1_11;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_25, NULL);
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)0, NULL);
		// Ch2.gameObject.SetActive(true); // Plus
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___Ch2_12;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_27, NULL);
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)1, NULL);
		// Solution = First + Second;
		int32_t L_29 = __this->___First_7;
		int32_t L_30 = __this->___Second_8;
		__this->___Solution_9 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
		// Solu.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___Solu_15;
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_31, NULL);
		NullCheck(L_32);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, (bool)1, NULL);
	}

IL_0118:
	{
		// }
		return;
	}
}
// System.Void Calculator::Choice1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Calculator_Choice1_m7EECF2DEDDD0CA2496FC3EF818BBAB5B7330DB0E (Calculator_t389638575C84A8A1DFB078C20898C5BE1449CCCF* __this, const RuntimeMethod* method) 
{
	{
		// Choice += 1;
		int32_t L_0 = __this->___Choice_10;
		__this->___Choice_10 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// }
		return;
	}
}
// System.Void Calculator::Choice2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Calculator_Choice2_m0474BA955E253681E1E8995D36371AFF785E62E5 (Calculator_t389638575C84A8A1DFB078C20898C5BE1449CCCF* __this, const RuntimeMethod* method) 
{
	{
		// Choice += 2;
		int32_t L_0 = __this->___Choice_10;
		__this->___Choice_10 = ((int32_t)il2cpp_codegen_add(L_0, 2));
		// }
		return;
	}
}
// System.Void Calculator::Continue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Calculator_Continue_m1992936DA85192817A5AAD93935DD416E1FA125E (Calculator_t389638575C84A8A1DFB078C20898C5BE1449CCCF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Calculator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Calculator__ctor_m200AB354A8511A054C991ABA75694DC588E87EEC (Calculator_t389638575C84A8A1DFB078C20898C5BE1449CCCF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Collections.IEnumerator CamerShake::Shake(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CamerShake_Shake_mF0CD5FF09DC3DD218F2E82B6543369C97FCFD582 (CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* __this, float ___duration0, float ___magnitude1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C* L_0 = (U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C*)il2cpp_codegen_object_new(U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShakeU3Ed__0__ctor_mF25403169141C09965B31D9B1E8FBC45EAC1CD3A(L_0, 0, NULL);
		U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C* L_2 = L_1;
		float L_3 = ___duration0;
		NullCheck(L_2);
		L_2->___duration_4 = L_3;
		U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C* L_4 = L_2;
		float L_5 = ___magnitude1;
		NullCheck(L_4);
		L_4->___magnitude_3 = L_5;
		return L_4;
	}
}
// System.Void CamerShake::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamerShake__ctor_mCFB7E7D48DDBA1A0E9F7C9F819637BE230087F1E (CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CamerShake/<Shake>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__0__ctor_mF25403169141C09965B31D9B1E8FBC45EAC1CD3A (U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CamerShake/<Shake>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__0_System_IDisposable_Dispose_m4B84933BD7C015A69F8E361730DDC259DEB7351B (U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CamerShake/<Shake>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShakeU3Ed__0_MoveNext_mD15210EAAAA6263FC49945DD280A6B744A24D338 (U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ac;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Vector3 originalPos = transform.localPosition;
		CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* L_4 = V_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
		__this->___U3CoriginalPosU3E5__2_5 = L_6;
		// float elapsed = 0.0f;
		__this->___U3CelapsedU3E5__3_6 = (0.0f);
		goto IL_00b3;
	}

IL_003f:
	{
		// float x = Random.Range(-1f, 1f) * magnitude;
		float L_7;
		L_7 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-1.0f), (1.0f), NULL);
		float L_8 = __this->___magnitude_3;
		V_2 = ((float)il2cpp_codegen_multiply(L_7, L_8));
		// float y = Random.Range(-1f, 1f) * magnitude;
		float L_9;
		L_9 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-1.0f), (1.0f), NULL);
		float L_10 = __this->___magnitude_3;
		V_3 = ((float)il2cpp_codegen_multiply(L_9, L_10));
		// transform.localPosition = new Vector3(x, y, originalPos.z);
		CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* L_11 = V_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		float L_13 = V_2;
		float L_14 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&__this->___U3CoriginalPosU3E5__2_5);
		float L_16 = L_15->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_13, L_14, L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_12, L_17, NULL);
		// elapsed += Time.deltaTime;
		float L_18 = __this->___U3CelapsedU3E5__3_6;
		float L_19;
		L_19 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CelapsedU3E5__3_6 = ((float)il2cpp_codegen_add(L_18, L_19));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ac:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00b3:
	{
		// while(elapsed < duration)
		float L_20 = __this->___U3CelapsedU3E5__3_6;
		float L_21 = __this->___duration_4;
		if ((((float)L_20) < ((float)L_21)))
		{
			goto IL_003f;
		}
	}
	{
		// transform.localPosition = originalPos;
		CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* L_22 = V_1;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___U3CoriginalPosU3E5__2_5;
		NullCheck(L_23);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_23, L_24, NULL);
		// }
		return (bool)0;
	}
}
// System.Object CamerShake/<Shake>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShakeU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0C73B10856C35D25679AA2312A95BE86A647FC0E (U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CamerShake/<Shake>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__0_System_Collections_IEnumerator_Reset_m0F98C88262AA0088E1C93EA48C1A4DCA5EEE4B70 (U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShakeU3Ed__0_System_Collections_IEnumerator_Reset_m0F98C88262AA0088E1C93EA48C1A4DCA5EEE4B70_RuntimeMethod_var)));
	}
}
// System.Object CamerShake/<Shake>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShakeU3Ed__0_System_Collections_IEnumerator_get_Current_m99EF51B57C3B04EFD8BF08C6F83E3C4C4037A363 (U3CShakeU3Ed__0_tDF1495B6F3FC69FC395E8133BBB706C9F2B57A9C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void CharacterHealth::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterHealth_Start_mC6FF372F0605C3D7A162AA87D7DC4FE5AC893C07 (CharacterHealth_t66AE08E0DD000B0034391D9447ADFF0E73653A69* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CharacterHealth::UpdateHealthBar(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterHealth_UpdateHealthBar_m61D8FCA71E58B3F6FFAFF66BCDDC4A8C9CFB196E (CharacterHealth_t66AE08E0DD000B0034391D9447ADFF0E73653A69* __this, float ___maxHealth0, float ___currentHealth1, const RuntimeMethod* method) 
{
	{
		// _healthbarSprite.fillAmount = currentHealth / maxHealth;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____healthbarSprite_4;
		float L_1 = ___currentHealth1;
		float L_2 = ___maxHealth0;
		NullCheck(L_0);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_0, ((float)(L_1/L_2)), NULL);
		// }
		return;
	}
}
// System.Void CharacterHealth::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterHealth_Update_m852875FAE757DCF2ABF15F79F2BA8FCE6D0F7751 (CharacterHealth_t66AE08E0DD000B0034391D9447ADFF0E73653A69* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CharacterHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterHealth__ctor_m47253BAAE3EC5391104F649511ECFC6962BB3F03 (CharacterHealth_t66AE08E0DD000B0034391D9447ADFF0E73653A69* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CollidingBox::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollidingBox_Start_m90461C4EEF0D01149CFD8596FE201CC3C9DC2090 (CollidingBox_tC669B420C0A0FA3ADC055A75FFFF51218191B26C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CollidingBox::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollidingBox_Update_mF6DE3C4DDC0DF434F79CCDCE806DE649E8CB9B8C (CollidingBox_tC669B420C0A0FA3ADC055A75FFFF51218191B26C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CollidingBox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollidingBox__ctor_mF6362C19C7B5D5BCD508E820F5C07C7B376EF3E2 (CollidingBox_tC669B420C0A0FA3ADC055A75FFFF51218191B26C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CrossMouse::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossMouse_Update_m99DE7F97205A3B64596AA1D3A3AECE80AA2246F7 (CrossMouse_tCB4F764449B21A1CEF6BDC85525073EC9B02E005* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 mousePosition = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		V_0 = L_0;
		// crosshair.position = mousePosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___crosshair_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void CrossMouse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossMouse__ctor_m43B049074C2408F2F963FD7954E0A87AB2F20092 (CrossMouse_tCB4F764449B21A1CEF6BDC85525073EC9B02E005* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnemyFollowAI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFollowAI_Start_m7E958370EA327E3A9123E31FC39FEF10F94DBD30 (EnemyFollowAI_tFAEA2DEEACCB5FFA7AF39B74464ED8983879C981* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57_m9DFB9AE953D3268C57CDCEEA6AA3020559D17760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral291A935FB46F877A7F100F14B7AC7A6CB44AF3BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D7F0A601B5296DD16706E740FA1E95EE5A3058E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F25536833AF0089E79326ADB060902FE82449BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7231B5BD6E759506CD6E022C1F29BE85D3FEC62F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA0CF788759E982A5F45F96DF2BC514A7CAE15D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// player = GameObject.Find("FollowMe").transform; // Try finding the player GameObject.
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral2D7F0A601B5296DD16706E740FA1E95EE5A3058E, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___player_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_4), (void*)L_1);
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2;
		L_2 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->___agent_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agent_5), (void*)L_2);
		// GameObject Hostages = GameObject.FindGameObjectWithTag("Hostile");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteral7AA0CF788759E982A5F45F96DF2BC514A7CAE15D, NULL);
		V_0 = L_3;
		// hostagedamage = Hostages.GetComponent<HostageHealth>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57* L_5;
		L_5 = GameObject_GetComponent_TisHostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57_m9DFB9AE953D3268C57CDCEEA6AA3020559D17760(L_4, GameObject_GetComponent_TisHostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57_m9DFB9AE953D3268C57CDCEEA6AA3020559D17760_RuntimeMethod_var);
		__this->___hostagedamage_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hostagedamage_7), (void*)L_5);
		// if (player == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___player_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// Debug.LogError("Player not found. Make sure the player GameObject exists and is named 'Player'.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral291A935FB46F877A7F100F14B7AC7A6CB44AF3BD, NULL);
	}

IL_0050:
	{
		// GameObject[] targetObjects = GameObject.FindGameObjectsWithTag("EnemyMain"); // Replace "YourTag" with the tag you're looking for
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8;
		L_8 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral7231B5BD6E759506CD6E022C1F29BE85D3FEC62F, NULL);
		// foreach (GameObject targetObject in targetObjects)
		V_1 = L_8;
		V_2 = 0;
		goto IL_007d;
	}

IL_005f:
	{
		// foreach (GameObject targetObject in targetObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		// Animator anim = targetObject.GetComponent<Animator>();
		NullCheck(L_12);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13;
		L_13 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_12, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		// if (anim != null)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_14)
		{
			goto IL_0079;
		}
	}
	{
		// Debug.LogWarning("Animator component not found on an object with the specified tag.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral3F25536833AF0089E79326ADB060902FE82449BD, NULL);
	}

IL_0079:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_007d:
	{
		// foreach (GameObject targetObject in targetObjects)
		int32_t L_16 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_005f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EnemyFollowAI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFollowAI_Update_m8EAB1917A5766C5F27EE66A7C3F569E0E205FEB2 (EnemyFollowAI_tFAEA2DEEACCB5FFA7AF39B74464ED8983879C981* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7231B5BD6E759506CD6E022C1F29BE85D3FEC62F);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_2 = NULL;
	{
		// if (player != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___player_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_009e;
		}
	}
	{
		// float distanceToPlayer = Vector3.Distance(transform.position, player.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___player_4;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_3, L_5, NULL);
		// if (distanceToPlayer > stoppingDistance)
		float L_7 = __this->___stoppingDistance_9;
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_004c;
		}
	}
	{
		// agent.SetDestination(player.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_8 = __this->___agent_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___player_4;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_8, L_10, NULL);
		return;
	}

IL_004c:
	{
		// agent.velocity = Vector3.zero;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_12 = __this->___agent_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_12);
		NavMeshAgent_set_velocity_m3C061136C7F338D33A5DE734B5C364326F6F4B31(L_12, L_13, NULL);
		// hostagedamage.Damaging();
		HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57* L_14 = __this->___hostagedamage_7;
		NullCheck(L_14);
		HostageHealth_Damaging_m234F754B86A3F0956E1B99392FBB3F9F564808B2(L_14, NULL);
		// GameObject[] targetObjects = GameObject.FindGameObjectsWithTag("EnemyMain");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15;
		L_15 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral7231B5BD6E759506CD6E022C1F29BE85D3FEC62F, NULL);
		// foreach (GameObject targetObject in targetObjects)
		V_0 = L_15;
		V_1 = 0;
		goto IL_0098;
	}

IL_0076:
	{
		// foreach (GameObject targetObject in targetObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		// Animator anim = targetObject.GetComponent<Animator>();
		NullCheck(L_19);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_20;
		L_20 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_19, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		V_2 = L_20;
		// if (anim != null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_0094;
		}
	}
	{
		// anim.SetBool("Attack", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = V_2;
		NullCheck(L_23);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_23, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, (bool)1, NULL);
	}

IL_0094:
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0098:
	{
		// foreach (GameObject targetObject in targetObjects)
		int32_t L_25 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26 = V_0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0076;
		}
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void EnemyFollowAI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFollowAI__ctor_m033F5D4A9AD1034765AB33E492C98FB3DE2BC701 (EnemyFollowAI_tFAEA2DEEACCB5FFA7AF39B74464ED8983879C981* __this, const RuntimeMethod* method) 
{
	{
		// private float stoppingDistance = 2.0f;
		__this->___stoppingDistance_9 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void followEN::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void followEN_LateUpdate_mCFBA94196E7B4B4DD613EF71B7366D60FC8523B1 (followEN_tB5575CBA370231EAD9FF4033D1551C3379642E04* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 targetPosition = new Vector3(objectToFollow.position.x, transform.position.y, objectToFollow.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___objectToFollow_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___objectToFollow_4;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_2, L_5, L_8, NULL);
		// transform.position = Vector3.Lerp(transform.position, targetPosition, followSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		float L_13 = __this->___followSpeed_5;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_11, L_12, ((float)il2cpp_codegen_multiply(L_13, L_14)), NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_15, NULL);
		// }
		return;
	}
}
// System.Void followEN::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void followEN__ctor_m330F6A923C86C312287B823DBE1E5585539670A9 (followEN_tB5575CBA370231EAD9FF4033D1551C3379642E04* __this, const RuntimeMethod* method) 
{
	{
		// public float followSpeed = 5f; // Adjust the speed of following as needed
		__this->___followSpeed_5 = (5.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GiantDamage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GiantDamage_Start_m4C062A64613448F964A1309C9D61E3554FBBA446 (GiantDamage_tBE7B195551389867D164EA3A41E2ACFB2C2323B2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GiantDamage::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GiantDamage_OnCollisionEnter_m62F1243BD46AAB301DE1F4667A9498D74FD5A352 (GiantDamage_tBE7B195551389867D164EA3A41E2ACFB2C2323B2* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB15927D4240AE553D7E967886A9A2E98E0595AFB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.tag == "Giant")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___col0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralB15927D4240AE553D7E967886A9A2E98E0595AFB, NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		// Instantiate(Ex, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Ex_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_4, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_9, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void GiantDamage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GiantDamage__ctor_mBFE440FFD43D72DE5E1A49F5A32BD7AA8AA1C368 (GiantDamage_tBE7B195551389867D164EA3A41E2ACFB2C2323B2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GiantLife::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GiantLife_Start_m783641CC65F01832216155BB3E322949642A3C6E (GiantLife_t336CE74172B20EDE8D681600A1C2C0E6623CC61E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7_m90753D288AF766FD68F7845305B0BDB325009188_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraShake =  GetComponent<CamerShake>();
		CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* L_0;
		L_0 = Component_GetComponent_TisCamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7_m90753D288AF766FD68F7845305B0BDB325009188(__this, Component_GetComponent_TisCamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7_m90753D288AF766FD68F7845305B0BDB325009188_RuntimeMethod_var);
		__this->___cameraShake_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraShake_12), (void*)L_0);
		// _currentHealth = _maxHealth;
		float L_1 = __this->____maxHealth_4;
		__this->____currentHealth_7 = L_1;
		// _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
		HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* L_2 = __this->____healthbar_13;
		float L_3 = __this->____maxHealth_4;
		float L_4 = __this->____currentHealth_7;
		NullCheck(L_2);
		HealthController_UpdateHealthBar_m9098A6D18A886A56F4FB9B474B4E6E19AFF42889(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void GiantLife::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GiantLife_Update_m5FCBFCA89163B2F1E05E70C5DC91C7E2350DC305 (GiantLife_t336CE74172B20EDE8D681600A1C2C0E6623CC61E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	{
		// currentHealth.text = "" + _currentHealth.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___currentHealth_8;
		float* L_1 = (&__this->____currentHealth_7);
		String_t* L_2;
		L_2 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_1, NULL);
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_0;
			goto IL_001a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_001a:
	{
		NullCheck(G_B2_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// }
		return;
	}
}
// System.Void GiantLife::Damaging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GiantLife_Damaging_m8F3D9CD3C40D741FEA5C7DF9C54AA43EC9003E25 (GiantLife_t336CE74172B20EDE8D681600A1C2C0E6623CC61E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _currentHealth -=mvBullet.Damage;
		float L_0 = __this->____currentHealth_7;
		MoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6* L_1 = __this->___mvBullet_9;
		NullCheck(L_1);
		float L_2 = L_1->___Damage_8;
		__this->____currentHealth_7 = ((float)il2cpp_codegen_subtract(L_0, L_2));
		// if(_currentHealth <= 0)
		float L_3 = __this->____currentHealth_7;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		// Instantiate(Explode, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Explode_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_4, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(FullBOT.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___FullBOT_10;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_9, NULL);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_10, NULL);
		return;
	}

IL_0052:
	{
		// _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
		HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* L_11 = __this->____healthbar_13;
		float L_12 = __this->____maxHealth_4;
		float L_13 = __this->____currentHealth_7;
		NullCheck(L_11);
		HealthController_UpdateHealthBar_m9098A6D18A886A56F4FB9B474B4E6E19AFF42889(L_11, L_12, L_13, NULL);
		// Instantiate(_hitEffect, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->____hitEffect_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_14, L_16, L_17, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GiantLife::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GiantLife__ctor_mC4600F36A76D54CA4DFF88AA4B47AE702FFE6A2D (GiantLife_t336CE74172B20EDE8D681600A1C2C0E6623CC61E* __this, const RuntimeMethod* method) 
{
	{
		// public float _maxHealth = 30;
		__this->____maxHealth_4 = (30.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HostageHealth::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostageHealth_Start_m10450E5E29BE692037929BB7F47C3847A2A49DA4 (HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7_m90753D288AF766FD68F7845305B0BDB325009188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyFollowAI_tFAEA2DEEACCB5FFA7AF39B74464ED8983879C981_m31C3483EA58CF469237D24E6CBE25F706DE681DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMajorZombie_t75C0B1A23D2A9ACFA2E166A4263AE619529B0FC5_m6A2D04352C8A8EB2DF491C9B143799309D0ED9D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFD4E60DD15E0CA1773C606F939355D53808C627);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// GameObject EnemyZombie = GameObject.FindGameObjectWithTag("Enemy");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		V_0 = L_0;
		// enemyfollow = EnemyZombie.GetComponent<EnemyFollowAI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		EnemyFollowAI_tFAEA2DEEACCB5FFA7AF39B74464ED8983879C981* L_2;
		L_2 = GameObject_GetComponent_TisEnemyFollowAI_tFAEA2DEEACCB5FFA7AF39B74464ED8983879C981_m31C3483EA58CF469237D24E6CBE25F706DE681DD(L_1, GameObject_GetComponent_TisEnemyFollowAI_tFAEA2DEEACCB5FFA7AF39B74464ED8983879C981_m31C3483EA58CF469237D24E6CBE25F706DE681DD_RuntimeMethod_var);
		__this->___enemyfollow_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyfollow_12), (void*)L_2);
		// GameObject EnemyMajor = GameObject.FindGameObjectWithTag("Zombie");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralCFD4E60DD15E0CA1773C606F939355D53808C627, NULL);
		V_1 = L_3;
		// majorZombie = EnemyMajor.GetComponent<MajorZombie>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
		NullCheck(L_4);
		MajorZombie_t75C0B1A23D2A9ACFA2E166A4263AE619529B0FC5* L_5;
		L_5 = GameObject_GetComponent_TisMajorZombie_t75C0B1A23D2A9ACFA2E166A4263AE619529B0FC5_m6A2D04352C8A8EB2DF491C9B143799309D0ED9D1(L_4, GameObject_GetComponent_TisMajorZombie_t75C0B1A23D2A9ACFA2E166A4263AE619529B0FC5_m6A2D04352C8A8EB2DF491C9B143799309D0ED9D1_RuntimeMethod_var);
		__this->___majorZombie_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___majorZombie_13), (void*)L_5);
		// cameraShake =  GetComponent<CamerShake>();
		CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* L_6;
		L_6 = Component_GetComponent_TisCamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7_m90753D288AF766FD68F7845305B0BDB325009188(__this, Component_GetComponent_TisCamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7_m90753D288AF766FD68F7845305B0BDB325009188_RuntimeMethod_var);
		__this->___cameraShake_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraShake_10), (void*)L_6);
		// _currentHealth = _maxHealth;
		float L_7 = __this->____maxHealth_4;
		__this->____currentHealth_7 = L_7;
		// _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
		HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* L_8 = __this->____healthbar_11;
		float L_9 = __this->____maxHealth_4;
		float L_10 = __this->____currentHealth_7;
		NullCheck(L_8);
		HealthController_UpdateHealthBar_m9098A6D18A886A56F4FB9B474B4E6E19AFF42889(L_8, L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void HostageHealth::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostageHealth_Update_mC9C1D72621E3008F6B49139FD0E9F6B4193E352F (HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	{
		// currentHealth.text = "" + _currentHealth.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___currentHealth_8;
		float* L_1 = (&__this->____currentHealth_7);
		String_t* L_2;
		L_2 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_1, NULL);
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_0;
			goto IL_001a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_001a:
	{
		NullCheck(G_B2_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// }
		return;
	}
}
// System.Void HostageHealth::Damaging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostageHealth_Damaging_m234F754B86A3F0956E1B99392FBB3F9F564808B2 (HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _currentHealth -=enemyfollow.Damage;
		float L_0 = __this->____currentHealth_7;
		EnemyFollowAI_tFAEA2DEEACCB5FFA7AF39B74464ED8983879C981* L_1 = __this->___enemyfollow_12;
		NullCheck(L_1);
		float L_2 = L_1->___Damage_6;
		__this->____currentHealth_7 = ((float)il2cpp_codegen_subtract(L_0, L_2));
		// if(_currentHealth <= 0)
		float L_3 = __this->____currentHealth_7;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		// Instantiate(Explode, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Explode_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_4, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// levels.Replay();
		LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* L_9 = __this->___levels_14;
		NullCheck(L_9);
		LevelGameSystem_Replay_m3AB564FAF7BE99CD5621D18C0B5FA27DD0B88BF2(L_9, NULL);
		return;
	}

IL_004d:
	{
		// _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
		HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* L_10 = __this->____healthbar_11;
		float L_11 = __this->____maxHealth_4;
		float L_12 = __this->____currentHealth_7;
		NullCheck(L_10);
		HealthController_UpdateHealthBar_m9098A6D18A886A56F4FB9B474B4E6E19AFF42889(L_10, L_11, L_12, NULL);
		// Instantiate(_hitEffect, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->____hitEffect_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_13, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HostageHealth::ZombieDamaging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostageHealth_ZombieDamaging_m231E2196809A03AF9DA740AE9B0F9108FD0B76B0 (HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _currentHealth -=majorZombie.Damage;
		float L_0 = __this->____currentHealth_7;
		MajorZombie_t75C0B1A23D2A9ACFA2E166A4263AE619529B0FC5* L_1 = __this->___majorZombie_13;
		NullCheck(L_1);
		float L_2 = L_1->___Damage_6;
		__this->____currentHealth_7 = ((float)il2cpp_codegen_subtract(L_0, L_2));
		// if(_currentHealth <= 0)
		float L_3 = __this->____currentHealth_7;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		// Instantiate(Explode, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Explode_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_4, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// levels.Replay();
		LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* L_9 = __this->___levels_14;
		NullCheck(L_9);
		LevelGameSystem_Replay_m3AB564FAF7BE99CD5621D18C0B5FA27DD0B88BF2(L_9, NULL);
		return;
	}

IL_004d:
	{
		// _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
		HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* L_10 = __this->____healthbar_11;
		float L_11 = __this->____maxHealth_4;
		float L_12 = __this->____currentHealth_7;
		NullCheck(L_10);
		HealthController_UpdateHealthBar_m9098A6D18A886A56F4FB9B474B4E6E19AFF42889(L_10, L_11, L_12, NULL);
		// Instantiate(_hitEffect, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->____hitEffect_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_13, L_15, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HostageHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostageHealth__ctor_m59D31E3D2796FC995F03B337CFCF5B14C0E711CB (HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57* __this, const RuntimeMethod* method) 
{
	{
		// public float _maxHealth = 30;
		__this->____maxHealth_4 = (30.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Joystick::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Update_m30AC0394CA0041DD1806C85C68F89E3146566E0F (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetMouseButtonDown(0)){
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_0)
		{
			goto IL_00b9;
		}
	}
	{
		// pointA = Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Camera.main.transform.position.y, Input.mousePosition.z));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_3 = L_2.___x_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), L_3, L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_1, L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_11, NULL);
		__this->___pointA_7 = L_12;
		// circle.transform.position = pointA * -1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___circle_9;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = __this->___pointA_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_15, (-1.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_16, NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_17, NULL);
		// outerCircle.transform.position = pointA * -1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___outerCircle_10;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = __this->___pointA_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_20, (-1.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_21, NULL);
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_22, NULL);
		// circle.GetComponent<SpriteRenderer>().enabled = true;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___circle_9;
		NullCheck(L_23);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24;
		L_24 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_23, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_24);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_24, (bool)1, NULL);
		// outerCircle.GetComponent<SpriteRenderer>().enabled = true;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___outerCircle_10;
		NullCheck(L_25);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_26;
		L_26 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_25, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_26);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_26, (bool)1, NULL);
	}

IL_00b9:
	{
		// if(Input.GetMouseButton(0)){
		bool L_27;
		L_27 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		if (!L_27)
		{
			goto IL_010b;
		}
	}
	{
		// touchStart = true;
		__this->___touchStart_6 = (bool)1;
		// pointB = Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Camera.main.transform.position.y, Input.mousePosition.z));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28;
		L_28 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_30 = L_29.___x_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31;
		L_31 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		float L_34 = L_33.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_36 = L_35.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), L_30, L_34, L_36, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_28, L_37, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_38, NULL);
		__this->___pointB_8 = L_39;
		return;
	}

IL_010b:
	{
		// touchStart = false;
		__this->___touchStart_6 = (bool)0;
		// }
		return;
	}
}
// System.Void Joystick::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FixedUpdate_m7861546181E927EE7EB9C65CC02066F4D5D0D620 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(touchStart){
		bool L_0 = __this->___touchStart_6;
		if (!L_0)
		{
			goto IL_0083;
		}
	}
	{
		// Vector2 offset = pointB - pointA;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___pointB_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___pointA_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_1, L_2, NULL);
		// Vector2 direction = Vector2.ClampMagnitude(offset, 1.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline(L_3, (1.0f), NULL);
		V_0 = L_4;
		// moveCharacter(direction * -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_5, (-1.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_6, NULL);
		Joystick_moveCharacter_m4AB4741F5304BBF145C0A1CF85EA0BB5C75FAEED(__this, L_7, NULL);
		// circle.transform.position = new Vector2(pointA.x + direction.x, pointA.y + direction.y) * -1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___circle_9;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___pointA_7);
		float L_11 = L_10->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		float L_13 = L_12.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___pointA_7);
		float L_15 = L_14->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		float L_17 = L_16.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), ((float)il2cpp_codegen_add(L_11, L_13)), ((float)il2cpp_codegen_add(L_15, L_17)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_18, (-1.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_19, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_20, NULL);
		return;
	}

IL_0083:
	{
		// circle.GetComponent<SpriteRenderer>().enabled = false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___circle_9;
		NullCheck(L_21);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22;
		L_22 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_21, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_22);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_22, (bool)0, NULL);
		// outerCircle.GetComponent<SpriteRenderer>().enabled = false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___outerCircle_10;
		NullCheck(L_23);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24;
		L_24 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_23, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_24);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_24, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Joystick::moveCharacter(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_moveCharacter_m4AB4741F5304BBF145C0A1CF85EA0BB5C75FAEED (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) 
{
	{
		// player.Translate(direction * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___player_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___direction0;
		float L_2 = __this->___speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, L_4, NULL);
		NullCheck(L_0);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 5.0f;
		__this->___speed_5 = (5.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void JoystickShoot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickShoot_Start_mB001E85996B2005FAA8A59FDDC1158E754828D17 (JoystickShoot_t874A67A96B80A2A285066412AE2441745DFFC265* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// imgJoystickBg = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___imgJoystickBg_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgJoystickBg_6), (void*)L_0);
		// imgJoystick = transform.GetChild(0).GetComponent<Image>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 0, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_2, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___imgJoystick_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgJoystick_7), (void*)L_3);
		// }
		return;
	}
}
// System.Void JoystickShoot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickShoot_Update_m326A7F7D1F78905702F880513B9D412078F7E36F (JoystickShoot_t874A67A96B80A2A285066412AE2441745DFFC265* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int i = 0;
		V_0 = 0;
		goto IL_00a7;
	}

IL_0007:
	{
		// Touch t = Input.GetTouch(i);
		int32_t L_0 = V_0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(L_0, NULL);
		V_1 = L_1;
		// Vector2 touchPos = getTouchPosition(t.position); // * -1 for perspective cameras
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = JoystickShoot_getTouchPosition_m05943F2150977456AFBF2A94AF252C27535E003E(__this, L_2, NULL);
		V_2 = L_3;
		// if(t.phase == TouchPhase.Began){
		int32_t L_4;
		L_4 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		if (L_4)
		{
			goto IL_005e;
		}
	}
	{
		// if(t.position.x > Screen.width / 2){
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		float L_6 = L_5.___x_0;
		int32_t L_7;
		L_7 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		if ((!(((float)L_6) > ((float)((float)((int32_t)(L_7/2)))))))
		{
			goto IL_0048;
		}
	}
	{
		// weapon.PointerDown();
		Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D* L_8 = __this->___weapon_12;
		NullCheck(L_8);
		Weapon_2_PointerDown_mF07FD74CA6F94D9029B7CED216E747BBBFF2CEEF(L_8, NULL);
		goto IL_00a3;
	}

IL_0048:
	{
		// leftTouch = t.fingerId;
		int32_t L_9;
		L_9 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_1), NULL);
		__this->___leftTouch_14 = L_9;
		// startingPoint = touchPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_2;
		__this->___startingPoint_13 = L_10;
		goto IL_00a3;
	}

IL_005e:
	{
		// else if(t.phase == TouchPhase.Moved && leftTouch == t.fingerId)
		int32_t L_11;
		L_11 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_12 = __this->___leftTouch_14;
		int32_t L_13;
		L_13 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_1), NULL);
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_00a3;
		}
	}

IL_0077:
	{
		// else if(t.phase == TouchPhase.Ended && leftTouch == t.fingerId)
		int32_t L_14;
		L_14 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_15 = __this->___leftTouch_14;
		int32_t L_16;
		L_16 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_1), NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_00a3;
		}
	}
	{
		// leftTouch = 99;
		__this->___leftTouch_14 = ((int32_t)99);
		// weapon.PointerUp();
		Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D* L_17 = __this->___weapon_12;
		NullCheck(L_17);
		Weapon_2_PointerUp_m900075266C26C240B33721D0E848CC6245EED9B5(L_17, NULL);
	}

IL_00a3:
	{
		// ++i;
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_00a7:
	{
		// while(i < Input.touchCount){
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 JoystickShoot::getTouchPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 JoystickShoot_getTouchPosition_m05943F2150977456AFBF2A94AF252C27535E003E (JoystickShoot_t874A67A96B80A2A285066412AE2441745DFFC265* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetComponent<Camera>().ScreenToWorldPoint(new Vector3(touchPosition.x, touchPosition.y, transform.position.z));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___touchPosition0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___touchPosition0;
		float L_4 = L_3.___y_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_2, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_0, L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_9, NULL);
		return L_10;
	}
}
// System.Void JoystickShoot::moveCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickShoot_moveCharacter_m366B556E106A38ED158A4D570D9D670FF9535B0E (JoystickShoot_t874A67A96B80A2A285066412AE2441745DFFC265* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void JoystickShoot::shootBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickShoot_shootBullet_mB2E43E85A8B8E14D6ECF9C1593ED4360C1A58626 (JoystickShoot_t874A67A96B80A2A285066412AE2441745DFFC265* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void JoystickShoot::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickShoot_OnDrag_mF21266DF680952C7E080915EE830A6843DA07ADB (JoystickShoot_t874A67A96B80A2A285066412AE2441745DFFC265* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(RectTransformUtility.ScreenPointToLocalPointInRectangle(
		//     imgJoystickBg.rectTransform,
		//     eventData.position,
		//     eventData.pressEventCamera,
		//     out posInput))
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___imgJoystickBg_6;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_0, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		NullCheck(L_4);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___posInput_8);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_1, L_3, L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0134;
		}
	}
	{
		// posInput.x = posInput.x / (imgJoystickBg.rectTransform.sizeDelta.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___posInput_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = (&__this->___posInput_8);
		float L_10 = L_9->___x_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___imgJoystickBg_6;
		NullCheck(L_11);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12;
		L_12 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_11, NULL);
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_12, NULL);
		float L_14 = L_13.___x_0;
		L_8->___x_0 = ((float)(L_10/L_14));
		// posInput.y = posInput.y / (imgJoystickBg.rectTransform.sizeDelta.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___posInput_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (&__this->___posInput_8);
		float L_17 = L_16->___y_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___imgJoystickBg_6;
		NullCheck(L_18);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19;
		L_19 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_18, NULL);
		NullCheck(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_19, NULL);
		float L_21 = L_20.___y_1;
		L_15->___y_1 = ((float)(L_17/L_21));
		// Debug.Log(posInput.x.ToString() + "/" + posInput.y.ToString());
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___posInput_8);
		float* L_23 = (&L_22->___x_0);
		String_t* L_24;
		L_24 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_23, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = (&__this->___posInput_8);
		float* L_26 = (&L_25->___y_1);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		String_t* L_28;
		L_28 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_24, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_28, NULL);
		// if(posInput.magnitude > 1.0f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_29 = (&__this->___posInput_8);
		float L_30;
		L_30 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_29, NULL);
		if ((!(((float)L_30) > ((float)(1.0f)))))
		{
			goto IL_00d1;
		}
	}
	{
		// posInput = posInput.normalized;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = (&__this->___posInput_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_31, NULL);
		__this->___posInput_8 = L_32;
	}

IL_00d1:
	{
		// imgJoystick.rectTransform.anchoredPosition = new Vector2(
		//     posInput.x * (imgJoystickBg.rectTransform.sizeDelta.x / 3),
		//     posInput.y * (imgJoystickBg.rectTransform.sizeDelta.y / 3));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33 = __this->___imgJoystick_7;
		NullCheck(L_33);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_34;
		L_34 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_33, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = (&__this->___posInput_8);
		float L_36 = L_35->___x_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37 = __this->___imgJoystickBg_6;
		NullCheck(L_37);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38;
		L_38 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_37, NULL);
		NullCheck(L_38);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_38, NULL);
		float L_40 = L_39.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_41 = (&__this->___posInput_8);
		float L_42 = L_41->___y_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_43 = __this->___imgJoystickBg_6;
		NullCheck(L_43);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_44;
		L_44 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_43, NULL);
		NullCheck(L_44);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		L_45 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_44, NULL);
		float L_46 = L_45.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_47), ((float)il2cpp_codegen_multiply(L_36, ((float)(L_40/(3.0f))))), ((float)il2cpp_codegen_multiply(L_42, ((float)(L_46/(3.0f))))), /*hidden argument*/NULL);
		NullCheck(L_34);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_34, L_47, NULL);
	}

IL_0134:
	{
		// }
		return;
	}
}
// System.Void JoystickShoot::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickShoot_OnPointerDown_m8C87E11C04D39C8D9D03D1968FF8960BC92076E0 (JoystickShoot_t874A67A96B80A2A285066412AE2441745DFFC265* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OnDrag(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		JoystickShoot_OnDrag_mF21266DF680952C7E080915EE830A6843DA07ADB(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void JoystickShoot::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickShoot_OnPointerUp_m03DFD8271E386D30CD8490C8805C40A3D3AF6C46 (JoystickShoot_t874A67A96B80A2A285066412AE2441745DFFC265* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// posInput = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___posInput_8 = L_0;
		// imgJoystick.rectTransform.anchoredPosition = Vector2.zero;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___imgJoystick_7;
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Single JoystickShoot::inputHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JoystickShoot_inputHorizontal_m77923AB2DC514CE59FD14FEF8338ADBC131CAD2F (JoystickShoot_t874A67A96B80A2A285066412AE2441745DFFC265* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(posInput.x != 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___posInput_8);
		float L_1 = L_0->___x_0;
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_001e;
		}
	}
	{
		// return posInput.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___posInput_8);
		float L_3 = L_2->___x_0;
		return L_3;
	}

IL_001e:
	{
		// return Input.GetAxis("Horizontal");
		float L_4;
		L_4 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		return L_4;
	}
}
// System.Single JoystickShoot::inputVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JoystickShoot_inputVertical_m93337B42D0E0EEEE2F84F2108A74E8E77AF90C0A (JoystickShoot_t874A67A96B80A2A285066412AE2441745DFFC265* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(posInput.y != 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___posInput_8);
		float L_1 = L_0->___y_1;
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_001e;
		}
	}
	{
		// return posInput.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___posInput_8);
		float L_3 = L_2->___y_1;
		return L_3;
	}

IL_001e:
	{
		// return Input.GetAxis("Vertical");
		float L_4;
		L_4 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		return L_4;
	}
}
// System.Void JoystickShoot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickShoot__ctor_m813DF27EB00C7C88CA222CD17A1E0B729F457D7A (JoystickShoot_t874A67A96B80A2A285066412AE2441745DFFC265* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 15.0f;
		__this->___speed_5 = (15.0f);
		// private int leftTouch = 99;
		__this->___leftTouch_14 = ((int32_t)99);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LevelGameSystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelGameSystem_Start_mCD443500766A636110324E4D11617EBEDF0B8E56 (LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F25536833AF0089E79326ADB060902FE82449BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94191D49E20F6FFDC5335E5BA11306634C29DD55);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// GameObject[] targetObjects = GameObject.FindGameObjectsWithTag("Hostage"); // Replace "YourTag" with the tag you're looking for
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral94191D49E20F6FFDC5335E5BA11306634C29DD55, NULL);
		// foreach (GameObject targetObject in targetObjects)
		V_0 = L_0;
		V_1 = 0;
		goto IL_002d;
	}

IL_000f:
	{
		// foreach (GameObject targetObject in targetObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// Animator anim = targetObject.GetComponent<Animator>();
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_4, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		// if (anim != null)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		// Debug.LogWarning("Animator component not found on an object with the specified tag.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral3F25536833AF0089E79326ADB060902FE82449BD, NULL);
	}

IL_0029:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002d:
	{
		// foreach (GameObject targetObject in targetObjects)
		int32_t L_8 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LevelGameSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelGameSystem_Update_m8FE101B21BCD70D0E46A96154FFCBFB854EA5E85 (LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C459A33B11E3AB83E34CD4E146B521BA8ED64F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94191D49E20F6FFDC5335E5BA11306634C29DD55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_2 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_3 = NULL;
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	{
		// levelText.text = "LEVEL " + Level;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___levelText_5;
		int32_t* L_1 = (&__this->___Level_4);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4C459A33B11E3AB83E34CD4E146B521BA8ED64F5, L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// cashpass.text = "" + Cash;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___cashpass_16;
		int32_t* L_5 = (&__this->___Cash_15);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = L_4;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_4;
			goto IL_003a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_003a:
	{
		NullCheck(G_B2_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// cashScoreText.text = "+" + CashScore;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___cashScoreText_18;
		int32_t* L_9 = (&__this->___CashScore_17);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_10, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		// if(Level == 1 || Level == 2 || Level == 3)
		int32_t L_12 = __this->___Level_4;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_13 = __this->___Level_4;
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_14 = __this->___Level_4;
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_00db;
		}
	}

IL_007a:
	{
		// if(zombieLife.DeadZombies == 1)
		ZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4* L_15 = __this->___zombieLife_6;
		NullCheck(L_15);
		int32_t L_16 = L_15->___DeadZombies_7;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_00db;
		}
	}
	{
		// GameObject[] targetObjects = GameObject.FindGameObjectsWithTag("Hostage");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17;
		L_17 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral94191D49E20F6FFDC5335E5BA11306634C29DD55, NULL);
		// foreach (GameObject targetObject in targetObjects)
		V_0 = L_17;
		V_1 = 0;
		goto IL_00b9;
	}

IL_0097:
	{
		// foreach (GameObject targetObject in targetObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		// Animator anim = targetObject.GetComponent<Animator>();
		NullCheck(L_21);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_22;
		L_22 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_21, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		V_2 = L_22;
		// if (anim != null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_00b5;
		}
	}
	{
		// anim.SetBool("Happy", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = V_2;
		NullCheck(L_25);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_25, _stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5, (bool)1, NULL);
	}

IL_00b5:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00b9:
	{
		// foreach (GameObject targetObject in targetObjects)
		int32_t L_27 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0097;
		}
	}
	{
		// timedown.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___timedown_10;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_29, NULL);
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)1, NULL);
		// CashScore = 500;
		__this->___CashScore_17 = ((int32_t)500);
	}

IL_00db:
	{
		// if(Level == 4 || Level == 5 || Level == 6)
		int32_t L_31 = __this->___Level_4;
		if ((((int32_t)L_31) == ((int32_t)4)))
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_32 = __this->___Level_4;
		if ((((int32_t)L_32) == ((int32_t)5)))
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_33 = __this->___Level_4;
		if ((!(((uint32_t)L_33) == ((uint32_t)6))))
		{
			goto IL_014c;
		}
	}

IL_00f6:
	{
		// if(zombieLife.DeadZombies == 2)
		ZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4* L_34 = __this->___zombieLife_6;
		NullCheck(L_34);
		int32_t L_35 = L_34->___DeadZombies_7;
		if ((!(((uint32_t)L_35) == ((uint32_t)2))))
		{
			goto IL_014c;
		}
	}
	{
		// GameObject[] targetObjects = GameObject.FindGameObjectsWithTag("Hostage");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_36;
		L_36 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral94191D49E20F6FFDC5335E5BA11306634C29DD55, NULL);
		// foreach (GameObject targetObject in targetObjects)
		V_0 = L_36;
		V_1 = 0;
		goto IL_0135;
	}

IL_0113:
	{
		// foreach (GameObject targetObject in targetObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_37 = V_0;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		// Animator anim = targetObject.GetComponent<Animator>();
		NullCheck(L_40);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_41;
		L_41 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_40, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		V_3 = L_41;
		// if (anim != null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_0131;
		}
	}
	{
		// anim.SetBool("Happy", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_44 = V_3;
		NullCheck(L_44);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_44, _stringLiteralBEE1A59EA0CDCEC3852C71CA14EC52372BCA29A5, (bool)1, NULL);
	}

IL_0131:
	{
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0135:
	{
		// foreach (GameObject targetObject in targetObjects)
		int32_t L_46 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_47 = V_0;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
		{
			goto IL_0113;
		}
	}
	{
		// timedown.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___timedown_10;
		NullCheck(L_48);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_48, NULL);
		NullCheck(L_49);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_49, (bool)1, NULL);
	}

IL_014c:
	{
		// }
		return;
	}
}
// System.Void LevelGameSystem::Menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelGameSystem_Menu_m54D353715207883140B6C11EF2F962B689CF1934 (LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* __this, const RuntimeMethod* method) 
{
	{
		// Dark.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Dark_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// Effect.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Effect_13;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// LevelComplete.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___LevelComplete_7;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// DeathMenu.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___DeathMenu_8;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LevelGameSystem::Replay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelGameSystem_Replay_m3AB564FAF7BE99CD5621D18C0B5FA27DD0B88BF2 (LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral676E1309992ECD8CD1E6DB0EFFEB77A1B34AAFD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("TEST");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral676E1309992ECD8CD1E6DB0EFFEB77A1B34AAFD8, NULL);
		// }
		return;
	}
}
// System.Void LevelGameSystem::SettingsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelGameSystem_SettingsOpen_mF43CA5FFE4092F53985C962A14DABD847DDE8A4B (LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral664DABBB1F96C857595AF4BB8A0CB71AC398FA3B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// OptionAnim.SetBool("OPTIONS", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___OptionAnim_11;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral664DABBB1F96C857595AF4BB8A0CB71AC398FA3B, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LevelGameSystem::SettingsClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelGameSystem_SettingsClose_mE5A988F709E14AFB578D132878A7AA987C63B64A (LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral664DABBB1F96C857595AF4BB8A0CB71AC398FA3B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// OptionAnim.SetBool("OPTIONS", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___OptionAnim_11;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral664DABBB1F96C857595AF4BB8A0CB71AC398FA3B, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LevelGameSystem::Home()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelGameSystem_Home_mD62838184EC407C5F3DF8EFAF8DAB57B7E9AF7E3 (LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LevelGameSystem::BackToGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelGameSystem_BackToGame_m45AAA93F52413BDF9B1FC9449E9B3A898D47A66E (LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LevelGameSystem::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelGameSystem_NextLevel_m00DF304549392159D2DCF8EC900FA39F7D7F372F (LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* __this, const RuntimeMethod* method) 
{
	{
		// Cash += CashScore;
		int32_t L_0 = __this->___Cash_15;
		int32_t L_1 = __this->___CashScore_17;
		__this->___Cash_15 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void LevelGameSystem::TimesTwo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelGameSystem_TimesTwo_mA53807B19240517C4FF459D4B7CCF94C1C4601C6 (LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* __this, const RuntimeMethod* method) 
{
	{
		// CashScore = 2 * CashScore;
		int32_t L_0 = __this->___CashScore_17;
		__this->___CashScore_17 = ((int32_t)il2cpp_codegen_multiply(2, L_0));
		// }
		return;
	}
}
// System.Void LevelGameSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelGameSystem__ctor_m3B2AAC87A5D4855BF0A4E7E09252AF5A1DDD05B2 (LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LookatMouse::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookatMouse_Update_m4B3CDA0B2C7DDD2F2D820798648CB7E9092C8FBC (LookatMouse_t778DC7E8BA0362F9A106293A413C583034EA61C7* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 mousePosition = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		V_0 = L_0;
		// Vector3 worldMousePosition = Camera.main.ScreenToWorldPoint(new Vector3(mousePosition.x, mousePosition.y, 10));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_3, L_5, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_1, L_6, NULL);
		// Vector3 lookDirection = (worldMousePosition - transform.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_7, L_9, NULL);
		V_3 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_1 = L_11;
		// float step = rotationSpeed * Time.deltaTime;
		float L_12 = __this->___rotationSpeed_4;
		float L_13;
		L_13 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_2 = ((float)il2cpp_codegen_multiply(L_12, L_13));
		// transform.forward = Vector3.RotateTowards(transform.forward, lookDirection, step, 0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_RotateTowards_m3A0BCD584401D5341E1CB544B37764207258B234(L_16, L_17, L_18, (0.0f), NULL);
		NullCheck(L_14);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_14, L_19, NULL);
		// }
		return;
	}
}
// System.Void LookatMouse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookatMouse__ctor_mF106790B442E8D435585A40EB6F5BC86A08011CB (LookatMouse_t778DC7E8BA0362F9A106293A413C583034EA61C7* __this, const RuntimeMethod* method) 
{
	{
		// public float rotationSpeed = 90f; // Adjust the speed as needed
		__this->___rotationSpeed_4 = (90.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MajorZombie::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MajorZombie_Start_m268A5E21205DF47DDBBA3D943DF4D8F19C0D6933 (MajorZombie_t75C0B1A23D2A9ACFA2E166A4263AE619529B0FC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57_m9DFB9AE953D3268C57CDCEEA6AA3020559D17760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral291A935FB46F877A7F100F14B7AC7A6CB44AF3BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D7F0A601B5296DD16706E740FA1E95EE5A3058E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DB6F2D0F1313591A2BA0F452AE1F2AFF6439E37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F25536833AF0089E79326ADB060902FE82449BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA0CF788759E982A5F45F96DF2BC514A7CAE15D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// player = GameObject.Find("FollowMe").transform; // Try finding the player GameObject.
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral2D7F0A601B5296DD16706E740FA1E95EE5A3058E, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___player_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_4), (void*)L_1);
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2;
		L_2 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->___agent_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agent_5), (void*)L_2);
		// GameObject Hostages = GameObject.FindGameObjectWithTag("Hostile");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteral7AA0CF788759E982A5F45F96DF2BC514A7CAE15D, NULL);
		V_0 = L_3;
		// hostagedamage = Hostages.GetComponent<HostageHealth>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57* L_5;
		L_5 = GameObject_GetComponent_TisHostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57_m9DFB9AE953D3268C57CDCEEA6AA3020559D17760(L_4, GameObject_GetComponent_TisHostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57_m9DFB9AE953D3268C57CDCEEA6AA3020559D17760_RuntimeMethod_var);
		__this->___hostagedamage_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hostagedamage_7), (void*)L_5);
		// if (player == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___player_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// Debug.LogError("Player not found. Make sure the player GameObject exists and is named 'Player'.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral291A935FB46F877A7F100F14B7AC7A6CB44AF3BD, NULL);
	}

IL_0050:
	{
		// GameObject[] targetObjects = GameObject.FindGameObjectsWithTag("EnemyMajor"); // Replace "YourTag" with the tag you're looking for
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8;
		L_8 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral3DB6F2D0F1313591A2BA0F452AE1F2AFF6439E37, NULL);
		// foreach (GameObject targetObject in targetObjects)
		V_1 = L_8;
		V_2 = 0;
		goto IL_007d;
	}

IL_005f:
	{
		// foreach (GameObject targetObject in targetObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		// Animator anim = targetObject.GetComponent<Animator>();
		NullCheck(L_12);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13;
		L_13 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_12, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		// if (anim != null)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_14)
		{
			goto IL_0079;
		}
	}
	{
		// Debug.LogWarning("Animator component not found on an object with the specified tag.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral3F25536833AF0089E79326ADB060902FE82449BD, NULL);
	}

IL_0079:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_007d:
	{
		// foreach (GameObject targetObject in targetObjects)
		int32_t L_16 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_005f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MajorZombie::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MajorZombie_Update_m095A24C207A0E56A2B3BEA019673A9AA60AB24C6 (MajorZombie_t75C0B1A23D2A9ACFA2E166A4263AE619529B0FC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DB6F2D0F1313591A2BA0F452AE1F2AFF6439E37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_2 = NULL;
	{
		// if (player != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___player_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_009e;
		}
	}
	{
		// float distanceToPlayer = Vector3.Distance(transform.position, player.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___player_4;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_3, L_5, NULL);
		// if (distanceToPlayer > stoppingDistance)
		float L_7 = __this->___stoppingDistance_9;
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_004c;
		}
	}
	{
		// agent.SetDestination(player.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_8 = __this->___agent_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___player_4;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_8, L_10, NULL);
		return;
	}

IL_004c:
	{
		// agent.velocity = Vector3.zero;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_12 = __this->___agent_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_12);
		NavMeshAgent_set_velocity_m3C061136C7F338D33A5DE734B5C364326F6F4B31(L_12, L_13, NULL);
		// hostagedamage.ZombieDamaging();
		HostageHealth_t4BCABF1214C9852F4C5EC9322EC30C0E76B5DA57* L_14 = __this->___hostagedamage_7;
		NullCheck(L_14);
		HostageHealth_ZombieDamaging_m231E2196809A03AF9DA740AE9B0F9108FD0B76B0(L_14, NULL);
		// GameObject[] targetObjects = GameObject.FindGameObjectsWithTag("EnemyMajor");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15;
		L_15 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral3DB6F2D0F1313591A2BA0F452AE1F2AFF6439E37, NULL);
		// foreach (GameObject targetObject in targetObjects)
		V_0 = L_15;
		V_1 = 0;
		goto IL_0098;
	}

IL_0076:
	{
		// foreach (GameObject targetObject in targetObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		// Animator anim = targetObject.GetComponent<Animator>();
		NullCheck(L_19);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_20;
		L_20 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_19, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		V_2 = L_20;
		// if (anim != null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_0094;
		}
	}
	{
		// anim.SetBool("Attack", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = V_2;
		NullCheck(L_23);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_23, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, (bool)1, NULL);
	}

IL_0094:
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0098:
	{
		// foreach (GameObject targetObject in targetObjects)
		int32_t L_25 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26 = V_0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0076;
		}
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void MajorZombie::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MajorZombie__ctor_mE8A3A66BBC16AAC11834A7B064648F910DFBC96A (MajorZombie_t75C0B1A23D2A9ACFA2E166A4263AE619529B0FC5* __this, const RuntimeMethod* method) 
{
	{
		// private float stoppingDistance = 2.0f;
		__this->___stoppingDistance_9 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void OptionScript::OpenOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionScript_OpenOptions_m997AD0D81FC83935E215412859C88022F7CFB00D (OptionScript_tC34BBAC056FE53C928E70FCBE378B9A4777DE375* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C328FED8FA5A1FEDA936F2CF769768F0742C775);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetBool("AWAKE", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_4;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral3C328FED8FA5A1FEDA936F2CF769768F0742C775, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void OptionScript::CloseOption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionScript_CloseOption_m0F2930E1D1158871C1653007F35FC9F8594CBAB4 (OptionScript_tC34BBAC056FE53C928E70FCBE378B9A4777DE375* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C328FED8FA5A1FEDA936F2CF769768F0742C775);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetBool("AWAKE", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_4;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral3C328FED8FA5A1FEDA936F2CF769768F0742C775, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void OptionScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionScript__ctor_m40373C9F3636868A35DBE35A8030AB6498E730FD (OptionScript_tC34BBAC056FE53C928E70FCBE378B9A4777DE375* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerLife::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLife_Start_m47CC209164DA35A2C1ECB2A472E3C3471792D7B6 (PlayerLife_t148880044E384DF6D482766356838134F900C2E3* __this, const RuntimeMethod* method) 
{
	{
		// _currentHealth = _maxHealth;
		float L_0 = __this->____maxHealth_4;
		__this->____currentHealth_7 = L_0;
		// _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
		CharacterHealth_t66AE08E0DD000B0034391D9447ADFF0E73653A69* L_1 = __this->____healthbar_11;
		float L_2 = __this->____maxHealth_4;
		float L_3 = __this->____currentHealth_7;
		NullCheck(L_1);
		CharacterHealth_UpdateHealthBar_m61D8FCA71E58B3F6FFAFF66BCDDC4A8C9CFB196E(L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerLife::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLife_Update_m1BA42C3A07B01D77C1B57F225FB7068ACFC3E243 (PlayerLife_t148880044E384DF6D482766356838134F900C2E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	{
		// currentHealth.text = "" + _currentHealth.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___currentHealth_8;
		float* L_1 = (&__this->____currentHealth_7);
		String_t* L_2;
		L_2 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_1, NULL);
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_0;
			goto IL_001a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_001a:
	{
		NullCheck(G_B2_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// maxHealth.text = " / " + _maxHealth.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___maxHealth_5;
		float* L_5 = (&__this->____maxHealth_4);
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_6, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void PlayerLife::Damaging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLife_Damaging_mC049FBFB88BFBC59A6DC10BE9D9159070D665750 (PlayerLife_t148880044E384DF6D482766356838134F900C2E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _currentHealth -=mvBullet.Damage;
		float L_0 = __this->____currentHealth_7;
		BULL_ACTIVE_t78EC829D874D8DAC1B6F835502311EDA108E6C80* L_1 = __this->___mvBullet_9;
		NullCheck(L_1);
		float L_2 = L_1->___Damage_4;
		__this->____currentHealth_7 = ((float)il2cpp_codegen_subtract(L_0, L_2));
		// if(_currentHealth <= 0)
		float L_3 = __this->____currentHealth_7;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0036;
		}
	}
	{
		// Destroy(FullPlayer.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___FullPlayer_10;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
		return;
	}

IL_0036:
	{
		// _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
		CharacterHealth_t66AE08E0DD000B0034391D9447ADFF0E73653A69* L_6 = __this->____healthbar_11;
		float L_7 = __this->____maxHealth_4;
		float L_8 = __this->____currentHealth_7;
		NullCheck(L_6);
		CharacterHealth_UpdateHealthBar_m61D8FCA71E58B3F6FFAFF66BCDDC4A8C9CFB196E(L_6, L_7, L_8, NULL);
		// Instantiate(_hitEffect, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->____hitEffect_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_9, L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PlayerLife::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLife__ctor_m15B9ED6A5AE67DFABC0038BFDABC559B6CCACF37 (PlayerLife_t148880044E384DF6D482766356838134F900C2E3* __this, const RuntimeMethod* method) 
{
	{
		// public float _maxHealth = 30;
		__this->____maxHealth_4 = (30.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnemyHealth::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_Start_m7EB3716BBC5601C7C090FD76E440672C19E4CA27 (EnemyHealth_t2937DFCC8299F967896C0B08F9D3E3F2816AA53D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnemyHealth::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth_Update_mC730A089783A10B23F2690A513D1ECDDEFCCE920 (EnemyHealth_t2937DFCC8299F967896C0B08F9D3E3F2816AA53D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(currentHealth <= 0)
		int32_t L_0 = __this->___currentHealth_4;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_1, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void EnemyHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHealth__ctor_m4ADD4CF1D414077D48BEB31F8B6EF010657BD687 (EnemyHealth_t2937DFCC8299F967896C0B08F9D3E3F2816AA53D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SpawnPref::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnPref_Start_m13A9F4EFB8548F9D86C2AB883CA7DC3489E51BA6 (SpawnPref_tF7305B8F9C26E6F66E097FFDCF70CAADBFFA6D89* __this, const RuntimeMethod* method) 
{
	{
		// SpawnObjects();
		SpawnPref_SpawnObjects_mF3A4E0364B59BA167EA09983F9E2891FE75CC9B9(__this, NULL);
		// }
		return;
	}
}
// System.Void SpawnPref::SpawnObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnPref_SpawnObjects_mF3A4E0364B59BA167EA09983F9E2891FE75CC9B9 (SpawnPref_tF7305B8F9C26E6F66E097FFDCF70CAADBFFA6D89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = 0; i < numberOfObjects; i++)
		V_0 = 0;
		goto IL_003b;
	}

IL_0004:
	{
		// Vector3 randomOffset = Random.insideUnitSphere * spawnRadius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C(NULL);
		float L_1 = __this->___spawnRadius_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, L_1, NULL);
		V_1 = L_2;
		// Instantiate(objectToSpawn, spawnTransform.position + randomOffset, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___objectToSpawn_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___spawnTransform_6;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_5, L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_3, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// for (int i = 0; i < numberOfObjects; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003b:
	{
		// for (int i = 0; i < numberOfObjects; i++)
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___numberOfObjects_5;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SpawnPref::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnPref__ctor_m776550C5A686335BC61D13FEBFB8A1484E995291 (SpawnPref_tF7305B8F9C26E6F66E097FFDCF70CAADBFFA6D89* __this, const RuntimeMethod* method) 
{
	{
		// public int numberOfObjects = 100; // Number of objects to spawn
		__this->___numberOfObjects_5 = ((int32_t)100);
		// public float spawnRadius = 5.0f; // The radius within which objects will be randomly spawned
		__this->___spawnRadius_7 = (5.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SwitchToggle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchToggle_Awake_m7D89A2AAE8717EDBCE03B887E978FA967323C458 (SwitchToggle_t83F5713BF80951A736648FDC8EBADF0ADDDB60A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchToggle_OnSwitch_mCA6FDEA52D061020A9D33B3F735EDC3EDC17ECB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggle = GetComponent<Toggle>();
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0;
		L_0 = Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE(__this, Component_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_mCFD123E76114133A77ECEF96A5474F07B97F5CEE_RuntimeMethod_var);
		__this->___toggle_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggle_11), (void*)L_0);
		// handlePosition = uiHandleRectTransform.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___uiHandleRectTransform_4;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_1, NULL);
		__this->___handlePosition_12 = L_2;
		// backgroundImage = uiHandleRectTransform.parent.GetComponent<Image>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___uiHandleRectTransform_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_3, NULL);
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_4, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___backgroundImage_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backgroundImage_7), (void*)L_5);
		// handleImage = uiHandleRectTransform.GetComponent<Image>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___uiHandleRectTransform_4;
		NullCheck(L_6);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_6, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___handleImage_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handleImage_8), (void*)L_7);
		// backgroundDefaultColor = backgroundImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___backgroundImage_7;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		__this->___backgroundDefaultColor_9 = L_9;
		// handleDefaultColor = handleImage.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___handleImage_8;
		NullCheck(L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_10);
		__this->___handleDefaultColor_10 = L_11;
		// toggle.onValueChanged.AddListener(OnSwitch);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_12 = __this->___toggle_11;
		NullCheck(L_12);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_13 = L_12->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_14 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_14, __this, (intptr_t)((void*)SwitchToggle_OnSwitch_mCA6FDEA52D061020A9D33B3F735EDC3EDC17ECB9_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_13, L_14, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// if(toggle.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_15 = __this->___toggle_11;
		NullCheck(L_15);
		bool L_16;
		L_16 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_15, NULL);
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		// OnSwitch(true);
		SwitchToggle_OnSwitch_mCA6FDEA52D061020A9D33B3F735EDC3EDC17ECB9(__this, (bool)1, NULL);
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void SwitchToggle::OnSwitch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchToggle_OnSwitch_mCA6FDEA52D061020A9D33B3F735EDC3EDC17ECB9 (SwitchToggle_t83F5713BF80951A736648FDC8EBADF0ADDDB60A9* __this, bool ___on0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m272F2A88BE49F32CE36C0AD3F382B06C413F770D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B2_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B1_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B3_1 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B5_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B4_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B6_1 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B8_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B7_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B9_1 = NULL;
	{
		// uiHandleRectTransform.DOAnchorPos (on ? handlePosition * -1 : handlePosition, .4f).SetEase (Ease.InOutBack);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___uiHandleRectTransform_4;
		bool L_1 = ___on0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0011;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___handlePosition_12;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_0011:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___handlePosition_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_3, (-1.0f), NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_5;
		L_5 = DOTweenModuleUI_DOAnchorPos_m3572189AA21570B71014F4FEADC7BF6DA4ACE9B0(G_B3_1, G_B3_0, (0.400000006f), (bool)0, NULL);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_6;
		L_6 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m272F2A88BE49F32CE36C0AD3F382B06C413F770D(L_5, ((int32_t)28), TweenSettingsExtensions_SetEase_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m272F2A88BE49F32CE36C0AD3F382B06C413F770D_RuntimeMethod_var);
		// backgroundImage.DOColor (on ? backgroundActiveColor : backgroundDefaultColor, .6f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___backgroundImage_7;
		bool L_8 = ___on0;
		G_B4_0 = L_7;
		if (L_8)
		{
			G_B5_0 = L_7;
			goto IL_0045;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___backgroundDefaultColor_9;
		G_B6_0 = L_9;
		G_B6_1 = G_B4_0;
		goto IL_004b;
	}

IL_0045:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___backgroundActiveColor_5;
		G_B6_0 = L_10;
		G_B6_1 = G_B5_0;
	}

IL_004b:
	{
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_11;
		L_11 = DOTweenModuleUI_DOColor_m0974A6D1FD2E3E54EBCDFE0B0A224DA1AD0416EF(G_B6_1, G_B6_0, (0.600000024f), NULL);
		// handleImage.DOColor(on ? handleActiveColor : handleDefaultColor, .4f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___handleImage_8;
		bool L_13 = ___on0;
		G_B7_0 = L_12;
		if (L_13)
		{
			G_B8_0 = L_12;
			goto IL_0067;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___handleDefaultColor_10;
		G_B9_0 = L_14;
		G_B9_1 = G_B7_0;
		goto IL_006d;
	}

IL_0067:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___handleActiveColor_6;
		G_B9_0 = L_15;
		G_B9_1 = G_B8_0;
	}

IL_006d:
	{
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_16;
		L_16 = DOTweenModuleUI_DOColor_m0974A6D1FD2E3E54EBCDFE0B0A224DA1AD0416EF(G_B9_1, G_B9_0, (0.400000006f), NULL);
		// }
		return;
	}
}
// System.Void SwitchToggle::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchToggle_OnDestroy_mA80FA412F5D509FFFC472FDBA523C2EB953EAFCA (SwitchToggle_t83F5713BF80951A736648FDC8EBADF0ADDDB60A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwitchToggle_OnSwitch_mCA6FDEA52D061020A9D33B3F735EDC3EDC17ECB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggle.onValueChanged.RemoveListener(OnSwitch);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_11;
		NullCheck(L_0);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_1 = L_0->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_2 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_2, __this, (intptr_t)((void*)SwitchToggle_OnSwitch_mCA6FDEA52D061020A9D33B3F735EDC3EDC17ECB9_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130(L_1, L_2, UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SwitchToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwitchToggle__ctor_m744CC3EA839670B84BD6E500BB846F22394C041F (SwitchToggle_t83F5713BF80951A736648FDC8EBADF0ADDDB60A9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BulletSpeed::SetHitTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletSpeed_SetHitTransform_m3BB7B03267F8FE4EF627101B7B5A714D9B449829 (BulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___hitTransform0, const RuntimeMethod* method) 
{
	{
		// hitPoint = hitTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___hitTransform0;
		__this->___hitPoint_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hitPoint_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void BulletSpeed::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletSpeed_Start_m53F3A5311E379AA423F2A5E3B8E409425F8D9ADA (BulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFAE335F02C29A50BC5AF2B6A2CED1D883446150);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDD875B289DFB214638D87974909C69B8D8FB41F);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// hitPoint = GameObject.Find("HitMe").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralAFAE335F02C29A50BC5AF2B6A2CED1D883446150, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___hitPoint_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hitPoint_4), (void*)L_1);
		// if (hitPoint != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___hitPoint_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		// Vector3 direction = hitPoint.position - this.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___hitPoint_4;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_5, L_7, NULL);
		V_0 = L_8;
		// this.GetComponent<Rigidbody>().AddForce(direction.normalized * speed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9;
		L_9 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		int32_t L_11 = __this->___speed_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, ((float)L_11), NULL);
		NullCheck(L_9);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_9, L_12, NULL);
		return;
	}

IL_005e:
	{
		// Debug.LogWarning("hitPoint is not assigned.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDDD875B289DFB214638D87974909C69B8D8FB41F, NULL);
		// }
		return;
	}
}
// System.Void BulletSpeed::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletSpeed_Update_mF6311AF73B1DB656694B5B18EB1EBBC593E38BF6 (BulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BulletSpeed::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletSpeed_OnCollisionEnter_m131A067B7FBCF91B73E9E9EB12B6DCB4D5F92AD7 (BulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.tag == "Enemy")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___col0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// Instantiate(spark, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___spark_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_4, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_9, NULL);
		return;
	}

IL_003f:
	{
		// Instantiate(dirt, this.transform.position, this.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___dirt_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_10, L_12, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BulletSpeed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletSpeed__ctor_m750BD22D9A473B0E2DEB841908839FEFD5100384 (BulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CameraFol::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFol_Start_m3D018E986AC23EB2E57D0AD7A7EDDA42AC4BFF26 (CameraFol_t310D292663B30F9CD9CD814E0283686F41B36F99* __this, const RuntimeMethod* method) 
{
	{
		// cameraoffset = transform.position - targetObject.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___targetObject_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_4, NULL);
		__this->___cameraoffset_5 = L_5;
		// }
		return;
	}
}
// System.Void CameraFol::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFol_LateUpdate_mE7A0877383C518AE1CDC8D5B12DEDEE14E8B9F90 (CameraFol_t310D292663B30F9CD9CD814E0283686F41B36F99* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 newPosition = targetObject.transform.position + cameraoffset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___targetObject_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___cameraoffset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// transform.position = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void CameraFol::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFol__ctor_mB1D54758C622EC472DD22421D1DBB8E207DEDE38 (CameraFol_t310D292663B30F9CD9CD814E0283686F41B36F99* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Door_Mechanism_1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_Mechanism_1_Start_m1B3554D4100910329E05AEE676565230B4FC548A (Door_Mechanism_1_tDF834CCD7FF50A82EE6905134B32EF0B2AD90B94* __this, const RuntimeMethod* method) 
{
	{
		// dipart.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___dipart_6;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Door_Mechanism_1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_Mechanism_1_Update_m24DC15FB5F53F3CCA8D3115EF83DDEFE17AC584E (Door_Mechanism_1_tDF834CCD7FF50A82EE6905134B32EF0B2AD90B94* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Door_Mechanism_1::OpenDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_Mechanism_1_OpenDoor_m60B2DBD3FFB00BEA51B0425B94BDDC79F4C82066 (Door_Mechanism_1_tDF834CCD7FF50A82EE6905134B32EF0B2AD90B94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral410E9BC8BA3E0E84911D5057DF030791535C1A7E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Door_Motion.SetBool("DOOR01", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___Door_Motion_4;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral410E9BC8BA3E0E84911D5057DF030791535C1A7E, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Door_Mechanism_1::CloseDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_Mechanism_1_CloseDoor_m8E90C0A6A6CE6DD482E80AB4EF8EA3AD7289E1B0 (Door_Mechanism_1_tDF834CCD7FF50A82EE6905134B32EF0B2AD90B94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral410E9BC8BA3E0E84911D5057DF030791535C1A7E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Door_Motion.SetBool("DOOR01", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___Door_Motion_4;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral410E9BC8BA3E0E84911D5057DF030791535C1A7E, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Door_Mechanism_1::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_Mechanism_1_OnCollisionEnter_m4D76CD54F5C62C235410A08A5B28020ABBA23707 (Door_Mechanism_1_tDF834CCD7FF50A82EE6905134B32EF0B2AD90B94* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB0DB6F4F3CA78AF9E7D8CDADB8863A90C0E3D6D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.tag == "Open")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___col0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// OpenDoor();
		Door_Mechanism_1_OpenDoor_m60B2DBD3FFB00BEA51B0425B94BDDC79F4C82066(__this, NULL);
		// dipart.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___dipart_6;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// entry.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___entry_5;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
	}

IL_003f:
	{
		// if(col.gameObject.tag == "MainFloor")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_8 = ___col0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteralCB0DB6F4F3CA78AF9E7D8CDADB8863A90C0E3D6D, NULL);
		if (!L_11)
		{
			goto IL_007e;
		}
	}
	{
		// CloseDoor();
		Door_Mechanism_1_CloseDoor_m8E90C0A6A6CE6DD482E80AB4EF8EA3AD7289E1B0(__this, NULL);
		// entry.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___entry_5;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// dipart.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___dipart_6;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_14, NULL);
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void Door_Mechanism_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_Mechanism_1__ctor_m4A825C17BADAA8C112A1458BE50526A04454F77B (Door_Mechanism_1_tDF834CCD7FF50A82EE6905134B32EF0B2AD90B94* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Start_mF7B5F2CCA1F4E07B3443D6520DFC0114CCBF7D28 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnemyAI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Update_mD595950351F973E18DF3AB79692E6DE4BDFC16B0 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	{
		// playerInSightRange = Physics.CheckSphere(transform.position, sightRange, whatIsPlayer);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = __this->___sightRange_13;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->___whatIsPlayer_7;
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_3, NULL);
		bool L_5;
		L_5 = Physics_CheckSphere_m5E5FF963A4B356DFFCAF69B9AF9209DD1632EF17(L_1, L_2, L_4, NULL);
		__this->___playerInSightRange_15 = L_5;
		// playerInAttackRange = Physics.CheckSphere(transform.position, attackRange, whatIsPlayer);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = __this->___attackRange_14;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_9 = __this->___whatIsPlayer_7;
		int32_t L_10;
		L_10 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_9, NULL);
		bool L_11;
		L_11 = Physics_CheckSphere_m5E5FF963A4B356DFFCAF69B9AF9209DD1632EF17(L_7, L_8, L_10, NULL);
		__this->___playerInAttackRange_16 = L_11;
		// }
		return;
	}
}
// System.Void EnemyAI::OnAwake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_OnAwake_m063E0635064D0CC2E507190AD3315F7751015FAF (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B8764C8C85EE447A5BE5F13ED134DA87603EE0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("Player_Pos").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral0B8764C8C85EE447A5BE5F13ED134DA87603EE0C, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___player_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_5), (void*)L_1);
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2;
		L_2 = Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F(__this, Component_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_m45B783D78932EFB8409019F84FED6DF3A492F16F_RuntimeMethod_var);
		__this->___agent_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agent_4), (void*)L_2);
		// if(!playerInSightRange && !playerInAttackRange)
		bool L_3 = __this->___playerInSightRange_15;
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		bool L_4 = __this->___playerInAttackRange_16;
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		// Patroling();
		EnemyAI_Patroling_mECBB42625B8F5C2C32C072366CDF782BE5FF712B(__this, NULL);
	}

IL_0037:
	{
		// if(playerInSightRange && !playerInAttackRange)
		bool L_5 = __this->___playerInSightRange_15;
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		bool L_6 = __this->___playerInAttackRange_16;
		if (L_6)
		{
			goto IL_004d;
		}
	}
	{
		// ChasePlayer();
		EnemyAI_ChasePlayer_m8C4B95A30DC76C4BDB61706361636BC1C978AF7A(__this, NULL);
	}

IL_004d:
	{
		// if(playerInSightRange && playerInAttackRange)
		bool L_7 = __this->___playerInSightRange_15;
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		bool L_8 = __this->___playerInAttackRange_16;
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		// AttackPlayer();
		EnemyAI_AttackPlayer_m8937636FFF87584DD472F88DF262D7F66479E5E4(__this, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void EnemyAI::Patroling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Patroling_mECBB42625B8F5C2C32C072366CDF782BE5FF712B (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(!walkPointSet)
		bool L_0 = __this->___walkPointSet_9;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// SearchWalkPoint();
		EnemyAI_SearchWalkPoint_m705CAFC494EE562D7C8196755197847FD6D0564E(__this, NULL);
	}

IL_000e:
	{
		// if(walkPointSet)
		bool L_1 = __this->___walkPointSet_9;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// agent.SetDestination(walkPoint);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_2 = __this->___agent_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___walkPoint_8;
		NullCheck(L_2);
		bool L_4;
		L_4 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_2, L_3, NULL);
	}

IL_0028:
	{
		// Vector3 distanceToWalkPoint = transform.position - walkPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___walkPoint_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_6, L_7, NULL);
		V_0 = L_8;
		// if(distanceToWalkPoint.magnitude < 1f)
		float L_9;
		L_9 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((float)L_9) < ((float)(1.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		// walkPointSet = false;
		__this->___walkPointSet_9 = (bool)0;
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void EnemyAI::SearchWalkPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_SearchWalkPoint_m705CAFC494EE562D7C8196755197847FD6D0564E (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float randomZ = Random.Range(-walkPointRange, walkPointRange);
		float L_0 = __this->___walkPointRange_10;
		float L_1 = __this->___walkPointRange_10;
		float L_2;
		L_2 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_0)), L_1, NULL);
		V_0 = L_2;
		// float randomX = Random.Range(-walkPointRange, walkPointRange);
		float L_3 = __this->___walkPointRange_10;
		float L_4 = __this->___walkPointRange_10;
		float L_5;
		L_5 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_3)), L_4, NULL);
		V_1 = L_5;
		// walkPoint = new Vector3(transform.position.x + randomX, transform.position.y, transform.position.z + randomZ);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___x_2;
		float L_9 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___z_4;
		float L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)il2cpp_codegen_add(L_8, L_9)), L_12, ((float)il2cpp_codegen_add(L_15, L_16)), /*hidden argument*/NULL);
		__this->___walkPoint_8 = L_17;
		// if(Physics.Raycast(walkPoint, -transform.up, 2f, whatIsGround))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___walkPoint_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_20, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_22 = __this->___whatIsGround_6;
		int32_t L_23;
		L_23 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_22, NULL);
		bool L_24;
		L_24 = Physics_Raycast_mD4D68C5B2E8407DBF337DCC834C33C4F521ED5E7(L_18, L_21, (2.0f), L_23, NULL);
		if (!L_24)
		{
			goto IL_0099;
		}
	}
	{
		// walkPointSet = true;
		__this->___walkPointSet_9 = (bool)1;
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void EnemyAI::ChasePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_ChasePlayer_m8C4B95A30DC76C4BDB61706361636BC1C978AF7A (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	{
		// agent.SetDestination(player.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->___agent_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___player_5;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void EnemyAI::AttackPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_AttackPlayer_m8937636FFF87584DD472F88DF262D7F66479E5E4 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39B40D41792F29F7CD36E6C1B1304273CD84F988);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent.SetDestination(transform.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_0 = __this->___agent_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_0, L_2, NULL);
		// transform.LookAt(player);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___player_5;
		NullCheck(L_4);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_4, L_5, NULL);
		// if(!alreadyAttacked)
		bool L_6 = __this->___alreadyAttacked_12;
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		// alreadyAttacked = true;
		__this->___alreadyAttacked_12 = (bool)1;
		// Invoke(nameof(ResetAttack), timeBetweenAttacks);
		float L_7 = __this->___timeBetweenAttacks_11;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral39B40D41792F29F7CD36E6C1B1304273CD84F988, L_7, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void EnemyAI::ResetAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_ResetAttack_m340206250C7EEB919147D1C8C75B8258224410F7 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	{
		// alreadyAttacked = false;
		__this->___alreadyAttacked_12 = (bool)0;
		// }
		return;
	}
}
// System.Void EnemyAI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI__ctor_m6C8AF5E69E44D32D35FC23F33F01C77FC89ACAE2 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnemyAI_2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_2_Start_m89CA15948B185E4BC77FA5759958ADC775862956 (EnemyAI_2_tB10A5D37D3123B39E1E619898841689F057BCE16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___player_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_4), (void*)L_1);
		// detectionPoint.Rotate(0f,0.0f,0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___detectionPoint_20;
		NullCheck(L_2);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_2, (0.0f), (0.0f), (0.0f), NULL);
		// }
		return;
	}
}
// System.Void EnemyAI_2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_2_Update_m2D9336EE43922B939807C4BF0768BDA4464E3488 (EnemyAI_2_tB10A5D37D3123B39E1E619898841689F057BCE16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7CA50FB480F64445BC691849272378C77C45D21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// dist = Vector3.Distance(player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___player_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4;
		L_4 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_1, L_3, NULL);
		__this->___dist_5 = L_4;
		// if(Ismoving == true)
		bool L_5 = __this->___Ismoving_19;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// enemy.SetDestination(player.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_6 = __this->___enemy_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___player_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		NullCheck(L_6);
		bool L_9;
		L_9 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_6, L_8, NULL);
	}

IL_0040:
	{
		// if(Ismoving == false)
		bool L_10 = __this->___Ismoving_19;
		// Ray ray = new Ray();
		il2cpp_codegen_initobj((&V_1), sizeof(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00));
		// ray.origin = detectionPoint.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___detectionPoint_20;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Ray_set_origin_m9B19A7BE86636111E3B16BCE08EAE030F37FE64D((&V_1), L_12, NULL);
		// ray.direction = detectionPoint.TransformDirection(Vector3.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___detectionPoint_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_13, L_14, NULL);
		Ray_set_direction_m8A8FF8101045BAE51BE5D5C1B6C21D0D5592DA98((&V_1), L_15, NULL);
		// Debug.DrawRay(ray.origin, ray.direction*MaxDetectionDist, Color.green);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_1), NULL);
		float L_18 = __this->___MaxDetectionDist_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_17, L_18, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92(L_16, L_19, L_20, NULL);
		// if(dist <= howclose_to_detect)
		float L_21 = __this->___dist_5;
		float L_22 = __this->___howclose_to_detect_12;
		if ((!(((float)L_21) <= ((float)L_22))))
		{
			goto IL_0186;
		}
	}
	{
		// Suspicious.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___Suspicious_15;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_23, NULL);
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)1, NULL);
		// detectionPoint.Rotate(0f,0f,0f);//detectionPoint point rotates
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___detectionPoint_20;
		NullCheck(L_25);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_25, (0.0f), (0.0f), (0.0f), NULL);
		// if(Physics.Raycast(ray, out hit, MaxDetectionDist))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_26 = V_1;
		float L_27 = __this->___MaxDetectionDist_21;
		bool L_28;
		L_28 = Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901(L_26, (&V_0), L_27, NULL);
		if (!L_28)
		{
			goto IL_0186;
		}
	}
	{
		// if(hit.collider.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_29;
		L_29 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_29);
		bool L_30;
		L_30 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_29, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_30)
		{
			goto IL_0186;
		}
	}
	{
		// transform.LookAt(player);//look at player
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___player_4;
		NullCheck(L_31);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_31, L_32, NULL);
		// Attackmode_anim.SetBool("BOT_ACTIVE", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_33 = __this->___Attackmode_anim_16;
		NullCheck(L_33);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_33, _stringLiteralA7CA50FB480F64445BC691849272378C77C45D21, (bool)1, NULL);
		// Suspicious.gameObject.SetActive(false);//stop suspicion
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___Suspicious_15;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_34, NULL);
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
		// detectionPoint.Rotate(0f,0f,0f);//Rotation will stop
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___detectionPoint_20;
		NullCheck(L_36);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_36, (0.0f), (0.0f), (0.0f), NULL);
		// Move();
		EnemyAI_2_Move_m949254A6414371F18C2A83B21A5438920B95F5BC(__this, NULL);
		// BORfire1.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___BORfire1_7;
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_37, NULL);
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)1, NULL);
		// BORfire2.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___BORfire2_8;
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_39, NULL);
		NullCheck(L_40);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)1, NULL);
		// BORfire3.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___BORfire3_9;
		NullCheck(L_41);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_41, NULL);
		NullCheck(L_42);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)1, NULL);
	}

IL_0186:
	{
		// if(dist > howclose_to_detect)
		float L_43 = __this->___dist_5;
		float L_44 = __this->___howclose_to_detect_12;
		if ((!(((float)L_43) > ((float)L_44))))
		{
			goto IL_0209;
		}
	}
	{
		// Suspicious.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___Suspicious_15;
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_45, NULL);
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)0, NULL);
		// detectionPoint.Rotate(0f,0f,0f);//detectionPoint point rotates
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___detectionPoint_20;
		NullCheck(L_47);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_47, (0.0f), (0.0f), (0.0f), NULL);
		// Attackmode_anim.SetBool("BOT_ACTIVE", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_48 = __this->___Attackmode_anim_16;
		NullCheck(L_48);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_48, _stringLiteralA7CA50FB480F64445BC691849272378C77C45D21, (bool)0, NULL);
		// NotMove();
		EnemyAI_2_NotMove_m6707E2156E11835BFE8E0DDD9C0A772F31FD2395(__this, NULL);
		// BORfire1.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___BORfire1_7;
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_49, NULL);
		NullCheck(L_50);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_50, (bool)0, NULL);
		// BORfire2.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->___BORfire2_8;
		NullCheck(L_51);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52;
		L_52 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_51, NULL);
		NullCheck(L_52);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_52, (bool)0, NULL);
		// BORfire3.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = __this->___BORfire3_9;
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_53, NULL);
		NullCheck(L_54);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_54, (bool)0, NULL);
	}

IL_0209:
	{
		// if(Physics.Raycast(ray, out hit, MaxDetectionDist))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_55 = V_1;
		float L_56 = __this->___MaxDetectionDist_21;
		bool L_57;
		L_57 = Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901(L_55, (&V_0), L_56, NULL);
		if (!L_57)
		{
			goto IL_022b;
		}
	}
	{
		// if(hit.collider.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_58;
		L_58 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_58);
		bool L_59;
		L_59 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_58, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
	}

IL_022b:
	{
		// }
		return;
	}
}
// System.Void EnemyAI_2::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_2_Move_m949254A6414371F18C2A83B21A5438920B95F5BC (EnemyAI_2_tB10A5D37D3123B39E1E619898841689F057BCE16* __this, const RuntimeMethod* method) 
{
	{
		// Ismoving = true;
		__this->___Ismoving_19 = (bool)1;
		// }
		return;
	}
}
// System.Void EnemyAI_2::NotMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_2_NotMove_m6707E2156E11835BFE8E0DDD9C0A772F31FD2395 (EnemyAI_2_tB10A5D37D3123B39E1E619898841689F057BCE16* __this, const RuntimeMethod* method) 
{
	{
		// Ismoving = false;
		__this->___Ismoving_19 = (bool)0;
		// }
		return;
	}
}
// System.Void EnemyAI_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_2__ctor_mB2CDE4BC452E372D778EFB4DC2B1FB184B5DC70D (EnemyAI_2_tB10A5D37D3123B39E1E619898841689F057BCE16* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnemyLife::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyLife_Start_m6A810DE2B6F1F30678027634C0A7DA269FCA2BD9 (EnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7_m90753D288AF766FD68F7845305B0BDB325009188_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraShake =  GetComponent<CamerShake>();
		CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* L_0;
		L_0 = Component_GetComponent_TisCamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7_m90753D288AF766FD68F7845305B0BDB325009188(__this, Component_GetComponent_TisCamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7_m90753D288AF766FD68F7845305B0BDB325009188_RuntimeMethod_var);
		__this->___cameraShake_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraShake_13), (void*)L_0);
		// _currentHealth = _maxHealth;
		float L_1 = __this->____maxHealth_4;
		__this->____currentHealth_7 = L_1;
		// _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
		HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* L_2 = __this->____healthbar_15;
		float L_3 = __this->____maxHealth_4;
		float L_4 = __this->____currentHealth_7;
		NullCheck(L_2);
		HealthController_UpdateHealthBar_m9098A6D18A886A56F4FB9B474B4E6E19AFF42889(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void EnemyLife::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyLife_Update_m75199844F763898CCB3B021220B1BD2F32E5EA76 (EnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	{
		// currentHealth.text = "" + _currentHealth.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___currentHealth_8;
		float* L_1 = (&__this->____currentHealth_7);
		String_t* L_2;
		L_2 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_1, NULL);
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_0;
			goto IL_001a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_001a:
	{
		NullCheck(G_B2_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// }
		return;
	}
}
// System.Void EnemyLife::Damaging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyLife_Damaging_mED2446833C657FC823C12041389CA20BD1247DA7 (EnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _currentHealth -=mvBullet.Damage;
		float L_0 = __this->____currentHealth_7;
		MoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6* L_1 = __this->___mvBullet_10;
		NullCheck(L_1);
		float L_2 = L_1->___Damage_8;
		__this->____currentHealth_7 = ((float)il2cpp_codegen_subtract(L_0, L_2));
		// if(_currentHealth <= 0)
		float L_3 = __this->____currentHealth_7;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		// Instantiate(Explode, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Explode_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_4, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(FullBOT.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___FullBOT_11;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_9, NULL);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_10, NULL);
		return;
	}

IL_0052:
	{
		// _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
		HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* L_11 = __this->____healthbar_15;
		float L_12 = __this->____maxHealth_4;
		float L_13 = __this->____currentHealth_7;
		NullCheck(L_11);
		HealthController_UpdateHealthBar_m9098A6D18A886A56F4FB9B474B4E6E19AFF42889(L_11, L_12, L_13, NULL);
		// Instantiate(_hitEffect, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->____hitEffect_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_14, L_16, L_17, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EnemyLife::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyLife__ctor_mDC6F6215E50C6B3BC0BB41AD936D3D3AAF8D6FD7 (EnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A* __this, const RuntimeMethod* method) 
{
	{
		// public float _maxHealth = 30;
		__this->____maxHealth_4 = (30.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FiringScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FiringScript_Start_m8B05E94350430141B3BAF985A95732C22997E24E (FiringScript_t31B6F0AEEFD2E881E0F174E2F21788382B8278D5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FiringScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FiringScript_Update_mC751D2DA0DE5699D133F62480B7B6DE9835DDF8E (FiringScript_t31B6F0AEEFD2E881E0F174E2F21788382B8278D5* __this, const RuntimeMethod* method) 
{
	{
		// cooldownSpeed += Time.deltaTime * 60f;
		float L_0 = __this->___cooldownSpeed_4;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___cooldownSpeed_4 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, (60.0f)))));
		// if(isFiring == true)
		bool L_2 = __this->___isFiring_11;
		if (!L_2)
		{
			goto IL_0062;
		}
	}
	{
		// accuracy += Time.deltaTime * 4f;
		float L_3 = __this->___accuracy_7;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___accuracy_7 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, (4.0f)))));
		// if (cooldownSpeed >= fireRate)
		float L_5 = __this->___cooldownSpeed_4;
		float L_6 = __this->___fireRate_5;
		if ((!(((float)L_5) >= ((float)L_6))))
		{
			goto IL_0062;
		}
	}
	{
		// Shoot();
		FiringScript_Shoot_mD6B874BDFA7175035D591B6B08E7ED482D7D69BF(__this, NULL);
		// cooldownSpeed = 0;
		__this->___cooldownSpeed_4 = (0.0f);
		// recoilCooldown = 1;
		__this->___recoilCooldown_6 = (1.0f);
	}

IL_0062:
	{
		// if(isFiring == false)
		bool L_7 = __this->___isFiring_11;
		if (L_7)
		{
			goto IL_0094;
		}
	}
	{
		// recoilCooldown -= Time.deltaTime;
		float L_8 = __this->___recoilCooldown_6;
		float L_9;
		L_9 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___recoilCooldown_6 = ((float)il2cpp_codegen_subtract(L_8, L_9));
		// if(recoilCooldown <= 1)
		float L_10 = __this->___recoilCooldown_6;
		if ((!(((float)L_10) <= ((float)(1.0f)))))
		{
			goto IL_0094;
		}
	}
	{
		// accuracy = 0.0f;
		__this->___accuracy_7 = (0.0f);
	}

IL_0094:
	{
		// PointerDown();
		FiringScript_PointerDown_m351BAD0907A391D182C8B758151B553E3C70E14D(__this, NULL);
		// }
		return;
	}
}
// System.Void FiringScript::PointerDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FiringScript_PointerDown_m351BAD0907A391D182C8B758151B553E3C70E14D (FiringScript_t31B6F0AEEFD2E881E0F174E2F21788382B8278D5* __this, const RuntimeMethod* method) 
{
	{
		// stopFiring = false;
		__this->___stopFiring_12 = (bool)0;
		// isFiring = true;
		__this->___isFiring_11 = (bool)1;
		// }
		return;
	}
}
// System.Void FiringScript::PointerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FiringScript_PointerUp_m953D42BD0E2A7D19BEA03193CBEB2BB2C584365E (FiringScript_t31B6F0AEEFD2E881E0F174E2F21788382B8278D5* __this, const RuntimeMethod* method) 
{
	{
		// isFiring = false;
		__this->___isFiring_11 = (bool)0;
		// stopFiring = true;
		__this->___stopFiring_12 = (bool)1;
		// }
		return;
	}
}
// System.Void FiringScript::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FiringScript_Shoot_mD6B874BDFA7175035D591B6B08E7ED482D7D69BF (FiringScript_t31B6F0AEEFD2E881E0F174E2F21788382B8278D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D_m0D2D1066C72A694E605462DB867969655AB7139E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// Quaternion fireRotation = Quaternion.LookRotation(transform.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_1, NULL);
		V_1 = L_2;
		// float currentSpread = Mathf.Lerp(0.0f, maxSpreadAngle, accuracy / timeTillMaxSpread);
		float L_3 = __this->___maxSpreadAngle_8;
		float L_4 = __this->___accuracy_7;
		float L_5 = __this->___timeTillMaxSpread_9;
		float L_6;
		L_6 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((0.0f), L_3, ((float)(L_4/L_5)), NULL);
		V_2 = L_6;
		// fireRotation = Quaternion.RotateTowards(fireRotation, Random.rotation, Random.Range(0.0f, currentSpread));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Random_get_rotation_mA99782158591D300375B107CA2C31D99E4FC7482(NULL);
		float L_9 = V_2;
		float L_10;
		L_10 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_RotateTowards_mD7C332050D876CB28A704B9005476BE06823F85F_inline(L_7, L_8, L_10, NULL);
		V_1 = L_11;
		// if (Physics.Raycast(transform.position, fireRotation * Vector3.forward, out hit, Mathf.Infinity))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_14, L_15, NULL);
		bool L_17;
		L_17 = Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10(L_13, L_16, (&V_0), (std::numeric_limits<float>::infinity()), NULL);
		if (!L_17)
		{
			goto IL_0097;
		}
	}
	{
		// GameObject tempBullet = Instantiate(bullet, shootPoint.transform.position, fireRotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___bullet_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___shootPoint_16;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_18, L_21, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// tempBullet.GetComponent<BulletSpeed>().SetHitTransform(hit.transform);
		NullCheck(L_23);
		BulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D* L_24;
		L_24 = GameObject_GetComponent_TisBulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D_m0D2D1066C72A694E605462DB867969655AB7139E(L_23, GameObject_GetComponent_TisBulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D_m0D2D1066C72A694E605462DB867969655AB7139E_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_24);
		BulletSpeed_SetHitTransform_m3BB7B03267F8FE4EF627101B7B5A714D9B449829_inline(L_24, L_25, NULL);
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Void FiringScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FiringScript__ctor_mDEED55548A041BA414787DC523D9534735AFF10F (FiringScript_t31B6F0AEEFD2E881E0F174E2F21788382B8278D5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FollowCam::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowCam_Start_m763CF6022A9912FB9224AB1B9AD5A1FF28316747 (FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8* __this, const RuntimeMethod* method) 
{
	{
		// offset = transform.position - target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___target_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_3, NULL);
		__this->___offset_6 = L_4;
		// }
		return;
	}
}
// System.Void FollowCam::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowCam_LateUpdate_m89B77F3391608D1306E0A3606BDAF60CF7D3C540 (FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 desiredPosition = target.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___offset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// Vector3 smoothedPosition = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = __this->___smoothSpeed_5;
		float L_8;
		L_8 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_5, L_6, ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		V_1 = L_9;
		// transform.position = smoothedPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void FollowCam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowCam__ctor_m589F4E38099DEDE181D7EA78C837D3EA9176CAB2 (FollowCam_tBEFDAD3E83FCF46567E07F922FD4817C241E26E8* __this, const RuntimeMethod* method) 
{
	{
		// public float smoothSpeed = 5f;  // Adjust the smoothness of the camera follow.
		__this->___smoothSpeed_5 = (5.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GarH::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarH_Start_mCF49AAEDBF06F9601DCE81057444244515C0858F (GarH_tA1E58EFD36124D61FF65A78293E0CA07DD80EC82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80DFB27CCC6CCF3576955208EDB98ABF86D1E5D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam = GameObject.Find("MainCamera").GetComponent<Camera>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, NULL);
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_0, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		__this->___cam_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_4), (void*)L_1);
		// planecollider = GameObject.Find("Plane").GetComponent<Collider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral80DFB27CCC6CCF3576955208EDB98ABF86D1E5D8, NULL);
		NullCheck(L_2);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3;
		L_3 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_2, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		__this->___planecollider_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___planecollider_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void GarH::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarH_Update_m5C9138334B8C8F7DF3855FDE0828E8117D4CBBE7 (GarH_tA1E58EFD36124D61FF65A78293E0CA07DD80EC82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ray = cam.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___cam_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		__this->___ray_7 = L_2;
		// if(Physics.Raycast(ray, out hit))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3 = __this->___ray_7;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4 = (&__this->___hit_6);
		bool L_5;
		L_5 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	{
		// if(hit.collider == planecollider)
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6 = (&__this->___hit_6);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7;
		L_7 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_6, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = __this->___planecollider_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0081;
		}
	}
	{
		// transform.LookAt(new Vector3(hit.point.x, transform.position.y, hit.point.z));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_11 = (&__this->___hit_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_11, NULL);
		float L_13 = L_12.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___y_3;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_17 = (&__this->___hit_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_17, NULL);
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), L_13, L_16, L_19, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_10, L_20, NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void GarH::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GarH__ctor_mAC7A6ACBDCE8540CBED3056FD06AC76BDFB38F11 (GarH_tA1E58EFD36124D61FF65A78293E0CA07DD80EC82* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HealthController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController_Start_mD43363FC73A06B23175F57CF9D55A6860088E258 (HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HealthController::UpdateHealthBar(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController_UpdateHealthBar_m9098A6D18A886A56F4FB9B474B4E6E19AFF42889 (HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* __this, float ___maxHealth0, float ___currentHealth1, const RuntimeMethod* method) 
{
	{
		// _healthbarSprite.fillAmount = currentHealth / maxHealth;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____healthbarSprite_4;
		float L_1 = ___currentHealth1;
		float L_2 = ___maxHealth0;
		NullCheck(L_0);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_0, ((float)(L_1/L_2)), NULL);
		// }
		return;
	}
}
// System.Void HealthController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController_Update_mB71C298F364244CAEC303988C5F204B933FA66E7 (HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HealthController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController__ctor_m4CF21E55C5AFCF4F99A9C7C3FA47D15F23E88F9F (HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ManageContChar2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManageContChar2_Start_m5A99ABAF51D25F7B18DC9D92F906208C7656FCD5 (ManageContChar2_t3F99C5A21BCD1575D4BD0839EB637E50601DF94C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ManageContChar2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManageContChar2_Update_mFAC3F5842E821E0217B8E91DB4DA96CF832158F3 (ManageContChar2_t3F99C5A21BCD1575D4BD0839EB637E50601DF94C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EDEFB067C390BA42E348F3DCADB76DB4BE12FC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputX = _mngrJoystick.inputHorizontal();
		ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* L_0 = __this->____mngrJoystick_6;
		NullCheck(L_0);
		float L_1;
		L_1 = ManagerJoyStick_inputHorizontal_m6A1D39034A100B085671AC0771773D499FB943A0(L_0, NULL);
		__this->___inputX_7 = L_1;
		// inputY = _mngrJoystick.inputVertical();
		ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* L_2 = __this->____mngrJoystick_6;
		NullCheck(L_2);
		float L_3;
		L_3 = ManagerJoyStick_inputVertical_m7D41F1776E2005C7292A378AECECA687DFC6D019(L_2, NULL);
		__this->___inputY_8 = L_3;
		// if(inputX !=0 || inputY !=0)
		float L_4 = __this->___inputX_7;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		float L_5 = __this->___inputY_8;
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_004f;
		}
	}

IL_003c:
	{
		// _animator.SetBool("RUN", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->____animator_5;
		NullCheck(L_6);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteral0EDEFB067C390BA42E348F3DCADB76DB4BE12FC0, (bool)1, NULL);
		goto IL_0060;
	}

IL_004f:
	{
		// _animator.SetBool("RUN", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->____animator_5;
		NullCheck(L_7);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_7, _stringLiteral0EDEFB067C390BA42E348F3DCADB76DB4BE12FC0, (bool)0, NULL);
	}

IL_0060:
	{
		// posMove = new Vector3 (inputX * moveSpeed, 0, inputY * moveSpeed);
		float L_8 = __this->___inputX_7;
		float L_9 = __this->___moveSpeed_11;
		float L_10 = __this->___inputY_8;
		float L_11 = __this->___moveSpeed_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_8, L_9)), (0.0f), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		__this->___posMove_9 = L_12;
		// _charController.Move(posMove);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_13 = __this->____charController_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___posMove_9;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void ManageContChar2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManageContChar2__ctor_mB6A8D8D3ECC844E78A0E25E57B8B39640CE726FB (ManageContChar2_t3F99C5A21BCD1575D4BD0839EB637E50601DF94C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ManageContCharMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManageContCharMove_Start_m1C54C0D817F80758BEA17841DD503A634CA76E6A (ManageContCharMove_tE340DF67C26C917A1031A7E3C0391AAFB9FAF797* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ManageContCharMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManageContCharMove_Update_m1E497B2143586092C67F92B1C1484419CBE2AE39 (ManageContCharMove_tE340DF67C26C917A1031A7E3C0391AAFB9FAF797* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EDEFB067C390BA42E348F3DCADB76DB4BE12FC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputX = _mngrJoystick.inputHorizontal();
		ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* L_0 = __this->____mngrJoystick_6;
		NullCheck(L_0);
		float L_1;
		L_1 = ManagerJoyStick_inputHorizontal_m6A1D39034A100B085671AC0771773D499FB943A0(L_0, NULL);
		__this->___inputX_7 = L_1;
		// inputY = _mngrJoystick.inputVertical();
		ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* L_2 = __this->____mngrJoystick_6;
		NullCheck(L_2);
		float L_3;
		L_3 = ManagerJoyStick_inputVertical_m7D41F1776E2005C7292A378AECECA687DFC6D019(L_2, NULL);
		__this->___inputY_8 = L_3;
		// if(inputX !=0 || inputY !=0)
		float L_4 = __this->___inputX_7;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		float L_5 = __this->___inputY_8;
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_004f;
		}
	}

IL_003c:
	{
		// _animator.SetBool("RUN", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->____animator_5;
		NullCheck(L_6);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteral0EDEFB067C390BA42E348F3DCADB76DB4BE12FC0, (bool)1, NULL);
		goto IL_0060;
	}

IL_004f:
	{
		// _animator.SetBool("RUN", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->____animator_5;
		NullCheck(L_7);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_7, _stringLiteral0EDEFB067C390BA42E348F3DCADB76DB4BE12FC0, (bool)0, NULL);
	}

IL_0060:
	{
		// posMove = new Vector3 (inputX * moveSpeed, 0, inputY * moveSpeed);
		float L_8 = __this->___inputX_7;
		float L_9 = __this->___moveSpeed_11;
		float L_10 = __this->___inputY_8;
		float L_11 = __this->___moveSpeed_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_8, L_9)), (0.0f), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		__this->___posMove_9 = L_12;
		// _charController.Move(posMove);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_13 = __this->____charController_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___posMove_9;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_13, L_14, NULL);
		// posRotation = new Vector3(_mngrConRot.InputRotHorizon(), 0, _mngrConRot.InputRotVertical());
		ManagerControlRot_t58D6D04DD546CB59B47A7C48392ADE824D505453* L_16 = __this->____mngrConRot_12;
		NullCheck(L_16);
		float L_17;
		L_17 = ManagerControlRot_InputRotHorizon_mB57C8519392668B3B42AEA35F9DD3B5033532C7C(L_16, NULL);
		ManagerControlRot_t58D6D04DD546CB59B47A7C48392ADE824D505453* L_18 = __this->____mngrConRot_12;
		NullCheck(L_18);
		float L_19;
		L_19 = ManagerControlRot_InputRotVertical_mDD40220E6B64473DFC64D7FB1F05FDC0A7835D76(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), L_17, (0.0f), L_19, /*hidden argument*/NULL);
		__this->___posRotation_10 = L_20;
		// meshChar.rotation = Quaternion.LookRotation(posRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___meshChar_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___posRotation_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_22, NULL);
		NullCheck(L_21);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_21, L_23, NULL);
		// }
		return;
	}
}
// System.Void ManageContCharMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManageContCharMove__ctor_m030569CE3B745BEB5AA7808EDA4D40F4CC2BE193 (ManageContCharMove_tE340DF67C26C917A1031A7E3C0391AAFB9FAF797* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ManagerControlRot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerControlRot_Start_mADAA6A293AC08B24F1AB8CF16501FA302D42D099 (ManagerControlRot_t58D6D04DD546CB59B47A7C48392ADE824D505453* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// areaofattack = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___areaofattack_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___areaofattack_4), (void*)L_0);
		// stick = transform.GetChild(0).GetComponent<Image>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 0, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_2, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___stick_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stick_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void ManagerControlRot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerControlRot_Update_m2175DDB581E7ED2A1ECED07EF9D345DECE48F6FA (ManagerControlRot_t58D6D04DD546CB59B47A7C48392ADE824D505453* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ManagerControlRot::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerControlRot_OnDrag_mD6F0F2A8CAA0D4295D3FF22F4B1888CB95CD3B23 (ManagerControlRot_t58D6D04DD546CB59B47A7C48392ADE824D505453* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(RectTransformUtility.ScreenPointToLocalPointInRectangle(
		//     areaofattack.rectTransform,
		//     eventData.position,
		//     eventData.pressEventCamera,
		//     out posOut))
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___areaofattack_4;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_0, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		NullCheck(L_4);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___posOut_6);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_1, L_3, L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_00b9;
		}
	}
	{
		// Debug.Log(posOut.x.ToString() + "/" + posOut.y.ToString());
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___posOut_6);
		float* L_9 = (&L_8->___x_0);
		String_t* L_10;
		L_10 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___posOut_6);
		float* L_12 = (&L_11->___y_1);
		String_t* L_13;
		L_13 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_12, NULL);
		String_t* L_14;
		L_14 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_10, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_14, NULL);
		// stick.rectTransform.anchoredPosition = new Vector2(
		//     posOut.x * (stick.rectTransform.sizeDelta.x /80),
		//     posOut.y * (stick.rectTransform.sizeDelta.y / 80)
		// );
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___stick_5;
		NullCheck(L_15);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16;
		L_16 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___posOut_6);
		float L_18 = L_17->___x_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___stick_5;
		NullCheck(L_19);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20;
		L_20 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_19, NULL);
		NullCheck(L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_20, NULL);
		float L_22 = L_21.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = (&__this->___posOut_6);
		float L_24 = L_23->___y_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25 = __this->___stick_5;
		NullCheck(L_25);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26;
		L_26 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_25, NULL);
		NullCheck(L_26);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_26, NULL);
		float L_28 = L_27.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_29), ((float)il2cpp_codegen_multiply(L_18, ((float)(L_22/(80.0f))))), ((float)il2cpp_codegen_multiply(L_24, ((float)(L_28/(80.0f))))), /*hidden argument*/NULL);
		NullCheck(L_16);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_16, L_29, NULL);
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Void ManagerControlRot::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerControlRot_OnPointerDown_m59F9ADEB3252871663C7F8E8795BCEC1835581FE (ManagerControlRot_t58D6D04DD546CB59B47A7C48392ADE824D505453* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OnDrag(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		ManagerControlRot_OnDrag_mD6F0F2A8CAA0D4295D3FF22F4B1888CB95CD3B23(__this, L_0, NULL);
		// weapon.PointerDown();
		Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D* L_1 = __this->___weapon_7;
		NullCheck(L_1);
		Weapon_2_PointerDown_mF07FD74CA6F94D9029B7CED216E747BBBFF2CEEF(L_1, NULL);
		// }
		return;
	}
}
// System.Void ManagerControlRot::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerControlRot_OnPointerUp_m52F67B389C8280819A598DD738F1D4A5104A83D8 (ManagerControlRot_t58D6D04DD546CB59B47A7C48392ADE824D505453* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// stick.rectTransform.anchoredPosition = Vector2.zero;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___stick_5;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_2, NULL);
		// weapon.PointerUp();
		Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D* L_3 = __this->___weapon_7;
		NullCheck(L_3);
		Weapon_2_PointerUp_m900075266C26C240B33721D0E848CC6245EED9B5(L_3, NULL);
		// }
		return;
	}
}
// System.Single ManagerControlRot::InputRotHorizon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ManagerControlRot_InputRotHorizon_mB57C8519392668B3B42AEA35F9DD3B5033532C7C (ManagerControlRot_t58D6D04DD546CB59B47A7C48392ADE824D505453* __this, const RuntimeMethod* method) 
{
	{
		// if(posOut.x != 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___posOut_6);
		float L_1 = L_0->___x_0;
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_001e;
		}
	}
	{
		// return posOut.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___posOut_6);
		float L_3 = L_2->___x_0;
		return L_3;
	}

IL_001e:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Single ManagerControlRot::InputRotVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ManagerControlRot_InputRotVertical_mDD40220E6B64473DFC64D7FB1F05FDC0A7835D76 (ManagerControlRot_t58D6D04DD546CB59B47A7C48392ADE824D505453* __this, const RuntimeMethod* method) 
{
	{
		// if(posOut.y != 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___posOut_6);
		float L_1 = L_0->___y_1;
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_001e;
		}
	}
	{
		// return posOut.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___posOut_6);
		float L_3 = L_2->___y_1;
		return L_3;
	}

IL_001e:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void ManagerControlRot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerControlRot__ctor_m9C5DBC4649AF7B2A9D0386FC35AA7B25A84E81D1 (ManagerControlRot_t58D6D04DD546CB59B47A7C48392ADE824D505453* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ManagerJoyStick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerJoyStick_Start_m9F90DC01EF50DD4FE5FC8E7E728C2EBC7617BEE6 (ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// imgJoystickBg = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___imgJoystickBg_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgJoystickBg_4), (void*)L_0);
		// imgJoystick = transform.GetChild(0).GetComponent<Image>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 0, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_2, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___imgJoystick_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgJoystick_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void ManagerJoyStick::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerJoyStick_Update_m43640046B7B52AA586DC7A183509D33BD28F0762 (ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ManagerJoyStick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerJoyStick_OnDrag_m45B9E84A578EDA650F72BEC4CAEC70AA998E8DE9 (ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(RectTransformUtility.ScreenPointToLocalPointInRectangle(
		//     imgJoystickBg.rectTransform,
		//     eventData.position,
		//     eventData.pressEventCamera,
		//     out posInput))
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___imgJoystickBg_4;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_0, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		NullCheck(L_4);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___posInput_6);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_1, L_3, L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0134;
		}
	}
	{
		// posInput.x = posInput.x / (imgJoystickBg.rectTransform.sizeDelta.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___posInput_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = (&__this->___posInput_6);
		float L_10 = L_9->___x_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___imgJoystickBg_4;
		NullCheck(L_11);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12;
		L_12 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_11, NULL);
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_12, NULL);
		float L_14 = L_13.___x_0;
		L_8->___x_0 = ((float)(L_10/L_14));
		// posInput.y = posInput.y / (imgJoystickBg.rectTransform.sizeDelta.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___posInput_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (&__this->___posInput_6);
		float L_17 = L_16->___y_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___imgJoystickBg_4;
		NullCheck(L_18);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19;
		L_19 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_18, NULL);
		NullCheck(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_19, NULL);
		float L_21 = L_20.___y_1;
		L_15->___y_1 = ((float)(L_17/L_21));
		// Debug.Log(posInput.x.ToString() + "/" + posInput.y.ToString());
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___posInput_6);
		float* L_23 = (&L_22->___x_0);
		String_t* L_24;
		L_24 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_23, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = (&__this->___posInput_6);
		float* L_26 = (&L_25->___y_1);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		String_t* L_28;
		L_28 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_24, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_28, NULL);
		// if(posInput.magnitude > 1.0f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_29 = (&__this->___posInput_6);
		float L_30;
		L_30 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_29, NULL);
		if ((!(((float)L_30) > ((float)(1.0f)))))
		{
			goto IL_00d1;
		}
	}
	{
		// posInput = posInput.normalized;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = (&__this->___posInput_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_31, NULL);
		__this->___posInput_6 = L_32;
	}

IL_00d1:
	{
		// imgJoystick.rectTransform.anchoredPosition = new Vector2(
		//     posInput.x * (imgJoystickBg.rectTransform.sizeDelta.x / 2),
		//     posInput.y * (imgJoystickBg.rectTransform.sizeDelta.y / 2));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33 = __this->___imgJoystick_5;
		NullCheck(L_33);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_34;
		L_34 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_33, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = (&__this->___posInput_6);
		float L_36 = L_35->___x_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37 = __this->___imgJoystickBg_4;
		NullCheck(L_37);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38;
		L_38 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_37, NULL);
		NullCheck(L_38);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_38, NULL);
		float L_40 = L_39.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_41 = (&__this->___posInput_6);
		float L_42 = L_41->___y_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_43 = __this->___imgJoystickBg_4;
		NullCheck(L_43);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_44;
		L_44 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_43, NULL);
		NullCheck(L_44);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		L_45 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_44, NULL);
		float L_46 = L_45.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_47), ((float)il2cpp_codegen_multiply(L_36, ((float)(L_40/(2.0f))))), ((float)il2cpp_codegen_multiply(L_42, ((float)(L_46/(2.0f))))), /*hidden argument*/NULL);
		NullCheck(L_34);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_34, L_47, NULL);
	}

IL_0134:
	{
		// }
		return;
	}
}
// System.Void ManagerJoyStick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerJoyStick_OnPointerDown_m0391BFF3284FA41677F584DBB745CFF2650C6C96 (ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OnDrag(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		ManagerJoyStick_OnDrag_m45B9E84A578EDA650F72BEC4CAEC70AA998E8DE9(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ManagerJoyStick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerJoyStick_OnPointerUp_m2739476C5CC30FD5DD51B0F553B896A95024D56F (ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// posInput = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___posInput_6 = L_0;
		// imgJoystick.rectTransform.anchoredPosition = Vector2.zero;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___imgJoystick_5;
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Single ManagerJoyStick::inputHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ManagerJoyStick_inputHorizontal_m6A1D39034A100B085671AC0771773D499FB943A0 (ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(posInput.x != 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___posInput_6);
		float L_1 = L_0->___x_0;
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_001e;
		}
	}
	{
		// return posInput.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___posInput_6);
		float L_3 = L_2->___x_0;
		return L_3;
	}

IL_001e:
	{
		// return Input.GetAxis("Horizontal");
		float L_4;
		L_4 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		return L_4;
	}
}
// System.Single ManagerJoyStick::inputVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ManagerJoyStick_inputVertical_m7D41F1776E2005C7292A378AECECA687DFC6D019 (ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(posInput.y != 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___posInput_6);
		float L_1 = L_0->___y_1;
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_001e;
		}
	}
	{
		// return posInput.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___posInput_6);
		float L_3 = L_2->___y_1;
		return L_3;
	}

IL_001e:
	{
		// return Input.GetAxis("Vertical");
		float L_4;
		L_4 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		return L_4;
	}
}
// System.Void ManagerJoyStick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerJoyStick__ctor_m9BA87B64E9875302CBA11C3D2684EB5739DD70BC (ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MoveBullet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveBullet_Start_mF6AF818B17F9ABF38F090203D37097EEC5CD75BA (MoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// this.GetComponent<Rigidbody>().AddForce((hitPoint - this.transform.position).normalized * speed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___hitPoint_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_3, NULL);
		V_0 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		int32_t L_6 = __this->___speed_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, ((float)L_6), NULL);
		NullCheck(L_0);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_0, L_7, NULL);
		// }
		return;
	}
}
// System.Void MoveBullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveBullet_Update_mB71FBF5112529C83645EB666E6B3CAA9CEA3AAD6 (MoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MoveBullet::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveBullet_OnCollisionEnter_m7CC7551CC9FDC538768FFEE6E735C055E5918B27 (MoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A_m0E1E563031F990288CDBDA9E83DBC15806FE66B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGiantLife_t336CE74172B20EDE8D681600A1C2C0E6623CC61E_mD1CF7E25E317E3D8396EFF692C9F25AE324EC8D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4_m56626F5A49FE146412C26514C36C9158C45C453E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45120797FA2682F55E6EB0E05BB4BC8E1250E3C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB15927D4240AE553D7E967886A9A2E98E0595AFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCC1A653A8451839100C2815C538B2B7A46F73E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFD4E60DD15E0CA1773C606F939355D53808C627);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6DC48C404C38342FECF65DC3C9BB54B7FDD504A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.tag == "Enemy")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___col0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		// col.gameObject.GetComponent<EnemyLife>().Damaging();
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___col0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_4, NULL);
		NullCheck(L_5);
		EnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A* L_6;
		L_6 = GameObject_GetComponent_TisEnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A_m0E1E563031F990288CDBDA9E83DBC15806FE66B0(L_5, GameObject_GetComponent_TisEnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A_m0E1E563031F990288CDBDA9E83DBC15806FE66B0_RuntimeMethod_var);
		NullCheck(L_6);
		EnemyLife_Damaging_mED2446833C657FC823C12041389CA20BD1247DA7(L_6, NULL);
		// Instantiate(spark, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___spark_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_7, L_9, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_12, NULL);
	}

IL_004e:
	{
		// if (col.gameObject.tag == "Giant")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_13 = ___col0;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_13, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_14, NULL);
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteralB15927D4240AE553D7E967886A9A2E98E0595AFB, NULL);
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		// col.gameObject.GetComponent<GiantLife>().Damaging();
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_17 = ___col0;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_17, NULL);
		NullCheck(L_18);
		GiantLife_t336CE74172B20EDE8D681600A1C2C0E6623CC61E* L_19;
		L_19 = GameObject_GetComponent_TisGiantLife_t336CE74172B20EDE8D681600A1C2C0E6623CC61E_mD1CF7E25E317E3D8396EFF692C9F25AE324EC8D1(L_18, GameObject_GetComponent_TisGiantLife_t336CE74172B20EDE8D681600A1C2C0E6623CC61E_mD1CF7E25E317E3D8396EFF692C9F25AE324EC8D1_RuntimeMethod_var);
		NullCheck(L_19);
		GiantLife_Damaging_m8F3D9CD3C40D741FEA5C7DF9C54AA43EC9003E25(L_19, NULL);
		// Instantiate(spark, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___spark_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_20, L_22, L_23, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_25, NULL);
	}

IL_009c:
	{
		// if (col.gameObject.tag == "Zombie")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_26 = ___col0;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_26, NULL);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_27, NULL);
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralCFD4E60DD15E0CA1773C606F939355D53808C627, NULL);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		// col.gameObject.GetComponent<ZombieLife>().Damaging();
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_30 = ___col0;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_30, NULL);
		NullCheck(L_31);
		ZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4* L_32;
		L_32 = GameObject_GetComponent_TisZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4_m56626F5A49FE146412C26514C36C9158C45C453E(L_31, GameObject_GetComponent_TisZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4_m56626F5A49FE146412C26514C36C9158C45C453E_RuntimeMethod_var);
		NullCheck(L_32);
		ZombieLife_Damaging_mDAE240E96D4C0A7E6C5B953A112564E0AC3149E5(L_32, NULL);
		// Instantiate(spark, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___spark_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_33, L_35, L_36, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_38, NULL);
	}

IL_00ea:
	{
		// if (col.gameObject.tag == "Contain")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_39 = ___col0;
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_39, NULL);
		NullCheck(L_40);
		String_t* L_41;
		L_41 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_40, NULL);
		bool L_42;
		L_42 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_41, _stringLiteral45120797FA2682F55E6EB0E05BB4BC8E1250E3C8, NULL);
		if (!L_42)
		{
			goto IL_0128;
		}
	}
	{
		// Instantiate(spark, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___spark_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46;
		L_46 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_43, L_45, L_46, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
		L_48 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_48, NULL);
	}

IL_0128:
	{
		// if (col.gameObject.tag == "EXP")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_49 = ___col0;
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_49, NULL);
		NullCheck(L_50);
		String_t* L_51;
		L_51 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_50, NULL);
		bool L_52;
		L_52 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_51, _stringLiteralBCC1A653A8451839100C2815C538B2B7A46F73E6, NULL);
		if (!L_52)
		{
			goto IL_015b;
		}
	}
	{
		// Instantiate(explosive, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = __this->___explosive_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_54, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56;
		L_56 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57;
		L_57 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_53, L_55, L_56, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
	}

IL_015b:
	{
		// if (col.gameObject.tag == "Environment")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_58 = ___col0;
		NullCheck(L_58);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59;
		L_59 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_58, NULL);
		NullCheck(L_59);
		String_t* L_60;
		L_60 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_59, NULL);
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteralE6DC48C404C38342FECF65DC3C9BB54B7FDD504A, NULL);
		if (!L_61)
		{
			goto IL_017e;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62;
		L_62 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_62, NULL);
		return;
	}

IL_017e:
	{
		// Instantiate(dirt, this.transform.position, this.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->___dirt_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_64, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_66);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_67;
		L_67 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_66, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
		L_68 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_63, L_65, L_67, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MoveBullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveBullet__ctor_mB4E1D53E5AE0751B1D0788AE74E519C96C110B50 (MoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MultipleTouch::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleTouch_Update_m1A3C9A7B5ACE8012AE810E4D110962A2DDBF7073 (MultipleTouch_tBA257E575E5E27F0251FD9717B92ECD31F68C129* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m745FE794EA3CE7C6CA4816750B645A5F83E4558A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m25C67A8B403FF8391A3B8F6FA64A289019FEC591_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m22572938BDBF55225CA4B78095C44A146D2FF6F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m66E04271209CD2436BB77CF3F12DE1E9DD46B0F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tC47250C71B8625ECCF4159B020D64CB1BE358368_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CUpdateU3Eb__0_m477F31D84025E96E3546E51303A028E5714085F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CUpdateU3Eb__1_m01A84B3464759049F5097E99C797315238791C86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FB7972B84BB2690F39BA26E45B44D883EF7BC11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral847E51BCB4E213369426485C3E90E9F9A21C57CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB71E2E364E2F2ED1BC4C611179CB01AC9A742776);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4* V_1 = NULL;
	TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D* V_2 = NULL;
	{
		// int i = 0;
		V_0 = 0;
		goto IL_0108;
	}

IL_0007:
	{
		U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4* L_0 = (U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m0EB50B8748885F6FFFD40FE57F9CA54DDAF61649(L_0, NULL);
		V_1 = L_0;
		// Touch t = Input.GetTouch(i);
		U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4* L_1 = V_1;
		int32_t L_2 = V_0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_3;
		L_3 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(L_2, NULL);
		NullCheck(L_1);
		L_1->___t_0 = L_3;
		// if(t.phase == TouchPhase.Began){
		U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4* L_4 = V_1;
		NullCheck(L_4);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_5 = (&L_4->___t_0);
		int32_t L_6;
		L_6 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(L_5, NULL);
		if (L_6)
		{
			goto IL_005c;
		}
	}
	{
		// Debug.Log("touch began");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralB71E2E364E2F2ED1BC4C611179CB01AC9A742776, NULL);
		// touches.Add(new TouchLocation(t.fingerId, createCircle(t)));
		List_1_t36088A9408436D3F14F90FF593E4D628753B35B9* L_7 = __this->___touches_5;
		U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4* L_8 = V_1;
		NullCheck(L_8);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_9 = (&L_8->___t_0);
		int32_t L_10;
		L_10 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD(L_9, NULL);
		U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4* L_11 = V_1;
		NullCheck(L_11);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_12 = L_11->___t_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = MultipleTouch_createCircle_mE1C348420D55A350F61938489F85E7E80FCCD7C4(__this, L_12, NULL);
		TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D* L_14 = (TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D*)il2cpp_codegen_object_new(TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		TouchLocation__ctor_m756AA771D3B613E7B644A4111E99F3C09589449C(L_14, L_10, L_13, NULL);
		NullCheck(L_7);
		List_1_Add_m745FE794EA3CE7C6CA4816750B645A5F83E4558A_inline(L_7, L_14, List_1_Add_m745FE794EA3CE7C6CA4816750B645A5F83E4558A_RuntimeMethod_var);
		goto IL_0104;
	}

IL_005c:
	{
		// }else if(t.phase == TouchPhase.Ended){
		U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4* L_15 = V_1;
		NullCheck(L_15);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_16 = (&L_15->___t_0);
		int32_t L_17;
		L_17 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(L_16, NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_00b0;
		}
	}
	{
		// Debug.Log("touch ended");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral847E51BCB4E213369426485C3E90E9F9A21C57CC, NULL);
		// TouchLocation thisTouch = touches.Find(touchLocation => touchLocation.touchId == t.fingerId);
		List_1_t36088A9408436D3F14F90FF593E4D628753B35B9* L_18 = __this->___touches_5;
		U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4* L_19 = V_1;
		Predicate_1_tC47250C71B8625ECCF4159B020D64CB1BE358368* L_20 = (Predicate_1_tC47250C71B8625ECCF4159B020D64CB1BE358368*)il2cpp_codegen_object_new(Predicate_1_tC47250C71B8625ECCF4159B020D64CB1BE358368_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Predicate_1__ctor_m688A456E6781AFFFC7862320D6D4416164EF205A(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CUpdateU3Eb__0_m477F31D84025E96E3546E51303A028E5714085F5_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D* L_21;
		L_21 = List_1_Find_m25C67A8B403FF8391A3B8F6FA64A289019FEC591(L_18, L_20, List_1_Find_m25C67A8B403FF8391A3B8F6FA64A289019FEC591_RuntimeMethod_var);
		V_2 = L_21;
		// Destroy(thisTouch.circle);
		TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D* L_22 = V_2;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = L_22->___circle_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_23, NULL);
		// touches.RemoveAt(touches.IndexOf(thisTouch));
		List_1_t36088A9408436D3F14F90FF593E4D628753B35B9* L_24 = __this->___touches_5;
		List_1_t36088A9408436D3F14F90FF593E4D628753B35B9* L_25 = __this->___touches_5;
		TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D* L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = List_1_IndexOf_m22572938BDBF55225CA4B78095C44A146D2FF6F0(L_25, L_26, List_1_IndexOf_m22572938BDBF55225CA4B78095C44A146D2FF6F0_RuntimeMethod_var);
		NullCheck(L_24);
		List_1_RemoveAt_m66E04271209CD2436BB77CF3F12DE1E9DD46B0F8(L_24, L_27, List_1_RemoveAt_m66E04271209CD2436BB77CF3F12DE1E9DD46B0F8_RuntimeMethod_var);
		goto IL_0104;
	}

IL_00b0:
	{
		// }else if(t.phase == TouchPhase.Moved){
		U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4* L_28 = V_1;
		NullCheck(L_28);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_29 = (&L_28->___t_0);
		int32_t L_30;
		L_30 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(L_29, NULL);
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_0104;
		}
	}
	{
		// Debug.Log("touch is moving");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral2FB7972B84BB2690F39BA26E45B44D883EF7BC11, NULL);
		// TouchLocation thisTouch = touches.Find(touchLocation => touchLocation.touchId == t.fingerId);
		List_1_t36088A9408436D3F14F90FF593E4D628753B35B9* L_31 = __this->___touches_5;
		U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4* L_32 = V_1;
		Predicate_1_tC47250C71B8625ECCF4159B020D64CB1BE358368* L_33 = (Predicate_1_tC47250C71B8625ECCF4159B020D64CB1BE358368*)il2cpp_codegen_object_new(Predicate_1_tC47250C71B8625ECCF4159B020D64CB1BE358368_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Predicate_1__ctor_m688A456E6781AFFFC7862320D6D4416164EF205A(L_33, L_32, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CUpdateU3Eb__1_m01A84B3464759049F5097E99C797315238791C86_RuntimeMethod_var), NULL);
		NullCheck(L_31);
		TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D* L_34;
		L_34 = List_1_Find_m25C67A8B403FF8391A3B8F6FA64A289019FEC591(L_31, L_33, List_1_Find_m25C67A8B403FF8391A3B8F6FA64A289019FEC591_RuntimeMethod_var);
		// thisTouch.circle.transform.position = getTouchPosition(t.position);
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34->___circle_5;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4* L_37 = V_1;
		NullCheck(L_37);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_38 = (&L_37->___t_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(L_38, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = MultipleTouch_getTouchPosition_mA21B3986B532350E9E652FE121B8EBC0C93E6923(__this, L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_40, NULL);
		NullCheck(L_36);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_36, L_41, NULL);
	}

IL_0104:
	{
		// ++i;
		int32_t L_42 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0108:
	{
		// while(i < Input.touchCount){
		int32_t L_43 = V_0;
		int32_t L_44;
		L_44 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 MultipleTouch::getTouchPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MultipleTouch_getTouchPosition_mA21B3986B532350E9E652FE121B8EBC0C93E6923 (MultipleTouch_tBA257E575E5E27F0251FD9717B92ECD31F68C129* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetComponent<Camera>().ScreenToWorldPoint(new Vector3(touchPosition.x, touchPosition.y, transform.position.z));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___touchPosition0;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___touchPosition0;
		float L_4 = L_3.___y_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_2, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_0, L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_9, NULL);
		return L_10;
	}
}
// UnityEngine.GameObject MultipleTouch::createCircle(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MultipleTouch_createCircle_mE1C348420D55A350F61938489F85E7E80FCCD7C4 (MultipleTouch_tBA257E575E5E27F0251FD9717B92ECD31F68C129* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// GameObject c = Instantiate(circle) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___circle_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// c.name = "Touch" + t.fingerId;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		int32_t L_3;
		L_3 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&___t0), NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7, L_4, NULL);
		NullCheck(L_2);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_2, L_5, NULL);
		// c.transform.position = getTouchPosition(t.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_2;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&___t0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = MultipleTouch_getTouchPosition_mA21B3986B532350E9E652FE121B8EBC0C93E6923(__this, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_9, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_10, NULL);
		// return c;
		return L_6;
	}
}
// System.Void MultipleTouch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleTouch__ctor_mAA5FE6C0C5759C19C1B5690D1CE51E34C501ACA9 (MultipleTouch_tBA257E575E5E27F0251FD9717B92ECD31F68C129* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6A334501209E35E555A27F035DCCCE548C641CAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t36088A9408436D3F14F90FF593E4D628753B35B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<TouchLocation> touches = new List<TouchLocation>();
		List_1_t36088A9408436D3F14F90FF593E4D628753B35B9* L_0 = (List_1_t36088A9408436D3F14F90FF593E4D628753B35B9*)il2cpp_codegen_object_new(List_1_t36088A9408436D3F14F90FF593E4D628753B35B9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6A334501209E35E555A27F035DCCCE548C641CAD(L_0, List_1__ctor_m6A334501209E35E555A27F035DCCCE548C641CAD_RuntimeMethod_var);
		__this->___touches_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___touches_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MultipleTouch/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m0EB50B8748885F6FFFD40FE57F9CA54DDAF61649 (U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean MultipleTouch/<>c__DisplayClass2_0::<Update>b__0(TouchLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3CUpdateU3Eb__0_m477F31D84025E96E3546E51303A028E5714085F5 (U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4* __this, TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D* ___touchLocation0, const RuntimeMethod* method) 
{
	{
		// TouchLocation thisTouch = touches.Find(touchLocation => touchLocation.touchId == t.fingerId);
		TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D* L_0 = ___touchLocation0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___touchId_4;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_2 = (&__this->___t_0);
		int32_t L_3;
		L_3 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD(L_2, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean MultipleTouch/<>c__DisplayClass2_0::<Update>b__1(TouchLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3CUpdateU3Eb__1_m01A84B3464759049F5097E99C797315238791C86 (U3CU3Ec__DisplayClass2_0_t64D775D24189D0406E4AC2E86AD7E57C553033E4* __this, TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D* ___touchLocation0, const RuntimeMethod* method) 
{
	{
		// TouchLocation thisTouch = touches.Find(touchLocation => touchLocation.touchId == t.fingerId);
		TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D* L_0 = ___touchLocation0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___touchId_4;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_2 = (&__this->___t_0);
		int32_t L_3;
		L_3 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD(L_2, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
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
// System.Void ParticleDestroy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleDestroy_Start_m3CAFA9E31932C8838C82F1CA2D4AA5499D8E96CE (ParticleDestroy_t4D8EF5DB589DA408FB299FE30FC0DC4CF0D01022* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D6C5C7D9E928CBF5B4CE0053E0CD35A295B90AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine ("LoseTime");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral5D6C5C7D9E928CBF5B4CE0053E0CD35A295B90AE, NULL);
		// }
		return;
	}
}
// System.Void ParticleDestroy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleDestroy_Update_m25ADFFC46CA82AE4EFC625D6B023EF248BF28888 (ParticleDestroy_t4D8EF5DB589DA408FB299FE30FC0DC4CF0D01022* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timemet == 0) {
		int32_t L_0 = __this->___timemet_5;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Destroy (gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void ParticleDestroy::Change()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleDestroy_Change_mEAD73D5D77C877DE98B846959D911C01355EB49C (ParticleDestroy_t4D8EF5DB589DA408FB299FE30FC0DC4CF0D01022* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator ParticleDestroy::LoseTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParticleDestroy_LoseTime_m067B3274E846B0739348ADF299476CFF431ADA8D (ParticleDestroy_t4D8EF5DB589DA408FB299FE30FC0DC4CF0D01022* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoseTimeU3Ed__6_t8C09AF88DAB81D3A498CE400E3826C4CB41C7F49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoseTimeU3Ed__6_t8C09AF88DAB81D3A498CE400E3826C4CB41C7F49* L_0 = (U3CLoseTimeU3Ed__6_t8C09AF88DAB81D3A498CE400E3826C4CB41C7F49*)il2cpp_codegen_object_new(U3CLoseTimeU3Ed__6_t8C09AF88DAB81D3A498CE400E3826C4CB41C7F49_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoseTimeU3Ed__6__ctor_m427758FF48796CFDDBCD41BB7E60CEC052F5EC15(L_0, 0, NULL);
		U3CLoseTimeU3Ed__6_t8C09AF88DAB81D3A498CE400E3826C4CB41C7F49* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ParticleDestroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleDestroy__ctor_mE0A51CA0BA0BB287FD4DB81E6F4660BF969B4663 (ParticleDestroy_t4D8EF5DB589DA408FB299FE30FC0DC4CF0D01022* __this, const RuntimeMethod* method) 
{
	{
		// public int timemet = 17;
		__this->___timemet_5 = ((int32_t)17);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ParticleDestroy/<LoseTime>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoseTimeU3Ed__6__ctor_m427758FF48796CFDDBCD41BB7E60CEC052F5EC15 (U3CLoseTimeU3Ed__6_t8C09AF88DAB81D3A498CE400E3826C4CB41C7F49* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ParticleDestroy/<LoseTime>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoseTimeU3Ed__6_System_IDisposable_Dispose_m5F33599289A82286E0EF46719916B83B00502FB7 (U3CLoseTimeU3Ed__6_t8C09AF88DAB81D3A498CE400E3826C4CB41C7F49* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ParticleDestroy/<LoseTime>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoseTimeU3Ed__6_MoveNext_mF53D9C3DFF4EE75432178B88EEF635BF97017676 (U3CLoseTimeU3Ed__6_t8C09AF88DAB81D3A498CE400E3826C4CB41C7F49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ParticleDestroy_t4D8EF5DB589DA408FB299FE30FC0DC4CF0D01022* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ParticleDestroy_t4D8EF5DB589DA408FB299FE30FC0DC4CF0D01022* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// timemet--;
		ParticleDestroy_t4D8EF5DB589DA408FB299FE30FC0DC4CF0D01022* L_5 = V_1;
		ParticleDestroy_t4D8EF5DB589DA408FB299FE30FC0DC4CF0D01022* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___timemet_5;
		NullCheck(L_5);
		L_5->___timemet_5 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		// while(true)
		goto IL_001e;
	}
}
// System.Object ParticleDestroy/<LoseTime>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoseTimeU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m976DB778AE538EDB4E30B644C5E956594B363F55 (U3CLoseTimeU3Ed__6_t8C09AF88DAB81D3A498CE400E3826C4CB41C7F49* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ParticleDestroy/<LoseTime>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoseTimeU3Ed__6_System_Collections_IEnumerator_Reset_m1FFB397FD0C65E8C1D8FD37E6581B8D74D037B90 (U3CLoseTimeU3Ed__6_t8C09AF88DAB81D3A498CE400E3826C4CB41C7F49* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoseTimeU3Ed__6_System_Collections_IEnumerator_Reset_m1FFB397FD0C65E8C1D8FD37E6581B8D74D037B90_RuntimeMethod_var)));
	}
}
// System.Object ParticleDestroy/<LoseTime>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoseTimeU3Ed__6_System_Collections_IEnumerator_get_Current_m8A26DD41E46FE65D8CA6396CEEB243BFF7A3C67D (U3CLoseTimeU3Ed__6_t8C09AF88DAB81D3A498CE400E3826C4CB41C7F49* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PlayerMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Start_m1ACFD10BF71998671B39878CE4208A1F880BE62E (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	{
		// */gravity = 0.5f;
		__this->___gravity_21 = (0.5f);
		// }
		return;
	}
}
// System.Void PlayerMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Update_m2D580181CA2970EE505CEA4D2E722DD2F72F2D29 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EDEFB067C390BA42E348F3DCADB76DB4BE12FC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0B62B1E6E0FE0C27CA3B8D95E5D8EC4253EDDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputX = _mngrJoyStick.inputHorizontal();
		ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* L_0 = __this->____mngrJoyStick_9;
		NullCheck(L_0);
		float L_1;
		L_1 = ManagerJoyStick_inputHorizontal_m6A1D39034A100B085671AC0771773D499FB943A0(L_0, NULL);
		__this->___inputX_13 = L_1;
		// inputZ = _mngrJoyStick.inputVertical();
		ManagerJoyStick_t10FF6650212A1D54AE273D44228135198C0C757D* L_2 = __this->____mngrJoyStick_9;
		NullCheck(L_2);
		float L_3;
		L_3 = ManagerJoyStick_inputVertical_m7D41F1776E2005C7292A378AECECA687DFC6D019(L_2, NULL);
		__this->___inputZ_14 = L_3;
		// if (inputX == 0 && inputZ == 0)
		float L_4 = __this->___inputX_13;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_004f;
		}
	}
	{
		float L_5 = __this->___inputZ_14;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_004f;
		}
	}
	{
		// _animator.SetBool("RUN", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->____animator_5;
		NullCheck(L_6);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteral0EDEFB067C390BA42E348F3DCADB76DB4BE12FC0, (bool)0, NULL);
		goto IL_0060;
	}

IL_004f:
	{
		// _animator.SetBool("RUN", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->____animator_5;
		NullCheck(L_7);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_7, _stringLiteral0EDEFB067C390BA42E348F3DCADB76DB4BE12FC0, (bool)1, NULL);
	}

IL_0060:
	{
		// if(isFiring)
		bool L_8 = __this->___isFiring_17;
		if (!L_8)
		{
			goto IL_006e;
		}
	}
	{
		// makeFireVariableFalse();
		PlayerMove_makeFireVariableFalse_m6BE3A2BD7ABECA903293F4696F5939FFDC5FED85(__this, NULL);
	}

IL_006e:
	{
		// if(Input.GetButtonDown("Fire1") && isEnableAttack)
		bool L_9;
		L_9 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		if (!L_9)
		{
			goto IL_0092;
		}
	}
	{
		bool L_10 = __this->___isEnableAttack_24;
		if (!L_10)
		{
			goto IL_0092;
		}
	}
	{
		// _animator.SetTrigger("triggerAttack");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->____animator_5;
		NullCheck(L_11);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_11, _stringLiteral4D0B62B1E6E0FE0C27CA3B8D95E5D8EC4253EDDE, NULL);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void PlayerMove::PointerDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_PointerDown_m73DA94BF9A136A7BC944ADC6523BAC9D8622AD0E (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral487D1E08ACDB1A82B040003803E7FF153A871B9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetBool("Firing", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_5;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral487D1E08ACDB1A82B040003803E7FF153A871B9C, (bool)1, NULL);
		// stopFiring = false;
		__this->___stopFiring_18 = (bool)0;
		// makeFireVariableTrue();
		PlayerMove_makeFireVariableTrue_m7BCE2DB3B7451357ADEC16532E90BD6990DFCEBE(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerMove::PointerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_PointerUp_m3608E56661734D789774AD27715E3EDC41488CD6 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral487D1E08ACDB1A82B040003803E7FF153A871B9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetBool("Firing", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_5;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral487D1E08ACDB1A82B040003803E7FF153A871B9C, (bool)0, NULL);
		// isFiring = false;
		__this->___isFiring_17 = (bool)0;
		// stopFiring = true;
		__this->___stopFiring_18 = (bool)1;
		// }
		return;
	}
}
// System.Void PlayerMove::makeFireVariableTrue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_makeFireVariableTrue_m7BCE2DB3B7451357ADEC16532E90BD6990DFCEBE (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	{
		// isFiring = true;
		__this->___isFiring_17 = (bool)1;
		// }
		return;
	}
}
// System.Void PlayerMove::makeFireVariableFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_makeFireVariableFalse_m6BE3A2BD7ABECA903293F4696F5939FFDC5FED85 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral423D32C64DD7DF4DC84E96CED016B193CB121D59);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isFiring = false;
		__this->___isFiring_17 = (bool)0;
		// if(stopFiring == false)
		bool L_0 = __this->___stopFiring_18;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		// Invoke("makeFireVariableTrue", weapons.firerate);
		Weapons_t30925373DADE142BBB37448ECD15500F0A38182C* L_1 = __this->___weapons_22;
		NullCheck(L_1);
		float L_2 = L_1->___firerate_5;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral423D32C64DD7DF4DC84E96CED016B193CB121D59, L_2, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void PlayerMove::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_FixedUpdate_m14B3B72D3E9205DA2A6E0E75EBAFE4A09F93C1F1 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(_charController.isGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0 = __this->____charController_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// v_movement.y = 0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___v_movement_15);
		L_2->___y_3 = (0.0f);
		goto IL_003a;
	}

IL_001f:
	{
		// v_movement.y -= gravity * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___v_movement_15);
		float* L_4 = (&L_3->___y_3);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		float L_7 = __this->___gravity_21;
		float L_8;
		L_8 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		*((float*)L_5) = (float)((float)il2cpp_codegen_subtract(L_6, ((float)il2cpp_codegen_multiply(L_7, L_8))));
	}

IL_003a:
	{
		// v_movement = new Vector3(inputX * moveSpeed, v_movement.y, inputZ * moveSpeed);
		float L_9 = __this->___inputX_13;
		float L_10 = __this->___moveSpeed_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___v_movement_15);
		float L_12 = L_11->___y_3;
		float L_13 = __this->___inputZ_14;
		float L_14 = __this->___moveSpeed_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), ((float)il2cpp_codegen_multiply(L_9, L_10)), L_12, ((float)il2cpp_codegen_multiply(L_13, L_14)), /*hidden argument*/NULL);
		__this->___v_movement_15 = L_15;
		// _charController.Move(v_movement);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_16 = __this->____charController_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___v_movement_15;
		NullCheck(L_16);
		int32_t L_18;
		L_18 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_16, L_17, NULL);
		// if(inputX != 0 || inputZ != 0)
		float L_19 = __this->___inputX_13;
		if ((!(((float)L_19) == ((float)(0.0f)))))
		{
			goto IL_0096;
		}
	}
	{
		float L_20 = __this->___inputZ_14;
		if ((((float)L_20) == ((float)(0.0f))))
		{
			goto IL_00da;
		}
	}

IL_0096:
	{
		// Vector3 lookDir = new Vector3(v_movement.x, 0, v_movement.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___v_movement_15);
		float L_22 = L_21->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___v_movement_15);
		float L_24 = L_23->___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_22, (0.0f), L_24, NULL);
		// meshPlayer.rotation = Quaternion.LookRotation(lookDir);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___meshPlayer_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_26, NULL);
		NullCheck(L_25);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_25, L_27, NULL);
		// Indicator.rotation = Quaternion.LookRotation(lookDir);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___Indicator_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_29, NULL);
		NullCheck(L_28);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_28, L_30, NULL);
	}

IL_00da:
	{
		// }
		return;
	}
}
// System.Void PlayerMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove__ctor_m259C024B72725E14EF78BC65889964013830B7B2 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ROTATE::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ROTATE_Start_m60326766437E5C8595EC07C67D69A859A1F2BA64 (ROTATE_t2EBA711A93338BD821974C17EC80AD535AD071D8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ROTATE::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ROTATE_Update_m4FDCB50F7FF3B0E200D575FAF83509227AF6F8FB (ROTATE_t2EBA711A93338BD821974C17EC80AD535AD071D8* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(x_axis, y_axis, z_axis * Time.deltaTime, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_1 = __this->___x_axis_4;
		int32_t L_2 = __this->___y_axis_5;
		int32_t L_3 = __this->___z_axis_6;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_0);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_0, ((float)L_1), ((float)L_2), ((float)il2cpp_codegen_multiply(((float)L_3), L_4)), 1, NULL);
		// }
		return;
	}
}
// System.Void ROTATE::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ROTATE__ctor_m08C384AA57F16FCF25C86849690F992E84CC5BF4 (ROTATE_t2EBA711A93338BD821974C17EC80AD535AD071D8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TouchLocation::.ctor(System.Int32,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchLocation__ctor_m756AA771D3B613E7B644A4111E99F3C09589449C (TouchLocation_t6A11D5C6D6240DF0DFB399DB11B0F53B22A3F89D* __this, int32_t ___newTouchId0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___newCircle1, const RuntimeMethod* method) 
{
	{
		// public TouchLocation(int newTouchId, GameObject newCircle){
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// touchId = newTouchId;
		int32_t L_0 = ___newTouchId0;
		__this->___touchId_4 = L_0;
		// circle = newCircle;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___newCircle1;
		__this->___circle_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___circle_5), (void*)L_1);
		// }
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
// System.Void ViewJoystickManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewJoystickManager_Start_m91A2272F2DFC21757357C9A38DBAC71570CF90D3 (ViewJoystickManager_tB7402189536340D755C38B07A39BB5C5B9FB4424* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// imgJoystickBg = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___imgJoystickBg_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgJoystickBg_4), (void*)L_0);
		// imgJoystick = transform.GetChild(0).GetComponent<Image>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 0, NULL);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_2, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___imgJoystick_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imgJoystick_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void ViewJoystickManager::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewJoystickManager_OnDrag_mBBC1672D09B3DD77A194D3A37F761AFBDC975919 (ViewJoystickManager_tB7402189536340D755C38B07A39BB5C5B9FB4424* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(RectTransformUtility.ScreenPointToLocalPointInRectangle(
		//     imgJoystickBg.rectTransform,
		//     eventData.position,
		//     eventData.pressEventCamera,
		//     out posInput))
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___imgJoystickBg_4;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_0, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		NullCheck(L_4);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___posInput_6);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_1, L_3, L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0134;
		}
	}
	{
		// posInput.x = posInput.x / (imgJoystickBg.rectTransform.sizeDelta.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___posInput_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = (&__this->___posInput_6);
		float L_10 = L_9->___x_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___imgJoystickBg_4;
		NullCheck(L_11);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12;
		L_12 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_11, NULL);
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_12, NULL);
		float L_14 = L_13.___x_0;
		L_8->___x_0 = ((float)(L_10/L_14));
		// posInput.y = posInput.y / (imgJoystickBg.rectTransform.sizeDelta.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___posInput_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (&__this->___posInput_6);
		float L_17 = L_16->___y_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___imgJoystickBg_4;
		NullCheck(L_18);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19;
		L_19 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_18, NULL);
		NullCheck(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_19, NULL);
		float L_21 = L_20.___y_1;
		L_15->___y_1 = ((float)(L_17/L_21));
		// Debug.Log(posInput.x.ToString() + "/" + posInput.y.ToString());
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___posInput_6);
		float* L_23 = (&L_22->___x_0);
		String_t* L_24;
		L_24 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_23, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = (&__this->___posInput_6);
		float* L_26 = (&L_25->___y_1);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		String_t* L_28;
		L_28 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_24, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_28, NULL);
		// if(posInput.magnitude > 1.0f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_29 = (&__this->___posInput_6);
		float L_30;
		L_30 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_29, NULL);
		if ((!(((float)L_30) > ((float)(1.0f)))))
		{
			goto IL_00d1;
		}
	}
	{
		// posInput = posInput.normalized;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = (&__this->___posInput_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_31, NULL);
		__this->___posInput_6 = L_32;
	}

IL_00d1:
	{
		// imgJoystick.rectTransform.anchoredPosition = new Vector2(
		//     posInput.x * (imgJoystickBg.rectTransform.sizeDelta.x / 3),
		//     posInput.y * (imgJoystickBg.rectTransform.sizeDelta.y / 3));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33 = __this->___imgJoystick_5;
		NullCheck(L_33);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_34;
		L_34 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_33, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = (&__this->___posInput_6);
		float L_36 = L_35->___x_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37 = __this->___imgJoystickBg_4;
		NullCheck(L_37);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38;
		L_38 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_37, NULL);
		NullCheck(L_38);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_38, NULL);
		float L_40 = L_39.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_41 = (&__this->___posInput_6);
		float L_42 = L_41->___y_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_43 = __this->___imgJoystickBg_4;
		NullCheck(L_43);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_44;
		L_44 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_43, NULL);
		NullCheck(L_44);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		L_45 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_44, NULL);
		float L_46 = L_45.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_47), ((float)il2cpp_codegen_multiply(L_36, ((float)(L_40/(3.0f))))), ((float)il2cpp_codegen_multiply(L_42, ((float)(L_46/(3.0f))))), /*hidden argument*/NULL);
		NullCheck(L_34);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_34, L_47, NULL);
	}

IL_0134:
	{
		// }
		return;
	}
}
// System.Void ViewJoystickManager::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewJoystickManager_OnPointerDown_m92897BB41A5EC79ABDE4ACAF4E3B319780670913 (ViewJoystickManager_tB7402189536340D755C38B07A39BB5C5B9FB4424* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OnDrag(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		ViewJoystickManager_OnDrag_mBBC1672D09B3DD77A194D3A37F761AFBDC975919(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ViewJoystickManager::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewJoystickManager_OnPointerUp_m1B5583A82CFF69EAB181BB52A5739801DDCBBA0E (ViewJoystickManager_tB7402189536340D755C38B07A39BB5C5B9FB4424* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// posInput = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___posInput_6 = L_0;
		// imgJoystick.rectTransform.anchoredPosition = Vector2.zero;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___imgJoystick_5;
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void ViewJoystickManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewJoystickManager__ctor_mF1F0188D10114AE7252E7B1B772E548FF3EF24A4 (ViewJoystickManager_tB7402189536340D755C38B07A39BB5C5B9FB4424* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WeaponController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponController_Start_m301473738632FE182C0BB3867E166AD060C2F075 (WeaponController_t2E7D11FCBE8704BB2CCB69FF9693756E70147811* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WeaponController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponController_Update_m2017ED37C91FFA9846C2E35A7120D7965621F854 (WeaponController_t2E7D11FCBE8704BB2CCB69FF9693756E70147811* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void WeaponController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponController__ctor_m8CC7650E0245852FCDE4EA7B4CE0AEF70EEAB2A6 (WeaponController_t2E7D11FCBE8704BB2CCB69FF9693756E70147811* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Weapons::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapons_Start_m7888C5B973FAC4D96503D2B97C806FDF37F6470F (Weapons_t30925373DADE142BBB37448ECD15500F0A38182C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A_m0E1E563031F990288CDBDA9E83DBC15806FE66B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral033E6F5D9EAF271D19A34302DC37033994EB091F);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject Enemybots = GameObject.FindGameObjectWithTag("enemylife");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteral033E6F5D9EAF271D19A34302DC37033994EB091F, NULL);
		V_0 = L_0;
		// enemylife = Enemybots.GetComponent<EnemyLife>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		EnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A* L_2;
		L_2 = GameObject_GetComponent_TisEnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A_m0E1E563031F990288CDBDA9E83DBC15806FE66B0(L_1, GameObject_GetComponent_TisEnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A_m0E1E563031F990288CDBDA9E83DBC15806FE66B0_RuntimeMethod_var);
		__this->___enemylife_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemylife_10), (void*)L_2);
		// }
		return;
	}
}
// System.Void Weapons::Fire(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapons_Fire_mE12D51BE4693B5EB9A3EC0FD3F6F13A4C72361FA (Weapons_t30925373DADE142BBB37448ECD15500F0A38182C* __this, String_t* ___enemyTag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(fireCooldown) return;
		bool L_0 = __this->___fireCooldown_8;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if(fireCooldown) return;
		return;
	}

IL_0009:
	{
		// Ray ray = new Ray();
		il2cpp_codegen_initobj((&V_0), sizeof(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00));
		// ray.origin = bulletPoint.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___bulletPoint_7;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Ray_set_origin_m9B19A7BE86636111E3B16BCE08EAE030F37FE64D((&V_0), L_2, NULL);
		// ray.direction = bulletPoint.TransformDirection(Vector3.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___bulletPoint_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_3, L_4, NULL);
		Ray_set_direction_m8A8FF8101045BAE51BE5D5C1B6C21D0D5592DA98((&V_0), L_5, NULL);
		// Debug.DrawRay(ray.origin, ray.direction*firedistance, Color.green);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_0), NULL);
		float L_8 = __this->___firedistance_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, L_8, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92(L_6, L_9, L_10, NULL);
		// if(Physics.Raycast(ray, out hit, firedistance))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_11 = V_0;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_12 = (&__this->___hit_9);
		float L_13 = __this->___firedistance_6;
		bool L_14;
		L_14 = Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901(L_11, L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_008e;
		}
	}
	{
		// if(hit.collider.CompareTag(enemyTag))
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_15 = (&__this->___hit_9);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_16;
		L_16 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_15, NULL);
		String_t* L_17 = ___enemyTag0;
		NullCheck(L_16);
		bool L_18;
		L_18 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_16, L_17, NULL);
		// enemylife.Damaging();
		EnemyLife_tDE1D3932657BC4C50DD676776D836D832DAE2E6A* L_19 = __this->___enemylife_10;
		NullCheck(L_19);
		EnemyLife_Damaging_mED2446833C657FC823C12041389CA20BD1247DA7(L_19, NULL);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Weapons::StopCooldownAfterTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Weapons_StopCooldownAfterTime_m6FCA3C44AD923017DEACA0CFECDDBCA35A3CEFE4 (Weapons_t30925373DADE142BBB37448ECD15500F0A38182C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStopCooldownAfterTimeU3Ed__10_tC6D6CCBC936AAEAD7FB2F2953085FE9F3281F0AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStopCooldownAfterTimeU3Ed__10_tC6D6CCBC936AAEAD7FB2F2953085FE9F3281F0AB* L_0 = (U3CStopCooldownAfterTimeU3Ed__10_tC6D6CCBC936AAEAD7FB2F2953085FE9F3281F0AB*)il2cpp_codegen_object_new(U3CStopCooldownAfterTimeU3Ed__10_tC6D6CCBC936AAEAD7FB2F2953085FE9F3281F0AB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStopCooldownAfterTimeU3Ed__10__ctor_mBBC435971E2891094BDF2704DB5831C4D48D0F4F(L_0, 0, NULL);
		U3CStopCooldownAfterTimeU3Ed__10_tC6D6CCBC936AAEAD7FB2F2953085FE9F3281F0AB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Weapons::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapons__ctor_m002D096D06FBD2F08C8864B583E44F80DB942C37 (Weapons_t30925373DADE142BBB37448ECD15500F0A38182C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Weapons/<StopCooldownAfterTime>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopCooldownAfterTimeU3Ed__10__ctor_mBBC435971E2891094BDF2704DB5831C4D48D0F4F (U3CStopCooldownAfterTimeU3Ed__10_tC6D6CCBC936AAEAD7FB2F2953085FE9F3281F0AB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Weapons/<StopCooldownAfterTime>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopCooldownAfterTimeU3Ed__10_System_IDisposable_Dispose_mCBBFBBFE6DC6544DE8C06EBE90DFEBED07EF06C0 (U3CStopCooldownAfterTimeU3Ed__10_tC6D6CCBC936AAEAD7FB2F2953085FE9F3281F0AB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Weapons/<StopCooldownAfterTime>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStopCooldownAfterTimeU3Ed__10_MoveNext_mD66CB58F7E47C6D067CEF8FB99F81D704DC9AD44 (U3CStopCooldownAfterTimeU3Ed__10_tC6D6CCBC936AAEAD7FB2F2953085FE9F3281F0AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Weapons_t30925373DADE142BBB37448ECD15500F0A38182C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Weapons_t30925373DADE142BBB37448ECD15500F0A38182C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(firerate);
		Weapons_t30925373DADE142BBB37448ECD15500F0A38182C* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___firerate_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// fireCooldown = false;
		Weapons_t30925373DADE142BBB37448ECD15500F0A38182C* L_7 = V_1;
		NullCheck(L_7);
		L_7->___fireCooldown_8 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object Weapons/<StopCooldownAfterTime>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStopCooldownAfterTimeU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE562FEF28D3492A036DE28DF63879DB89913B5B4 (U3CStopCooldownAfterTimeU3Ed__10_tC6D6CCBC936AAEAD7FB2F2953085FE9F3281F0AB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Weapons/<StopCooldownAfterTime>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopCooldownAfterTimeU3Ed__10_System_Collections_IEnumerator_Reset_m70EC30E5253BDAC5FEE35CAF7A0214CCF0566EA0 (U3CStopCooldownAfterTimeU3Ed__10_tC6D6CCBC936AAEAD7FB2F2953085FE9F3281F0AB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStopCooldownAfterTimeU3Ed__10_System_Collections_IEnumerator_Reset_m70EC30E5253BDAC5FEE35CAF7A0214CCF0566EA0_RuntimeMethod_var)));
	}
}
// System.Object Weapons/<StopCooldownAfterTime>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStopCooldownAfterTimeU3Ed__10_System_Collections_IEnumerator_get_Current_mF18F739557D67AA915AAACB7B693099FFECA4E26 (U3CStopCooldownAfterTimeU3Ed__10_tC6D6CCBC936AAEAD7FB2F2953085FE9F3281F0AB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Weapon_2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_2_Start_mE1EF15FBDECCD72FFCF5FE1CD8D1DCD2619808CC (Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Weapon_2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_2_Update_m264DFC29D8E17FF3F3E629D32A7E48D8004B13C4 (Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0B62B1E6E0FE0C27CA3B8D95E5D8EC4253EDDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cooldownSpeed += Time.deltaTime * 60f;
		float L_0 = __this->___cooldownSpeed_4;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___cooldownSpeed_4 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, (60.0f)))));
		// if(isFiring == true)
		bool L_2 = __this->___isFiring_11;
		if (!L_2)
		{
			goto IL_0062;
		}
	}
	{
		// accuracy += Time.deltaTime * 4f;
		float L_3 = __this->___accuracy_7;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___accuracy_7 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, (4.0f)))));
		// if (cooldownSpeed >= fireRate)
		float L_5 = __this->___cooldownSpeed_4;
		float L_6 = __this->___fireRate_5;
		if ((!(((float)L_5) >= ((float)L_6))))
		{
			goto IL_0062;
		}
	}
	{
		// Shoot();
		Weapon_2_Shoot_mA7B0DD0C0B3CEE3C01679A2C5E11DD73821D2143(__this, NULL);
		// cooldownSpeed = 0;
		__this->___cooldownSpeed_4 = (0.0f);
		// recoilCooldown = 1;
		__this->___recoilCooldown_6 = (1.0f);
	}

IL_0062:
	{
		// if(isFiring == false)
		bool L_7 = __this->___isFiring_11;
		if (L_7)
		{
			goto IL_0094;
		}
	}
	{
		// recoilCooldown -= Time.deltaTime;
		float L_8 = __this->___recoilCooldown_6;
		float L_9;
		L_9 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___recoilCooldown_6 = ((float)il2cpp_codegen_subtract(L_8, L_9));
		// if(recoilCooldown <= 1)
		float L_10 = __this->___recoilCooldown_6;
		if ((!(((float)L_10) <= ((float)(1.0f)))))
		{
			goto IL_0094;
		}
	}
	{
		// accuracy = 0.0f;
		__this->___accuracy_7 = (0.0f);
	}

IL_0094:
	{
		// if(Input.GetButtonDown("Fire1") && isEnableAttack)
		bool L_11;
		L_11 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		if (!L_11)
		{
			goto IL_00b8;
		}
	}
	{
		bool L_12 = __this->___isEnableAttack_13;
		if (!L_12)
		{
			goto IL_00b8;
		}
	}
	{
		// _animator.SetTrigger("triggerAttack");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->____animator_16;
		NullCheck(L_13);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_13, _stringLiteral4D0B62B1E6E0FE0C27CA3B8D95E5D8EC4253EDDE, NULL);
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Void Weapon_2::PointerDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_2_PointerDown_mF07FD74CA6F94D9029B7CED216E747BBBFF2CEEF (Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral487D1E08ACDB1A82B040003803E7FF153A871B9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetBool("Firing", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_16;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral487D1E08ACDB1A82B040003803E7FF153A871B9C, (bool)1, NULL);
		// stopFiring = false;
		__this->___stopFiring_12 = (bool)0;
		// isFiring = true;
		__this->___isFiring_11 = (bool)1;
		// }
		return;
	}
}
// System.Void Weapon_2::PointerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_2_PointerUp_m900075266C26C240B33721D0E848CC6245EED9B5 (Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral487D1E08ACDB1A82B040003803E7FF153A871B9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _animator.SetBool("Firing", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_16;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral487D1E08ACDB1A82B040003803E7FF153A871B9C, (bool)0, NULL);
		// isFiring = false;
		__this->___isFiring_11 = (bool)0;
		// stopFiring = true;
		__this->___stopFiring_12 = (bool)1;
		// }
		return;
	}
}
// System.Void Weapon_2::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_2_Shoot_mA7B0DD0C0B3CEE3C01679A2C5E11DD73821D2143 (Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6_m25F1A4EB6E95DD389C2BF1632B0FD9FE9AD8F798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// Quaternion fireRotation = Quaternion.LookRotation(transform.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_1, NULL);
		V_1 = L_2;
		// float currentSpread = Mathf.Lerp(0.0f, maxSpreadAngle, accuracy / timeTillMaxSpread);
		float L_3 = __this->___maxSpreadAngle_8;
		float L_4 = __this->___accuracy_7;
		float L_5 = __this->___timeTillMaxSpread_9;
		float L_6;
		L_6 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((0.0f), L_3, ((float)(L_4/L_5)), NULL);
		V_2 = L_6;
		// fireRotation = Quaternion.RotateTowards(fireRotation, Random.rotation, Random.Range(0.0f, currentSpread));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Random_get_rotation_mA99782158591D300375B107CA2C31D99E4FC7482(NULL);
		float L_9 = V_2;
		float L_10;
		L_10 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_RotateTowards_mD7C332050D876CB28A704B9005476BE06823F85F_inline(L_7, L_8, L_10, NULL);
		V_1 = L_11;
		// if (Physics.Raycast(transform.position, fireRotation * Vector3.forward, out hit, Mathf.Infinity))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_14, L_15, NULL);
		bool L_17;
		L_17 = Physics_Raycast_mE0FAFDE7AFE40061DA7518FA5C41CE6BB23DBC10(L_13, L_16, (&V_0), (std::numeric_limits<float>::infinity()), NULL);
		if (!L_17)
		{
			goto IL_00b4;
		}
	}
	{
		// GameObject tempBullet = Instantiate(bullet, shootPoint.transform.position, fireRotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___bullet_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___shootPoint_17;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_18, L_21, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Instantiate(_muzzleeffect, shootPoint.transform.position, fireRotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->____muzzleeffect_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___shootPoint_17;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_24, L_27, L_28, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// tempBullet.GetComponent<MoveBullet>().hitPoint = hit.point;
		NullCheck(L_23);
		MoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6* L_30;
		L_30 = GameObject_GetComponent_TisMoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6_m25F1A4EB6E95DD389C2BF1632B0FD9FE9AD8F798(L_23, GameObject_GetComponent_TisMoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6_m25F1A4EB6E95DD389C2BF1632B0FD9FE9AD8F798_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		NullCheck(L_30);
		L_30->___hitPoint_4 = L_31;
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void Weapon_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_2__ctor_mA79FF4A8CD0F9BDDEB279D2B9DFA58C5CC784861 (Weapon_2_t2B511DFA03860DFDB8256EFE279DCAA8905FBB3D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SelfRotation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelfRotation_Update_m619A2BC3E3FEC29CB1B7F5F9BF8E572302BCA4B1 (SelfRotation_t42ED2474CFF99E8EC126EEFDD6DABA3F54CD286F* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(Vector3.up, Speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_2 = __this->___Speed_4;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_0);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_0, L_1, ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		// }
		return;
	}
}
// System.Void SelfRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelfRotation__ctor_m1D7EFCC3177B233DE182A5845ECB50F7E16E973D (SelfRotation_t42ED2474CFF99E8EC126EEFDD6DABA3F54CD286F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void timedown::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void timedown_Start_m7226480274C27913BB4220D3D6075DD43F077FB2 (timedown_t8336BD09D32D9A0F9DA1A3010E4E334395A17DC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D6C5C7D9E928CBF5B4CE0053E0CD35A295B90AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine ("LoseTime");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral5D6C5C7D9E928CBF5B4CE0053E0CD35A295B90AE, NULL);
		// }
		return;
	}
}
// System.Void timedown::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void timedown_Update_mD864246A088593D323C951A97AB92D1A82B99592 (timedown_t8336BD09D32D9A0F9DA1A3010E4E334395A17DC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D6C5C7D9E928CBF5B4CE0053E0CD35A295B90AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timemet == 0) {
		int32_t L_0 = __this->___timemet_5;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// levelSystem.Menu();
		LevelGameSystem_t6DBE52C10F71FC9FB6BF818B9B50202AB17E6ACC* L_1 = __this->___levelSystem_6;
		NullCheck(L_1);
		LevelGameSystem_Menu_m54D353715207883140B6C11EF2F962B689CF1934(L_1, NULL);
		// StopCoroutine ("LoseTime");
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteral5D6C5C7D9E928CBF5B4CE0053E0CD35A295B90AE, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void timedown::Change()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void timedown_Change_m76764E2DAD0A2BA0A17D00698896A54AA7A4BAEB (timedown_t8336BD09D32D9A0F9DA1A3010E4E334395A17DC7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator timedown::LoseTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* timedown_LoseTime_m0B5EAA71E6FBACBAC178829939278AA104988390 (timedown_t8336BD09D32D9A0F9DA1A3010E4E334395A17DC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoseTimeU3Ed__7_tBE83675AFD37F6AFDC005A117BDAFE18F1D1F782_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoseTimeU3Ed__7_tBE83675AFD37F6AFDC005A117BDAFE18F1D1F782* L_0 = (U3CLoseTimeU3Ed__7_tBE83675AFD37F6AFDC005A117BDAFE18F1D1F782*)il2cpp_codegen_object_new(U3CLoseTimeU3Ed__7_tBE83675AFD37F6AFDC005A117BDAFE18F1D1F782_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoseTimeU3Ed__7__ctor_m91170BB7664508129199928AE36798224DC31063(L_0, 0, NULL);
		U3CLoseTimeU3Ed__7_tBE83675AFD37F6AFDC005A117BDAFE18F1D1F782* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void timedown::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void timedown__ctor_mBFF4934E8FA43325B2DE636BDE5FF14A7600B835 (timedown_t8336BD09D32D9A0F9DA1A3010E4E334395A17DC7* __this, const RuntimeMethod* method) 
{
	{
		// public int timemet = 17;
		__this->___timemet_5 = ((int32_t)17);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void timedown/<LoseTime>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoseTimeU3Ed__7__ctor_m91170BB7664508129199928AE36798224DC31063 (U3CLoseTimeU3Ed__7_tBE83675AFD37F6AFDC005A117BDAFE18F1D1F782* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void timedown/<LoseTime>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoseTimeU3Ed__7_System_IDisposable_Dispose_m7B0A498DE72EA1E651033F94992B4D206D40A18D (U3CLoseTimeU3Ed__7_tBE83675AFD37F6AFDC005A117BDAFE18F1D1F782* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean timedown/<LoseTime>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoseTimeU3Ed__7_MoveNext_mAB19B639F6EBB450B1DE1A960374A4668B710DB2 (U3CLoseTimeU3Ed__7_tBE83675AFD37F6AFDC005A117BDAFE18F1D1F782* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	timedown_t8336BD09D32D9A0F9DA1A3010E4E334395A17DC7* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		timedown_t8336BD09D32D9A0F9DA1A3010E4E334395A17DC7* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// timemet--;
		timedown_t8336BD09D32D9A0F9DA1A3010E4E334395A17DC7* L_5 = V_1;
		timedown_t8336BD09D32D9A0F9DA1A3010E4E334395A17DC7* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___timemet_5;
		NullCheck(L_5);
		L_5->___timemet_5 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		// while(true)
		goto IL_001e;
	}
}
// System.Object timedown/<LoseTime>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoseTimeU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m52B2932FB082A3E022922CC7135BC59D7034196D (U3CLoseTimeU3Ed__7_tBE83675AFD37F6AFDC005A117BDAFE18F1D1F782* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void timedown/<LoseTime>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoseTimeU3Ed__7_System_Collections_IEnumerator_Reset_m7BC102ACAE27BEF06C40948539B9D9DA9421BB31 (U3CLoseTimeU3Ed__7_tBE83675AFD37F6AFDC005A117BDAFE18F1D1F782* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoseTimeU3Ed__7_System_Collections_IEnumerator_Reset_m7BC102ACAE27BEF06C40948539B9D9DA9421BB31_RuntimeMethod_var)));
	}
}
// System.Object timedown/<LoseTime>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoseTimeU3Ed__7_System_Collections_IEnumerator_get_Current_mD8F9D277436C4A16FF7F11ECCDA2C9723C376CE1 (U3CLoseTimeU3Ed__7_tBE83675AFD37F6AFDC005A117BDAFE18F1D1F782* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void TriggerGem1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerGem1_Start_mCBAC69E6DDB434508A2B200E6CAC9EF817DDB391 (TriggerGem1_t96AB2BCAF504F3C59B5DD7EFAA3102BAFBF1C38B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TriggerGem1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerGem1_Update_m7FD1E171CA0774C27CE192EF4F9D2A0CAB40AC3A (TriggerGem1_t96AB2BCAF504F3C59B5DD7EFAA3102BAFBF1C38B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TriggerGem1::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerGem1_OnTriggerStay_m6C59A5768B86E53A48C7171B464191084323E7AF (TriggerGem1_t96AB2BCAF504F3C59B5DD7EFAA3102BAFBF1C38B* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral796CDE6847A4FF4C998740E3B2E4F81A3625D68B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Key1"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral796CDE6847A4FF4C998740E3B2E4F81A3625D68B, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// Key1A.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Key1A_6;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// Key1B.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Key1B_7;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void TriggerGem1::Unlock_GR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerGem1_Unlock_GR_m922F92F1DA718B08EF9AC22C32950D0CC0DDB063 (TriggerGem1_t96AB2BCAF504F3C59B5DD7EFAA3102BAFBF1C38B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(Spark_BX, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Spark_BX_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Award.gameObject.SetActive(true);//Depending on the award ...points wll be allocated;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Award_5;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// activate.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___activate_8;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// Key1A.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___Key1A_6;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// Key1B.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___Key1B_7;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TriggerGem1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerGem1__ctor_m94E3F714CE81DC3E10557AC67D50BA75D6B0E489 (TriggerGem1_t96AB2BCAF504F3C59B5DD7EFAA3102BAFBF1C38B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TriggerGem2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerGem2_Start_m3825F136D59C055C56C316732507AE4189E33733 (TriggerGem2_tCD5DE01B6A4AD09B7954AA8B78B721736323048A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TriggerGem2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerGem2_Update_mE51D8F61F12E717E32E8C32B39CDCD8CEEE495D8 (TriggerGem2_tCD5DE01B6A4AD09B7954AA8B78B721736323048A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TriggerGem2::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerGem2_OnTriggerEnter_mB6134F65398E7960CB01E9B5575C2EE3B304FD55 (TriggerGem2_tCD5DE01B6A4AD09B7954AA8B78B721736323048A* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA587B6F4851F73D9E2260B6B181D16390C59262);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Key2"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCA587B6F4851F73D9E2260B6B181D16390C59262, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// Key1A.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Key1A_6;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// Key1B.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Key1B_7;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void TriggerGem2::Unlock_GR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerGem2_Unlock_GR_mC121BD622096A9E10EEDA8E261CEFAA31D0A7C5D (TriggerGem2_tCD5DE01B6A4AD09B7954AA8B78B721736323048A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(Spark_BX, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Spark_BX_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Award.gameObject.SetActive(true);//Depending on the award ...points wll be allocated;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Award_5;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// activate.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___activate_8;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// Key1A.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___Key1A_6;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// Key1B.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___Key1B_7;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TriggerGem2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerGem2__ctor_mCE193FF190E99A992FA949E42A6883C19E1EC041 (TriggerGem2_tCD5DE01B6A4AD09B7954AA8B78B721736323048A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TriggerMe::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerMe_Start_mB9A886DAD11C6A74700DF77852C34CEFDE913E05 (TriggerMe_tC9F0681E8E33C26D1B81C05C713FAF0781824596* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TriggerMe::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerMe_Update_m5EFC06838A173D48544AC5CE254774779B7AF197 (TriggerMe_tC9F0681E8E33C26D1B81C05C713FAF0781824596* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TriggerMe::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerMe_OnTriggerStay_m0231476A1561A17E84BFFF04BCFD1531E6F39EB2 (TriggerMe_tC9F0681E8E33C26D1B81C05C713FAF0781824596* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Key"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// Key1A.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Key1A_7;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// Key1B.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Key1B_8;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void TriggerMe::Unlock_GR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerMe_Unlock_GR_mBD1E05C1BD82B2B276DAFC8A0908FFDC587CA1F6 (TriggerMe_tC9F0681E8E33C26D1B81C05C713FAF0781824596* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral743341BDE67F45E2E77619FAAB6036185639CAD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChestOpen.SetBool("UNLCOK", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___ChestOpen_6;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral743341BDE67F45E2E77619FAAB6036185639CAD8, (bool)1, NULL);
		// Instantiate(Spark_BX, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Spark_BX_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_1, L_3, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Award.gameObject.SetActive(true);//Depending on the award ...points wll be allocated;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___Award_5;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// activate.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___activate_9;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// Key1A.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___Key1A_7;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// Key1B.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___Key1B_8;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TriggerMe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerMe__ctor_m0A0B12EBF8D611A3BF51AA6286CB0CF7BC102469 (TriggerMe_tC9F0681E8E33C26D1B81C05C713FAF0781824596* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WeaponBOT::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBOT_Update_m421CAB4B98A36044C9336A074DA2F25E484300DE (WeaponBOT_t15595F5DCC80EB2CE2C02F292748FEE0DAE17D53* __this, const RuntimeMethod* method) 
{
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_5;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___timer_5 = ((float)il2cpp_codegen_add(L_0, L_1));
		// Spawn();
		WeaponBOT_Spawn_mC750ED657544A4906B3D977F0E48ECAAB4B90352(__this, NULL);
		// }
		return;
	}
}
// System.Void WeaponBOT::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBOT_Spawn_mC750ED657544A4906B3D977F0E48ECAAB4B90352 (WeaponBOT_t15595F5DCC80EB2CE2C02F292748FEE0DAE17D53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_1 = NULL;
	{
		// if (timer >= spawnInterval)
		float L_0 = __this->___timer_5;
		float L_1 = __this->___spawnInterval_4;
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0067;
		}
	}
	{
		// timer = 0f;
		__this->___timer_5 = (0.0f);
		// GameObject spawnedObject = Instantiate(objectPrefab, transform.position, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___objectPrefab_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_2, L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_0 = L_7;
		// Rigidbody objectRigidbody = spawnedObject.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9;
		L_9 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_8, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		V_1 = L_9;
		// if (objectRigidbody != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = V_1;
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		// objectRigidbody.velocity = spawnedObject.transform.forward * moveSpeed;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		float L_16 = __this->___moveSpeed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_15, L_16, NULL);
		NullCheck(L_12);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_12, L_17, NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void WeaponBOT::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponBOT__ctor_m90788F1BB75A59466FD07B84B0AC42F31314EFEC (WeaponBOT_t15595F5DCC80EB2CE2C02F292748FEE0DAE17D53* __this, const RuntimeMethod* method) 
{
	{
		// public float spawnInterval = 2f;    // Time interval between object spawns
		__this->___spawnInterval_4 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ZombieLife::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieLife_Start_mC2341CF1B953D4502087C441C14EC73C56DDF447 (ZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7_m90753D288AF766FD68F7845305B0BDB325009188_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraShake =  GetComponent<CamerShake>();
		CamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7* L_0;
		L_0 = Component_GetComponent_TisCamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7_m90753D288AF766FD68F7845305B0BDB325009188(__this, Component_GetComponent_TisCamerShake_tEB0D30FE3D465AEAB7EABA040C7C8A7AD73B8FD7_m90753D288AF766FD68F7845305B0BDB325009188_RuntimeMethod_var);
		__this->___cameraShake_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraShake_13), (void*)L_0);
		// _currentHealth = _maxHealth;
		float L_1 = __this->____maxHealth_4;
		__this->____currentHealth_8 = L_1;
		// _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
		HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* L_2 = __this->____healthbar_14;
		float L_3 = __this->____maxHealth_4;
		float L_4 = __this->____currentHealth_8;
		NullCheck(L_2);
		HealthController_UpdateHealthBar_m9098A6D18A886A56F4FB9B474B4E6E19AFF42889(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void ZombieLife::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieLife_Update_m8EC3B7831645179F9E871FA202E0261EE539FB43 (ZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	{
		// currentHealth.text = "" + _currentHealth.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___currentHealth_9;
		float* L_1 = (&__this->____currentHealth_8);
		String_t* L_2;
		L_2 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_1, NULL);
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_0;
			goto IL_001a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_001a:
	{
		NullCheck(G_B2_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// }
		return;
	}
}
// System.Void ZombieLife::Damaging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieLife_Damaging_mDAE240E96D4C0A7E6C5B953A112564E0AC3149E5 (ZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _currentHealth -=mvBullet.Damage;
		float L_0 = __this->____currentHealth_8;
		MoveBullet_tB0D4D40A99AE1BF7A781962D757901E5FFAA22C6* L_1 = __this->___mvBullet_10;
		NullCheck(L_1);
		float L_2 = L_1->___Damage_8;
		__this->____currentHealth_8 = ((float)il2cpp_codegen_subtract(L_0, L_2));
		// if(_currentHealth <= 0)
		float L_3 = __this->____currentHealth_8;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		// DeadZombies += 1;
		int32_t L_4 = __this->___DeadZombies_7;
		__this->___DeadZombies_7 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// Instantiate(Explode, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Explode_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_5, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(FullBOT.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___FullBOT_11;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_10, NULL);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_11, NULL);
		return;
	}

IL_0060:
	{
		// _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
		HealthController_tB85F221F20E5F054D8ACC7CBC1A3A41C866172C8* L_12 = __this->____healthbar_14;
		float L_13 = __this->____maxHealth_4;
		float L_14 = __this->____currentHealth_8;
		NullCheck(L_12);
		HealthController_UpdateHealthBar_m9098A6D18A886A56F4FB9B474B4E6E19AFF42889(L_12, L_13, L_14, NULL);
		// Instantiate(_hitEffect, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->____hitEffect_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_15, L_17, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ZombieLife::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieLife__ctor_m75F8733CA326C1AEA1CE4F7AB0AE9D32734B9041 (ZombieLife_t545972897AB5A0411A63BFFF2F916C57C9C247D4* __this, const RuntimeMethod* method) 
{
	{
		// public float _maxHealth = 30;
		__this->____maxHealth_4 = (30.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_Start_m900ACFC81D342429D83E274C92B69467E443763D (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AutoTargetPlayer)
		bool L_0 = __this->___m_AutoTargetPlayer_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// FindAndTargetPlayer();
		AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D(__this, NULL);
	}

IL_000e:
	{
		// if (m_Target == null) return;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// if (m_Target == null) return;
		return;
	}

IL_001d:
	{
		// targetRigidbody = m_Target.GetComponent<Rigidbody>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Target_4;
		NullCheck(L_3);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4;
		L_4 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_3, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___targetRigidbody_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetRigidbody_7), (void*)L_4);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_FixedUpdate_mB21B34361FB6322B028B8087893942F3E9A11A22 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AutoTargetPlayer && (m_Target == null || !m_Target.gameObject.activeSelf))
		bool L_0 = __this->___m_AutoTargetPlayer_5;
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Target_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}

IL_0028:
	{
		// FindAndTargetPlayer();
		AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D(__this, NULL);
	}

IL_002e:
	{
		// if (m_UpdateType == UpdateType.FixedUpdate)
		int32_t L_6 = __this->___m_UpdateType_6;
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		// FollowTarget(Time.deltaTime);
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		VirtualActionInvoker1< float >::Invoke(5 /* System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FollowTarget(System.Single) */, __this, L_7);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_LateUpdate_m15329BC030A27BD5C92BCF0B9A2E7DC27C4ED202 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AutoTargetPlayer && (m_Target == null || !m_Target.gameObject.activeSelf))
		bool L_0 = __this->___m_AutoTargetPlayer_5;
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Target_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}

IL_0028:
	{
		// FindAndTargetPlayer();
		AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D(__this, NULL);
	}

IL_002e:
	{
		// if (m_UpdateType == UpdateType.LateUpdate)
		int32_t L_6 = __this->___m_UpdateType_6;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		// FollowTarget(Time.deltaTime);
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		VirtualActionInvoker1< float >::Invoke(5 /* System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FollowTarget(System.Single) */, __this, L_7);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::ManualUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_ManualUpdate_mC0EDA156049123462E7E0507191183A112209C58 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AutoTargetPlayer && (m_Target == null || !m_Target.gameObject.activeSelf))
		bool L_0 = __this->___m_AutoTargetPlayer_5;
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___m_Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Target_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}

IL_0028:
	{
		// FindAndTargetPlayer();
		AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D(__this, NULL);
	}

IL_002e:
	{
		// if (m_UpdateType == UpdateType.ManualUpdate)
		int32_t L_6 = __this->___m_UpdateType_6;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0042;
		}
	}
	{
		// FollowTarget(Time.deltaTime);
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		VirtualActionInvoker1< float >::Invoke(5 /* System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FollowTarget(System.Single) */, __this, L_7);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::FindAndTargetPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_FindAndTargetPlayer_mEBAED59C944A601F015CE6390C110B00EA882F2D (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// var targetObj = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		V_0 = L_0;
		// if (targetObj)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// SetTarget(targetObj.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(6 /* System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::SetTarget(UnityEngine.Transform) */, __this, L_4);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::SetTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower_SetTarget_m28BD1FECB5D3F99925BCA617888401258BD8A28C (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___newTransform0, const RuntimeMethod* method) 
{
	{
		// m_Target = newTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___newTransform0;
		__this->___m_Target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Target_4), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Transform UnityStandardAssets.Cameras.AbstractTargetFollower::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* AbstractTargetFollower_get_Target_m0A358E204FE5247E0702B24B3D2047E89815A3D0 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Target; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Target_4;
		return L_0;
	}
}
// System.Void UnityStandardAssets.Cameras.AbstractTargetFollower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractTargetFollower__ctor_m7BA92F6CC37CDA403608738E4F6CB8EB43889A98 (AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private bool m_AutoTargetPlayer = true;  // Whether the rig should automatically target the player.
		__this->___m_AutoTargetPlayer_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityStandardAssets.Cameras.FreeLookCam::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_Awake_m6DF1C77903C277F5D7111A267F9B71B708A50867 (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B3_0 = 0;
	{
		// base.Awake();
		PivotBasedCameraRig_Awake_m3477C8EE2F83D51CCF81ADC1F8BEEDCB0A2F95B2(__this, NULL);
		// Cursor.lockState = m_LockCursor ? CursorLockMode.Locked : CursorLockMode.None;
		bool L_0 = __this->___m_LockCursor_16;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(G_B3_0, NULL);
		// Cursor.visible = !m_LockCursor;
		bool L_1 = __this->___m_LockCursor_16;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), NULL);
		// m_PivotEulers = m_Pivot.rotation.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13*)__this)->___m_Pivot_9;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		__this->___m_PivotEulers_21 = L_4;
		// m_PivotTargetRot = m_Pivot.transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13*)__this)->___m_Pivot_9;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_6, NULL);
		__this->___m_PivotTargetRot_22 = L_7;
		// m_TransformTargetRot = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_8, NULL);
		__this->___m_TransformTargetRot_23 = L_9;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_Update_m1158A615C803765D6375B456ADB1DDF93D8E7FB8 (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) 
{
	int32_t G_B5_0 = 0;
	{
		// HandleRotationMovement();
		FreeLookCam_HandleRotationMovement_m0E9A0819AA068EFA603FB0CC3318FBE71827A97F(__this, NULL);
		// if (m_LockCursor && Input.GetMouseButtonUp(0))
		bool L_0 = __this->___m_LockCursor_16;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(0, NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// Cursor.lockState = m_LockCursor ? CursorLockMode.Locked : CursorLockMode.None;
		bool L_2 = __this->___m_LockCursor_16;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 1;
	}

IL_0022:
	{
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(G_B5_0, NULL);
		// Cursor.visible = !m_LockCursor;
		bool L_3 = __this->___m_LockCursor_16;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_OnDisable_mCD044A476BAF96C34A06162121D3D21664AD438E (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_m5CA1C31AF58CE2CDFD4F6999B4F42C9D0DF8A99D(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_mC2A804ADF7411AC885923A2E9F3108BCC85C1AE4((bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::FollowTarget(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_FollowTarget_m807D7425DA3AC99BCFC995FC3F53B3139F50FE7E (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, float ___deltaTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Target == null) return;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17*)__this)->___m_Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (m_Target == null) return;
		return;
	}

IL_000f:
	{
		// transform.position = Vector3.Lerp(transform.position, m_Target.position, deltaTime*m_MoveSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((AbstractTargetFollower_t90F5648B9B3DE06FD5EA6E4AF357113208EA1B17*)__this)->___m_Target_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = ___deltaTime0;
		float L_8 = __this->___m_MoveSpeed_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_4, L_6, ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_9, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::HandleRotationMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam_HandleRotationMovement_m0E9A0819AA068EFA603FB0CC3318FBE71827A97F (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* G_B5_0 = NULL;
	FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* G_B6_1 = NULL;
	{
		// if(Time.timeScale < float.Epsilon)
		float L_0;
		L_0 = Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413(NULL);
		if ((!(((float)L_0) < ((float)(1.40129846E-45f)))))
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// var x = Input.GetAxis("Mouse X");
		float L_1;
		L_1 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		V_0 = L_1;
		// var y = Input.GetAxis("Mouse Y");
		float L_2;
		L_2 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		V_1 = L_2;
		// m_LookAngle += x*m_TurnSpeed;
		float L_3 = __this->___m_LookAngle_18;
		float L_4 = V_0;
		float L_5 = __this->___m_TurnSpeed_12;
		__this->___m_LookAngle_18 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5))));
		// m_TransformTargetRot = Quaternion.Euler(0f, m_LookAngle, 0f);
		float L_6 = __this->___m_LookAngle_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), L_6, (0.0f), NULL);
		__this->___m_TransformTargetRot_23 = L_7;
		// if (m_VerticalAutoReturn)
		bool L_8 = __this->___m_VerticalAutoReturn_17;
		if (!L_8)
		{
			goto IL_0091;
		}
	}
	{
		// m_TiltAngle = y > 0 ? Mathf.Lerp(0, -m_TiltMin, y) : Mathf.Lerp(0, m_TiltMax, -y);
		float L_9 = V_1;
		G_B4_0 = __this;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			G_B5_0 = __this;
			goto IL_0078;
		}
	}
	{
		float L_10 = __this->___m_TiltMax_14;
		float L_11 = V_1;
		float L_12;
		L_12 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((0.0f), L_10, ((-L_11)), NULL);
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		goto IL_008a;
	}

IL_0078:
	{
		float L_13 = __this->___m_TiltMin_15;
		float L_14 = V_1;
		float L_15;
		L_15 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((0.0f), ((-L_13)), L_14, NULL);
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
	}

IL_008a:
	{
		NullCheck(G_B6_1);
		G_B6_1->___m_TiltAngle_19 = G_B6_0;
		goto IL_00c4;
	}

IL_0091:
	{
		// m_TiltAngle -= y*m_TurnSpeed;
		float L_16 = __this->___m_TiltAngle_19;
		float L_17 = V_1;
		float L_18 = __this->___m_TurnSpeed_12;
		__this->___m_TiltAngle_19 = ((float)il2cpp_codegen_subtract(L_16, ((float)il2cpp_codegen_multiply(L_17, L_18))));
		// m_TiltAngle = Mathf.Clamp(m_TiltAngle, -m_TiltMin, m_TiltMax);
		float L_19 = __this->___m_TiltAngle_19;
		float L_20 = __this->___m_TiltMin_15;
		float L_21 = __this->___m_TiltMax_14;
		float L_22;
		L_22 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_19, ((-L_20)), L_21, NULL);
		__this->___m_TiltAngle_19 = L_22;
	}

IL_00c4:
	{
		// m_PivotTargetRot = Quaternion.Euler(m_TiltAngle, m_PivotEulers.y , m_PivotEulers.z);
		float L_23 = __this->___m_TiltAngle_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&__this->___m_PivotEulers_21);
		float L_25 = L_24->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&__this->___m_PivotEulers_21);
		float L_27 = L_26->___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_23, L_25, L_27, NULL);
		__this->___m_PivotTargetRot_22 = L_28;
		// if (m_TurnSmoothing > 0)
		float L_29 = __this->___m_TurnSmoothing_13;
		if ((!(((float)L_29) > ((float)(0.0f)))))
		{
			goto IL_0153;
		}
	}
	{
		// m_Pivot.localRotation = Quaternion.Slerp(m_Pivot.localRotation, m_PivotTargetRot, m_TurnSmoothing * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = ((PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13*)__this)->___m_Pivot_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = ((PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13*)__this)->___m_Pivot_9;
		NullCheck(L_31);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_31, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = __this->___m_PivotTargetRot_22;
		float L_34 = __this->___m_TurnSmoothing_13;
		float L_35;
		L_35 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_32, L_33, ((float)il2cpp_codegen_multiply(L_34, L_35)), NULL);
		NullCheck(L_30);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_30, L_36, NULL);
		// transform.localRotation = Quaternion.Slerp(transform.localRotation, m_TransformTargetRot, m_TurnSmoothing * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_38);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_38, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = __this->___m_TransformTargetRot_23;
		float L_41 = __this->___m_TurnSmoothing_13;
		float L_42;
		L_42 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_39, L_40, ((float)il2cpp_codegen_multiply(L_41, L_42)), NULL);
		NullCheck(L_37);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_37, L_43, NULL);
		return;
	}

IL_0153:
	{
		// m_Pivot.localRotation = m_PivotTargetRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = ((PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13*)__this)->___m_Pivot_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45 = __this->___m_PivotTargetRot_22;
		NullCheck(L_44);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_44, L_45, NULL);
		// transform.localRotation = m_TransformTargetRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47 = __this->___m_TransformTargetRot_23;
		NullCheck(L_46);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_46, L_47, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.FreeLookCam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreeLookCam__ctor_m0B5161AC16134D026A74E23EDE3011F252B9C28B (FreeLookCam_t44F0A372E3131AC2F9A6F48F8E6C8550D48DC88E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float m_MoveSpeed = 1f;                      // How fast the rig will move to keep up with the target's position.
		__this->___m_MoveSpeed_11 = (1.0f);
		// [Range(0f, 10f)] [SerializeField] private float m_TurnSpeed = 1.5f;   // How fast the rig will rotate from user input.
		__this->___m_TurnSpeed_12 = (1.5f);
		// [SerializeField] private float m_TiltMax = 75f;                       // The maximum value of the x axis rotation of the pivot.
		__this->___m_TiltMax_14 = (75.0f);
		// [SerializeField] private float m_TiltMin = 45f;                       // The minimum value of the x axis rotation of the pivot.
		__this->___m_TiltMin_15 = (45.0f);
		PivotBasedCameraRig__ctor_m176687FB94C7FF07D4ED8B38A0529F370F9D51BA(__this, NULL);
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
// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PivotBasedCameraRig_Awake_m3477C8EE2F83D51CCF81ADC1F8BEEDCB0A2F95B2 (PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Cam = GetComponentInChildren<Camera>().transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0(__this, Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___m_Cam_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Cam_8), (void*)L_1);
		// m_Pivot = m_Cam.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___m_Cam_8;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		__this->___m_Pivot_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Pivot_9), (void*)L_3);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.Cameras.PivotBasedCameraRig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PivotBasedCameraRig__ctor_m176687FB94C7FF07D4ED8B38A0529F370F9D51BA (PivotBasedCameraRig_tE8699B2333E99EFFD582AE4DCADCC8825D0ECC13* __this, const RuntimeMethod* method) 
{
	{
		AbstractTargetFollower__ctor_m7BA92F6CC37CDA403608738E4F6CB8EB43889A98(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_ClampMagnitude_m9F4DC26ED98E682A187F4B2AFEAB49CD376DF7CA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, float ___maxLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___vector0), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___maxLength1;
		float L_3 = ___maxLength1;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___vector0;
		float L_8 = L_7.___x_0;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___vector0;
		float L_11 = L_10.___y_1;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		float L_13 = V_3;
		float L_14 = ___maxLength1;
		float L_15 = V_4;
		float L_16 = ___maxLength1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), ((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)), /*hidden argument*/NULL);
		V_5 = L_17;
		goto IL_0045;
	}

IL_0040:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___vector0;
		V_5 = L_18;
		goto IL_0045;
	}

IL_0045:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_5;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_RotateTowards_mD7C332050D876CB28A704B9005476BE06823F85F_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___from0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___to1, float ___maxDegreesDelta2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___from0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___to1;
		float L_2;
		L_2 = Quaternion_Angle_m445E005E6F9211283EEA3F0BD4FF2DC20FE3640A_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) == ((float)(0.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___to1;
		V_2 = L_5;
		goto IL_0030;
	}

IL_0019:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___from0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___to1;
		float L_8 = ___maxDegreesDelta2;
		float L_9 = V_0;
		float L_10;
		L_10 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline((1.0f), ((float)(L_8/L_9)), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_SlerpUnclamped_mB38920352A1B11369D782F78E183568CAFA82C0F(L_6, L_7, L_10, NULL);
		V_2 = L_11;
		goto IL_0030;
	}

IL_0030:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BulletSpeed_SetHitTransform_m3BB7B03267F8FE4EF627101B7B5A714D9B449829_inline (BulletSpeed_t5936A27BD9985DE9C7C490C64B3A94F3A143754D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___hitTransform0, const RuntimeMethod* method) 
{
	{
		// hitPoint = hitTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___hitTransform0;
		__this->___hitPoint_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hitPoint_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m445E005E6F9211283EEA3F0BD4FF2DC20FE3640A_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___b1;
		float L_2;
		L_2 = Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4;
		L_4 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_3, (1.0f), NULL);
		V_0 = L_4;
		float L_5 = V_0;
		bool L_6;
		L_6 = Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		float L_7 = V_0;
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (2.0f))), (57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___dot0;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
