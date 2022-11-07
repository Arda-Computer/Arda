#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<Oculus.Interaction.HandGrab.AutoMoveTowardsTarget>
struct Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D;
// System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState>
struct Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110;
// System.Action`1<Oculus.Interaction.IInteractorView>
struct Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34;
// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs>
struct Action_1_t6FD8B79CDD506D49592A37BD0E0C9D68FC730BA5;
// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs>
struct Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Oculus.Interaction.PointerEvent>
struct Action_1_t16439AC0253118742562394ACC7B97D80B44200D;
// Oculus.Interaction.CollisionInteractionRegistry`2<Oculus.Interaction.HandGrab.HandGrabInteractor,Oculus.Interaction.HandGrab.HandGrabInteractable>
struct CollisionInteractionRegistry_2_t3D4A569998A2C68ACE15A065E19706DFBAFAD82A;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<Oculus.Interaction.HandGrab.HandGrabInteractable>
struct Func_1_tAD40283C53A59B14D0B6BA51E05D3DEA90D48058;
// System.Func`1<Oculus.Interaction.HandGrab.HandGrabUseInteractable>
struct Func_1_tE16FC4AD7BA30311615F106ADF829CCCD07D6924;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Collections.Generic.HashSet`1<Oculus.Interaction.HandGrab.HandGrabInteractor>
struct HashSet_1_t4BD39940C69C6158ED45A62A25D042319A82739F;
// System.Collections.Generic.HashSet`1<Oculus.Interaction.HandGrab.HandGrabUseInteractor>
struct HashSet_1_t1BC195317E9D6877918974D8C17C1D46144AC77C;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEnumerable`1<Oculus.Interaction.HandGrab.HandGrabPose>
struct IEnumerable_1_t36BBBF3535FEDF2C2D44D95D499AFA00430235F0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// Oculus.Interaction.InteractableRegistry`2<Oculus.Interaction.HandGrab.HandGrabInteractor,Oculus.Interaction.HandGrab.HandGrabInteractable>
struct InteractableRegistry_2_t3C651D0BAA9627B5AA997D4A55F888C5CFA2711F;
// Oculus.Interaction.InteractableRegistry`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>
struct InteractableRegistry_2_tF312D472EC904880D80DA181D54DABA3C503D4DC;
// Oculus.Interaction.InteractableRegistry`2<System.Object,System.Object>
struct InteractableRegistry_2_t8EFC4239DE1EFD29A8A89A869EE7B5A824303B7D;
// Oculus.Interaction.Interactable`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>
struct Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51;
// Oculus.Interaction.Interactable`2<System.Object,System.Object>
struct Interactable_2_t632FBB168CB990D64A8675C1947BBB76A646714F;
// Oculus.Interaction.Interactor`2<Oculus.Interaction.HandGrab.HandGrabInteractor,Oculus.Interaction.HandGrab.HandGrabInteractable>
struct Interactor_2_tDEB8B502D4B8649495429A2D3C8C19FBB586856A;
// Oculus.Interaction.Interactor`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>
struct Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B;
// Oculus.Interaction.Interactor`2<System.Object,System.Object>
struct Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32;
// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.AutoMoveTowardsTarget>
struct List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3;
// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose>
struct List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9;
// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabUseInteractable>
struct List_1_t90CB4EE243D9F029531CA4FE4F159EAE1E4903BA;
// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.Visuals.HandJointMap>
struct List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298;
// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter>
struct List_1_tCC32A86B64F8E49343B08DDC627752C2AF21ACA4;
// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>
struct List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Oculus.Interaction.Tween/TweenCurve>
struct List_1_tA3DDB8C7A7F18B23A830E60EE4869349D0C75546;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.HandGrab.HandGrabInteractable>
struct MultiAction_1_tDF8EB0C65DC073FC189A98201F9981C9BA5A466B;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.HandGrab.HandGrabInteractor>
struct MultiAction_1_t492B74E9266CA5C060D9FA5553EC1826D78FF9E3;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.HandGrab.HandGrabUseInteractable>
struct MultiAction_1_t123B9E7AB49662FD3E658BEE40A42A537C8714B4;
// Oculus.Interaction.MultiAction`1<Oculus.Interaction.HandGrab.HandGrabUseInteractor>
struct MultiAction_1_tE62DAE3901A4BDB3E7C2B5E6D5775581228ACED5;
// Oculus.Interaction.MultiAction`1<System.Object>
struct MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3;
// System.Predicate`1<Oculus.Interaction.HandGrab.Visuals.HandJointMap>
struct Predicate_1_tC0F10360EFB8F3D70115A87A93FEDD66CE179939;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Collections.Generic.Queue`1<System.Boolean>
struct Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77;
// Oculus.Interaction.Input.HandJointId[][]
struct HandJointIdU5BU5DU5BU5D_t1DC046AC63897C632167728753D5B5AA8412A244;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// Oculus.Interaction.HandGrab.AutoMoveTowardsTarget[]
struct AutoMoveTowardsTargetU5BU5D_tB779A37440C57DAD11006C99B3F1238D2642F096;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Oculus.Interaction.Input.HandFinger[]
struct HandFingerU5BU5D_t5CD937F49C0BC1B9170C45F066E7F6BE862554E2;
// Oculus.Interaction.HandGrab.HandGrabPose[]
struct HandGrabPoseU5BU5D_tED20F953CF0CF2D3E2E3B9B620B742F7F1D20795;
// Oculus.Interaction.Input.HandJointId[]
struct HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587;
// Oculus.Interaction.HandGrab.Visuals.HandJointMap[]
struct HandJointMapU5BU5D_tE11F188A9DF82EEBCDE488D9CEF418C6E8320330;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// Oculus.Interaction.Input.JointFreedom[]
struct JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// Oculus.Interaction.HandGrab.AutoMoveTowardsTarget
struct AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA;
// Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider
struct AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Oculus.Interaction.HandGrab.FollowTarget
struct FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB;
// Oculus.Interaction.HandGrab.FollowTargetProvider
struct FollowTargetProvider_tEAF324DD11C2B03960560CBCB3C928A360C79492;
// Oculus.Interaction.HandGrab.GrabPoseFinder
struct GrabPoseFinder_t2FC4591CBABC43392D019EA3064277B629DF77D3;
// Oculus.Interaction.HandGrab.Visuals.HandGhost
struct HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154;
// Oculus.Interaction.HandGrab.Visuals.HandGhostProvider
struct HandGhostProvider_t4CD53E9BA943CD4AB32C1A73852996949A03428C;
// Oculus.Interaction.GrabAPI.HandGrabAPI
struct HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787;
// Oculus.Interaction.HandGrab.HandGrabInteractable
struct HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127;
// Oculus.Interaction.HandGrab.HandGrabInteractor
struct HandGrabInteractor_t9A01E021BC9142BD8CCE6BC1458A89E38CF8152D;
// Oculus.Interaction.HandGrab.HandGrabPose
struct HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633;
// Oculus.Interaction.HandGrab.HandGrabResult
struct HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B;
// Oculus.Interaction.HandGrab.HandGrabTarget
struct HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2;
// Oculus.Interaction.HandGrab.HandGrabUseInteractable
struct HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4;
// Oculus.Interaction.HandGrab.HandGrabUseInteractor
struct HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575;
// Oculus.Interaction.Grab.HandGrabbableData
struct HandGrabbableData_t70DB908DBA5946A4D14E6EA8E20C2BF3B83EE7BD;
// Oculus.Interaction.HandGrab.Visuals.HandJointMap
struct HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70;
// Oculus.Interaction.HandGrab.HandPose
struct HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733;
// Oculus.Interaction.HandGrab.Visuals.HandPuppet
struct HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93;
// Oculus.Interaction.IActiveState
struct IActiveState_tE0F401037570483F58CD8CD4ED2A862D494517EB;
// Oculus.Interaction.IFingerUseAPI
struct IFingerUseAPI_t2E54300BBAA0D2A2536D3A576AE87B701C8E8A06;
// Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface
struct IGrabSurface_tD42EAF58D327A36F75A49E36263B9B1558CA4ED7;
// Oculus.Interaction.Input.IHand
struct IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5;
// Oculus.Interaction.HandGrab.IHandGrabState
struct IHandGrabState_tC77D510040D546EC5D2619EDF975A466DA5BADFB;
// Oculus.Interaction.HandGrab.IHandGrabUseDelegate
struct IHandGrabUseDelegate_t3F62775D7E6ABA1030ED9655920F633832C2E467;
// Oculus.Interaction.IMovement
struct IMovement_t636D9C1ED5B84F85EA2F469377AEAEC4E17294EA;
// Oculus.Interaction.IMovementProvider
struct IMovementProvider_tF89A1ECDB010071D4F96A7E88B2343363BD834E1;
// Oculus.Interaction.IPointableElement
struct IPointableElement_t5D9695CD8759D692B8F8430451929CCB2EBF63F1;
// Oculus.Interaction.ISelector
struct ISelector_t67FC626DAEE009248843EA2CE7425D5CDFBEE730;
// Oculus.Interaction.Throw.IVelocityCalculator
struct IVelocityCalculator_t330C870F0625311FBA255F43606D62282186FF39;
// Oculus.Interaction.HandGrab.Visuals.JointCollection
struct JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Oculus.Interaction.HandGrab.MoveAtSourceProvider
struct MoveAtSourceProvider_tBBCD01E6850B9B1A1AC653AAB391AB5DFF447BC9;
// Oculus.Interaction.HandGrab.MoveFromTarget
struct MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2;
// Oculus.Interaction.HandGrab.MoveFromTargetProvider
struct MoveFromTargetProvider_t0BB14180BEF6C766D348E2873065C6173D2BAE9E;
// Oculus.Interaction.HandGrab.MoveRelativeToTarget
struct MoveRelativeToTarget_t81F9D1739B4EE088A5F6C1183A80B20AFC6C1F53;
// Oculus.Interaction.HandGrab.MoveTowardsTarget
struct MoveTowardsTarget_t253F3F7A83B2B8B2B66405D7DEE43F285324C608;
// Oculus.Interaction.HandGrab.MoveTowardsTargetProvider
struct MoveTowardsTargetProvider_t56437D74B9848593E3170C23598798B0873A7453;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Oculus.Interaction.HandGrab.ObjectPull
struct ObjectPull_tD1031CDA5079CA57992B11EC5BF46D5E75029DC4;
// Oculus.Interaction.HandGrab.ObjectPullProvider
struct ObjectPullProvider_t1958B720C7EEAFA0C80B609391803F4A57451F57;
// Oculus.Interaction.PhysicsGrabbable
struct PhysicsGrabbable_tD148E9FA4004FE544C31B83B6435EDAE852C61BF;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Oculus.Interaction.Tween
struct Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967;
// Oculus.Interaction.UniqueIdentifier
struct UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Oculus.Interaction.HandGrab.AutoMoveTowardsTarget/<>c
struct U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355;
// Oculus.Interaction.HandGrab.HandGrabInteractor/<>c
struct U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435;
// Oculus.Interaction.HandGrab.HandGrabInteractor/<>c__DisplayClass78_0
struct U3CU3Ec__DisplayClass78_0_t5E2D622AD3B31D04722EFEE1345BDE1843652310;
// Oculus.Interaction.HandGrab.HandGrabUseInteractor/<>c
struct U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6;
// Oculus.Interaction.HandGrab.Visuals.JointCollection/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t42CF4388422BEDD954E30C615D8F95DB40CFBF0B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t16439AC0253118742562394ACC7B97D80B44200D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t5437CBA93E9A995267594C6AA8CA47B4802C0A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t4195A536B4B2F14DAD0C3F8678507791A93EC849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFingerUseAPI_t2E54300BBAA0D2A2536D3A576AE87B701C8E8A06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGrabSurface_tD42EAF58D327A36F75A49E36263B9B1558CA4ED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHandGrabUseDelegate_t3F62775D7E6ABA1030ED9655920F633832C2E467_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointableElement_t5D9695CD8759D692B8F8430451929CCB2EBF63F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointable_t6C38207E57F79F53F59DC406EBD33D85E5BBFC72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MoveRelativeToTarget_t81F9D1739B4EE088A5F6C1183A80B20AFC6C1F53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MoveTowardsTarget_t253F3F7A83B2B8B2B66405D7DEE43F285324C608_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPull_tD1031CDA5079CA57992B11EC5BF46D5E75029DC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tC0F10360EFB8F3D70115A87A93FEDD66CE179939_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t42CF4388422BEDD954E30C615D8F95DB40CFBF0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AutoMoveTowardsTargetProvider_HandleAborted_m3E35D76D9017728C8722EB83F398A13044A01CA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AutoMoveTowardsTarget_HandlePointerEventRaised_m112BFE802412F6E02916DB1FEBF78766E715511D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisHandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127_m012C2EEE3BD64E4961FD6012333B0581D3A8AE52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisHandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633_m0835DE09189A0620828731AD8C384B4F87AAC7CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93_m99013C452832DD9880440E2E4258715CAFF7E8F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactable_2_Awake_mE132E6063A61D7FA5100C9EEF0302531DC3DD448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactable_2_SelectingInteractorAdded_m8B0214AA49EE68BFF137AB54B194ECE237764D88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactable_2_SelectingInteractorRemoved_m2D32ABABF88DAEB59119B2E598AFAAC2D6D12BFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactable_2__ctor_mEFEF0C21BF905F53C4168926AA4A7844ECD0676D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactable_2_get_Registry_m92AF8CDDED4AD88B6C822EC7364B48CB5E8F67E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2_Awake_m9A1ED987975C007AF0C0719BFA74F895C91C83CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2_DoHoverUpdate_mC7FA89ECAA480D000F6F321AF3EDC99C4F39050A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2_DoSelectUpdate_m6A59653594196F859820DE4A82395180EBAAFBA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2_InteractableSelected_m47FDF210967D346904F484E18C885CF1EE7E8EAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2_InteractableUnselected_m8ABE3C31881FCD85877830A2A5824D38F2EF9E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2__ctor_m763A26614E135B08429ADA69D99460D6CC5AC413_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2_get_Interactable_m29FFFE8E535715EB21D49E0A00CC5B4146593CFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2_get_Interactable_m3887264B10DEFFAC3050FB7599CA8BDCC5D8A659_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interactor_2_get_SelectedInteractable_m925884EB3C214482EBE3128C9B0F3067B359B6AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB7201F3DA3DAEE5E2C270A01C5DC90CDD6A2E1CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindIndex_m69887F993FAA7A96E76FA52A8460787B5E695992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCBDEF89CB18FD67BE9ACA733E113197AC808893C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0648F08A03E21695D42860113F1FF1A4B3E39D8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2CFCBD30AABBE54B41CBBF42140449B123820E4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5213B8756CC79A33A336ACB05FC3AEBDD73203AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA5D608E34E465C69D325BAA61B356DC6540053CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6C8E4C059ECD7EDE71AC309DCCA77FFC556E9E45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE1BB17F8B8501E40563161FE3F17C639F062A5FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m04166060D3E498580A01A000252762E2AE2A9B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9FE0898D90075160735205D491616AB82F6E6DD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB6E8B1A92A44C5EE095C97190554B9D136272194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__18_0_mB2752FFF6A598BB55677EC43176E608E366E5148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__58_0_mB9256BC7B97DE8DBFC54710014F00E3AADE33CC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__58_1_m15DE75BBB7BB5DF9D1AFD9E0DEA28CF4B4490BB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m08F5C3117AD635289AAEA9DA8E49903A89F3312F_RuntimeMethod_var;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com;;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Oculus.Interaction.InteractableRegistry`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>
struct InteractableRegistry_2_tF312D472EC904880D80DA181D54DABA3C503D4DC  : public RuntimeObject
{
};

struct InteractableRegistry_2_tF312D472EC904880D80DA181D54DABA3C503D4DC_StaticFields
{
	// System.Collections.Generic.List`1<TInteractable> Oculus.Interaction.InteractableRegistry`2::_interactables
	List_1_t90CB4EE243D9F029531CA4FE4F159EAE1E4903BA* ____interactables_0;
};

// Oculus.Interaction.InteractableRegistry`2<System.Object,System.Object>
struct InteractableRegistry_2_t8EFC4239DE1EFD29A8A89A869EE7B5A824303B7D  : public RuntimeObject
{
};

struct InteractableRegistry_2_t8EFC4239DE1EFD29A8A89A869EE7B5A824303B7D_StaticFields
{
	// System.Collections.Generic.List`1<TInteractable> Oculus.Interaction.InteractableRegistry`2::_interactables
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____interactables_0;
};

// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.AutoMoveTowardsTarget>
struct List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AutoMoveTowardsTargetU5BU5D_tB779A37440C57DAD11006C99B3F1238D2642F096* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AutoMoveTowardsTargetU5BU5D_tB779A37440C57DAD11006C99B3F1238D2642F096* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose>
struct List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	HandGrabPoseU5BU5D_tED20F953CF0CF2D3E2E3B9B620B742F7F1D20795* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	HandGrabPoseU5BU5D_tED20F953CF0CF2D3E2E3B9B620B742F7F1D20795* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.Visuals.HandJointMap>
struct List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	HandJointMapU5BU5D_tE11F188A9DF82EEBCDE488D9CEF418C6E8320330* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	HandJointMapU5BU5D_tE11F188A9DF82EEBCDE488D9CEF418C6E8320330* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// Oculus.Interaction.Input.FingersMetadata
struct FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E  : public RuntimeObject
{
};

struct FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields
{
	// Oculus.Interaction.Input.HandJointId[] Oculus.Interaction.Input.FingersMetadata::HAND_JOINT_IDS
	HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* ___HAND_JOINT_IDS_0;
	// System.Int32[][] Oculus.Interaction.Input.FingersMetadata::FINGER_TO_JOINT_INDEX
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___FINGER_TO_JOINT_INDEX_1;
	// Oculus.Interaction.Input.HandJointId[][] Oculus.Interaction.Input.FingersMetadata::FINGER_TO_JOINTS
	HandJointIdU5BU5DU5BU5D_t1DC046AC63897C632167728753D5B5AA8412A244* ___FINGER_TO_JOINTS_2;
	// System.Boolean[] Oculus.Interaction.Input.FingersMetadata::HAND_JOINT_CAN_SPREAD
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___HAND_JOINT_CAN_SPREAD_3;
	// Oculus.Interaction.Input.HandFinger[] Oculus.Interaction.Input.FingersMetadata::JOINT_TO_FINGER
	HandFingerU5BU5D_t5CD937F49C0BC1B9170C45F066E7F6BE862554E2* ___JOINT_TO_FINGER_4;
	// System.Int32[] Oculus.Interaction.Input.FingersMetadata::JOINT_TO_FINGER_INDEX
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___JOINT_TO_FINGER_INDEX_5;
};

// Oculus.Interaction.HandGrab.HandPose
struct HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733  : public RuntimeObject
{
	// Oculus.Interaction.Input.Handedness Oculus.Interaction.HandGrab.HandPose::_handedness
	int32_t ____handedness_0;
	// Oculus.Interaction.Input.JointFreedom[] Oculus.Interaction.HandGrab.HandPose::_fingersFreedom
	JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* ____fingersFreedom_1;
	// UnityEngine.Quaternion[] Oculus.Interaction.HandGrab.HandPose::_jointRotations
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____jointRotations_2;
};

// Oculus.Interaction.HandGrab.Visuals.JointCollection
struct JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C  : public RuntimeObject
{
	// System.Int32[] Oculus.Interaction.HandGrab.Visuals.JointCollection::_jointIndices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____jointIndices_0;
	// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.Visuals.HandJointMap> Oculus.Interaction.HandGrab.Visuals.JointCollection::_jointMaps
	List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298* ____jointMaps_1;
};

// Oculus.Interaction.UniqueIdentifier
struct UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342  : public RuntimeObject
{
	// System.Int32 Oculus.Interaction.UniqueIdentifier::<ID>k__BackingField
	int32_t ___U3CIDU3Ek__BackingField_0;
};

struct UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342_StaticFields
{
	// System.Random Oculus.Interaction.UniqueIdentifier::Random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___Random_1;
	// System.Collections.Generic.HashSet`1<System.Int32> Oculus.Interaction.UniqueIdentifier::_identifierSet
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ____identifierSet_2;
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

// Oculus.Interaction.HandGrab.AutoMoveTowardsTarget/<>c
struct U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355  : public RuntimeObject
{
};

struct U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_StaticFields
{
	// Oculus.Interaction.HandGrab.AutoMoveTowardsTarget/<>c Oculus.Interaction.HandGrab.AutoMoveTowardsTarget/<>c::<>9
	U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355* ___U3CU3E9_0;
	// System.Action`1<Oculus.Interaction.HandGrab.AutoMoveTowardsTarget> Oculus.Interaction.HandGrab.AutoMoveTowardsTarget/<>c::<>9__18_0
	Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D* ___U3CU3E9__18_0_1;
};

// Oculus.Interaction.HandGrab.HandGrabInteractor/<>c
struct U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435  : public RuntimeObject
{
};

struct U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435_StaticFields
{
	// Oculus.Interaction.HandGrab.HandGrabInteractor/<>c Oculus.Interaction.HandGrab.HandGrabInteractor/<>c::<>9
	U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435* ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Oculus.Interaction.HandGrab.HandGrabInteractor/<>c::<>9__79_0
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3E9__79_0_1;
	// System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState> Oculus.Interaction.HandGrab.HandGrabInteractor/<>c::<>9__93_0
	Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* ___U3CU3E9__93_0_2;
	// System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState> Oculus.Interaction.HandGrab.HandGrabInteractor/<>c::<>9__93_1
	Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* ___U3CU3E9__93_1_3;
};

// Oculus.Interaction.HandGrab.HandGrabInteractor/<>c__DisplayClass78_0
struct U3CU3Ec__DisplayClass78_0_t5E2D622AD3B31D04722EFEE1345BDE1843652310  : public RuntimeObject
{
	// Oculus.Interaction.HandGrab.HandGrabInteractable Oculus.Interaction.HandGrab.HandGrabInteractor/<>c__DisplayClass78_0::interactable
	HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* ___interactable_0;
	// Oculus.Interaction.HandGrab.HandGrabInteractor Oculus.Interaction.HandGrab.HandGrabInteractor/<>c__DisplayClass78_0::<>4__this
	HandGrabInteractor_t9A01E021BC9142BD8CCE6BC1458A89E38CF8152D* ___U3CU3E4__this_1;
};

// Oculus.Interaction.HandGrab.HandGrabUseInteractor/<>c
struct U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6  : public RuntimeObject
{
};

struct U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_StaticFields
{
	// Oculus.Interaction.HandGrab.HandGrabUseInteractor/<>c Oculus.Interaction.HandGrab.HandGrabUseInteractor/<>c::<>9
	U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6* ___U3CU3E9_0;
	// System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState> Oculus.Interaction.HandGrab.HandGrabUseInteractor/<>c::<>9__58_0
	Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* ___U3CU3E9__58_0_1;
	// System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState> Oculus.Interaction.HandGrab.HandGrabUseInteractor/<>c::<>9__58_1
	Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* ___U3CU3E9__58_1_2;
};

// Oculus.Interaction.HandGrab.Visuals.JointCollection/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t42CF4388422BEDD954E30C615D8F95DB40CFBF0B  : public RuntimeObject
{
	// Oculus.Interaction.Input.HandJointId Oculus.Interaction.HandGrab.Visuals.JointCollection/<>c__DisplayClass2_0::boneId
	int32_t ___boneId_0;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// Oculus.Interaction.GrabAPI.GrabbingRule
struct GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D 
{
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_thumbRequirement
	int32_t ____thumbRequirement_0;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_indexRequirement
	int32_t ____indexRequirement_1;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_middleRequirement
	int32_t ____middleRequirement_2;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_ringRequirement
	int32_t ____ringRequirement_3;
	// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::_pinkyRequirement
	int32_t ____pinkyRequirement_4;
	// Oculus.Interaction.GrabAPI.FingerUnselectMode Oculus.Interaction.GrabAPI.GrabbingRule::_unselectMode
	int32_t ____unselectMode_5;
};

struct GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D_StaticFields
{
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::<DefaultPalmRule>k__BackingField
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___U3CDefaultPalmRuleU3Ek__BackingField_6;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::<DefaultPinchRule>k__BackingField
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___U3CDefaultPinchRuleU3Ek__BackingField_7;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.GrabAPI.GrabbingRule::<FullGrab>k__BackingField
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___U3CFullGrabU3Ek__BackingField_8;
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

// Oculus.Interaction.Grab.PoseMeasureParameters
struct PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363 
{
	// System.Single Oculus.Interaction.Grab.PoseMeasureParameters::_maxDistance
	float ____maxDistance_0;
	// System.Single Oculus.Interaction.Grab.PoseMeasureParameters::_positionRotationWeight
	float ____positionRotationWeight_1;
};

struct PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363_StaticFields
{
	// Oculus.Interaction.Grab.PoseMeasureParameters Oculus.Interaction.Grab.PoseMeasureParameters::DEFAULT
	PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363 ___DEFAULT_2;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=17
struct __StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB__padding[17];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68
struct __StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5__padding[68];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9__padding[96];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::0299EA23B40AFFB6F2D4C56761D939F88BEAEDFFC98799B1D0011E2FC867A388
	__StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5 ___0299EA23B40AFFB6F2D4C56761D939F88BEAEDFFC98799B1D0011E2FC867A388_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::1085AB18045526E0E6BC49579C2783F82561DA676F694D26D184D6EB7F99118F
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___1085AB18045526E0E6BC49579C2783F82561DA676F694D26D184D6EB7F99118F_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::32D25725828EB444D141C82FB6F3FE5F46BC72A69AC4DEB861BA8130F035E2E7
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___32D25725828EB444D141C82FB6F3FE5F46BC72A69AC4DEB861BA8130F035E2E7_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::3CF966F20334243238BDC191F80FA740E98ACF8F5FDD0CA2DCCE683C1542EEDF
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___3CF966F20334243238BDC191F80FA740E98ACF8F5FDD0CA2DCCE683C1542EEDF_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::407885E61A69335134A1F85FD82A94E871508B8B6E33095F8E39FAEAC298C63E
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___407885E61A69335134A1F85FD82A94E871508B8B6E33095F8E39FAEAC298C63E_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::418D8378E48059C857D5F7CA8BE28422B288CAAD519525F1A1FF93F68F825B97
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___418D8378E48059C857D5F7CA8BE28422B288CAAD519525F1A1FF93F68F825B97_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::4F26A554B65395F540C074E9557877CF00BC194281240AB820E5297B8C499C70
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___4F26A554B65395F540C074E9557877CF00BC194281240AB820E5297B8C499C70_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::5B3F9EC0646608DAE43294162F92F82B97E7011A2BFA51A25FE477D18BDC6B21
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___5B3F9EC0646608DAE43294162F92F82B97E7011A2BFA51A25FE477D18BDC6B21_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6FD4287A48C4D2CF873A476F8EA1781656383AE265F2F2FAE9C6B9F159863EFE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___6FD4287A48C4D2CF873A476F8EA1781656383AE265F2F2FAE9C6B9F159863EFE_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::8E1614B69F720DC37A9ED6825E1DD7A6656F63DD9ABE7D0A48C911FD2DC418CE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___8E1614B69F720DC37A9ED6825E1DD7A6656F63DD9ABE7D0A48C911FD2DC418CE_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::918234F629EBF0C84BFE41B60824833200105B6094AB357EE6A872A28F2BAD6A
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___918234F629EBF0C84BFE41B60824833200105B6094AB357EE6A872A28F2BAD6A_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::9290AB548294BA6BFDDD1E2EE079ABB3E02A463A085D6CFA86701AE11DAF4E85
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___9290AB548294BA6BFDDD1E2EE079ABB3E02A463A085D6CFA86701AE11DAF4E85_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::94AD2BDBB6455BBF8B60747E6C5D85F859F15DFEDAAE84DA39E8AF4D5F07BFC9
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___94AD2BDBB6455BBF8B60747E6C5D85F859F15DFEDAAE84DA39E8AF4D5F07BFC9_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9C3B1F31D79675E772863CCCEEBB691C9A6C10718B45796B5DA322FB6C7A4881
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___9C3B1F31D79675E772863CCCEEBB691C9A6C10718B45796B5DA322FB6C7A4881_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::A634C1261CFDC51CA97439046CF09516F654F96F8A99317B3DE5965811495B3D
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___A634C1261CFDC51CA97439046CF09516F654F96F8A99317B3DE5965811495B3D_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BEFD47F245DFF15422B7998AF33B5BFB32F8CDB3B32232065909F28F4DCD91A1
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___BEFD47F245DFF15422B7998AF33B5BFB32F8CDB3B32232065909F28F4DCD91A1_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::C1C0669C18711EC44EABC6FF99E1BCB996C6B892AF94287F5CC4B8774138D7AC
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___C1C0669C18711EC44EABC6FF99E1BCB996C6B892AF94287F5CC4B8774138D7AC_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::CE99AE045C8B2A2A8A58FD1A2120956E74E90322EEF45F7DFE1CA73EEFE655D4
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___CE99AE045C8B2A2A8A58FD1A2120956E74E90322EEF45F7DFE1CA73EEFE655D4_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::CFDD61EEBBC699DC56E78F04CF5CCE1896957BC5D29AF2B21468B62CD1E759C5
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___CFDD61EEBBC699DC56E78F04CF5CCE1896957BC5D29AF2B21468B62CD1E759C5_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=17 <PrivateImplementationDetails>::D421CA4F288D780319BC80684387DE61CF750142A8AC39A87240A6CB9261F552
	__StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB ___D421CA4F288D780319BC80684387DE61CF750142A8AC39A87240A6CB9261F552_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D8C9807AE9FA3FFE054D614675E4FD8DEE163272C453DEA596107ABE48E4412B
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___D8C9807AE9FA3FFE054D614675E4FD8DEE163272C453DEA596107ABE48E4412B_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D9F6C3F18D26E171FCA762EBF56C34EA1CAAF992D3AF8F901BC55595F2BE125F
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___D9F6C3F18D26E171FCA762EBF56C34EA1CAAF992D3AF8F901BC55595F2BE125F_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::E0757700FBD2A0A111F78FE8D30FA1BEC4ABECC6B52669266B91208535F9647A
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___E0757700FBD2A0A111F78FE8D30FA1BEC4ABECC6B52669266B91208535F9647A_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::E54A423CAFA0DAA9A176E7D9CB32B41C39E2A6BF367AA389214A3FC6A1044F78
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___E54A423CAFA0DAA9A176E7D9CB32B41C39E2A6BF367AA389214A3FC6A1044F78_33;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
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

// Oculus.Interaction.Input.HandJointId
struct HandJointId_t112B251DAEDE9EF4C669D039AB9CE6B2A01AB898 
{
	// System.Int32 Oculus.Interaction.Input.HandJointId::value__
	int32_t ___value___2;
};

// Oculus.Interaction.HandGrab.Visuals.HandJointMap
struct HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70  : public RuntimeObject
{
	// Oculus.Interaction.Input.HandJointId Oculus.Interaction.HandGrab.Visuals.HandJointMap::id
	int32_t ___id_0;
	// UnityEngine.Transform Oculus.Interaction.HandGrab.Visuals.HandJointMap::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_1;
	// UnityEngine.Vector3 Oculus.Interaction.HandGrab.Visuals.HandJointMap::rotationOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationOffset_2;
};

// Oculus.Interaction.Input.JointFreedom
struct JointFreedom_tF6851AF256BDF4B02750F92160070BDF1F3B14A9 
{
	// System.Int32 Oculus.Interaction.Input.JointFreedom::value__
	int32_t ___value___2;
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

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Oculus.Interaction.HandGrab.FollowTarget
struct FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB  : public RuntimeObject
{
	// System.Single Oculus.Interaction.HandGrab.FollowTarget::_speed
	float ____speed_0;
	// UnityEngine.Transform Oculus.Interaction.HandGrab.FollowTarget::_space
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____space_1;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.FollowTarget::_localTarget
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____localTarget_2;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.FollowTarget::_localPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____localPose_3;
	// System.Single Oculus.Interaction.HandGrab.FollowTarget::_startTime
	float ____startTime_4;
};

// Oculus.Interaction.HandGrab.HandGrabPoseData
struct HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 
{
	// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabPoseData::gripPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gripPose_0;
	// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabPoseData::handPose
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___handPose_1;
	// System.Single Oculus.Interaction.HandGrab.HandGrabPoseData::scale
	float ___scale_2;
};
// Native definition for P/Invoke marshalling of Oculus.Interaction.HandGrab.HandGrabPoseData
struct HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815_marshaled_pinvoke
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gripPose_0;
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___handPose_1;
	float ___scale_2;
};
// Native definition for COM marshalling of Oculus.Interaction.HandGrab.HandGrabPoseData
struct HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815_marshaled_com
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gripPose_0;
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___handPose_1;
	float ___scale_2;
};

// Oculus.Interaction.HandGrab.HandGrabResult
struct HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B  : public RuntimeObject
{
	// System.Boolean Oculus.Interaction.HandGrab.HandGrabResult::HasHandPose
	bool ___HasHandPose_0;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabResult::SnapPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___SnapPose_1;
	// System.Single Oculus.Interaction.HandGrab.HandGrabResult::Score
	float ___Score_2;
	// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabResult::HandPose
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___HandPose_3;
};

// Oculus.Interaction.HandGrab.HandGrabTarget
struct HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2  : public RuntimeObject
{
	// Oculus.Interaction.HandGrab.HandGrabTarget/GrabAnchor Oculus.Interaction.HandGrab.HandGrabTarget::<Anchor>k__BackingField
	int32_t ___U3CAnchorU3Ek__BackingField_0;
	// System.Boolean Oculus.Interaction.HandGrab.HandGrabTarget::_isHandPoseValid
	bool ____isHandPoseValid_1;
	// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabTarget::_handPose
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ____handPose_2;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabTarget::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_3;
	// UnityEngine.Transform Oculus.Interaction.HandGrab.HandGrabTarget::_relativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____relativeTo_4;
	// Oculus.Interaction.HandGrab.HandAlignType Oculus.Interaction.HandGrab.HandGrabTarget::_handAlignment
	int32_t ____handAlignment_5;
};

// Oculus.Interaction.HandGrab.MoveFromTarget
struct MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2  : public RuntimeObject
{
	// UnityEngine.Pose Oculus.Interaction.HandGrab.MoveFromTarget::<Pose>k__BackingField
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CPoseU3Ek__BackingField_0;
};

// Oculus.Interaction.HandGrab.MoveRelativeToTarget
struct MoveRelativeToTarget_t81F9D1739B4EE088A5F6C1183A80B20AFC6C1F53  : public RuntimeObject
{
	// UnityEngine.Pose Oculus.Interaction.HandGrab.MoveRelativeToTarget::_current
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____current_0;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.MoveRelativeToTarget::_originalTarget
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____originalTarget_1;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.MoveRelativeToTarget::_originalSource
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____originalSource_2;
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

// Oculus.Interaction.HandGrab.ObjectPull
struct ObjectPull_tD1031CDA5079CA57992B11EC5BF46D5E75029DC4  : public RuntimeObject
{
	// System.Single Oculus.Interaction.HandGrab.ObjectPull::_speed
	float ____speed_0;
	// System.Single Oculus.Interaction.HandGrab.ObjectPull::_deadZone
	float ____deadZone_1;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.ObjectPull::_current
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____current_2;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.ObjectPull::_grabberStartPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____grabberStartPose_3;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.ObjectPull::_grabbableStartPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____grabbableStartPose_4;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.ObjectPull::_target
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____target_5;
	// UnityEngine.Plane Oculus.Interaction.HandGrab.ObjectPull::_pullingPlane
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ____pullingPlane_6;
	// UnityEngine.Vector3 Oculus.Interaction.HandGrab.ObjectPull::_translationDelta
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____translationDelta_7;
	// System.Single Oculus.Interaction.HandGrab.ObjectPull::_lastTime
	float ____lastTime_8;
	// System.Single Oculus.Interaction.HandGrab.ObjectPull::_originalDistance
	float ____originalDistance_9;
	// System.Boolean Oculus.Interaction.HandGrab.ObjectPull::_reachedGrabber
	bool ____reachedGrabber_10;
};

// Oculus.Interaction.PointerEvent
struct PointerEvent_tAEB047AC9AE96DA96400B3C6FA88E56C917608BC 
{
	// System.Int32 Oculus.Interaction.PointerEvent::<Identifier>k__BackingField
	int32_t ___U3CIdentifierU3Ek__BackingField_0;
	// Oculus.Interaction.PointerEventType Oculus.Interaction.PointerEvent::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_1;
	// UnityEngine.Pose Oculus.Interaction.PointerEvent::<Pose>k__BackingField
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CPoseU3Ek__BackingField_2;
	// System.Object Oculus.Interaction.PointerEvent::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of Oculus.Interaction.PointerEvent
struct PointerEvent_tAEB047AC9AE96DA96400B3C6FA88E56C917608BC_marshaled_pinvoke
{
	int32_t ___U3CIdentifierU3Ek__BackingField_0;
	int32_t ___U3CTypeU3Ek__BackingField_1;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CPoseU3Ek__BackingField_2;
	Il2CppIUnknown* ___U3CDataU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Oculus.Interaction.PointerEvent
struct PointerEvent_tAEB047AC9AE96DA96400B3C6FA88E56C917608BC_marshaled_com
{
	int32_t ___U3CIdentifierU3Ek__BackingField_0;
	int32_t ___U3CTypeU3Ek__BackingField_1;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CPoseU3Ek__BackingField_2;
	Il2CppIUnknown* ___U3CDataU3Ek__BackingField_3;
};

// Oculus.Interaction.HandGrab.PoseTravelData
struct PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 
{
	// System.Single Oculus.Interaction.HandGrab.PoseTravelData::_travelSpeed
	float ____travelSpeed_0;
	// System.Boolean Oculus.Interaction.HandGrab.PoseTravelData::_useFixedTravelTime
	bool ____useFixedTravelTime_1;
	// UnityEngine.AnimationCurve Oculus.Interaction.HandGrab.PoseTravelData::_travelCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____travelCurve_2;
};
// Native definition for P/Invoke marshalling of Oculus.Interaction.HandGrab.PoseTravelData
struct PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshaled_pinvoke
{
	float ____travelSpeed_0;
	int32_t ____useFixedTravelTime_1;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke ____travelCurve_2;
};
// Native definition for COM marshalling of Oculus.Interaction.HandGrab.PoseTravelData
struct PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshaled_com
{
	float ____travelSpeed_0;
	int32_t ____useFixedTravelTime_1;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com* ____travelCurve_2;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// Oculus.Interaction.Tween
struct Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Oculus.Interaction.Tween/TweenCurve> Oculus.Interaction.Tween::_tweenCurves
	List_1_tA3DDB8C7A7F18B23A830E60EE4869349D0C75546* ____tweenCurves_0;
	// UnityEngine.Pose Oculus.Interaction.Tween::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_1;
	// UnityEngine.Pose Oculus.Interaction.Tween::_startPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____startPose_2;
	// System.Single Oculus.Interaction.Tween::_maxOverlapTime
	float ____maxOverlapTime_3;
	// System.Single Oculus.Interaction.Tween::_tweenTime
	float ____tweenTime_4;
	// UnityEngine.AnimationCurve Oculus.Interaction.Tween::_animationCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____animationCurve_5;
};

// System.Action`1<Oculus.Interaction.HandGrab.AutoMoveTowardsTarget>
struct Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D  : public MulticastDelegate_t
{
};

// System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState>
struct Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<Oculus.Interaction.PointerEvent>
struct Action_1_t16439AC0253118742562394ACC7B97D80B44200D  : public MulticastDelegate_t
{
};

// System.Predicate`1<Oculus.Interaction.HandGrab.Visuals.HandJointMap>
struct Predicate_1_tC0F10360EFB8F3D70115A87A93FEDD66CE179939  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// Oculus.Interaction.HandGrab.AutoMoveTowardsTarget
struct AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA  : public RuntimeObject
{
	// Oculus.Interaction.HandGrab.PoseTravelData Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::_travellingData
	PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ____travellingData_0;
	// Oculus.Interaction.IPointableElement Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::_pointableElement
	RuntimeObject* ____pointableElement_1;
	// System.Boolean Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::<Aborting>k__BackingField
	bool ___U3CAbortingU3Ek__BackingField_2;
	// System.Action`1<Oculus.Interaction.HandGrab.AutoMoveTowardsTarget> Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::WhenAborted
	Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D* ___WhenAborted_3;
	// Oculus.Interaction.UniqueIdentifier Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::_identifier
	UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342* ____identifier_4;
	// Oculus.Interaction.Tween Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::_tween
	Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* ____tween_5;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::_target
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____target_6;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::_source
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____source_7;
	// System.Boolean Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::_eventRegistered
	bool ____eventRegistered_8;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Oculus.Interaction.HandGrab.Visuals.HandGhostProvider
struct HandGhostProvider_t4CD53E9BA943CD4AB32C1A73852996949A03428C  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Oculus.Interaction.HandGrab.Visuals.HandGhost Oculus.Interaction.HandGrab.Visuals.HandGhostProvider::_leftHand
	HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* ____leftHand_4;
	// Oculus.Interaction.HandGrab.Visuals.HandGhost Oculus.Interaction.HandGrab.Visuals.HandGhostProvider::_rightHand
	HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* ____rightHand_5;
};

// Oculus.Interaction.HandGrab.MoveTowardsTarget
struct MoveTowardsTarget_t253F3F7A83B2B8B2B66405D7DEE43F285324C608  : public RuntimeObject
{
	// Oculus.Interaction.HandGrab.PoseTravelData Oculus.Interaction.HandGrab.MoveTowardsTarget::_travellingData
	PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ____travellingData_0;
	// Oculus.Interaction.Tween Oculus.Interaction.HandGrab.MoveTowardsTarget::_tween
	Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* ____tween_1;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.MoveTowardsTarget::_source
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____source_2;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.MoveTowardsTarget::_target
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____target_3;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Oculus.Interaction.Interactable`2<Oculus.Interaction.HandGrab.HandGrabInteractor,Oculus.Interaction.HandGrab.HandGrabInteractable>
struct Interactable_2_t0C57DB71612721B0D014BF5C96627CE442E3A56D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> Oculus.Interaction.Interactable`2::_interactorFilters
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ____interactorFilters_4;
	// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter> Oculus.Interaction.Interactable`2::InteractorFilters
	List_1_tCC32A86B64F8E49343B08DDC627752C2AF21ACA4* ___InteractorFilters_5;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxInteractors
	int32_t ____maxInteractors_6;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxSelectingInteractors
	int32_t ____maxSelectingInteractors_7;
	// UnityEngine.Object Oculus.Interaction.Interactable`2::_data
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____data_8;
	// System.Object Oculus.Interaction.Interactable`2::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_9;
	// System.Collections.Generic.HashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_interactors
	HashSet_1_t4BD39940C69C6158ED45A62A25D042319A82739F* ____interactors_10;
	// System.Collections.Generic.HashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_selectingInteractors
	HashSet_1_t4BD39940C69C6158ED45A62A25D042319A82739F* ____selectingInteractors_11;
	// Oculus.Interaction.InteractableState Oculus.Interaction.Interactable`2::_state
	int32_t ____state_12;
	// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs> Oculus.Interaction.Interactable`2::WhenStateChanged
	Action_1_t6FD8B79CDD506D49592A37BD0E0C9D68FC730BA5* ___WhenStateChanged_13;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenInteractorViewAdded
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenInteractorViewAdded_14;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenInteractorViewRemoved
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenInteractorViewRemoved_15;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenSelectingInteractorViewAdded
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenSelectingInteractorViewAdded_16;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenSelectingInteractorViewRemoved
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenSelectingInteractorViewRemoved_17;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorAdded
	MultiAction_1_t492B74E9266CA5C060D9FA5553EC1826D78FF9E3* ____whenInteractorAdded_18;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorRemoved
	MultiAction_1_t492B74E9266CA5C060D9FA5553EC1826D78FF9E3* ____whenInteractorRemoved_19;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorAdded
	MultiAction_1_t492B74E9266CA5C060D9FA5553EC1826D78FF9E3* ____whenSelectingInteractorAdded_20;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorRemoved
	MultiAction_1_t492B74E9266CA5C060D9FA5553EC1826D78FF9E3* ____whenSelectingInteractorRemoved_21;
};

struct Interactable_2_t0C57DB71612721B0D014BF5C96627CE442E3A56D_StaticFields
{
	// Oculus.Interaction.InteractableRegistry`2<TInteractor,TInteractable> Oculus.Interaction.Interactable`2::_registry
	InteractableRegistry_2_t3C651D0BAA9627B5AA997D4A55F888C5CFA2711F* ____registry_22;
};

// Oculus.Interaction.Interactable`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>
struct Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> Oculus.Interaction.Interactable`2::_interactorFilters
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ____interactorFilters_4;
	// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter> Oculus.Interaction.Interactable`2::InteractorFilters
	List_1_tCC32A86B64F8E49343B08DDC627752C2AF21ACA4* ___InteractorFilters_5;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxInteractors
	int32_t ____maxInteractors_6;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxSelectingInteractors
	int32_t ____maxSelectingInteractors_7;
	// UnityEngine.Object Oculus.Interaction.Interactable`2::_data
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____data_8;
	// System.Object Oculus.Interaction.Interactable`2::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_9;
	// System.Collections.Generic.HashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_interactors
	HashSet_1_t1BC195317E9D6877918974D8C17C1D46144AC77C* ____interactors_10;
	// System.Collections.Generic.HashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_selectingInteractors
	HashSet_1_t1BC195317E9D6877918974D8C17C1D46144AC77C* ____selectingInteractors_11;
	// Oculus.Interaction.InteractableState Oculus.Interaction.Interactable`2::_state
	int32_t ____state_12;
	// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs> Oculus.Interaction.Interactable`2::WhenStateChanged
	Action_1_t6FD8B79CDD506D49592A37BD0E0C9D68FC730BA5* ___WhenStateChanged_13;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenInteractorViewAdded
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenInteractorViewAdded_14;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenInteractorViewRemoved
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenInteractorViewRemoved_15;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenSelectingInteractorViewAdded
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenSelectingInteractorViewAdded_16;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenSelectingInteractorViewRemoved
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenSelectingInteractorViewRemoved_17;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorAdded
	MultiAction_1_tE62DAE3901A4BDB3E7C2B5E6D5775581228ACED5* ____whenInteractorAdded_18;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorRemoved
	MultiAction_1_tE62DAE3901A4BDB3E7C2B5E6D5775581228ACED5* ____whenInteractorRemoved_19;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorAdded
	MultiAction_1_tE62DAE3901A4BDB3E7C2B5E6D5775581228ACED5* ____whenSelectingInteractorAdded_20;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorRemoved
	MultiAction_1_tE62DAE3901A4BDB3E7C2B5E6D5775581228ACED5* ____whenSelectingInteractorRemoved_21;
};

struct Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51_StaticFields
{
	// Oculus.Interaction.InteractableRegistry`2<TInteractor,TInteractable> Oculus.Interaction.Interactable`2::_registry
	InteractableRegistry_2_tF312D472EC904880D80DA181D54DABA3C503D4DC* ____registry_22;
};

// Oculus.Interaction.Interactable`2<System.Object,System.Object>
struct Interactable_2_t632FBB168CB990D64A8675C1947BBB76A646714F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> Oculus.Interaction.Interactable`2::_interactorFilters
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ____interactorFilters_4;
	// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter> Oculus.Interaction.Interactable`2::InteractorFilters
	List_1_tCC32A86B64F8E49343B08DDC627752C2AF21ACA4* ___InteractorFilters_5;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxInteractors
	int32_t ____maxInteractors_6;
	// System.Int32 Oculus.Interaction.Interactable`2::_maxSelectingInteractors
	int32_t ____maxSelectingInteractors_7;
	// UnityEngine.Object Oculus.Interaction.Interactable`2::_data
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____data_8;
	// System.Object Oculus.Interaction.Interactable`2::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_9;
	// System.Collections.Generic.HashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_interactors
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____interactors_10;
	// System.Collections.Generic.HashSet`1<TInteractor> Oculus.Interaction.Interactable`2::_selectingInteractors
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____selectingInteractors_11;
	// Oculus.Interaction.InteractableState Oculus.Interaction.Interactable`2::_state
	int32_t ____state_12;
	// System.Action`1<Oculus.Interaction.InteractableStateChangeArgs> Oculus.Interaction.Interactable`2::WhenStateChanged
	Action_1_t6FD8B79CDD506D49592A37BD0E0C9D68FC730BA5* ___WhenStateChanged_13;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenInteractorViewAdded
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenInteractorViewAdded_14;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenInteractorViewRemoved
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenInteractorViewRemoved_15;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenSelectingInteractorViewAdded
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenSelectingInteractorViewAdded_16;
	// System.Action`1<Oculus.Interaction.IInteractorView> Oculus.Interaction.Interactable`2::WhenSelectingInteractorViewRemoved
	Action_1_tD87AE2D351A24813699E18DFFF25AB725A668A34* ___WhenSelectingInteractorViewRemoved_17;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorAdded
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractorAdded_18;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenInteractorRemoved
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractorRemoved_19;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorAdded
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenSelectingInteractorAdded_20;
	// Oculus.Interaction.MultiAction`1<TInteractor> Oculus.Interaction.Interactable`2::_whenSelectingInteractorRemoved
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenSelectingInteractorRemoved_21;
};

struct Interactable_2_t632FBB168CB990D64A8675C1947BBB76A646714F_StaticFields
{
	// Oculus.Interaction.InteractableRegistry`2<TInteractor,TInteractable> Oculus.Interaction.Interactable`2::_registry
	InteractableRegistry_2_t8EFC4239DE1EFD29A8A89A869EE7B5A824303B7D* ____registry_22;
};

// Oculus.Interaction.Interactor`2<Oculus.Interaction.HandGrab.HandGrabInteractor,Oculus.Interaction.HandGrab.HandGrabInteractable>
struct Interactor_2_tDEB8B502D4B8649495429A2D3C8C19FBB586856A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Interactor`2::_activeState
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____activeState_4;
	// Oculus.Interaction.IActiveState Oculus.Interaction.Interactor`2::ActiveState
	RuntimeObject* ___ActiveState_5;
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> Oculus.Interaction.Interactor`2::_interactableFilters
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ____interactableFilters_6;
	// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter> Oculus.Interaction.Interactor`2::InteractableFilters
	List_1_tCC32A86B64F8E49343B08DDC627752C2AF21ACA4* ___InteractableFilters_7;
	// System.Func`1<TInteractable> Oculus.Interaction.Interactor`2::_computeCandidateOverride
	Func_1_tAD40283C53A59B14D0B6BA51E05D3DEA90D48058* ____computeCandidateOverride_8;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeCandidateOverrideOnSelect
	bool ____clearComputeCandidateOverrideOnSelect_9;
	// System.Func`1<System.Boolean> Oculus.Interaction.Interactor`2::_computeShouldSelectOverride
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ____computeShouldSelectOverride_10;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeShouldSelectOverrideOnSelect
	bool ____clearComputeShouldSelectOverrideOnSelect_11;
	// System.Func`1<System.Boolean> Oculus.Interaction.Interactor`2::_computeShouldUnselectOverride
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ____computeShouldUnselectOverride_12;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeShouldUnselectOverrideOnUnselect
	bool ____clearComputeShouldUnselectOverrideOnUnselect_13;
	// Oculus.Interaction.InteractorState Oculus.Interaction.Interactor`2::_state
	int32_t ____state_14;
	// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs> Oculus.Interaction.Interactor`2::WhenStateChanged
	Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* ___WhenStateChanged_15;
	// System.Action Oculus.Interaction.Interactor`2::WhenPreprocessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenPreprocessed_16;
	// System.Action Oculus.Interaction.Interactor`2::WhenProcessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenProcessed_17;
	// System.Action Oculus.Interaction.Interactor`2::WhenPostprocessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenPostprocessed_18;
	// Oculus.Interaction.ISelector Oculus.Interaction.Interactor`2::_selector
	RuntimeObject* ____selector_19;
	// System.Int32 Oculus.Interaction.Interactor`2::_maxIterationsPerFrame
	int32_t ____maxIterationsPerFrame_20;
	// System.Collections.Generic.Queue`1<System.Boolean> Oculus.Interaction.Interactor`2::_selectorQueue
	Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* ____selectorQueue_21;
	// TInteractable Oculus.Interaction.Interactor`2::_candidate
	HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* ____candidate_22;
	// TInteractable Oculus.Interaction.Interactor`2::_interactable
	HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* ____interactable_23;
	// TInteractable Oculus.Interaction.Interactor`2::_selectedInteractable
	HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* ____selectedInteractable_24;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSet
	MultiAction_1_tDF8EB0C65DC073FC189A98201F9981C9BA5A466B* ____whenInteractableSet_25;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnset
	MultiAction_1_tDF8EB0C65DC073FC189A98201F9981C9BA5A466B* ____whenInteractableUnset_26;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSelected
	MultiAction_1_tDF8EB0C65DC073FC189A98201F9981C9BA5A466B* ____whenInteractableSelected_27;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnselected
	MultiAction_1_tDF8EB0C65DC073FC189A98201F9981C9BA5A466B* ____whenInteractableUnselected_28;
	// Oculus.Interaction.UniqueIdentifier Oculus.Interaction.Interactor`2::_identifier
	UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342* ____identifier_29;
	// UnityEngine.Object Oculus.Interaction.Interactor`2::_data
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____data_30;
	// System.Object Oculus.Interaction.Interactor`2::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_31;
	// System.Boolean Oculus.Interaction.Interactor`2::_started
	bool ____started_32;
	// System.Boolean Oculus.Interaction.Interactor`2::<IsRootDriver>k__BackingField
	bool ___U3CIsRootDriverU3Ek__BackingField_33;
};

// Oculus.Interaction.Interactor`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>
struct Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Interactor`2::_activeState
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____activeState_4;
	// Oculus.Interaction.IActiveState Oculus.Interaction.Interactor`2::ActiveState
	RuntimeObject* ___ActiveState_5;
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> Oculus.Interaction.Interactor`2::_interactableFilters
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ____interactableFilters_6;
	// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter> Oculus.Interaction.Interactor`2::InteractableFilters
	List_1_tCC32A86B64F8E49343B08DDC627752C2AF21ACA4* ___InteractableFilters_7;
	// System.Func`1<TInteractable> Oculus.Interaction.Interactor`2::_computeCandidateOverride
	Func_1_tE16FC4AD7BA30311615F106ADF829CCCD07D6924* ____computeCandidateOverride_8;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeCandidateOverrideOnSelect
	bool ____clearComputeCandidateOverrideOnSelect_9;
	// System.Func`1<System.Boolean> Oculus.Interaction.Interactor`2::_computeShouldSelectOverride
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ____computeShouldSelectOverride_10;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeShouldSelectOverrideOnSelect
	bool ____clearComputeShouldSelectOverrideOnSelect_11;
	// System.Func`1<System.Boolean> Oculus.Interaction.Interactor`2::_computeShouldUnselectOverride
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ____computeShouldUnselectOverride_12;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeShouldUnselectOverrideOnUnselect
	bool ____clearComputeShouldUnselectOverrideOnUnselect_13;
	// Oculus.Interaction.InteractorState Oculus.Interaction.Interactor`2::_state
	int32_t ____state_14;
	// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs> Oculus.Interaction.Interactor`2::WhenStateChanged
	Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* ___WhenStateChanged_15;
	// System.Action Oculus.Interaction.Interactor`2::WhenPreprocessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenPreprocessed_16;
	// System.Action Oculus.Interaction.Interactor`2::WhenProcessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenProcessed_17;
	// System.Action Oculus.Interaction.Interactor`2::WhenPostprocessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenPostprocessed_18;
	// Oculus.Interaction.ISelector Oculus.Interaction.Interactor`2::_selector
	RuntimeObject* ____selector_19;
	// System.Int32 Oculus.Interaction.Interactor`2::_maxIterationsPerFrame
	int32_t ____maxIterationsPerFrame_20;
	// System.Collections.Generic.Queue`1<System.Boolean> Oculus.Interaction.Interactor`2::_selectorQueue
	Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* ____selectorQueue_21;
	// TInteractable Oculus.Interaction.Interactor`2::_candidate
	HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* ____candidate_22;
	// TInteractable Oculus.Interaction.Interactor`2::_interactable
	HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* ____interactable_23;
	// TInteractable Oculus.Interaction.Interactor`2::_selectedInteractable
	HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* ____selectedInteractable_24;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSet
	MultiAction_1_t123B9E7AB49662FD3E658BEE40A42A537C8714B4* ____whenInteractableSet_25;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnset
	MultiAction_1_t123B9E7AB49662FD3E658BEE40A42A537C8714B4* ____whenInteractableUnset_26;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSelected
	MultiAction_1_t123B9E7AB49662FD3E658BEE40A42A537C8714B4* ____whenInteractableSelected_27;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnselected
	MultiAction_1_t123B9E7AB49662FD3E658BEE40A42A537C8714B4* ____whenInteractableUnselected_28;
	// Oculus.Interaction.UniqueIdentifier Oculus.Interaction.Interactor`2::_identifier
	UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342* ____identifier_29;
	// UnityEngine.Object Oculus.Interaction.Interactor`2::_data
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____data_30;
	// System.Object Oculus.Interaction.Interactor`2::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_31;
	// System.Boolean Oculus.Interaction.Interactor`2::_started
	bool ____started_32;
	// System.Boolean Oculus.Interaction.Interactor`2::<IsRootDriver>k__BackingField
	bool ___U3CIsRootDriverU3Ek__BackingField_33;
};

// Oculus.Interaction.Interactor`2<System.Object,System.Object>
struct Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.Interactor`2::_activeState
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____activeState_4;
	// Oculus.Interaction.IActiveState Oculus.Interaction.Interactor`2::ActiveState
	RuntimeObject* ___ActiveState_5;
	// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> Oculus.Interaction.Interactor`2::_interactableFilters
	List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ____interactableFilters_6;
	// System.Collections.Generic.List`1<Oculus.Interaction.IGameObjectFilter> Oculus.Interaction.Interactor`2::InteractableFilters
	List_1_tCC32A86B64F8E49343B08DDC627752C2AF21ACA4* ___InteractableFilters_7;
	// System.Func`1<TInteractable> Oculus.Interaction.Interactor`2::_computeCandidateOverride
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ____computeCandidateOverride_8;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeCandidateOverrideOnSelect
	bool ____clearComputeCandidateOverrideOnSelect_9;
	// System.Func`1<System.Boolean> Oculus.Interaction.Interactor`2::_computeShouldSelectOverride
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ____computeShouldSelectOverride_10;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeShouldSelectOverrideOnSelect
	bool ____clearComputeShouldSelectOverrideOnSelect_11;
	// System.Func`1<System.Boolean> Oculus.Interaction.Interactor`2::_computeShouldUnselectOverride
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ____computeShouldUnselectOverride_12;
	// System.Boolean Oculus.Interaction.Interactor`2::_clearComputeShouldUnselectOverrideOnUnselect
	bool ____clearComputeShouldUnselectOverrideOnUnselect_13;
	// Oculus.Interaction.InteractorState Oculus.Interaction.Interactor`2::_state
	int32_t ____state_14;
	// System.Action`1<Oculus.Interaction.InteractorStateChangeArgs> Oculus.Interaction.Interactor`2::WhenStateChanged
	Action_1_tF10F105A4DDC047C8B0A5EACE0FDADCE23B3D513* ___WhenStateChanged_15;
	// System.Action Oculus.Interaction.Interactor`2::WhenPreprocessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenPreprocessed_16;
	// System.Action Oculus.Interaction.Interactor`2::WhenProcessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenProcessed_17;
	// System.Action Oculus.Interaction.Interactor`2::WhenPostprocessed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenPostprocessed_18;
	// Oculus.Interaction.ISelector Oculus.Interaction.Interactor`2::_selector
	RuntimeObject* ____selector_19;
	// System.Int32 Oculus.Interaction.Interactor`2::_maxIterationsPerFrame
	int32_t ____maxIterationsPerFrame_20;
	// System.Collections.Generic.Queue`1<System.Boolean> Oculus.Interaction.Interactor`2::_selectorQueue
	Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* ____selectorQueue_21;
	// TInteractable Oculus.Interaction.Interactor`2::_candidate
	RuntimeObject* ____candidate_22;
	// TInteractable Oculus.Interaction.Interactor`2::_interactable
	RuntimeObject* ____interactable_23;
	// TInteractable Oculus.Interaction.Interactor`2::_selectedInteractable
	RuntimeObject* ____selectedInteractable_24;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSet
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractableSet_25;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnset
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractableUnset_26;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableSelected
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractableSelected_27;
	// Oculus.Interaction.MultiAction`1<TInteractable> Oculus.Interaction.Interactor`2::_whenInteractableUnselected
	MultiAction_1_t37896912B022FC254BEA493339F3CCA3AF4AB2E3* ____whenInteractableUnselected_28;
	// Oculus.Interaction.UniqueIdentifier Oculus.Interaction.Interactor`2::_identifier
	UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342* ____identifier_29;
	// UnityEngine.Object Oculus.Interaction.Interactor`2::_data
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____data_30;
	// System.Object Oculus.Interaction.Interactor`2::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_31;
	// System.Boolean Oculus.Interaction.Interactor`2::_started
	bool ____started_32;
	// System.Boolean Oculus.Interaction.Interactor`2::<IsRootDriver>k__BackingField
	bool ___U3CIsRootDriverU3Ek__BackingField_33;
};

// Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider
struct AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.HandGrab.PoseTravelData Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::_travellingData
	PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ____travellingData_4;
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::_pointableElement
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____pointableElement_5;
	// Oculus.Interaction.IPointableElement Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::<PointableElement>k__BackingField
	RuntimeObject* ___U3CPointableElementU3Ek__BackingField_6;
	// System.Boolean Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::_started
	bool ____started_7;
	// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.AutoMoveTowardsTarget> Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::_movers
	List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3* ____movers_8;
};

// Oculus.Interaction.HandGrab.FollowTargetProvider
struct FollowTargetProvider_tEAF324DD11C2B03960560CBCB3C928A360C79492  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Oculus.Interaction.HandGrab.FollowTargetProvider::_speed
	float ____speed_4;
	// UnityEngine.Transform Oculus.Interaction.HandGrab.FollowTargetProvider::_space
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____space_5;
};

// Oculus.Interaction.HandGrab.Visuals.HandGhost
struct HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.HandGrab.Visuals.HandPuppet Oculus.Interaction.HandGrab.Visuals.HandGhost::_puppet
	HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* ____puppet_4;
	// Oculus.Interaction.HandGrab.HandGrabPose Oculus.Interaction.HandGrab.Visuals.HandGhost::_handGrabPose
	HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* ____handGrabPose_5;
};

// Oculus.Interaction.HandGrab.HandGrabPose
struct HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Oculus.Interaction.HandGrab.HandGrabPose::_relativeTo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____relativeTo_4;
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandGrab.HandGrabPose::_surface
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____surface_5;
	// Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface Oculus.Interaction.HandGrab.HandGrabPose::_snapSurface
	RuntimeObject* ____snapSurface_6;
	// System.Boolean Oculus.Interaction.HandGrab.HandGrabPose::_usesHandPose
	bool ____usesHandPose_7;
	// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabPose::_handPose
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ____handPose_8;
};

// Oculus.Interaction.HandGrab.Visuals.HandPuppet
struct HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.Visuals.HandJointMap> Oculus.Interaction.HandGrab.Visuals.HandPuppet::_jointMaps
	List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298* ____jointMaps_4;
	// Oculus.Interaction.HandGrab.Visuals.JointCollection Oculus.Interaction.HandGrab.Visuals.HandPuppet::_jointsCache
	JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C* ____jointsCache_5;
};

// Oculus.Interaction.HandGrab.MoveAtSourceProvider
struct MoveAtSourceProvider_tBBCD01E6850B9B1A1AC653AAB391AB5DFF447BC9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.HandGrab.MoveFromTargetProvider
struct MoveFromTargetProvider_t0BB14180BEF6C766D348E2873065C6173D2BAE9E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Oculus.Interaction.HandGrab.MoveTowardsTargetProvider
struct MoveTowardsTargetProvider_t56437D74B9848593E3170C23598798B0873A7453  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.HandGrab.PoseTravelData Oculus.Interaction.HandGrab.MoveTowardsTargetProvider::_travellingData
	PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ____travellingData_4;
};

// Oculus.Interaction.HandGrab.ObjectPullProvider
struct ObjectPullProvider_t1958B720C7EEAFA0C80B609391803F4A57451F57  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Oculus.Interaction.HandGrab.ObjectPullProvider::_speed
	float ____speed_4;
	// System.Single Oculus.Interaction.HandGrab.ObjectPullProvider::_deadZone
	float ____deadZone_5;
};

// Oculus.Interaction.PointerInteractable`2<Oculus.Interaction.HandGrab.HandGrabInteractor,Oculus.Interaction.HandGrab.HandGrabInteractable>
struct PointerInteractable_2_t8BF63CEBEF62497024EAE339EF9406311B875CF9  : public Interactable_2_t0C57DB71612721B0D014BF5C96627CE442E3A56D
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.PointerInteractable`2::_pointableElement
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____pointableElement_23;
	// Oculus.Interaction.IPointableElement Oculus.Interaction.PointerInteractable`2::<PointableElement>k__BackingField
	RuntimeObject* ___U3CPointableElementU3Ek__BackingField_24;
	// System.Action`1<Oculus.Interaction.PointerEvent> Oculus.Interaction.PointerInteractable`2::WhenPointerEventRaised
	Action_1_t16439AC0253118742562394ACC7B97D80B44200D* ___WhenPointerEventRaised_25;
	// System.Boolean Oculus.Interaction.PointerInteractable`2::_started
	bool ____started_26;
};

// Oculus.Interaction.PointerInteractor`2<Oculus.Interaction.HandGrab.HandGrabInteractor,Oculus.Interaction.HandGrab.HandGrabInteractable>
struct PointerInteractor_2_t82B2BA88782F3AB6AEDC75F0FCB9A93310D6302B  : public Interactor_2_tDEB8B502D4B8649495429A2D3C8C19FBB586856A
{
};

// Oculus.Interaction.HandGrab.HandGrabUseInteractable
struct HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4  : public Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandGrab.HandGrabUseInteractable::_handUseDelegate
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____handUseDelegate_23;
	// Oculus.Interaction.HandGrab.IHandGrabUseDelegate Oculus.Interaction.HandGrab.HandGrabUseInteractable::<HandUseDelegate>k__BackingField
	RuntimeObject* ___U3CHandUseDelegateU3Ek__BackingField_24;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.HandGrab.HandGrabUseInteractable::_useFingers
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ____useFingers_25;
	// System.Single Oculus.Interaction.HandGrab.HandGrabUseInteractable::_strengthDeadzone
	float ____strengthDeadzone_26;
	// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose> Oculus.Interaction.HandGrab.HandGrabUseInteractable::_relaxedHandGrabPoses
	List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* ____relaxedHandGrabPoses_27;
	// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose> Oculus.Interaction.HandGrab.HandGrabUseInteractable::_tightHandGrabPoses
	List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* ____tightHandGrabPoses_28;
	// System.Single Oculus.Interaction.HandGrab.HandGrabUseInteractable::<UseProgress>k__BackingField
	float ___U3CUseProgressU3Ek__BackingField_29;
};

// Oculus.Interaction.HandGrab.HandGrabUseInteractor
struct HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575  : public Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandGrab.HandGrabUseInteractor::_hand
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____hand_34;
	// Oculus.Interaction.Input.IHand Oculus.Interaction.HandGrab.HandGrabUseInteractor::<Hand>k__BackingField
	RuntimeObject* ___U3CHandU3Ek__BackingField_35;
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandGrab.HandGrabUseInteractor::_useAPI
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____useAPI_36;
	// Oculus.Interaction.IFingerUseAPI Oculus.Interaction.HandGrab.HandGrabUseInteractor::<UseAPI>k__BackingField
	RuntimeObject* ___U3CUseAPIU3Ek__BackingField_37;
	// Oculus.Interaction.HandGrab.HandGrabTarget Oculus.Interaction.HandGrab.HandGrabUseInteractor::_currentTarget
	HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* ____currentTarget_38;
	// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabUseInteractor::_relaxedHandPose
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ____relaxedHandPose_39;
	// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabUseInteractor::_tightHandPose
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ____tightHandPose_40;
	// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabUseInteractor::_cachedRelaxedHandPose
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ____cachedRelaxedHandPose_41;
	// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabUseInteractor::_cachedTightHandPose
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ____cachedTightHandPose_42;
	// Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.HandGrab.HandGrabUseInteractor::_fingersInUse
	int32_t ____fingersInUse_43;
	// System.Single[] Oculus.Interaction.HandGrab.HandGrabUseInteractor::_fingerUseStrength
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____fingerUseStrength_44;
	// System.Boolean Oculus.Interaction.HandGrab.HandGrabUseInteractor::_usesHandPose
	bool ____usesHandPose_45;
	// System.Boolean Oculus.Interaction.HandGrab.HandGrabUseInteractor::_handUseShouldSelect
	bool ____handUseShouldSelect_46;
	// System.Boolean Oculus.Interaction.HandGrab.HandGrabUseInteractor::_handUseShouldUnselect
	bool ____handUseShouldUnselect_47;
	// System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState> Oculus.Interaction.HandGrab.HandGrabUseInteractor::<WhenHandGrabStarted>k__BackingField
	Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* ___U3CWhenHandGrabStartedU3Ek__BackingField_48;
	// System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState> Oculus.Interaction.HandGrab.HandGrabUseInteractor::<WhenHandGrabEnded>k__BackingField
	Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* ___U3CWhenHandGrabEndedU3Ek__BackingField_49;
};

// Oculus.Interaction.HandGrab.HandGrabInteractable
struct HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127  : public PointerInteractable_2_t8BF63CEBEF62497024EAE339EF9406311B875CF9
{
	// UnityEngine.Rigidbody Oculus.Interaction.HandGrab.HandGrabInteractable::_rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidbody_27;
	// System.Boolean Oculus.Interaction.HandGrab.HandGrabInteractable::_resetGrabOnGrabsUpdated
	bool ____resetGrabOnGrabsUpdated_28;
	// Oculus.Interaction.PhysicsGrabbable Oculus.Interaction.HandGrab.HandGrabInteractable::_physicsGrabbable
	PhysicsGrabbable_tD148E9FA4004FE544C31B83B6435EDAE852C61BF* ____physicsGrabbable_29;
	// Oculus.Interaction.Grab.PoseMeasureParameters Oculus.Interaction.HandGrab.HandGrabInteractable::_scoringModifier
	PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363 ____scoringModifier_30;
	// Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.HandGrab.HandGrabInteractable::_supportedGrabTypes
	int32_t ____supportedGrabTypes_31;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.HandGrab.HandGrabInteractable::_pinchGrabRules
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ____pinchGrabRules_32;
	// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.HandGrab.HandGrabInteractable::_palmGrabRules
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ____palmGrabRules_33;
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandGrab.HandGrabInteractable::_movementProvider
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____movementProvider_34;
	// Oculus.Interaction.IMovementProvider Oculus.Interaction.HandGrab.HandGrabInteractable::<MovementProvider>k__BackingField
	RuntimeObject* ___U3CMovementProviderU3Ek__BackingField_35;
	// Oculus.Interaction.HandGrab.HandAlignType Oculus.Interaction.HandGrab.HandGrabInteractable::_handAligment
	int32_t ____handAligment_36;
	// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose> Oculus.Interaction.HandGrab.HandGrabInteractable::_handGrabPoses
	List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* ____handGrabPoses_37;
	// UnityEngine.Collider[] Oculus.Interaction.HandGrab.HandGrabInteractable::<Colliders>k__BackingField
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___U3CCollidersU3Ek__BackingField_38;
	// Oculus.Interaction.HandGrab.GrabPoseFinder Oculus.Interaction.HandGrab.HandGrabInteractable::_grabPoseFinder
	GrabPoseFinder_t2FC4591CBABC43392D019EA3064277B629DF77D3* ____grabPoseFinder_39;
};

struct HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127_StaticFields
{
	// Oculus.Interaction.CollisionInteractionRegistry`2<Oculus.Interaction.HandGrab.HandGrabInteractor,Oculus.Interaction.HandGrab.HandGrabInteractable> Oculus.Interaction.HandGrab.HandGrabInteractable::_registry
	CollisionInteractionRegistry_2_t3D4A569998A2C68ACE15A065E19706DFBAFAD82A* ____registry_40;
};

// Oculus.Interaction.HandGrab.HandGrabInteractor
struct HandGrabInteractor_t9A01E021BC9142BD8CCE6BC1458A89E38CF8152D  : public PointerInteractor_2_t82B2BA88782F3AB6AEDC75F0FCB9A93310D6302B
{
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandGrab.HandGrabInteractor::_hand
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____hand_34;
	// Oculus.Interaction.Input.IHand Oculus.Interaction.HandGrab.HandGrabInteractor::<Hand>k__BackingField
	RuntimeObject* ___U3CHandU3Ek__BackingField_35;
	// UnityEngine.Rigidbody Oculus.Interaction.HandGrab.HandGrabInteractor::_rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidbody_36;
	// Oculus.Interaction.GrabAPI.HandGrabAPI Oculus.Interaction.HandGrab.HandGrabInteractor::_handGrabApi
	HandGrabAPI_tC01EECBC2ADA4AC37EC064B470A93CBD44CB8787* ____handGrabApi_37;
	// Oculus.Interaction.Grab.GrabTypeFlags Oculus.Interaction.HandGrab.HandGrabInteractor::_supportedGrabTypes
	int32_t ____supportedGrabTypes_38;
	// System.Boolean Oculus.Interaction.HandGrab.HandGrabInteractor::_hoverOnZeroStrength
	bool ____hoverOnZeroStrength_39;
	// UnityEngine.Transform Oculus.Interaction.HandGrab.HandGrabInteractor::_gripPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____gripPoint_40;
	// UnityEngine.SphereCollider Oculus.Interaction.HandGrab.HandGrabInteractor::_gripCollider
	SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* ____gripCollider_41;
	// UnityEngine.Transform Oculus.Interaction.HandGrab.HandGrabInteractor::_pinchPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____pinchPoint_42;
	// UnityEngine.SphereCollider Oculus.Interaction.HandGrab.HandGrabInteractor::_pinchCollider
	SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* ____pinchCollider_43;
	// UnityEngine.MonoBehaviour Oculus.Interaction.HandGrab.HandGrabInteractor::_velocityCalculator
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ____velocityCalculator_44;
	// Oculus.Interaction.Throw.IVelocityCalculator Oculus.Interaction.HandGrab.HandGrabInteractor::<VelocityCalculator>k__BackingField
	RuntimeObject* ___U3CVelocityCalculatorU3Ek__BackingField_45;
	// Oculus.Interaction.HandGrab.HandGrabTarget Oculus.Interaction.HandGrab.HandGrabInteractor::_currentTarget
	HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* ____currentTarget_46;
	// Oculus.Interaction.HandGrab.HandGrabResult Oculus.Interaction.HandGrab.HandGrabInteractor::_cachedResult
	HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* ____cachedResult_47;
	// Oculus.Interaction.IMovement Oculus.Interaction.HandGrab.HandGrabInteractor::_movement
	RuntimeObject* ____movement_48;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabInteractor::_wristToGrabAnchorOffset
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____wristToGrabAnchorOffset_49;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabInteractor::_wristPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____wristPose_50;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabInteractor::_gripPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____gripPose_51;
	// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabInteractor::_pinchPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pinchPose_52;
	// Oculus.Interaction.Grab.HandGrabbableData Oculus.Interaction.HandGrab.HandGrabInteractor::_lastInteractableData
	HandGrabbableData_t70DB908DBA5946A4D14E6EA8E20C2BF3B83EE7BD* ____lastInteractableData_53;
	// System.Boolean Oculus.Interaction.HandGrab.HandGrabInteractor::_handGrabShouldSelect
	bool ____handGrabShouldSelect_54;
	// System.Boolean Oculus.Interaction.HandGrab.HandGrabInteractor::_handGrabShouldUnselect
	bool ____handGrabShouldUnselect_55;
	// Oculus.Interaction.HandGrab.HandGrabInteractable Oculus.Interaction.HandGrab.HandGrabInteractor::_selectedInteractableOverride
	HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* ____selectedInteractableOverride_56;
	// System.Single Oculus.Interaction.HandGrab.HandGrabInteractor::_grabStrength
	float ____grabStrength_57;
	// Oculus.Interaction.HandGrab.HandGrabTarget Oculus.Interaction.HandGrab.HandGrabInteractor::<HandGrabTarget>k__BackingField
	HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* ___U3CHandGrabTargetU3Ek__BackingField_58;
	// System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState> Oculus.Interaction.HandGrab.HandGrabInteractor::<WhenHandGrabStarted>k__BackingField
	Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* ___U3CWhenHandGrabStartedU3Ek__BackingField_59;
	// System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState> Oculus.Interaction.HandGrab.HandGrabInteractor::<WhenHandGrabEnded>k__BackingField
	Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* ___U3CWhenHandGrabEndedU3Ek__BackingField_60;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
	}
};
// Oculus.Interaction.Input.HandJointId[]
struct HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Oculus.Interaction.Input.JointFreedom[]
struct JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E  : public RuntimeArray
{
	ALIGN_FIELD (8) Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* m_Items[1];

	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
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

IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke(const AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354& unmarshaled, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_back(const AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke& marshaled, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354& unmarshaled);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_cleanup(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_com(const AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354& unmarshaled, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com& marshaled);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_com_back(const AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com& marshaled, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354& unmarshaled);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_com_cleanup(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com& marshaled);

// TInteractable Oculus.Interaction.Interactor`2<System.Object,System.Object>::get_Interactable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Interactor_2_get_Interactable_mF7BA57CB616205BA5E3AA22FA8FC51AEC21CDF0D_gshared_inline (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, const RuntimeMethod* method) ;
// TInteractable Oculus.Interaction.Interactor`2<System.Object,System.Object>::get_SelectedInteractable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Interactor_2_get_SelectedInteractable_m41004AA167C324EB9F1E1CE294883634C5A67D06_gshared_inline (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactable`2<System.Object,System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactable_2_Awake_mCA60E26D413F07855B950DA0868179FEEA799936_gshared (Interactable_2_t632FBB168CB990D64A8675C1947BBB76A646714F* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactable`2<System.Object,System.Object>::SelectingInteractorAdded(TInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactable_2_SelectingInteractorAdded_m5D162B61FA68A684A134CEC027D332B24082AB7E_gshared (Interactable_2_t632FBB168CB990D64A8675C1947BBB76A646714F* __this, RuntimeObject* ___interactor0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactable`2<System.Object,System.Object>::SelectingInteractorRemoved(TInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactable_2_SelectingInteractorRemoved_m27F7D6A19DD75F071E3958816802EDDA834B092B_gshared (Interactable_2_t632FBB168CB990D64A8675C1947BBB76A646714F* __this, RuntimeObject* ___interactor0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactable`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactable_2__ctor_mE447B6ED1772A1744902556DEF8FA2070DC035F0_gshared (Interactable_2_t632FBB168CB990D64A8675C1947BBB76A646714F* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactor`2<System.Object,System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactor_2_Awake_mD37E95AE48AC3ED843805450946BAACDBEBB3B0B_gshared (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactor`2<System.Object,System.Object>::InteractableSelected(TInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactor_2_InteractableSelected_m68CD809BE807A74E9CE79BA25F9F99C19C5EE51F_gshared (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, RuntimeObject* ___interactable0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactor`2<System.Object,System.Object>::InteractableUnselected(TInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactor_2_InteractableUnselected_mFC988BF3E485BDED6969BBBB0B9130868EC6BC0D_gshared (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, RuntimeObject* ___interactable0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactor`2<System.Object,System.Object>::DoHoverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactor_2_DoHoverUpdate_mE05EECB8EC62A2DEBF43EBD8E0EBA59C031483FA_gshared (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactor`2<System.Object,System.Object>::DoSelectUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactor_2_DoSelectUpdate_m02F6911604E854CD9533809C0ED01C7B085064A2_gshared (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.InteractableRegistry`2<TInteractor,TInteractable> Oculus.Interaction.Interactable`2<System.Object,System.Object>::get_Registry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InteractableRegistry_2_t8EFC4239DE1EFD29A8A89A869EE7B5A824303B7D* Interactable_2_get_Registry_mDFDFFE264623ECD27E68CFCA53895A246C2CAB83_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactor`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interactor_2__ctor_m415638C6B95899012B0ACB5E9ABA8AF9D4A92FE3_gshared (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Oculus.Interaction.PointerEvent>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m4052E43C460A30441C3F436AC271D3F5CDC77FA4_gshared (Action_1_t16439AC0253118742562394ACC7B97D80B44200D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TInteractable Oculus.Interaction.Interactor`2<Oculus.Interaction.HandGrab.HandGrabInteractor,Oculus.Interaction.HandGrab.HandGrabInteractable>::get_Interactable()
inline HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* Interactor_2_get_Interactable_m29FFFE8E535715EB21D49E0A00CC5B4146593CFD_inline (Interactor_2_tDEB8B502D4B8649495429A2D3C8C19FBB586856A* __this, const RuntimeMethod* method)
{
	return ((  HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* (*) (Interactor_2_tDEB8B502D4B8649495429A2D3C8C19FBB586856A*, const RuntimeMethod*))Interactor_2_get_Interactable_mF7BA57CB616205BA5E3AA22FA8FC51AEC21CDF0D_gshared_inline)(__this, method);
}
// TInteractable Oculus.Interaction.Interactor`2<Oculus.Interaction.HandGrab.HandGrabInteractor,Oculus.Interaction.HandGrab.HandGrabInteractable>::get_SelectedInteractable()
inline HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* Interactor_2_get_SelectedInteractable_m925884EB3C214482EBE3128C9B0F3067B359B6AC_inline (Interactor_2_tDEB8B502D4B8649495429A2D3C8C19FBB586856A* __this, const RuntimeMethod* method)
{
	return ((  HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* (*) (Interactor_2_tDEB8B502D4B8649495429A2D3C8C19FBB586856A*, const RuntimeMethod*))Interactor_2_get_SelectedInteractable_m41004AA167C324EB9F1E1CE294883634C5A67D06_gshared_inline)(__this, method);
}
// System.Void Oculus.Interaction.HandGrab.HandGrabInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m968AB0E6E8B279BD5E4957CE3F93A2DD720FC1B9 (U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Oculus.Interaction.HandGrab.HandGrabPose::get_RelativeTo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* HandGrabPose_get_RelativeTo_m5DFEA3BC65DF4B58C8BB75628AFB81A18B9399C4_inline (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.PoseUtils::Delta(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseUtils_Delta_mA69E60E49416BCF8F5368B7CED7342B4260DB53B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___from0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___to1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<Oculus.Interaction.HandGrab.HandGrabInteractable>()
inline HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* Component_GetComponentInParent_TisHandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127_m012C2EEE3BD64E4961FD6012333B0581D3A8AE52 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.Transform Oculus.Interaction.HandGrab.HandGrabInteractable::get_RelativeTo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* HandGrabInteractable_get_RelativeTo_m2ADE4A16C9C91A9EEAC7E31E609D9001AA8A37E1 (HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.HandPose::.ctor(Oculus.Interaction.HandGrab.HandPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose__ctor_m9564CB8D7FBA544FEDE69E0BAB1749324D6E3FE9 (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___other0, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.PoseUtils::GlobalPose(UnityEngine.Transform,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseUtils_GlobalPose_m6B6464C721166ABEE4B301A3296ED085B428BD7F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___reference0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___offset1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::SetPose(UnityEngine.Transform,UnityEngine.Pose&,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_SetPose_m6C9BE185A66754389A49FD711DEE68A07DE059BB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, int32_t ___space2, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandGrab.HandGrabPose::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabPose_get_Scale_m81C543AFB691B4902FA1F46E71A5304AFDB4C6A3 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabPose::get_HandPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.Handedness Oculus.Interaction.HandGrab.HandPose::get_Handedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPose_get_Handedness_m21EDF49CE58ECD438C557618E3092D7E1462A88C_inline (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandGrab.HandGrabPose::CompareNearPoses(UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabPose_CompareNearPoses_m72A078673AE3385CB184B2E78D1C01AB74AEDA7D (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___worldPoint0, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363 ___scoringModifier1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestSnapPoint2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.HandPose::CopyFrom(Oculus.Interaction.HandGrab.HandPose,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_CopyFrom_mC60EE82AF04119C195F5738410C669828A1591A2 (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___from0, bool ___mirrorHandedness1, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.PoseUtils::GetPose(UnityEngine.Transform,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseUtils_GetPose_m913669538E46AA3E2671EFA9B84A6E449C05886D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, int32_t ___space1, const RuntimeMethod* method) ;
// Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface Oculus.Interaction.HandGrab.HandGrabPose::get_SnapSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandGrabPose_get_SnapSurface_m2C5A8B3FBF155B55CE52BABC41998ACA596CB724 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.Grab.GrabPoseHelper::Similarity(UnityEngine.Pose&,UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GrabPoseHelper_Similarity_m68DC649614CDF1482005AC4F2258D94D4E766EFC (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___from0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___to1, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363 ___scoringModifier2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::Delta(UnityEngine.Transform,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_Delta_mABAFADB4B68627F3FE0AE79403D0C00FDD1EE759 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___from0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___to1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___result2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.HandGrabPose::set_SnapSurface(Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabPose_set_SnapSurface_m3002A1B131F5391025AA837CED87B62243741CAA_inline (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.HandGrabPose::InjectRelativeTo(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabPose_InjectRelativeTo_mF83642B801839E104D51EE2A4DE2CD83AD817EF9_inline (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.HandPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose__ctor_m8DDCB748C9A9A7127EB91225555F359A38D15A2A (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Pose& Oculus.Interaction.HandGrab.HandGrabTarget::get_Pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* HandGrabTarget_get_Pose_m3BB7FE5357029E9C4D030B0506012E07A737737B (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.HandGrab.HandGrabTarget/GrabAnchor Oculus.Interaction.HandGrab.HandGrabTarget::get_Anchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandGrabTarget_get_Anchor_m4348AEC7F7B3A414A8C539E717571543431A7D8A_inline (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.HandGrabTarget::set_Anchor(Oculus.Interaction.HandGrab.HandGrabTarget/GrabAnchor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabTarget_set_Anchor_mAB5B33ED470AEABD65A477DBA6620EADA588DB9F_inline (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::CopyFrom(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_CopyFrom_m8D16CCD650E1096746224035AFC9BFDA1831660F (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___to0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___from1, const RuntimeMethod* method) ;
// Oculus.Interaction.Input.JointFreedom[] Oculus.Interaction.Input.FingersMetadata::DefaultFingersFreedom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* FingersMetadata_DefaultFingersFreedom_m652A4BFA22044A9F52A4520C59785BE7F4C5999F (const RuntimeMethod* method) ;
// Oculus.Interaction.Input.JointFreedom[] Oculus.Interaction.HandGrab.HandPose::get_FingersFreedom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* HandPose_get_FingersFreedom_mD8DFD7F39A9B0344FB86F6C4D05149641467A426 (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4239F97ECC23A71F4191B8722362A1AA38E2E98F (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion[] Oculus.Interaction.HandGrab.HandPose::get_JointRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* HandPose_get_JointRotations_m8299C59A02C209EE82FBDE99A2E9D4E60BC169A5 (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::SlerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_SlerpUnclamped_mB38920352A1B11369D782F78E183568CAFA82C0F (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::EaseInOut(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AnimationCurve_EaseInOut_mA8461373A0FC9464E20724CAD519973F85FE4A15 (float ___timeStart0, float ___valueStart1, float ___timeEnd2, float ___valueEnd3, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandGrab.PoseTravelData::PerceivedDistance(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PoseTravelData_PerceivedDistance_m65BA9AE5C713503EFFD94F8F5F2A0E400FE2A617 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___from0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___to1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Tween::.ctor(UnityEngine.Pose,System.Single,System.Single,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween__ctor_m938BD326498070ED443F7A2C41A725D457264E49 (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___start0, float ___tweenTime1, float ___maxOverlapTime2, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve3, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Tween::MoveTo(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_MoveTo_m2383FC037FC8E3C0DCF376D4E73BD48709EA2AC6 (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___target0, const RuntimeMethod* method) ;
// Oculus.Interaction.Tween Oculus.Interaction.HandGrab.PoseTravelData::CreateTween(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* PoseTravelData_CreateTween_m4083C8FB9F3974585BBC2C6F34833914AFD2ACA9 (PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___from0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___to1, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.PoseUtils::Delta(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 PoseUtils_Delta_mB6858A11877733C3D760D8815E087B73A3A38401 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___from0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___to1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Pose::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Pose::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pose_get_up_m5431E350242BEBB0CD7B0AAF9DC9468DC6DDFE5C (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Pose::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose> Oculus.Interaction.HandGrab.HandGrabInteractable::get_HandGrabPoses()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* HandGrabInteractable_get_HandGrabPoses_m8C6BA9970270C7812825C68E3B615064DDC184B9_inline (HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0648F08A03E21695D42860113F1FF1A4B3E39D8A (List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void Oculus.Interaction.Interactable`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>::Awake()
inline void Interactable_2_Awake_mE132E6063A61D7FA5100C9EEF0302531DC3DD448 (Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51* __this, const RuntimeMethod* method)
{
	((  void (*) (Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51*, const RuntimeMethod*))Interactable_2_Awake_mCA60E26D413F07855B950DA0868179FEEA799936_gshared)(__this, method);
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractable::set_HandUseDelegate(Oculus.Interaction.HandGrab.IHandGrabUseDelegate)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabUseInteractable_set_HandUseDelegate_m92A62BAD59BCF0E60F997E84461B9F2EF15CACF1_inline (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactable`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>::SelectingInteractorAdded(TInteractor)
inline void Interactable_2_SelectingInteractorAdded_m8B0214AA49EE68BFF137AB54B194ECE237764D88 (Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51* __this, HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* ___interactor0, const RuntimeMethod* method)
{
	((  void (*) (Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51*, HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575*, const RuntimeMethod*))Interactable_2_SelectingInteractorAdded_m5D162B61FA68A684A134CEC027D332B24082AB7E_gshared)(__this, ___interactor0, method);
}
// Oculus.Interaction.HandGrab.IHandGrabUseDelegate Oculus.Interaction.HandGrab.HandGrabUseInteractable::get_HandUseDelegate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandGrabUseInteractable_get_HandUseDelegate_mD930323D6D43D3AF5974E4966B1D94F4CD7F3EAB_inline (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactable`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>::SelectingInteractorRemoved(TInteractor)
inline void Interactable_2_SelectingInteractorRemoved_m2D32ABABF88DAEB59119B2E598AFAAC2D6D12BFE (Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51* __this, HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* ___interactor0, const RuntimeMethod* method)
{
	((  void (*) (Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51*, HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575*, const RuntimeMethod*))Interactable_2_SelectingInteractorRemoved_m27F7D6A19DD75F071E3958816802EDDA834B092B_gshared)(__this, ___interactor0, method);
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractable::set_UseProgress(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabUseInteractable_set_UseProgress_m928ABB671AA64B824AC5F61A64EA9FE743D33DF2_inline (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandGrab.HandGrabUseInteractable::get_UseProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HandGrabUseInteractable_get_UseProgress_mF1E5CF795E73176B232C8CFB1536ED492D6FF87C_inline (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.HandGrab.HandGrabUseInteractable::FindScaledHandPose(System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose>,System.Single,Oculus.Interaction.HandGrab.HandPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabUseInteractable_FindScaledHandPose_m08DBBD07307F0C5578B1E6CBD7DFAE92C8F78004 (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* ____handGrabPoses0, float ___handScale1, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** ___handPose2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose>::get_Count()
inline int32_t List_1_get_Count_mE1BB17F8B8501E40563161FE3F17C639F062A5FB_inline (List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose>::get_Item(System.Int32)
inline HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* List_1_get_Item_m04166060D3E498580A01A000252762E2AE2A9B63 (List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* (*) (List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Oculus.Interaction.HandGrab.GrabPoseFinder::FindInterpolationRange(System.Single,System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose>,Oculus.Interaction.HandGrab.HandGrabPose&,Oculus.Interaction.HandGrab.HandGrabPose&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabPoseFinder_FindInterpolationRange_m8552C64ACF517345A37E1CFA92220F4824FC87BB (float ___scale0, List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* ___grabPoses1, HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633** ___from2, HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633** ___to3, float* ___t4, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.HandPose::Lerp(Oculus.Interaction.HandGrab.HandPose&,Oculus.Interaction.HandGrab.HandPose&,System.Single,Oculus.Interaction.HandGrab.HandPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_Lerp_m69138327CAC912F9B291269BD8FB6AB0271F2044 (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** ___from0, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** ___to1, float ___t2, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** ___result3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose>::.ctor()
inline void List_1__ctor_m2CFCBD30AABBE54B41CBBF42140449B123820E4C (List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Interactable`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>::.ctor()
inline void Interactable_2__ctor_mEFEF0C21BF905F53C4168926AA4A7844ECD0676D (Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51* __this, const RuntimeMethod* method)
{
	((  void (*) (Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51*, const RuntimeMethod*))Interactable_2__ctor_mE447B6ED1772A1744902556DEF8FA2070DC035F0_gshared)(__this, method);
}
// TInteractable Oculus.Interaction.Interactor`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>::get_SelectedInteractable()
inline HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_inline (Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B* __this, const RuntimeMethod* method)
{
	return ((  HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* (*) (Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B*, const RuntimeMethod*))Interactor_2_get_SelectedInteractable_m41004AA167C324EB9F1E1CE294883634C5A67D06_gshared_inline)(__this, method);
}
// System.Boolean Oculus.Interaction.HandGrab.HandGrabUseInteractor::get_IsGrabbing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabUseInteractor_get_IsGrabbing_m759209C3DB0DCAF4165DA356227BA479BE546539 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactor`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>::Awake()
inline void Interactor_2_Awake_m9A1ED987975C007AF0C0719BFA74F895C91C83CC (Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B* __this, const RuntimeMethod* method)
{
	((  void (*) (Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B*, const RuntimeMethod*))Interactor_2_Awake_mD37E95AE48AC3ED843805450946BAACDBEBB3B0B_gshared)(__this, method);
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::set_Hand(Oculus.Interaction.Input.IHand)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabUseInteractor_set_Hand_mC2D783BF4E9E51636628260004C2C6E2617EBE78_inline (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::set_UseAPI(Oculus.Interaction.IFingerUseAPI)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabUseInteractor_set_UseAPI_mB187F2F858452D42FC32163E6BC9C961CBF353D5_inline (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::BeginStart(UnityEngine.MonoBehaviour,System.Boolean&,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___monoBehaviour0, bool* ___started1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___baseStart2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::EndStart(UnityEngine.MonoBehaviour,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___monoBehaviour0, bool* ___started1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactor`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>::InteractableSelected(TInteractable)
inline void Interactor_2_InteractableSelected_m47FDF210967D346904F484E18C885CF1EE7E8EAA (Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B* __this, HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* ___interactable0, const RuntimeMethod* method)
{
	((  void (*) (Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B*, HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4*, const RuntimeMethod*))Interactor_2_InteractableSelected_m68CD809BE807A74E9CE79BA25F9F99C19C5EE51F_gshared)(__this, ___interactable0, method);
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::StartUsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_StartUsing_m3C2C41F899A30F126CB5145E636226A409C99BC4 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactor`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>::InteractableUnselected(TInteractable)
inline void Interactor_2_InteractableUnselected_m8ABE3C31881FCD85877830A2A5824D38F2EF9E7A (Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B* __this, HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* ___interactable0, const RuntimeMethod* method)
{
	((  void (*) (Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B*, HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4*, const RuntimeMethod*))Interactor_2_InteractableUnselected_mFC988BF3E485BDED6969BBBB0B9130868EC6BC0D_gshared)(__this, ___interactable0, method);
}
// System.Void Oculus.Interaction.HandGrab.HandGrabTarget::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabTarget_Clear_mAAB3867CCAFA0956923DA27C64F178E092FC2275 (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.HandGrabResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabResult__ctor_m607DD34E2BEAC0E7F5CE9DAC367F1C072422E2C0 (HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.HandGrabTarget::Set(UnityEngine.Transform,Oculus.Interaction.HandGrab.HandAlignType,Oculus.Interaction.HandGrab.HandGrabTarget/GrabAnchor,Oculus.Interaction.HandGrab.HandGrabResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabTarget_Set_m0A42DFF5FC3DE6E389FE52D98C4F5E14CE5779FD (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, int32_t ___handAlignment1, int32_t ___anchor2, HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* ___result3, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactor`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>::DoHoverUpdate()
inline void Interactor_2_DoHoverUpdate_mC7FA89ECAA480D000F6F321AF3EDC99C4F39050A (Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B* __this, const RuntimeMethod* method)
{
	((  void (*) (Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B*, const RuntimeMethod*))Interactor_2_DoHoverUpdate_mE05EECB8EC62A2DEBF43EBD8E0EBA59C031483FA_gshared)(__this, method);
}
// TInteractable Oculus.Interaction.Interactor`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>::get_Interactable()
inline HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* Interactor_2_get_Interactable_m3887264B10DEFFAC3050FB7599CA8BDCC5D8A659_inline (Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B* __this, const RuntimeMethod* method)
{
	return ((  HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* (*) (Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B*, const RuntimeMethod*))Interactor_2_get_Interactable_mF7BA57CB616205BA5E3AA22FA8FC51AEC21CDF0D_gshared_inline)(__this, method);
}
// System.Boolean Oculus.Interaction.HandGrab.HandGrabUseInteractor::IsUsingInteractable(Oculus.Interaction.HandGrab.HandGrabUseInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabUseInteractor_IsUsingInteractable_m958E30962197C2721156A1DA2A44397B38841FCA (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* ___interactable0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Interactor`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>::DoSelectUpdate()
inline void Interactor_2_DoSelectUpdate_m6A59653594196F859820DE4A82395180EBAAFBA2 (Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B* __this, const RuntimeMethod* method)
{
	((  void (*) (Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B*, const RuntimeMethod*))Interactor_2_DoSelectUpdate_m02F6911604E854CD9533809C0ED01C7B085064A2_gshared)(__this, method);
}
// System.Single Oculus.Interaction.HandGrab.HandGrabUseInteractor::CalculateUseStrength(System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabUseInteractor_CalculateUseStrength_m794BEE70895AC8257A21035555B4F8D8E70C2019 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___fingerUseStrength0, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandGrab.HandGrabUseInteractable::ComputeUseStrength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabUseInteractable_ComputeUseStrength_mC530183912B747C85E1035D63AFFCA7404BC8C62 (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, float ___strength0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::MoveFingers(System.Single[]&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_MoveFingers_mECE2F452BC3A0C4BD900636485A60F0033A13EC8 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___fingerUseProgress0, float ___useProgress1, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.HandGrab.HandGrabUseInteractable::get_UseFingers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D HandGrabUseInteractable_get_UseFingers_m098413046899FFAC5388CD7C74AE3FCC3030C84D_inline (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.GrabAPI.FingerRequirement Oculus.Interaction.GrabAPI.GrabbingRule::get_Item(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC (GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D* __this, int32_t ___fingerID0, const RuntimeMethod* method) ;
// Oculus.Interaction.IFingerUseAPI Oculus.Interaction.HandGrab.HandGrabUseInteractor::get_UseAPI()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandGrabUseInteractor_get_UseAPI_mD285A0CE71C1D5FE09683305289E4580B7F343F2_inline (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandGrab.HandGrabUseInteractable::get_StrengthDeadzone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HandGrabUseInteractable_get_StrengthDeadzone_mE6F18EAEF485AC7A4C9100433AA2E39D41E0C7DE_inline (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.HandGrab.HandGrabUseInteractable::get_UseStrengthDeadZone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HandGrabUseInteractable_get_UseStrengthDeadZone_mA500D3AB2844FADD6C41BF3BFB63E963A88BD378_inline (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::MarkFingerInUse(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_MarkFingerInUse_m30868B719C621C3E89FA06052ACB71F9994363A5 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, int32_t ___finger0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::UnmarkFingerInUse(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_UnmarkFingerInUse_mBAEC19AEDA455E002EC61928FEBB501EC9151CB4 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, int32_t ___finger0, const RuntimeMethod* method) ;
// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabTarget::get_HandPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* HandGrabTarget_get_HandPose_m0B3888C57588259FCF28F8A89821CC8C1820A573 (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::LerpFingerRotation(UnityEngine.Quaternion[],UnityEngine.Quaternion[],UnityEngine.Quaternion[],Oculus.Interaction.Input.HandFinger,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_LerpFingerRotation_mF570F078A9DE94FB5613687A3C66EE83ADF3401B (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___from0, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___to1, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___result2, int32_t ___finger3, float ___t4, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// Oculus.Interaction.InteractableRegistry`2<TInteractor,TInteractable> Oculus.Interaction.Interactable`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>::get_Registry()
inline InteractableRegistry_2_tF312D472EC904880D80DA181D54DABA3C503D4DC* Interactable_2_get_Registry_m92AF8CDDED4AD88B6C822EC7364B48CB5E8F67E0_inline (const RuntimeMethod* method)
{
	return ((  InteractableRegistry_2_tF312D472EC904880D80DA181D54DABA3C503D4DC* (*) (const RuntimeMethod*))Interactable_2_get_Registry_mDFDFFE264623ECD27E68CFCA53895A246C2CAB83_gshared_inline)(method);
}
// Oculus.Interaction.Input.IHand Oculus.Interaction.HandGrab.HandGrabUseInteractor::get_Hand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandGrabUseInteractor_get_Hand_m414B6EBFAEA220DEC05577FA517CD062BA33720A_inline (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.HandGrab.HandGrabUseInteractable::FindBestHandPoses(System.Single,Oculus.Interaction.HandGrab.HandPose&,Oculus.Interaction.HandGrab.HandPose&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabUseInteractable_FindBestHandPoses_mE5A79BE9283DEBCAFBF32631663F9A00C299792A (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, float ___handScale0, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** ___relaxedHandPose1, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** ___tightHandPose2, float* ___score3, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::InjectUseApi(Oculus.Interaction.IFingerUseAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_InjectUseApi_mEA8953B98660299343557DFE75AFB45F6C1983B4 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, RuntimeObject* ___useApi0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.HandGrabTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabTarget__ctor_mD06AA25755FCB5214EA8107FDB7B5BDBFC5F7B6B (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8B5893791AC6F389BE4D61A6AFF54C63BFF054AA (Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Oculus.Interaction.Interactor`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>::.ctor()
inline void Interactor_2__ctor_m763A26614E135B08429ADA69D99460D6CC5AC413 (Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B* __this, const RuntimeMethod* method)
{
	((  void (*) (Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B*, const RuntimeMethod*))Interactor_2__ctor_m415638C6B95899012B0ACB5E9ABA8AF9D4A92FE3_gshared)(__this, method);
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m01F7112D39365E05175D3DF3750A00AA77A5BEC3 (U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::set_PointableElement(Oculus.Interaction.IPointableElement)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoMoveTowardsTargetProvider_set_PointableElement_m20585FD0C8FE3E584415FD5AB1D6278FD2E79E73_inline (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.AutoMoveTowardsTarget>::get_Count()
inline int32_t List_1_get_Count_m6C8E4C059ECD7EDE71AC309DCCA77FFC556E9E45_inline (List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.AutoMoveTowardsTarget>::get_Item(System.Int32)
inline AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* List_1_get_Item_m9FE0898D90075160735205D491616AB82F6E6DD6 (List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* (*) (List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::get_Aborting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AutoMoveTowardsTarget_get_Aborting_m93A3BBED040ADA7F6D4A8C448033506CBA4B2ADD_inline (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTarget_Tick_mBE1ECDBB25386202E4AC27EEC9B1F028113B3D5B (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::get_Stopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AutoMoveTowardsTarget_get_Stopped_m844AE9CA4785C0D4708C7D8172948C2D5580DDE9 (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.AutoMoveTowardsTarget>::Remove(T)
inline bool List_1_Remove_mCBDEF89CB18FD67BE9ACA733E113197AC808893C (List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3* __this, AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3*, AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// Oculus.Interaction.IPointableElement Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::get_PointableElement()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AutoMoveTowardsTargetProvider_get_PointableElement_mD81498A01C294D57039CE52094BDBFC3E6FF1F22_inline (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::.ctor(Oculus.Interaction.HandGrab.PoseTravelData,Oculus.Interaction.IPointableElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTarget__ctor_mF4142E6D4C8481E1726758FF0B9273B882412D1B (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ___travellingData0, RuntimeObject* ___pointableElement1, const RuntimeMethod* method) ;
// System.Void System.Action`1<Oculus.Interaction.HandGrab.AutoMoveTowardsTarget>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD192D48E5388CD0F6D69B0DCDDC5A26071143069 (Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.AutoMoveTowardsTarget>::Add(T)
inline void List_1_Add_mB7201F3DA3DAEE5E2C270A01C5DC90CDD6A2E1CC_inline (List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3* __this, AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3*, AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::InjectPointableElement(Oculus.Interaction.IPointableElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTargetProvider_InjectPointableElement_mF26205230CA7AC1AABAF7FA124E5F04FD8B00899 (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, RuntimeObject* ___pointableElement0, const RuntimeMethod* method) ;
// Oculus.Interaction.HandGrab.PoseTravelData Oculus.Interaction.HandGrab.PoseTravelData::get_DEFAULT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 PoseTravelData_get_DEFAULT_m69B7FCB5D00A4C883EB181A296B4BB4CFD462054 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.AutoMoveTowardsTarget>::.ctor()
inline void List_1__ctor_m5213B8756CC79A33A336ACB05FC3AEBDD73203AD (List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Pose Oculus.Interaction.Tween::get_Pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Tween_get_Pose_m5398408D5BAB2891B997A8EFAC9F074848400F38_inline (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Tween::get_Stopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tween_get_Stopped_m35E440EB83E4E21D08B26517D664B8454D1D83C2 (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* __this, const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.UniqueIdentifier::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniqueIdentifier_get_ID_mF4CE854D1058901A90EF10A16586703536E64537_inline (UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.UniqueIdentifier Oculus.Interaction.UniqueIdentifier::Generate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342* UniqueIdentifier_Generate_m0FC6D0775EAF79B0058B1C0291F9926D9A075291 (const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::AbortSelfAligment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTarget_AbortSelfAligment_m11E1109D693E4129A4FFE62678BEC3EF898CE0A6 (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Oculus.Interaction.PointerEvent>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4052E43C460A30441C3F436AC271D3F5CDC77FA4 (Action_1_t16439AC0253118742562394ACC7B97D80B44200D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t16439AC0253118742562394ACC7B97D80B44200D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m4052E43C460A30441C3F436AC271D3F5CDC77FA4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Oculus.Interaction.Tween::UpdateTarget(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_UpdateTarget_m77957BF4F8C34BC54D39D0E04FE1C5B6FE877E98 (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___target0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::GeneratePointerEvent(Oculus.Interaction.PointerEventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTarget_GeneratePointerEvent_m7E9169A81A4AAE7646CB0305B141D1E87763BBA1 (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, int32_t ___pointerEventType0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::set_Aborting(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoMoveTowardsTarget_set_Aborting_m1EF4B5FF5EAAF74B5BBC0F65CC3C0A9F30E608CD_inline (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Oculus.Interaction.HandGrab.AutoMoveTowardsTarget>::Invoke(T)
inline void Action_1_Invoke_mF46895F6421818FEC02CDF83F5D5F5777A8F4B2A_inline (Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D* __this, AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D*, AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void Oculus.Interaction.Tween::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_Tick_m4A5E94CFB16D5C8A37EE501BFA09ED8CEB49E1E6 (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.PointerEventType Oculus.Interaction.PointerEvent::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEvent_get_Type_mC8D094C70BF61CC306E7BB11E48F8623BF3CED3D_inline (PointerEvent_tAEB047AC9AE96DA96400B3C6FA88E56C917608BC* __this, const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::get_Identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AutoMoveTowardsTarget_get_Identifier_mC094FF36D5FDA1070FBB069B7B705E44E0D62862 (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::get_Pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 AutoMoveTowardsTarget_get_Pose_m1E4B88C93333AC7EFAD78F1B5CBDB9E7104C2EF0 (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PointerEvent::.ctor(System.Int32,Oculus.Interaction.PointerEventType,UnityEngine.Pose,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent__ctor_m82E1413B448C015A646DFA1BD12A1D6EFE5F0AFB (PointerEvent_tAEB047AC9AE96DA96400B3C6FA88E56C917608BC* __this, int32_t ___identifier0, int32_t ___type1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose2, RuntimeObject* ___data3, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m250890D055BECB118370FF1017E670F794D54D2B (U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.FollowTarget::.ctor(System.Single,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowTarget__ctor_m0B3C5BC0E42D33EDD3CB2FD61628E604533CACA5 (FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB* __this, float ___speed0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___space1, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandGrab.FollowTarget::ToWorld(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 FollowTarget_ToWorld_mEBAA06960CF83B5739A2A4B398D43073A5926247 (FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandGrab.FollowTarget::ToLocal(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 FollowTarget_ToLocal_mB34B0FF3265CF1E408D10BCB08822CF91A743057 (FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.FollowTarget::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowTarget_Tick_m4E132B2624423C60BD306DCF4A7103CA1CDFA14B (FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::RotateTowards(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_RotateTowards_mD7C332050D876CB28A704B9005476BE06823F85F_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___from0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___to1, float ___maxDegreesDelta2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.MoveRelativeToTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveRelativeToTarget__ctor_mC263D35AF9C09296C4FE10CD2E024FFBBC46F2A0 (MoveRelativeToTarget_t81F9D1739B4EE088A5F6C1183A80B20AFC6C1F53* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::Multiply(UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_Multiply_m77B1C96978D7280D7ECF65A7EE77E98532AB8B8E (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___a0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___b1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___result2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.MoveFromTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveFromTarget__ctor_mB40F7E467AEC107D1276F9E69D2A1F91358420D8 (MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.MoveFromTarget::set_Pose(UnityEngine.Pose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MoveFromTarget_set_Pose_m931467373A425F35BBDF4CC95E735865BB2EFB33_inline (MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.MoveTowardsTarget::.ctor(Oculus.Interaction.HandGrab.PoseTravelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTowardsTarget__ctor_m51BFABBAC4846D3300B8447A16A316C0F57FE748 (MoveTowardsTarget_t253F3F7A83B2B8B2B66405D7DEE43F285324C608* __this, PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ___travellingData0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.MoveTowardsTargetProvider::InjectTravellingData(Oculus.Interaction.HandGrab.PoseTravelData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MoveTowardsTargetProvider_InjectTravellingData_m8C3767A34BD99106165616074F702E386855FAD2_inline (MoveTowardsTargetProvider_t56437D74B9848593E3170C23598798B0873A7453* __this, PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ___travellingData0, const RuntimeMethod* method) ;
// Oculus.Interaction.HandGrab.PoseTravelData Oculus.Interaction.HandGrab.PoseTravelData::get_FAST()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 PoseTravelData_get_FAST_mD1B7A32F129CCCDEE58882558247324FEED5E4D3 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Pose::op_Inequality(UnityEngine.Pose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pose_op_Inequality_m02CD51E757B2E25C978261A32EBD15B1342EA7BC (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___a0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___b1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Tween::StopAndSetPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_StopAndSetPose_m49EB8B4D719445E0876618E4E5EF9BE0D3921417 (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___source0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.ObjectPull::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPull__ctor_m240B78CD0E18520E50A8C957B1224BB9FE153EFE (ObjectPull_tD1031CDA5079CA57992B11EC5BF46D5E75029DC4* __this, float ___speed0, float ___deadZone1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inNormal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inPoint1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Plane::GetDistanceToPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plane_GetDistanceToPoint_m43E27525BB203513B13EF35F8EDB3785CA4AE6DC (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Oculus.Interaction.HandGrab.Visuals.HandPuppet>()
inline HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* Component_GetComponent_TisHandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93_m99013C452832DD9880440E2E4258715CAFF7E8F5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<Oculus.Interaction.HandGrab.HandGrabPose>()
inline HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* Component_GetComponentInParent_TisHandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633_m0835DE09189A0620828731AD8C384B4F87AAC7CF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void Oculus.Interaction.HandGrab.Visuals.HandGhost::SetPose(Oculus.Interaction.HandGrab.HandGrabPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_SetPose_mBCEE145AE51655C0A3D3732A0D2327E772B9C613 (HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* __this, HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* ___handGrabPose0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.Visuals.HandPuppet::SetJointRotations(UnityEngine.Quaternion[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPuppet_SetJointRotations_mCF68E9C51DD3D9FC751DBF91CBFE61B53EB4EEFA (HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** ___jointRotations0, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabPose::get_RelativeGrip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 HandGrabPose_get_RelativeGrip_mE08DBF35C604EE1F10F414F465EDEAD88A5A8903 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.Visuals.HandGhost::SetRootPose(UnityEngine.Pose,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_SetRootPose_m7408BD6E00E12E207736646ECBF2D3C642EF16A0 (HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___rootPose0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::Postmultiply(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_Postmultiply_m4F1BBE85E92DC9DE3AFDFE54C520174A5ACCE9E9 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___a0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___b1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.Visuals.HandPuppet::SetRootPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPuppet_SetRootPose_m6DB81D7F080458642FA00033AB3230ACA7858FC2 (HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___rootPose0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.Visuals.HandGhost::InjectHandPuppet(Oculus.Interaction.HandGrab.Visuals.HandPuppet)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGhost_InjectHandPuppet_m97D18FD7941364BCB8BE93AD6C54DF59040F785C_inline (HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* __this, HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* ___puppet0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.HandGrab.Visuals.HandJointMap::get_RotationOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 HandJointMap_get_RotationOffset_m610FC1E8B49DC6375AEF4D14789A8A5163827D76 (HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.Visuals.JointCollection/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m91669D30BAF3F6D88CAE7367EF47D0944D10CD28 (U3CU3Ec__DisplayClass2_0_t42CF4388422BEDD954E30C615D8F95DB40CFBF0B* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Oculus.Interaction.HandGrab.Visuals.HandJointMap>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mFCCC5C96281120EBC4F0DA0826F614A0A45B9B41 (Predicate_1_tC0F10360EFB8F3D70115A87A93FEDD66CE179939* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tC0F10360EFB8F3D70115A87A93FEDD66CE179939*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.Visuals.HandJointMap>::FindIndex(System.Predicate`1<T>)
inline int32_t List_1_FindIndex_m69887F993FAA7A96E76FA52A8460787B5E695992 (List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298* __this, Predicate_1_tC0F10360EFB8F3D70115A87A93FEDD66CE179939* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298*, Predicate_1_tC0F10360EFB8F3D70115A87A93FEDD66CE179939*, const RuntimeMethod*))List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared)(__this, ___match0, method);
}
// T System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.Visuals.HandJointMap>::get_Item(System.Int32)
inline HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* List_1_get_Item_mB6E8B1A92A44C5EE095C97190554B9D136272194 (List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* (*) (List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.HandGrab.Visuals.JointCollection::.ctor(System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.Visuals.HandJointMap>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointCollection__ctor_mD1445CE17E9BA2E6D117134408DA3D0A40122C89 (JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C* __this, List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298* ___joints0, const RuntimeMethod* method) ;
// Oculus.Interaction.HandGrab.Visuals.JointCollection Oculus.Interaction.HandGrab.Visuals.HandPuppet::get_JointsCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C* HandPuppet_get_JointsCache_mC8D04BB7E47125BAAA67CE73FEDAAEC5A5B982F2 (HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.HandGrab.Visuals.HandJointMap Oculus.Interaction.HandGrab.Visuals.JointCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* JointCollection_get_Item_mDB150E35184535410436EBBB2FA785AE6A40611A (JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C* __this, int32_t ___jointIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Oculus.Interaction.HandGrab.Visuals.HandJointMap::get_TrackedRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 HandJointMap_get_TrackedRotation_m167A5B38200DA8D4F864BB4411D65FB2B9F4584A (HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.Visuals.HandJointMap>::.ctor(System.Int32)
inline void List_1__ctor_mA5D608E34E465C69D325BAA61B356DC6540053CA (List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m445E005E6F9211283EEA3F0BD4FF2DC20FE3640A_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.HandGrab.HandGrabInteractor/<>c__DisplayClass78_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass78_0__ctor_mECA06AA2C1EF6DA303867B3FA1BA329398465A5C (U3CU3Ec__DisplayClass78_0_t5E2D622AD3B31D04722EFEE1345BDE1843652310* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Oculus.Interaction.HandGrab.HandGrabInteractable Oculus.Interaction.HandGrab.HandGrabInteractor/<>c__DisplayClass78_0::<ForceSelect>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* U3CU3Ec__DisplayClass78_0_U3CForceSelectU3Eb__0_m81D1C77E095117E226C931A986C00CAA82F8297F (U3CU3Ec__DisplayClass78_0_t5E2D622AD3B31D04722EFEE1345BDE1843652310* __this, const RuntimeMethod* method) 
{
	{
		// SetComputeCandidateOverride(() => interactable);
		HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* L_0 = __this->___interactable_0;
		return L_0;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.HandGrabInteractor/<>c__DisplayClass78_0::<ForceSelect>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass78_0_U3CForceSelectU3Eb__1_mC571CCC51733FFB5478F034510DEF01C3B3D8DB1 (U3CU3Ec__DisplayClass78_0_t5E2D622AD3B31D04722EFEE1345BDE1843652310* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_get_Interactable_m29FFFE8E535715EB21D49E0A00CC5B4146593CFD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetComputeShouldSelectOverride(() => ReferenceEquals(interactable, Interactable));
		HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* L_0 = __this->___interactable_0;
		HandGrabInteractor_t9A01E021BC9142BD8CCE6BC1458A89E38CF8152D* L_1 = __this->___U3CU3E4__this_1;
		NullCheck(L_1);
		HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* L_2;
		L_2 = Interactor_2_get_Interactable_m29FFFE8E535715EB21D49E0A00CC5B4146593CFD_inline(L_1, Interactor_2_get_Interactable_m29FFFE8E535715EB21D49E0A00CC5B4146593CFD_RuntimeMethod_var);
		return (bool)((((RuntimeObject*)(HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127*)L_0) == ((RuntimeObject*)(HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127*)L_2))? 1 : 0);
	}
}
// System.Boolean Oculus.Interaction.HandGrab.HandGrabInteractor/<>c__DisplayClass78_0::<ForceSelect>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass78_0_U3CForceSelectU3Eb__2_m4634F8E9A3EA7CF4F12CD70C941FBE442967C1C4 (U3CU3Ec__DisplayClass78_0_t5E2D622AD3B31D04722EFEE1345BDE1843652310* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_get_SelectedInteractable_m925884EB3C214482EBE3128C9B0F3067B359B6AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetComputeShouldUnselectOverride(() => !ReferenceEquals(interactable, SelectedInteractable), false);
		HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* L_0 = __this->___interactable_0;
		HandGrabInteractor_t9A01E021BC9142BD8CCE6BC1458A89E38CF8152D* L_1 = __this->___U3CU3E4__this_1;
		NullCheck(L_1);
		HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* L_2;
		L_2 = Interactor_2_get_SelectedInteractable_m925884EB3C214482EBE3128C9B0F3067B359B6AC_inline(L_1, Interactor_2_get_SelectedInteractable_m925884EB3C214482EBE3128C9B0F3067B359B6AC_RuntimeMethod_var);
		return (bool)((((int32_t)((((RuntimeObject*)(HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127*)L_0) == ((RuntimeObject*)(HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127*)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void Oculus.Interaction.HandGrab.HandGrabInteractor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m67B057CBCACDA4F6CA918124485A9D199492450F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435* L_0 = (U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435*)il2cpp_codegen_object_new(U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m968AB0E6E8B279BD5E4957CE3F93A2DD720FC1B9(L_0, NULL);
		((U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m968AB0E6E8B279BD5E4957CE3F93A2DD720FC1B9 (U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.HandGrabInteractor/<>c::<ForceRelease>b__79_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CForceReleaseU3Eb__79_0_mC3F5DADCE21224C6E799619B4C49546C1CC3BF40 (U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435* __this, const RuntimeMethod* method) 
{
	{
		// SetComputeShouldUnselectOverride(() => true);
		return (bool)1;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabInteractor/<>c::<.ctor>b__93_0(Oculus.Interaction.HandGrab.IHandGrabState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__93_0_m64B4E6C4EFAC7DFFBD92C03CE5D37267A9FFCF23 (U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435* __this, RuntimeObject* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// public System.Action<IHandGrabState> WhenHandGrabStarted { get; set; } = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabInteractor/<>c::<.ctor>b__93_1(Oculus.Interaction.HandGrab.IHandGrabState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__93_1_mB5284887B044E225BB22CFDA67830B5BE267196F (U3CU3Ec_tB2AB11EFE6BEFFD52D7247A90902AD2CB8E03435* __this, RuntimeObject* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// public System.Action<IHandGrabState> WhenHandGrabEnded { get; set; } = delegate { };
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
// Conversion methods for marshalling of: Oculus.Interaction.HandGrab.HandGrabPoseData
IL2CPP_EXTERN_C void HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815_marshal_pinvoke(const HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815& unmarshaled, HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815_marshaled_pinvoke& marshaled)
{
	Exception_t* ___handPose_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'handPose' of type 'HandGrabPoseData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___handPose_1Exception, NULL);
}
IL2CPP_EXTERN_C void HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815_marshal_pinvoke_back(const HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815_marshaled_pinvoke& marshaled, HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815& unmarshaled)
{
	Exception_t* ___handPose_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'handPose' of type 'HandGrabPoseData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___handPose_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.HandGrab.HandGrabPoseData
IL2CPP_EXTERN_C void HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815_marshal_pinvoke_cleanup(HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Interaction.HandGrab.HandGrabPoseData
IL2CPP_EXTERN_C void HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815_marshal_com(const HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815& unmarshaled, HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815_marshaled_com& marshaled)
{
	Exception_t* ___handPose_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'handPose' of type 'HandGrabPoseData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___handPose_1Exception, NULL);
}
IL2CPP_EXTERN_C void HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815_marshal_com_back(const HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815_marshaled_com& marshaled, HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815& unmarshaled)
{
	Exception_t* ___handPose_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'handPose' of type 'HandGrabPoseData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___handPose_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.HandGrab.HandGrabPoseData
IL2CPP_EXTERN_C void HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815_marshal_com_cleanup(HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface Oculus.Interaction.HandGrab.HandGrabPose::get_SnapSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandGrabPose_get_SnapSurface_m2C5A8B3FBF155B55CE52BABC41998ACA596CB724 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrabSurface_tD42EAF58D327A36F75A49E36263B9B1558CA4ED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// get => _snapSurface ?? _surface as IGrabSurface;
		RuntimeObject* L_0 = __this->____snapSurface_6;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0015;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->____surface_5;
		G_B2_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IGrabSurface_tD42EAF58D327A36F75A49E36263B9B1558CA4ED7_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		return G_B2_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabPose::set_SnapSurface(Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPose_set_SnapSurface_m3002A1B131F5391025AA837CED87B62243741CAA (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// _snapSurface = value;
		RuntimeObject* L_0 = ___value0;
		__this->____snapSurface_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____snapSurface_6), (void*)L_0);
		// }
		return;
	}
}
// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabPose::get_HandPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, const RuntimeMethod* method) 
{
	{
		// public HandPose HandPose => _usesHandPose ? _handPose : null;
		bool L_0 = __this->____usesHandPose_7;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733*)NULL;
	}

IL_000a:
	{
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_1 = __this->____handPose_8;
		return L_1;
	}
}
// System.Single Oculus.Interaction.HandGrab.HandGrabPose::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabPose_get_Scale_m81C543AFB691B4902FA1F46E71A5304AFDB4C6A3 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, const RuntimeMethod* method) 
{
	{
		// public float Scale => this.transform.lossyScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_0, NULL);
		float L_2 = L_1.___x_2;
		return L_2;
	}
}
// UnityEngine.Transform Oculus.Interaction.HandGrab.HandGrabPose::get_RelativeTo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* HandGrabPose_get_RelativeTo_m5DFEA3BC65DF4B58C8BB75628AFB81A18B9399C4 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, const RuntimeMethod* method) 
{
	{
		// public Transform RelativeTo { get => _relativeTo; set => _relativeTo = value; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabPose::set_RelativeTo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPose_set_RelativeTo_mF6CA959E5D7C78512ED8A67BE08BA9D0BDAFA753 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// public Transform RelativeTo { get => _relativeTo; set => _relativeTo = value; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->____relativeTo_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_4), (void*)L_0);
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabPose::get_RelativeGrip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 HandGrabPose_get_RelativeGrip_mE08DBF35C604EE1F10F414F465EDEAD88A5A8903 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, const RuntimeMethod* method) 
{
	{
		// public Pose RelativeGrip => RelativeTo.Delta(this.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = HandGrabPose_get_RelativeTo_m5DFEA3BC65DF4B58C8BB75628AFB81A18B9399C4_inline(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = PoseUtils_Delta_mA69E60E49416BCF8F5368B7CED7342B4260DB53B(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabPose::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPose_Reset_mC244211E9CC861413D73686F836122818E77AE3A (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisHandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127_m012C2EEE3BD64E4961FD6012333B0581D3A8AE52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* G_B2_0 = NULL;
	HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* G_B2_1 = NULL;
	HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* G_B1_0 = NULL;
	HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* G_B1_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* G_B3_1 = NULL;
	{
		// _relativeTo = this.GetComponentInParent<HandGrabInteractable>()?.RelativeTo;
		HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* L_0;
		L_0 = Component_GetComponentInParent_TisHandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127_m012C2EEE3BD64E4961FD6012333B0581D3A8AE52(__this, Component_GetComponentInParent_TisHandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127_m012C2EEE3BD64E4961FD6012333B0581D3A8AE52_RuntimeMethod_var);
		HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = HandGrabInteractable_get_RelativeTo_m2ADE4A16C9C91A9EEAC7E31E609D9001AA8A37E1(G_B2_0, NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		G_B3_1->____relativeTo_4 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____relativeTo_4), (void*)G_B3_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabPose::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPose_Start_mFC7E17EC29E4D134952AB508B2982DC9CB76A534 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabPose::SetPose(Oculus.Interaction.HandGrab.HandPose,UnityEngine.Pose&,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPose_SetPose_m22DADB999404F223D5835E96AE2CEC6FF4734B34 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___handPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___gripPoint1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _handPose = new HandPose(handPose);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_0 = ___handPose0;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_1 = (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733*)il2cpp_codegen_object_new(HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HandPose__ctor_m9564CB8D7FBA544FEDE69E0BAB1749324D6E3FE9(L_1, L_0, NULL);
		__this->____handPose_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handPose_8), (void*)L_1);
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___relativeTo2;
		__this->____relativeTo_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_4), (void*)L_2);
		// this.transform.SetPose(relativeTo.GlobalPose(gripPoint));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___relativeTo2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_5 = ___gripPoint1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6;
		L_6 = PoseUtils_GlobalPose_m6B6464C721166ABEE4B301A3296ED085B428BD7F(L_4, L_5, NULL);
		V_0 = L_6;
		PoseUtils_SetPose_m6C9BE185A66754389A49FD711DEE68A07DE059BB(L_3, (&V_0), 0, NULL);
		// }
		return;
	}
}
// Oculus.Interaction.HandGrab.HandGrabPoseData Oculus.Interaction.HandGrab.HandGrabPose::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 HandGrabPose_SaveData_m4ED6DA7654A956AD84A207DE53340365B17D8238 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HandGrabPoseData data = new HandGrabPoseData()
		// {
		//     handPose = new HandPose(_handPose),
		//     scale = Scale,
		//     gripPose = _relativeTo.Delta(this.transform)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815));
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_0 = __this->____handPose_8;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_1 = (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733*)il2cpp_codegen_object_new(HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HandPose__ctor_m9564CB8D7FBA544FEDE69E0BAB1749324D6E3FE9(L_1, L_0, NULL);
		(&V_0)->___handPose_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___handPose_1), (void*)L_1);
		float L_2;
		L_2 = HandGrabPose_get_Scale_m81C543AFB691B4902FA1F46E71A5304AFDB4C6A3(__this, NULL);
		(&V_0)->___scale_2 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____relativeTo_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5;
		L_5 = PoseUtils_Delta_mA69E60E49416BCF8F5368B7CED7342B4260DB53B(L_3, L_4, NULL);
		(&V_0)->___gripPose_0 = L_5;
		HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 L_6 = V_0;
		// return data;
		return L_6;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabPose::LoadData(Oculus.Interaction.HandGrab.HandGrabPoseData,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPose_LoadData_m1BD735A3F23DE54EB780DC2C07FE5E44F2EEA9C9 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 ___data0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___relativeTo1;
		__this->____relativeTo_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_4), (void*)L_0);
		// this.transform.localScale = Vector3.one * data.scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 L_3 = ___data0;
		float L_4 = L_3.___scale_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_4, NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_5, NULL);
		// this.transform.SetPose(_relativeTo.GlobalPose(data.gripPose));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->____relativeTo_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = (&(&___data0)->___gripPose_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = PoseUtils_GlobalPose_m6B6464C721166ABEE4B301A3296ED085B428BD7F(L_7, L_8, NULL);
		V_0 = L_9;
		PoseUtils_SetPose_m6C9BE185A66754389A49FD711DEE68A07DE059BB(L_6, (&V_0), 0, NULL);
		// if (data.handPose != null)
		HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 L_10 = ___data0;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_11 = L_10.___handPose_1;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		// _handPose = new HandPose(data.handPose);
		HandGrabPoseData_tB7AD1C042EC2D17A436A65AC7EF1EC8BEFE3A815 L_12 = ___data0;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_13 = L_12.___handPose_1;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_14 = (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733*)il2cpp_codegen_object_new(HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		HandPose__ctor_m9564CB8D7FBA544FEDE69E0BAB1749324D6E3FE9(L_14, L_13, NULL);
		__this->____handPose_8 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handPose_8), (void*)L_14);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.HandGrabPose::CalculateBestPose(UnityEngine.Pose,Oculus.Interaction.Input.Handedness,Oculus.Interaction.Grab.PoseMeasureParameters,Oculus.Interaction.HandGrab.HandGrabResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabPose_CalculateBestPose_mAC1B5F1A345FC02695ED38427571DFB0142B0DD2 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___userPose0, int32_t ___handedness1, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363 ___scoringModifier2, HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B** ___result3, const RuntimeMethod* method) 
{
	{
		// result.HasHandPose = false;
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B** L_0 = ___result3;
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* L_1 = *((HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B**)L_0);
		NullCheck(L_1);
		L_1->___HasHandPose_0 = (bool)0;
		// if (HandPose != null && HandPose.Handedness != handedness)
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_2;
		L_2 = HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF(__this, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_3;
		L_3 = HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = HandPose_get_Handedness_m21EDF49CE58ECD438C557618E3092D7E1462A88C_inline(L_3, NULL);
		int32_t L_5 = ___handedness1;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0021;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0021:
	{
		// result.Score = CompareNearPoses(userPose, scoringModifier, ref result.SnapPose);
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B** L_6 = ___result3;
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* L_7 = *((HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B**)L_6);
		PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363 L_8 = ___scoringModifier2;
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B** L_9 = ___result3;
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* L_10 = *((HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B**)L_9);
		NullCheck(L_10);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_11 = (&L_10->___SnapPose_1);
		float L_12;
		L_12 = HandGrabPose_CompareNearPoses_m72A078673AE3385CB184B2E78D1C01AB74AEDA7D(__this, (&___userPose0), L_8, L_11, NULL);
		NullCheck(L_7);
		L_7->___Score_2 = L_12;
		// if (HandPose != null)
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_13;
		L_13 = HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF(__this, NULL);
		if (!L_13)
		{
			goto IL_005f;
		}
	}
	{
		// result.HasHandPose = true;
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B** L_14 = ___result3;
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* L_15 = *((HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B**)L_14);
		NullCheck(L_15);
		L_15->___HasHandPose_0 = (bool)1;
		// result.HandPose.CopyFrom(HandPose);
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B** L_16 = ___result3;
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* L_17 = *((HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B**)L_16);
		NullCheck(L_17);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_18 = L_17->___HandPose_3;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_19;
		L_19 = HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF(__this, NULL);
		NullCheck(L_18);
		HandPose_CopyFrom_mC60EE82AF04119C195F5738410C669828A1591A2(L_18, L_19, (bool)0, NULL);
	}

IL_005f:
	{
		// return true;
		return (bool)1;
	}
}
// System.Single Oculus.Interaction.HandGrab.HandGrabPose::CompareNearPoses(UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabPose_CompareNearPoses_m72A078673AE3385CB184B2E78D1C01AB74AEDA7D (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___worldPoint0, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363 ___scoringModifier1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___bestSnapPoint2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrabSurface_tD42EAF58D327A36F75A49E36263B9B1558CA4ED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Pose desired = worldPoint;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___worldPoint0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0);
		V_0 = L_1;
		// Pose snap = this.transform.GetPose();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = PoseUtils_GetPose_m913669538E46AA3E2671EFA9B84A6E449C05886D(L_2, 0, NULL);
		V_1 = L_3;
		// if (SnapSurface != null)
		RuntimeObject* L_4;
		L_4 = HandGrabPose_get_SnapSurface_m2C5A8B3FBF155B55CE52BABC41998ACA596CB724(__this, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// bestScore = SnapSurface.CalculateBestPoseAtSurface(desired, snap, out bestPlace, scoringModifier);
		RuntimeObject* L_5;
		L_5 = HandGrabPose_get_SnapSurface_m2C5A8B3FBF155B55CE52BABC41998ACA596CB724(__this, NULL);
		NullCheck(L_5);
		float L_6;
		L_6 = InterfaceFuncInvoker4< float, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363* >::Invoke(0 /* System.Single Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface::CalculateBestPoseAtSurface(UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Pose&,Oculus.Interaction.Grab.PoseMeasureParameters& modreq(System.Runtime.InteropServices.InAttribute)) */, IGrabSurface_tD42EAF58D327A36F75A49E36263B9B1558CA4ED7_il2cpp_TypeInfo_var, L_5, (&V_0), (&V_1), (&V_3), (&___scoringModifier1));
		V_2 = L_6;
		goto IL_003f;
	}

IL_0032:
	{
		// bestPlace = snap;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7 = V_1;
		V_3 = L_7;
		// bestScore = GrabPoseHelper.Similarity(desired, snap, scoringModifier);
		PoseMeasureParameters_t93F958B174ABC0A954B8A6B9B3DFA73DFE894363 L_8 = ___scoringModifier1;
		float L_9;
		L_9 = GrabPoseHelper_Similarity_m68DC649614CDF1482005AC4F2258D94D4E766EFC((&V_0), (&V_1), L_8, NULL);
		V_2 = L_9;
	}

IL_003f:
	{
		// _relativeTo.Delta(bestPlace, ref bestSnapPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->____relativeTo_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_11 = ___bestSnapPoint2;
		PoseUtils_Delta_mABAFADB4B68627F3FE0AE79403D0C00FDD1EE759(L_10, (&V_3), L_11, NULL);
		// return bestScore;
		float L_12 = V_2;
		return L_12;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabPose::InjectRelativeTo(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPose_InjectRelativeTo_mF83642B801839E104D51EE2A4DE2CD83AD817EF9 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) 
{
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___relativeTo0;
		__this->____relativeTo_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabPose::InjectOptionalSurface(Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPose_InjectOptionalSurface_m8738238D717B00C1A31804DEC806E5674748F9A5 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, RuntimeObject* ___surface0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _surface = surface as MonoBehaviour;
		RuntimeObject* L_0 = ___surface0;
		__this->____surface_5 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____surface_5), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// SnapSurface = surface;
		RuntimeObject* L_1 = ___surface0;
		HandGrabPose_set_SnapSurface_m3002A1B131F5391025AA837CED87B62243741CAA_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabPose::InjectOptionalHandPose(Oculus.Interaction.HandGrab.HandPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPose_InjectOptionalHandPose_m5F47308B058E7421C7EDF7AF2C67E272163BCF01 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___handPose0, const RuntimeMethod* method) 
{
	{
		// _handPose = handPose;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_0 = ___handPose0;
		__this->____handPose_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handPose_8), (void*)L_0);
		// _usesHandPose = _handPose != null;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_1 = __this->____handPose_8;
		__this->____usesHandPose_7 = (bool)((!(((RuntimeObject*)(HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabPose::InjectAllHandGrabPose(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPose_InjectAllHandGrabPose_mE3F59EB733F6118F83B22F4F1ECEC913EDAA1C64 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) 
{
	{
		// InjectRelativeTo(relativeTo);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___relativeTo0;
		HandGrabPose_InjectRelativeTo_mF83642B801839E104D51EE2A4DE2CD83AD817EF9_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabPose__ctor_mC435B8CD19282918FA49E6BC8F48899244FFA1D8 (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _usesHandPose = true;
		__this->____usesHandPose_7 = (bool)1;
		// private HandPose _handPose = new HandPose();
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_0 = (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733*)il2cpp_codegen_object_new(HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HandPose__ctor_m8DDCB748C9A9A7127EB91225555F359A38D15A2A(L_0, NULL);
		__this->____handPose_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handPose_8), (void*)L_0);
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
// System.Void Oculus.Interaction.HandGrab.HandGrabResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabResult__ctor_m607DD34E2BEAC0E7F5CE9DAC367F1C072422E2C0 (HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HandGrabResult()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// SnapPose = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		__this->___SnapPose_1 = L_0;
		// HandPose = new HandPose();
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_1 = (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733*)il2cpp_codegen_object_new(HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HandPose__ctor_m8DDCB748C9A9A7127EB91225555F359A38D15A2A(L_1, NULL);
		__this->___HandPose_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HandPose_3), (void*)L_1);
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
// UnityEngine.Pose& Oculus.Interaction.HandGrab.HandGrabTarget::get_Pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* HandGrabTarget_get_Pose_m3BB7FE5357029E9C4D030B0506012E07A737737B (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, const RuntimeMethod* method) 
{
	{
		// public ref Pose Pose => ref _pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = (&__this->____pose_3);
		return L_0;
	}
}
// Oculus.Interaction.HandGrab.HandPose Oculus.Interaction.HandGrab.HandGrabTarget::get_HandPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* HandGrabTarget_get_HandPose_m0B3888C57588259FCF28F8A89821CC8C1820A573 (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, const RuntimeMethod* method) 
{
	{
		// public HandPose HandPose => _isHandPoseValid ? _handPose : null;
		bool L_0 = __this->____isHandPoseValid_1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733*)NULL;
	}

IL_000a:
	{
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_1 = __this->____handPose_2;
		return L_1;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabTarget::get_WorldGrabPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 HandGrabTarget_get_WorldGrabPose_m922F71EA243F0FCF0AA0B8E8E1181E67BCE50508 (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Pose WorldGrabPose => _relativeTo != null ? _relativeTo.GlobalPose(Pose) : Pose.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		return L_2;
	}

IL_0014:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____relativeTo_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4;
		L_4 = HandGrabTarget_get_Pose_m3BB7FE5357029E9C4D030B0506012E07A737737B(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5;
		L_5 = PoseUtils_GlobalPose_m6B6464C721166ABEE4B301A3296ED085B428BD7F(L_3, L_4, NULL);
		return L_5;
	}
}
// Oculus.Interaction.HandGrab.HandAlignType Oculus.Interaction.HandGrab.HandGrabTarget::get_HandAlignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrabTarget_get_HandAlignment_mDEE4C1A10F6F5CA64A852B6AAAA7509D649DABD0 (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, const RuntimeMethod* method) 
{
	{
		// public HandAlignType HandAlignment => _handAlignment;
		int32_t L_0 = __this->____handAlignment_5;
		return L_0;
	}
}
// Oculus.Interaction.HandGrab.HandGrabTarget/GrabAnchor Oculus.Interaction.HandGrab.HandGrabTarget::get_Anchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrabTarget_get_Anchor_m4348AEC7F7B3A414A8C539E717571543431A7D8A (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, const RuntimeMethod* method) 
{
	{
		// public GrabAnchor Anchor { get; private set; } = GrabAnchor.None;
		int32_t L_0 = __this->___U3CAnchorU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabTarget::set_Anchor(Oculus.Interaction.HandGrab.HandGrabTarget/GrabAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabTarget_set_Anchor_mAB5B33ED470AEABD65A477DBA6620EADA588DB9F (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public GrabAnchor Anchor { get; private set; } = GrabAnchor.None;
		int32_t L_0 = ___value0;
		__this->___U3CAnchorU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabTarget::Set(Oculus.Interaction.HandGrab.HandGrabTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabTarget_Set_mCF925A2BE48D26CA3D9E3653B81A09344A2E2C83 (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* ___other0, const RuntimeMethod* method) 
{
	{
		// _relativeTo = other._relativeTo;
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_0 = ___other0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0->____relativeTo_4;
		__this->____relativeTo_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_4), (void*)L_1);
		// _handAlignment = other._handAlignment;
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_2 = ___other0;
		NullCheck(L_2);
		int32_t L_3 = L_2->____handAlignment_5;
		__this->____handAlignment_5 = L_3;
		// _pose = other._pose;
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_4 = ___other0;
		NullCheck(L_4);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = L_4->____pose_3;
		__this->____pose_3 = L_5;
		// _isHandPoseValid = other._isHandPoseValid;
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_6 = ___other0;
		NullCheck(L_6);
		bool L_7 = L_6->____isHandPoseValid_1;
		__this->____isHandPoseValid_1 = L_7;
		// _handPose.CopyFrom(other._handPose);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_8 = __this->____handPose_2;
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_9 = ___other0;
		NullCheck(L_9);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_10 = L_9->____handPose_2;
		NullCheck(L_8);
		HandPose_CopyFrom_mC60EE82AF04119C195F5738410C669828A1591A2(L_8, L_10, (bool)0, NULL);
		// Anchor = other.Anchor;
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_11 = ___other0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HandGrabTarget_get_Anchor_m4348AEC7F7B3A414A8C539E717571543431A7D8A_inline(L_11, NULL);
		HandGrabTarget_set_Anchor_mAB5B33ED470AEABD65A477DBA6620EADA588DB9F_inline(__this, L_12, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabTarget::Set(UnityEngine.Transform,Oculus.Interaction.HandGrab.HandAlignType,Oculus.Interaction.HandGrab.HandGrabTarget/GrabAnchor,Oculus.Interaction.HandGrab.HandGrabResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabTarget_Set_m0A42DFF5FC3DE6E389FE52D98C4F5E14CE5779FD (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, int32_t ___handAlignment1, int32_t ___anchor2, HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* ___result3, const RuntimeMethod* method) 
{
	{
		// Anchor = anchor;
		int32_t L_0 = ___anchor2;
		HandGrabTarget_set_Anchor_mAB5B33ED470AEABD65A477DBA6620EADA588DB9F_inline(__this, L_0, NULL);
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___relativeTo0;
		__this->____relativeTo_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_4), (void*)L_1);
		// _handAlignment = handAlignment;
		int32_t L_2 = ___handAlignment1;
		__this->____handAlignment_5 = L_2;
		// _pose.CopyFrom(result.SnapPose);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = (&__this->____pose_3);
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* L_4 = ___result3;
		NullCheck(L_4);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_5 = (&L_4->___SnapPose_1);
		PoseUtils_CopyFrom_m8D16CCD650E1096746224035AFC9BFDA1831660F(L_3, L_5, NULL);
		// _isHandPoseValid = result.HasHandPose;
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* L_6 = ___result3;
		NullCheck(L_6);
		bool L_7 = L_6->___HasHandPose_0;
		__this->____isHandPoseValid_1 = L_7;
		// if (_isHandPoseValid)
		bool L_8 = __this->____isHandPoseValid_1;
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		// _handPose.CopyFrom(result.HandPose);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_9 = __this->____handPose_2;
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* L_10 = ___result3;
		NullCheck(L_10);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_11 = L_10->___HandPose_3;
		NullCheck(L_9);
		HandPose_CopyFrom_mC60EE82AF04119C195F5738410C669828A1591A2(L_9, L_11, (bool)0, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabTarget::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabTarget_Clear_mAAB3867CCAFA0956923DA27C64F178E092FC2275 (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, const RuntimeMethod* method) 
{
	{
		// Anchor = GrabAnchor.None;
		HandGrabTarget_set_Anchor_mAB5B33ED470AEABD65A477DBA6620EADA588DB9F_inline(__this, 0, NULL);
		// _isHandPoseValid = false;
		__this->____isHandPoseValid_1 = (bool)0;
		// _relativeTo = null;
		__this->____relativeTo_4 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_4), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// _handAlignment = HandAlignType.None;
		__this->____handAlignment_5 = 0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabTarget__ctor_mD06AA25755FCB5214EA8107FDB7B5BDBFC5F7B6B (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private HandPose _handPose = new HandPose();
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_0 = (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733*)il2cpp_codegen_object_new(HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HandPose__ctor_m8DDCB748C9A9A7127EB91225555F359A38D15A2A(L_0, NULL);
		__this->____handPose_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handPose_2), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Oculus.Interaction.Input.Handedness Oculus.Interaction.HandGrab.HandPose::get_Handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandPose_get_Handedness_m21EDF49CE58ECD438C557618E3092D7E1462A88C (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, const RuntimeMethod* method) 
{
	{
		// get => _handedness;
		int32_t L_0 = __this->____handedness_0;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandPose::set_Handedness(Oculus.Interaction.Input.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_set_Handedness_m7541F9E0D9705BE4124515BB0706F89CE584C5E8 (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => _handedness = value;
		int32_t L_0 = ___value0;
		__this->____handedness_0 = L_0;
		return;
	}
}
// UnityEngine.Quaternion[] Oculus.Interaction.HandGrab.HandPose::get_JointRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* HandPose_get_JointRotations_m8299C59A02C209EE82FBDE99A2E9D4E60BC169A5 (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_jointRotations == null
		//     || _jointRotations.Length == 0)
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_0 = __this->____jointRotations_2;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_1 = __this->____jointRotations_2;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0023;
		}
	}

IL_0011:
	{
		// _jointRotations = new Quaternion[FingersMetadata.HAND_JOINT_IDS.Length];
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_2 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_2);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_3 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		__this->____jointRotations_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointRotations_2), (void*)L_3);
	}

IL_0023:
	{
		// return _jointRotations;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_4 = __this->____jointRotations_2;
		return L_4;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandPose::set_JointRotations(UnityEngine.Quaternion[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_set_JointRotations_mC6F4C41BEEB23FC9FDA50967459CF508F4D847AD (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___value0, const RuntimeMethod* method) 
{
	{
		// _jointRotations = value;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_0 = ___value0;
		__this->____jointRotations_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointRotations_2), (void*)L_0);
		// }
		return;
	}
}
// Oculus.Interaction.Input.JointFreedom[] Oculus.Interaction.HandGrab.HandPose::get_FingersFreedom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* HandPose_get_FingersFreedom_mD8DFD7F39A9B0344FB86F6C4D05149641467A426 (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_fingersFreedom == null
		//     || _fingersFreedom.Length == 0)
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_0 = __this->____fingersFreedom_1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_1 = __this->____fingersFreedom_1;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001c;
		}
	}

IL_0011:
	{
		// _fingersFreedom = FingersMetadata.DefaultFingersFreedom();
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_2;
		L_2 = FingersMetadata_DefaultFingersFreedom_m652A4BFA22044A9F52A4520C59785BE7F4C5999F(NULL);
		__this->____fingersFreedom_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingersFreedom_1), (void*)L_2);
	}

IL_001c:
	{
		// return _fingersFreedom;
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_3 = __this->____fingersFreedom_1;
		return L_3;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose__ctor_m8DDCB748C9A9A7127EB91225555F359A38D15A2A (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private JointFreedom[] _fingersFreedom = FingersMetadata.DefaultFingersFreedom();
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_0;
		L_0 = FingersMetadata_DefaultFingersFreedom_m652A4BFA22044A9F52A4520C59785BE7F4C5999F(NULL);
		__this->____fingersFreedom_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingersFreedom_1), (void*)L_0);
		// private Quaternion[] _jointRotations = new Quaternion[FingersMetadata.HAND_JOINT_IDS.Length];
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_1 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_1);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_2 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		__this->____jointRotations_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointRotations_2), (void*)L_2);
		// public HandPose()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandPose::.ctor(Oculus.Interaction.Input.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose__ctor_m049BC820939DF16A6B4931614899E7CDDAF85EB9 (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private JointFreedom[] _fingersFreedom = FingersMetadata.DefaultFingersFreedom();
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_0;
		L_0 = FingersMetadata_DefaultFingersFreedom_m652A4BFA22044A9F52A4520C59785BE7F4C5999F(NULL);
		__this->____fingersFreedom_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingersFreedom_1), (void*)L_0);
		// private Quaternion[] _jointRotations = new Quaternion[FingersMetadata.HAND_JOINT_IDS.Length];
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_1 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_1);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_2 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		__this->____jointRotations_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointRotations_2), (void*)L_2);
		// public HandPose(Handedness handedness)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _handedness = handedness;
		int32_t L_3 = ___handedness0;
		__this->____handedness_0 = L_3;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandPose::.ctor(Oculus.Interaction.HandGrab.HandPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose__ctor_m9564CB8D7FBA544FEDE69E0BAB1749324D6E3FE9 (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private JointFreedom[] _fingersFreedom = FingersMetadata.DefaultFingersFreedom();
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_0;
		L_0 = FingersMetadata_DefaultFingersFreedom_m652A4BFA22044A9F52A4520C59785BE7F4C5999F(NULL);
		__this->____fingersFreedom_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingersFreedom_1), (void*)L_0);
		// private Quaternion[] _jointRotations = new Quaternion[FingersMetadata.HAND_JOINT_IDS.Length];
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_1 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_1);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_2 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		__this->____jointRotations_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointRotations_2), (void*)L_2);
		// public HandPose(HandPose other)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.CopyFrom(other);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_3 = ___other0;
		HandPose_CopyFrom_mC60EE82AF04119C195F5738410C669828A1591A2(__this, L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandPose::CopyFrom(Oculus.Interaction.HandGrab.HandPose,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_CopyFrom_mC60EE82AF04119C195F5738410C669828A1591A2 (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* ___from0, bool ___mirrorHandedness1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!mirrorHandedness)
		bool L_0 = ___mirrorHandedness1;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// _handedness = from.Handedness;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_1 = ___from0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = HandPose_get_Handedness_m21EDF49CE58ECD438C557618E3092D7E1462A88C_inline(L_1, NULL);
		__this->____handedness_0 = L_2;
	}

IL_000f:
	{
		// Array.Copy(from.FingersFreedom, FingersFreedom, Constants.NUM_FINGERS);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_3 = ___from0;
		NullCheck(L_3);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_4;
		L_4 = HandPose_get_FingersFreedom_mD8DFD7F39A9B0344FB86F6C4D05149641467A426(L_3, NULL);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_5;
		L_5 = HandPose_get_FingersFreedom_mD8DFD7F39A9B0344FB86F6C4D05149641467A426(__this, NULL);
		Array_Copy_m4239F97ECC23A71F4191B8722362A1AA38E2E98F((RuntimeArray*)L_4, (RuntimeArray*)L_5, 5, NULL);
		// Array.Copy(from.JointRotations, JointRotations, FingersMetadata.HAND_JOINT_IDS.Length);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_6 = ___from0;
		NullCheck(L_6);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_7;
		L_7 = HandPose_get_JointRotations_m8299C59A02C209EE82FBDE99A2E9D4E60BC169A5(L_6, NULL);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_8;
		L_8 = HandPose_get_JointRotations_m8299C59A02C209EE82FBDE99A2E9D4E60BC169A5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_9 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_9);
		Array_Copy_m4239F97ECC23A71F4191B8722362A1AA38E2E98F((RuntimeArray*)L_7, (RuntimeArray*)L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandPose::Lerp(Oculus.Interaction.HandGrab.HandPose&,Oculus.Interaction.HandGrab.HandPose&,System.Single,Oculus.Interaction.HandGrab.HandPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_Lerp_m69138327CAC912F9B291269BD8FB6AB0271F2044 (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** ___from0, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** ___to1, float ___t2, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** ___result3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* G_B6_0 = NULL;
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; i++)
		V_1 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		// result.JointRotations[i] = Quaternion.SlerpUnclamped(from.JointRotations[i], to.JointRotations[i], t);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** L_0 = ___result3;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_1 = *((HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733**)L_0);
		NullCheck(L_1);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_2;
		L_2 = HandPose_get_JointRotations_m8299C59A02C209EE82FBDE99A2E9D4E60BC169A5(L_1, NULL);
		int32_t L_3 = V_1;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** L_4 = ___from0;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_5 = *((HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733**)L_4);
		NullCheck(L_5);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_6;
		L_6 = HandPose_get_JointRotations_m8299C59A02C209EE82FBDE99A2E9D4E60BC169A5(L_5, NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** L_10 = ___to1;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_11 = *((HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733**)L_10);
		NullCheck(L_11);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_12;
		L_12 = HandPose_get_JointRotations_m8299C59A02C209EE82FBDE99A2E9D4E60BC169A5(L_11, NULL);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		float L_16 = ___t2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_SlerpUnclamped_mB38920352A1B11369D782F78E183568CAFA82C0F(L_9, L_15, L_16, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_17);
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; i++)
		int32_t L_19 = V_1;
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_20 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// HandPose dominantPose = t <= 0.5f ? from : to;
		float L_21 = ___t2;
		if ((((float)L_21) <= ((float)(0.5f))))
		{
			goto IL_004b;
		}
	}
	{
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** L_22 = ___to1;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_23 = *((HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733**)L_22);
		G_B6_0 = L_23;
		goto IL_004d;
	}

IL_004b:
	{
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** L_24 = ___from0;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_25 = *((HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733**)L_24);
		G_B6_0 = L_25;
	}

IL_004d:
	{
		V_0 = G_B6_0;
		// result._handedness = dominantPose.Handedness;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** L_26 = ___result3;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_27 = *((HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733**)L_26);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = HandPose_get_Handedness_m21EDF49CE58ECD438C557618E3092D7E1462A88C_inline(L_28, NULL);
		NullCheck(L_27);
		L_27->____handedness_0 = L_29;
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_2 = 0;
		goto IL_0074;
	}

IL_005f:
	{
		// result.FingersFreedom[i] = dominantPose.FingersFreedom[i];
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** L_30 = ___result3;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_31 = *((HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733**)L_30);
		NullCheck(L_31);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_32;
		L_32 = HandPose_get_FingersFreedom_mD8DFD7F39A9B0344FB86F6C4D05149641467A426(L_31, NULL);
		int32_t L_33 = V_2;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_34 = V_0;
		NullCheck(L_34);
		JointFreedomU5BU5D_t0633B95A74A839E476B718AF5883237BE60543E4* L_35;
		L_35 = HandPose_get_FingersFreedom_mD8DFD7F39A9B0344FB86F6C4D05149641467A426(L_34, NULL);
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (int32_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)L_38);
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0074:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_40 = V_2;
		if ((((int32_t)L_40) < ((int32_t)5)))
		{
			goto IL_005f;
		}
	}
	{
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


// Conversion methods for marshalling of: Oculus.Interaction.HandGrab.PoseTravelData
IL2CPP_EXTERN_C void PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshal_pinvoke(const PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128& unmarshaled, PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshaled_pinvoke& marshaled)
{
	marshaled.____travelSpeed_0 = unmarshaled.____travelSpeed_0;
	marshaled.____useFixedTravelTime_1 = static_cast<int32_t>(unmarshaled.____useFixedTravelTime_1);
	if (unmarshaled.____travelCurve_2 != NULL)
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke(*unmarshaled.____travelCurve_2, marshaled.____travelCurve_2);
	}
}
IL2CPP_EXTERN_C void PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshal_pinvoke_back(const PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshaled_pinvoke& marshaled, PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float unmarshaled_travelSpeed_temp_0 = 0.0f;
	unmarshaled_travelSpeed_temp_0 = marshaled.____travelSpeed_0;
	unmarshaled.____travelSpeed_0 = unmarshaled_travelSpeed_temp_0;
	bool unmarshaled_useFixedTravelTime_temp_1 = false;
	unmarshaled_useFixedTravelTime_temp_1 = static_cast<bool>(marshaled.____useFixedTravelTime_1);
	unmarshaled.____useFixedTravelTime_1 = unmarshaled_useFixedTravelTime_temp_1;
	unmarshaled.____travelCurve_2 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____travelCurve_2), (void*)(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var));
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_back(marshaled.____travelCurve_2, *unmarshaled.____travelCurve_2);
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.HandGrab.PoseTravelData
IL2CPP_EXTERN_C void PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshal_pinvoke_cleanup(PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshaled_pinvoke& marshaled)
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_cleanup(marshaled.____travelCurve_2);
}


// Conversion methods for marshalling of: Oculus.Interaction.HandGrab.PoseTravelData
IL2CPP_EXTERN_C void PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshal_com(const PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128& unmarshaled, PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshaled_com& marshaled)
{
	marshaled.____travelSpeed_0 = unmarshaled.____travelSpeed_0;
	marshaled.____useFixedTravelTime_1 = static_cast<int32_t>(unmarshaled.____useFixedTravelTime_1);
	if (unmarshaled.____travelCurve_2 != NULL)
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_com(*unmarshaled.____travelCurve_2, *marshaled.____travelCurve_2);
	}
}
IL2CPP_EXTERN_C void PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshal_com_back(const PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshaled_com& marshaled, PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128& unmarshaled)
{
	float unmarshaled_travelSpeed_temp_0 = 0.0f;
	unmarshaled_travelSpeed_temp_0 = marshaled.____travelSpeed_0;
	unmarshaled.____travelSpeed_0 = unmarshaled_travelSpeed_temp_0;
	bool unmarshaled_useFixedTravelTime_temp_1 = false;
	unmarshaled_useFixedTravelTime_temp_1 = static_cast<bool>(marshaled.____useFixedTravelTime_1);
	unmarshaled.____useFixedTravelTime_1 = unmarshaled_useFixedTravelTime_temp_1;
	if (unmarshaled.____travelCurve_2 != NULL)
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_com_back(*marshaled.____travelCurve_2, *unmarshaled.____travelCurve_2);
	}
}
// Conversion method for clean up from marshalling of: Oculus.Interaction.HandGrab.PoseTravelData
IL2CPP_EXTERN_C void PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshal_com_cleanup(PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128_marshaled_com& marshaled)
{
	if (marshaled.____travelCurve_2 != NULL)
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_com_cleanup(*marshaled.____travelCurve_2);
	}
}
// Oculus.Interaction.HandGrab.PoseTravelData Oculus.Interaction.HandGrab.PoseTravelData::get_DEFAULT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 PoseTravelData_get_DEFAULT_m69B7FCB5D00A4C883EB181A296B4BB4CFD462054 (const RuntimeMethod* method) 
{
	PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static PoseTravelData DEFAULT => new PoseTravelData()
		// {
		//     _travelSpeed = 1f,
		//     _useFixedTravelTime = false,
		//     _travelCurve = AnimationCurve.EaseInOut(0f, 0f, 1f, 1f)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128));
		(&V_0)->____travelSpeed_0 = (1.0f);
		(&V_0)->____useFixedTravelTime_1 = (bool)0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AnimationCurve_EaseInOut_mA8461373A0FC9464E20724CAD519973F85FE4A15((0.0f), (0.0f), (1.0f), (1.0f), NULL);
		(&V_0)->____travelCurve_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->____travelCurve_2), (void*)L_0);
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_1 = V_0;
		return L_1;
	}
}
// Oculus.Interaction.HandGrab.PoseTravelData Oculus.Interaction.HandGrab.PoseTravelData::get_FAST()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 PoseTravelData_get_FAST_mD1B7A32F129CCCDEE58882558247324FEED5E4D3 (const RuntimeMethod* method) 
{
	PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static PoseTravelData FAST => new PoseTravelData()
		// {
		//     _travelSpeed = 0.1f,
		//     _useFixedTravelTime = true,
		//     _travelCurve = AnimationCurve.EaseInOut(0f, 0f, 1f, 1f)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128));
		(&V_0)->____travelSpeed_0 = (0.100000001f);
		(&V_0)->____useFixedTravelTime_1 = (bool)1;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AnimationCurve_EaseInOut_mA8461373A0FC9464E20724CAD519973F85FE4A15((0.0f), (0.0f), (1.0f), (1.0f), NULL);
		(&V_0)->____travelCurve_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->____travelCurve_2), (void*)L_0);
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_1 = V_0;
		return L_1;
	}
}
// Oculus.Interaction.Tween Oculus.Interaction.HandGrab.PoseTravelData::CreateTween(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* PoseTravelData_CreateTween_m4083C8FB9F3974585BBC2C6F34833914AFD2ACA9 (PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___from0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float tweenTime = _travelSpeed;
		float L_0 = __this->____travelSpeed_0;
		V_0 = L_0;
		// if (!_useFixedTravelTime && _travelSpeed != 0f)
		bool L_1 = __this->____useFixedTravelTime_1;
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		float L_2 = __this->____travelSpeed_0;
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_002b;
		}
	}
	{
		// float travelDistance = PerceivedDistance(from, to);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = ___from0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = ___to1;
		float L_5;
		L_5 = PoseTravelData_PerceivedDistance_m65BA9AE5C713503EFFD94F8F5F2A0E400FE2A617(L_3, L_4, NULL);
		// tweenTime = travelDistance / _travelSpeed;
		float L_6 = __this->____travelSpeed_0;
		V_0 = ((float)(L_5/L_6));
	}

IL_002b:
	{
		// Tween tween = new Tween(from, tweenTime, tweenTime * 0.5f, _travelCurve);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = ___from0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_7);
		float L_9 = V_0;
		float L_10 = V_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = __this->____travelCurve_2;
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_12 = (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967*)il2cpp_codegen_object_new(Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Tween__ctor_m938BD326498070ED443F7A2C41A725D457264E49(L_12, L_8, L_9, ((float)il2cpp_codegen_multiply(L_10, (0.5f))), L_11, NULL);
		// tween.MoveTo(to);
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_13 = L_12;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_14 = ___to1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_14);
		NullCheck(L_13);
		Tween_MoveTo_m2383FC037FC8E3C0DCF376D4E73BD48709EA2AC6(L_13, L_15, NULL);
		// return tween;
		return L_13;
	}
}
IL2CPP_EXTERN_C  Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* PoseTravelData_CreateTween_m4083C8FB9F3974585BBC2C6F34833914AFD2ACA9_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___from0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___to1, const RuntimeMethod* method)
{
	PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128*>(__this + _offset);
	Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* _returnValue;
	_returnValue = PoseTravelData_CreateTween_m4083C8FB9F3974585BBC2C6F34833914AFD2ACA9(_thisAdjusted, ___from0, ___to1, method);
	return _returnValue;
}
// System.Single Oculus.Interaction.HandGrab.PoseTravelData::PerceivedDistance(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PoseTravelData_PerceivedDistance_m65BA9AE5C713503EFFD94F8F5F2A0E400FE2A617 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___from0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Pose grabOffset = PoseUtils.Delta(from, to);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___from0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___to1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = PoseUtils_Delta_mB6858A11877733C3D760D8815E087B73A3A38401(L_0, L_1, NULL);
		V_0 = L_2;
		// float translationDistance = grabOffset.position.magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&(&V_0)->___position_0);
		float L_4;
		L_4 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_3, NULL);
		V_1 = L_4;
		// float rotationDistance = DEGREES_TO_PERCEIVED_METERS * Mathf.Max(
		//     Mathf.Max(Vector3.Angle(from.forward, to.forward),
		//     Vector3.Angle(from.up, to.up),
		//     Vector3.Angle(from.right, to.right)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = L_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = L_7;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_9 = ___from0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_9);
		V_3 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A((&V_3), NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = ___to1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_12);
		V_3 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A((&V_3), NULL);
		float L_15;
		L_15 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_11, L_14, NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_15);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = L_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_17 = ___from0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_17);
		V_3 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Pose_get_up_m5431E350242BEBB0CD7B0AAF9DC9468DC6DDFE5C((&V_3), NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_20 = ___to1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_21 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_20);
		V_3 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Pose_get_up_m5431E350242BEBB0CD7B0AAF9DC9468DC6DDFE5C((&V_3), NULL);
		float L_23;
		L_23 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_19, L_22, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_23);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = L_16;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_25 = ___from0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_26 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_25);
		V_3 = L_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE((&V_3), NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_28 = ___to1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_29 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_28);
		V_3 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE((&V_3), NULL);
		float L_31;
		L_31 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_27, L_30, NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_31);
		float L_32;
		L_32 = Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline(L_24, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_32);
		float L_33;
		L_33 = Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline(L_6, NULL);
		V_2 = ((float)il2cpp_codegen_multiply((0.00138888892f), L_33));
		// float travelDistance = Mathf.Max(translationDistance, rotationDistance);
		float L_34 = V_1;
		float L_35 = V_2;
		float L_36;
		L_36 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_34, L_35, NULL);
		// return travelDistance;
		return L_36;
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
// Oculus.Interaction.HandGrab.IHandGrabUseDelegate Oculus.Interaction.HandGrab.HandGrabUseInteractable::get_HandUseDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandGrabUseInteractable_get_HandUseDelegate_mD930323D6D43D3AF5974E4966B1D94F4CD7F3EAB (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) 
{
	{
		// private IHandGrabUseDelegate HandUseDelegate { get; set; }
		RuntimeObject* L_0 = __this->___U3CHandUseDelegateU3Ek__BackingField_24;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractable::set_HandUseDelegate(Oculus.Interaction.HandGrab.IHandGrabUseDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractable_set_HandUseDelegate_m92A62BAD59BCF0E60F997E84461B9F2EF15CACF1 (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// private IHandGrabUseDelegate HandUseDelegate { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CHandUseDelegateU3Ek__BackingField_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandUseDelegateU3Ek__BackingField_24), (void*)L_0);
		return;
	}
}
// Oculus.Interaction.GrabAPI.GrabbingRule Oculus.Interaction.HandGrab.HandGrabUseInteractable::get_UseFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D HandGrabUseInteractable_get_UseFingers_m098413046899FFAC5388CD7C74AE3FCC3030C84D (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) 
{
	{
		// return _useFingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = __this->____useFingers_25;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractable::set_UseFingers(Oculus.Interaction.GrabAPI.GrabbingRule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractable_set_UseFingers_mA2E48C842D60D58081AE290320299E00C1D1ACCE (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D ___value0, const RuntimeMethod* method) 
{
	{
		// _useFingers = value;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = ___value0;
		__this->____useFingers_25 = L_0;
		// }
		return;
	}
}
// System.Single Oculus.Interaction.HandGrab.HandGrabUseInteractable::get_StrengthDeadzone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabUseInteractable_get_StrengthDeadzone_mE6F18EAEF485AC7A4C9100433AA2E39D41E0C7DE (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) 
{
	{
		// return _strengthDeadzone;
		float L_0 = __this->____strengthDeadzone_26;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractable::set_StrengthDeadzone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractable_set_StrengthDeadzone_mCADF6B1E743E01925A327B30A0A35AB3E602C18C (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// _strengthDeadzone = value;
		float L_0 = ___value0;
		__this->____strengthDeadzone_26 = L_0;
		// }
		return;
	}
}
// System.Single Oculus.Interaction.HandGrab.HandGrabUseInteractable::get_UseProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabUseInteractable_get_UseProgress_mF1E5CF795E73176B232C8CFB1536ED492D6FF87C (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) 
{
	{
		// public float UseProgress { get; private set; }
		float L_0 = __this->___U3CUseProgressU3Ek__BackingField_29;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractable::set_UseProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractable_set_UseProgress_m928ABB671AA64B824AC5F61A64EA9FE743D33DF2 (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float UseProgress { get; private set; }
		float L_0 = ___value0;
		__this->___U3CUseProgressU3Ek__BackingField_29 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose> Oculus.Interaction.HandGrab.HandGrabUseInteractable::get_RelaxGrabPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* HandGrabUseInteractable_get_RelaxGrabPoints_mC83DE1F60C178CD032EEDFAD6309F279675ACFE3 (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) 
{
	{
		// public List<HandGrabPose> RelaxGrabPoints => _relaxedHandGrabPoses;
		List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* L_0 = __this->____relaxedHandGrabPoses_27;
		return L_0;
	}
}
// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose> Oculus.Interaction.HandGrab.HandGrabUseInteractable::get_TightGrabPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* HandGrabUseInteractable_get_TightGrabPoints_m815AA9D3E89FDE7D91FF6D2D31FFBCB39C90B8F4 (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) 
{
	{
		// public List<HandGrabPose> TightGrabPoints => _tightHandGrabPoses;
		List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* L_0 = __this->____tightHandGrabPoses_28;
		return L_0;
	}
}
// System.Single Oculus.Interaction.HandGrab.HandGrabUseInteractable::get_UseStrengthDeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabUseInteractable_get_UseStrengthDeadZone_mA500D3AB2844FADD6C41BF3BFB63E963A88BD378 (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) 
{
	{
		// public float UseStrengthDeadZone => _strengthDeadzone;
		float L_0 = __this->____strengthDeadzone_26;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractable::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractable_Reset_m1DC320B34677CF8499F1D3340E153A34F0B679FE (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisHandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127_m012C2EEE3BD64E4961FD6012333B0581D3A8AE52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0648F08A03E21695D42860113F1FF1A4B3E39D8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* V_0 = NULL;
	{
		// HandGrabInteractable handGrabInteractable = this.GetComponentInParent<HandGrabInteractable>();
		HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* L_0;
		L_0 = Component_GetComponentInParent_TisHandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127_m012C2EEE3BD64E4961FD6012333B0581D3A8AE52(__this, Component_GetComponentInParent_TisHandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127_m012C2EEE3BD64E4961FD6012333B0581D3A8AE52_RuntimeMethod_var);
		V_0 = L_0;
		// if (handGrabInteractable != null)
		HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// _relaxedHandGrabPoses = new List<HandGrabPose>(handGrabInteractable.HandGrabPoses);
		HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* L_3 = V_0;
		NullCheck(L_3);
		List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* L_4;
		L_4 = HandGrabInteractable_get_HandGrabPoses_m8C6BA9970270C7812825C68E3B615064DDC184B9_inline(L_3, NULL);
		List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* L_5 = (List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9*)il2cpp_codegen_object_new(List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m0648F08A03E21695D42860113F1FF1A4B3E39D8A(L_5, L_4, List_1__ctor_m0648F08A03E21695D42860113F1FF1A4B3E39D8A_RuntimeMethod_var);
		__this->____relaxedHandGrabPoses_27 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relaxedHandGrabPoses_27), (void*)L_5);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractable::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractable_Awake_m44CFC08A98D83B803659C95EA6475ACA0D855D78 (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabUseDelegate_t3F62775D7E6ABA1030ED9655920F633832C2E467_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactable_2_Awake_mE132E6063A61D7FA5100C9EEF0302531DC3DD448_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		Interactable_2_Awake_mE132E6063A61D7FA5100C9EEF0302531DC3DD448(__this, Interactable_2_Awake_mE132E6063A61D7FA5100C9EEF0302531DC3DD448_RuntimeMethod_var);
		// HandUseDelegate = _handUseDelegate as IHandGrabUseDelegate;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____handUseDelegate_23;
		HandGrabUseInteractable_set_HandUseDelegate_m92A62BAD59BCF0E60F997E84461B9F2EF15CACF1_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IHandGrabUseDelegate_t3F62775D7E6ABA1030ED9655920F633832C2E467_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractable::SelectingInteractorAdded(Oculus.Interaction.HandGrab.HandGrabUseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractable_SelectingInteractorAdded_mD98345495D584CE798B7732EDBD11EC79AB26E3C (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* ___interactor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabUseDelegate_t3F62775D7E6ABA1030ED9655920F633832C2E467_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactable_2_SelectingInteractorAdded_m8B0214AA49EE68BFF137AB54B194ECE237764D88_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// base.SelectingInteractorAdded(interactor);
		HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* L_0 = ___interactor0;
		Interactable_2_SelectingInteractorAdded_m8B0214AA49EE68BFF137AB54B194ECE237764D88(__this, L_0, Interactable_2_SelectingInteractorAdded_m8B0214AA49EE68BFF137AB54B194ECE237764D88_RuntimeMethod_var);
		// HandUseDelegate?.BeginUse();
		RuntimeObject* L_1;
		L_1 = HandGrabUseInteractable_get_HandUseDelegate_mD930323D6D43D3AF5974E4966B1D94F4CD7F3EAB_inline(__this, NULL);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Oculus.Interaction.HandGrab.IHandGrabUseDelegate::BeginUse() */, IHandGrabUseDelegate_t3F62775D7E6ABA1030ED9655920F633832C2E467_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractable::SelectingInteractorRemoved(Oculus.Interaction.HandGrab.HandGrabUseInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractable_SelectingInteractorRemoved_m087BF19C6E630B3DF5A231888B1B4E74DF8D390D (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* ___interactor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabUseDelegate_t3F62775D7E6ABA1030ED9655920F633832C2E467_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactable_2_SelectingInteractorRemoved_m2D32ABABF88DAEB59119B2E598AFAAC2D6D12BFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// base.SelectingInteractorRemoved(interactor);
		HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* L_0 = ___interactor0;
		Interactable_2_SelectingInteractorRemoved_m2D32ABABF88DAEB59119B2E598AFAAC2D6D12BFE(__this, L_0, Interactable_2_SelectingInteractorRemoved_m2D32ABABF88DAEB59119B2E598AFAAC2D6D12BFE_RuntimeMethod_var);
		// HandUseDelegate?.EndUse();
		RuntimeObject* L_1;
		L_1 = HandGrabUseInteractable_get_HandUseDelegate_mD930323D6D43D3AF5974E4966B1D94F4CD7F3EAB_inline(__this, NULL);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Oculus.Interaction.HandGrab.IHandGrabUseDelegate::EndUse() */, IHandGrabUseDelegate_t3F62775D7E6ABA1030ED9655920F633832C2E467_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Single Oculus.Interaction.HandGrab.HandGrabUseInteractable::ComputeUseStrength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabUseInteractable_ComputeUseStrength_mC530183912B747C85E1035D63AFFCA7404BC8C62 (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, float ___strength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHandGrabUseDelegate_t3F62775D7E6ABA1030ED9655920F633832C2E467_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* G_B2_0 = NULL;
	HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* G_B3_1 = NULL;
	{
		// UseProgress = HandUseDelegate != null ? HandUseDelegate.ComputeUseStrength(strength) : strength;
		RuntimeObject* L_0;
		L_0 = HandGrabUseInteractable_get_HandUseDelegate_mD930323D6D43D3AF5974E4966B1D94F4CD7F3EAB_inline(__this, NULL);
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
	}
	{
		float L_1 = ___strength0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_000c:
	{
		RuntimeObject* L_2;
		L_2 = HandGrabUseInteractable_get_HandUseDelegate_mD930323D6D43D3AF5974E4966B1D94F4CD7F3EAB_inline(__this, NULL);
		float L_3 = ___strength0;
		NullCheck(L_2);
		float L_4;
		L_4 = InterfaceFuncInvoker1< float, float >::Invoke(2 /* System.Single Oculus.Interaction.HandGrab.IHandGrabUseDelegate::ComputeUseStrength(System.Single) */, IHandGrabUseDelegate_t3F62775D7E6ABA1030ED9655920F633832C2E467_il2cpp_TypeInfo_var, L_2, L_3);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		HandGrabUseInteractable_set_UseProgress_m928ABB671AA64B824AC5F61A64EA9FE743D33DF2_inline(G_B3_1, G_B3_0, NULL);
		// return UseProgress;
		float L_5;
		L_5 = HandGrabUseInteractable_get_UseProgress_mF1E5CF795E73176B232C8CFB1536ED492D6FF87C_inline(__this, NULL);
		return L_5;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.HandGrabUseInteractable::FindBestHandPoses(System.Single,Oculus.Interaction.HandGrab.HandPose&,Oculus.Interaction.HandGrab.HandPose&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabUseInteractable_FindBestHandPoses_mE5A79BE9283DEBCAFBF32631663F9A00C299792A (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, float ___handScale0, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** ___relaxedHandPose1, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** ___tightHandPose2, float* ___score3, const RuntimeMethod* method) 
{
	{
		// if (FindScaledHandPose(_relaxedHandGrabPoses, handScale, ref relaxedHandPose)
		//     && FindScaledHandPose(_tightHandGrabPoses, handScale, ref tightHandPose))
		List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* L_0 = __this->____relaxedHandGrabPoses_27;
		float L_1 = ___handScale0;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** L_2 = ___relaxedHandPose1;
		bool L_3;
		L_3 = HandGrabUseInteractable_FindScaledHandPose_m08DBBD07307F0C5578B1E6CBD7DFAE92C8F78004(__this, L_0, L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* L_4 = __this->____tightHandGrabPoses_28;
		float L_5 = ___handScale0;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** L_6 = ___tightHandPose2;
		bool L_7;
		L_7 = HandGrabUseInteractable_FindScaledHandPose_m08DBBD07307F0C5578B1E6CBD7DFAE92C8F78004(__this, L_4, L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		// score = 1f;
		float* L_8 = ___score3;
		*((float*)L_8) = (float)(1.0f);
		// return true;
		return (bool)1;
	}

IL_002a:
	{
		// score = 0f;
		float* L_9 = ___score3;
		*((float*)L_9) = (float)(0.0f);
		// return false;
		return (bool)0;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.HandGrabUseInteractable::FindScaledHandPose(System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose>,System.Single,Oculus.Interaction.HandGrab.HandPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabUseInteractable_FindScaledHandPose_m08DBBD07307F0C5578B1E6CBD7DFAE92C8F78004 (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* ____handGrabPoses0, float ___handScale1, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** ___handPose2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE1BB17F8B8501E40563161FE3F17C639F062A5FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m04166060D3E498580A01A000252762E2AE2A9B63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* V_0 = NULL;
	HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* V_1 = NULL;
	float V_2 = 0.0f;
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* V_3 = NULL;
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* V_4 = NULL;
	{
		// if (_handGrabPoses.Count == 1 && _handGrabPoses[0].HandPose != null)
		List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* L_0 = ____handGrabPoses0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mE1BB17F8B8501E40563161FE3F17C639F062A5FB_inline(L_0, List_1_get_Count_mE1BB17F8B8501E40563161FE3F17C639F062A5FB_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* L_2 = ____handGrabPoses0;
		NullCheck(L_2);
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_3;
		L_3 = List_1_get_Item_m04166060D3E498580A01A000252762E2AE2A9B63(L_2, 0, List_1_get_Item_m04166060D3E498580A01A000252762E2AE2A9B63_RuntimeMethod_var);
		NullCheck(L_3);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_4;
		L_4 = HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF(L_3, NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// handPose.CopyFrom(_handGrabPoses[0].HandPose);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** L_5 = ___handPose2;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_6 = *((HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733**)L_5);
		List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* L_7 = ____handGrabPoses0;
		NullCheck(L_7);
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_8;
		L_8 = List_1_get_Item_m04166060D3E498580A01A000252762E2AE2A9B63(L_7, 0, List_1_get_Item_m04166060D3E498580A01A000252762E2AE2A9B63_RuntimeMethod_var);
		NullCheck(L_8);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_9;
		L_9 = HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF(L_8, NULL);
		NullCheck(L_6);
		HandPose_CopyFrom_mC60EE82AF04119C195F5738410C669828A1591A2(L_6, L_9, (bool)0, NULL);
		// return true;
		return (bool)1;
	}

IL_002d:
	{
		// else if (_handGrabPoses.Count > 1)
		List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* L_10 = ____handGrabPoses0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mE1BB17F8B8501E40563161FE3F17C639F062A5FB_inline(L_10, List_1_get_Count_mE1BB17F8B8501E40563161FE3F17C639F062A5FB_RuntimeMethod_var);
		if ((((int32_t)L_11) <= ((int32_t)1)))
		{
			goto IL_00a1;
		}
	}
	{
		// GrabPoseFinder.FindInterpolationRange(handScale, _handGrabPoses, out HandGrabPose under, out HandGrabPose over, out float t);
		float L_12 = ___handScale1;
		List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* L_13 = ____handGrabPoses0;
		GrabPoseFinder_FindInterpolationRange_m8552C64ACF517345A37E1CFA92220F4824FC87BB(L_12, L_13, (&V_0), (&V_1), (&V_2), NULL);
		// if (under.HandPose != null && over.HandPose != null)
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_14 = V_0;
		NullCheck(L_14);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_15;
		L_15 = HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF(L_14, NULL);
		if (!L_15)
		{
			goto IL_006f;
		}
	}
	{
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_16 = V_1;
		NullCheck(L_16);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_17;
		L_17 = HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF(L_16, NULL);
		if (!L_17)
		{
			goto IL_006f;
		}
	}
	{
		// HandPose.Lerp(under.HandPose, over.HandPose, t, ref handPose);
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_18 = V_0;
		NullCheck(L_18);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_19;
		L_19 = HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF(L_18, NULL);
		V_3 = L_19;
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_20 = V_1;
		NullCheck(L_20);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_21;
		L_21 = HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF(L_20, NULL);
		V_4 = L_21;
		float L_22 = V_2;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** L_23 = ___handPose2;
		HandPose_Lerp_m69138327CAC912F9B291269BD8FB6AB0271F2044((&V_3), (&V_4), L_22, L_23, NULL);
		// return true;
		return (bool)1;
	}

IL_006f:
	{
		// else if (under.HandPose != null)
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_24 = V_0;
		NullCheck(L_24);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_25;
		L_25 = HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF(L_24, NULL);
		if (!L_25)
		{
			goto IL_0087;
		}
	}
	{
		// handPose.CopyFrom(under.HandPose);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** L_26 = ___handPose2;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_27 = *((HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733**)L_26);
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_28 = V_0;
		NullCheck(L_28);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_29;
		L_29 = HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF(L_28, NULL);
		NullCheck(L_27);
		HandPose_CopyFrom_mC60EE82AF04119C195F5738410C669828A1591A2(L_27, L_29, (bool)0, NULL);
		// return true;
		return (bool)1;
	}

IL_0087:
	{
		// else if (over.HandPose != null)
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_30 = V_1;
		NullCheck(L_30);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_31;
		L_31 = HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF(L_30, NULL);
		if (!L_31)
		{
			goto IL_009f;
		}
	}
	{
		// handPose.CopyFrom(over.HandPose);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** L_32 = ___handPose2;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_33 = *((HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733**)L_32);
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_34 = V_1;
		NullCheck(L_34);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_35;
		L_35 = HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF(L_34, NULL);
		NullCheck(L_33);
		HandPose_CopyFrom_mC60EE82AF04119C195F5738410C669828A1591A2(L_33, L_35, (bool)0, NULL);
		// return true;
		return (bool)1;
	}

IL_009f:
	{
		// return false;
		return (bool)0;
	}

IL_00a1:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractable::InjectOptionalForwardUseDelegate(Oculus.Interaction.HandGrab.IHandGrabUseDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractable_InjectOptionalForwardUseDelegate_m922E3086C0CFDBD5A6FAC01047B7DEAF63A57E45 (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, RuntimeObject* ___useDelegate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _handUseDelegate = useDelegate as MonoBehaviour;
		RuntimeObject* L_0 = ___useDelegate0;
		__this->____handUseDelegate_23 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handUseDelegate_23), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// HandUseDelegate = useDelegate;
		RuntimeObject* L_1 = ___useDelegate0;
		HandGrabUseInteractable_set_HandUseDelegate_m92A62BAD59BCF0E60F997E84461B9F2EF15CACF1_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractable::InjectOptionalRelaxedHandGrabPoints(System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractable_InjectOptionalRelaxedHandGrabPoints_m13DD223379A0E91563D31E3DF55785951B600C9B (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* ___relaxedHandGrabPoints0, const RuntimeMethod* method) 
{
	{
		// _relaxedHandGrabPoses = relaxedHandGrabPoints;
		List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* L_0 = ___relaxedHandGrabPoints0;
		__this->____relaxedHandGrabPoses_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relaxedHandGrabPoses_27), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractable::InjectOptionalTightHandGrabPoints(System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractable_InjectOptionalTightHandGrabPoints_m669F131AABD4E9EF35CB21E30F08B5102218897A (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* ___tightHandGrabPoints0, const RuntimeMethod* method) 
{
	{
		// _tightHandGrabPoses = tightHandGrabPoints;
		List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* L_0 = ___tightHandGrabPoints0;
		__this->____tightHandGrabPoses_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tightHandGrabPoses_28), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractable__ctor_mA09A13C3017F01F487AEFA710FAF029A9950BECD (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactable_2__ctor_mEFEF0C21BF905F53C4168926AA4A7844ECD0676D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2CFCBD30AABBE54B41CBBF42140449B123820E4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float _strengthDeadzone = 0.2f;
		__this->____strengthDeadzone_26 = (0.200000003f);
		// private List<HandGrabPose> _relaxedHandGrabPoses = new List<HandGrabPose>();
		List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* L_0 = (List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9*)il2cpp_codegen_object_new(List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2CFCBD30AABBE54B41CBBF42140449B123820E4C(L_0, List_1__ctor_m2CFCBD30AABBE54B41CBBF42140449B123820E4C_RuntimeMethod_var);
		__this->____relaxedHandGrabPoses_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relaxedHandGrabPoses_27), (void*)L_0);
		// private List<HandGrabPose> _tightHandGrabPoses = new List<HandGrabPose>();
		List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* L_1 = (List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9*)il2cpp_codegen_object_new(List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m2CFCBD30AABBE54B41CBBF42140449B123820E4C(L_1, List_1__ctor_m2CFCBD30AABBE54B41CBBF42140449B123820E4C_RuntimeMethod_var);
		__this->____tightHandGrabPoses_28 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tightHandGrabPoses_28), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51_il2cpp_TypeInfo_var);
		Interactable_2__ctor_mEFEF0C21BF905F53C4168926AA4A7844ECD0676D(__this, Interactable_2__ctor_mEFEF0C21BF905F53C4168926AA4A7844ECD0676D_RuntimeMethod_var);
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
// Oculus.Interaction.Input.IHand Oculus.Interaction.HandGrab.HandGrabUseInteractor::get_Hand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandGrabUseInteractor_get_Hand_m414B6EBFAEA220DEC05577FA517CD062BA33720A (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	{
		// public IHand Hand { get; private set; }
		RuntimeObject* L_0 = __this->___U3CHandU3Ek__BackingField_35;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::set_Hand(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_set_Hand_mC2D783BF4E9E51636628260004C2C6E2617EBE78 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IHand Hand { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CHandU3Ek__BackingField_35 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandU3Ek__BackingField_35), (void*)L_0);
		return;
	}
}
// Oculus.Interaction.IFingerUseAPI Oculus.Interaction.HandGrab.HandGrabUseInteractor::get_UseAPI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandGrabUseInteractor_get_UseAPI_mD285A0CE71C1D5FE09683305289E4580B7F343F2 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	{
		// public IFingerUseAPI UseAPI { get; private set; }
		RuntimeObject* L_0 = __this->___U3CUseAPIU3Ek__BackingField_37;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::set_UseAPI(Oculus.Interaction.IFingerUseAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_set_UseAPI_mB187F2F858452D42FC32163E6BC9C961CBF353D5 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IFingerUseAPI UseAPI { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CUseAPIU3Ek__BackingField_37 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUseAPIU3Ek__BackingField_37), (void*)L_0);
		return;
	}
}
// Oculus.Interaction.HandGrab.HandGrabTarget Oculus.Interaction.HandGrab.HandGrabUseInteractor::get_HandGrabTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* HandGrabUseInteractor_get_HandGrabTarget_m8B85502D18F1FE86941FA75F7416653E0AA896B7 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	{
		// public HandGrabTarget HandGrabTarget => _currentTarget;
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_0 = __this->____currentTarget_38;
		return L_0;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.HandGrabUseInteractor::get_IsGrabbing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabUseInteractor_get_IsGrabbing_m759209C3DB0DCAF4165DA356227BA479BE546539 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsGrabbing => SelectedInteractable != null;
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_0;
		L_0 = Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_inline(__this, Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
	}
}
// System.Single Oculus.Interaction.HandGrab.HandGrabUseInteractor::get_WristStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabUseInteractor_get_WristStrength_m9D10C4257258A38A27DA9D68283ACC5643305D13 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	{
		// public float WristStrength => 0f;
		return (0.0f);
	}
}
// System.Single Oculus.Interaction.HandGrab.HandGrabUseInteractor::get_FingersStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabUseInteractor_get_FingersStrength_m27E884AA6B650ABA88D6FC385A42350824C80C8C (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	{
		// public float FingersStrength => IsGrabbing ? 1f : 0f;
		bool L_0;
		L_0 = HandGrabUseInteractor_get_IsGrabbing_m759209C3DB0DCAF4165DA356227BA479BE546539(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return (0.0f);
	}

IL_000e:
	{
		return (1.0f);
	}
}
// UnityEngine.Pose Oculus.Interaction.HandGrab.HandGrabUseInteractor::get_WristToGrabPoseOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 HandGrabUseInteractor_get_WristToGrabPoseOffset_m5FEB2EA499E0EA6D4B3ACE18CD62F1A4D07A41F1 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Pose WristToGrabPoseOffset => Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		return L_0;
	}
}
// System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState> Oculus.Interaction.HandGrab.HandGrabUseInteractor::get_WhenHandGrabStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* HandGrabUseInteractor_get_WhenHandGrabStarted_mEC44D65491D0B60E76AB0ACABC42EA824837FED6 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	{
		// public Action<IHandGrabState> WhenHandGrabStarted { get; set; } = delegate { };
		Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* L_0 = __this->___U3CWhenHandGrabStartedU3Ek__BackingField_48;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::set_WhenHandGrabStarted(System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_set_WhenHandGrabStarted_m9C34914DD02F469428350D00A0B5C289E4CDBC91 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* ___value0, const RuntimeMethod* method) 
{
	{
		// public Action<IHandGrabState> WhenHandGrabStarted { get; set; } = delegate { };
		Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* L_0 = ___value0;
		__this->___U3CWhenHandGrabStartedU3Ek__BackingField_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWhenHandGrabStartedU3Ek__BackingField_48), (void*)L_0);
		return;
	}
}
// System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState> Oculus.Interaction.HandGrab.HandGrabUseInteractor::get_WhenHandGrabEnded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* HandGrabUseInteractor_get_WhenHandGrabEnded_mA4B33124D45112DD33C9369B6DAD263F6CE1F003 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	{
		// public Action<IHandGrabState> WhenHandGrabEnded { get; set; } = delegate { };
		Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* L_0 = __this->___U3CWhenHandGrabEndedU3Ek__BackingField_49;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::set_WhenHandGrabEnded(System.Action`1<Oculus.Interaction.HandGrab.IHandGrabState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_set_WhenHandGrabEnded_m0B40E91BCCD3D65DDF7A067DB3AF9F8A4E100A33 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* ___value0, const RuntimeMethod* method) 
{
	{
		// public Action<IHandGrabState> WhenHandGrabEnded { get; set; } = delegate { };
		Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* L_0 = ___value0;
		__this->___U3CWhenHandGrabEndedU3Ek__BackingField_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWhenHandGrabEndedU3Ek__BackingField_49), (void*)L_0);
		return;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.HandGrabUseInteractor::ComputeShouldSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabUseInteractor_ComputeShouldSelect_mE6AC10D45CF41A1D963AFB2EA54C19E7E88B057D (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	{
		// return _handUseShouldSelect;
		bool L_0 = __this->____handUseShouldSelect_46;
		return L_0;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.HandGrabUseInteractor::ComputeShouldUnselect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabUseInteractor_ComputeShouldUnselect_m52A09D2E42678DD8CC0B65A3B9D04098D5AE6926 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _handUseShouldUnselect || SelectedInteractable == null;
		bool L_0 = __this->____handUseShouldUnselect_47;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_1;
		L_1 = Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_inline(__this, Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)1;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_Awake_m6EEDCA0453D0991224EBFAE95108A9B5AA43D02E (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerUseAPI_t2E54300BBAA0D2A2536D3A576AE87B701C8E8A06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_Awake_m9A1ED987975C007AF0C0719BFA74F895C91C83CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		Interactor_2_Awake_m9A1ED987975C007AF0C0719BFA74F895C91C83CC(__this, Interactor_2_Awake_m9A1ED987975C007AF0C0719BFA74F895C91C83CC_RuntimeMethod_var);
		// Hand = _hand as IHand;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____hand_34;
		HandGrabUseInteractor_set_Hand_mC2D783BF4E9E51636628260004C2C6E2617EBE78_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var)), NULL);
		// UseAPI = _useAPI as IFingerUseAPI;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->____useAPI_36;
		HandGrabUseInteractor_set_UseAPI_mB187F2F858452D42FC32163E6BC9C961CBF353D5_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IFingerUseAPI_t2E54300BBAA0D2A2536D3A576AE87B701C8E8A06_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_Start_m0E4F754356DD6D82563F988C19EDDBE0BD7DCB1C (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&((Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B*)__this)->____started_32);
		MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// this.EndStart(ref _started);
		bool* L_1 = (&((Interactor_2_t97A56A173D43E0EDF08F050226C6432B3D9F7E8B*)__this)->____started_32);
		MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::InteractableSelected(Oculus.Interaction.HandGrab.HandGrabUseInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_InteractableSelected_mCC98CE4CBF1995F158CDD832DCB401786B7A660F (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* ___interactable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_InteractableSelected_m47FDF210967D346904F484E18C885CF1EE7E8EAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.InteractableSelected(interactable);
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_0 = ___interactable0;
		Interactor_2_InteractableSelected_m47FDF210967D346904F484E18C885CF1EE7E8EAA(__this, L_0, Interactor_2_InteractableSelected_m47FDF210967D346904F484E18C885CF1EE7E8EAA_RuntimeMethod_var);
		// StartUsing();
		HandGrabUseInteractor_StartUsing_m3C2C41F899A30F126CB5145E636226A409C99BC4(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::InteractableUnselected(Oculus.Interaction.HandGrab.HandGrabUseInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_InteractableUnselected_m08EA57820EBE87468F39AC8EB5CF515218DBD7B8 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* ___interactable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_InteractableUnselected_m8ABE3C31881FCD85877830A2A5824D38F2EF9E7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.InteractableUnselected(interactable);
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_0 = ___interactable0;
		Interactor_2_InteractableUnselected_m8ABE3C31881FCD85877830A2A5824D38F2EF9E7A(__this, L_0, Interactor_2_InteractableUnselected_m8ABE3C31881FCD85877830A2A5824D38F2EF9E7A_RuntimeMethod_var);
		// _currentTarget.Clear();
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_1 = __this->____currentTarget_38;
		NullCheck(L_1);
		HandGrabTarget_Clear_mAAB3867CCAFA0956923DA27C64F178E092FC2275(L_1, NULL);
		// _fingersInUse = HandFingerFlags.None;
		__this->____fingersInUse_43 = 0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::StartUsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_StartUsing_m3C2C41F899A30F126CB5145E636226A409C99BC4 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* V_0 = NULL;
	{
		// HandGrabResult result = new HandGrabResult()
		// {
		//     HasHandPose = true,
		//     HandPose = _relaxedHandPose
		// };
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* L_0 = (HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B*)il2cpp_codegen_object_new(HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HandGrabResult__ctor_m607DD34E2BEAC0E7F5CE9DAC367F1C072422E2C0(L_0, NULL);
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___HasHandPose_0 = (bool)1;
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* L_2 = L_1;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_3 = __this->____relaxedHandPose_39;
		NullCheck(L_2);
		L_2->___HandPose_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___HandPose_3), (void*)L_3);
		V_0 = L_2;
		// _currentTarget.Set(SelectedInteractable.transform,
		//     HandAlignType.AlignOnGrab, HandGrabTarget.GrabAnchor.Wrist, result);
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_4 = __this->____currentTarget_38;
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_5;
		L_5 = Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_inline(__this, Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_RuntimeMethod_var);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		HandGrabResult_t37DAB6889D8422B1C6E1A7AB491E3B2E47A0CB9B* L_7 = V_0;
		NullCheck(L_4);
		HandGrabTarget_Set_m0A42DFF5FC3DE6E389FE52D98C4F5E14CE5779FD(L_4, L_6, 1, 1, L_7, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::DoHoverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_DoHoverUpdate_m699DE0BB2EA96A2D1E092E67CDCB43BE60368A34 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_DoHoverUpdate_mC7FA89ECAA480D000F6F321AF3EDC99C4F39050A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_get_Interactable_m3887264B10DEFFAC3050FB7599CA8BDCC5D8A659_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.DoHoverUpdate();
		Interactor_2_DoHoverUpdate_mC7FA89ECAA480D000F6F321AF3EDC99C4F39050A(__this, Interactor_2_DoHoverUpdate_mC7FA89ECAA480D000F6F321AF3EDC99C4F39050A_RuntimeMethod_var);
		// _handUseShouldSelect = IsUsingInteractable(Interactable);
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_0;
		L_0 = Interactor_2_get_Interactable_m3887264B10DEFFAC3050FB7599CA8BDCC5D8A659_inline(__this, Interactor_2_get_Interactable_m3887264B10DEFFAC3050FB7599CA8BDCC5D8A659_RuntimeMethod_var);
		bool L_1;
		L_1 = HandGrabUseInteractor_IsUsingInteractable_m958E30962197C2721156A1DA2A44397B38841FCA(__this, L_0, NULL);
		__this->____handUseShouldSelect_46 = L_1;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::DoSelectUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_DoSelectUpdate_m7A2D11EB3B4E7194DB8B0EABD0D8E6F4CD5DE6A1 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_DoSelectUpdate_m6A59653594196F859820DE4A82395180EBAAFBA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_get_Interactable_m3887264B10DEFFAC3050FB7599CA8BDCC5D8A659_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// base.DoSelectUpdate();
		Interactor_2_DoSelectUpdate_m6A59653594196F859820DE4A82395180EBAAFBA2(__this, Interactor_2_DoSelectUpdate_m6A59653594196F859820DE4A82395180EBAAFBA2_RuntimeMethod_var);
		// if (SelectedInteractable == null)
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_0;
		L_0 = Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_inline(__this, Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// float useStrength = CalculateUseStrength(ref _fingerUseStrength);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_2 = (&__this->____fingerUseStrength_44);
		float L_3;
		L_3 = HandGrabUseInteractor_CalculateUseStrength_m794BEE70895AC8257A21035555B4F8D8E70C2019(__this, L_2, NULL);
		V_0 = L_3;
		// float progress = SelectedInteractable.ComputeUseStrength(useStrength);
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_4;
		L_4 = Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_inline(__this, Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_RuntimeMethod_var);
		float L_5 = V_0;
		NullCheck(L_4);
		float L_6;
		L_6 = HandGrabUseInteractable_ComputeUseStrength_mC530183912B747C85E1035D63AFFCA7404BC8C62(L_4, L_5, NULL);
		V_1 = L_6;
		// _handUseShouldUnselect = !IsUsingInteractable(Interactable);
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_7;
		L_7 = Interactor_2_get_Interactable_m3887264B10DEFFAC3050FB7599CA8BDCC5D8A659_inline(__this, Interactor_2_get_Interactable_m3887264B10DEFFAC3050FB7599CA8BDCC5D8A659_RuntimeMethod_var);
		bool L_8;
		L_8 = HandGrabUseInteractor_IsUsingInteractable_m958E30962197C2721156A1DA2A44397B38841FCA(__this, L_7, NULL);
		__this->____handUseShouldUnselect_47 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		// if (_usesHandPose && !_handUseShouldUnselect)
		bool L_9 = __this->____usesHandPose_45;
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		bool L_10 = __this->____handUseShouldUnselect_47;
		if (L_10)
		{
			goto IL_0061;
		}
	}
	{
		// MoveFingers(ref _fingerUseStrength, progress);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_11 = (&__this->____fingerUseStrength_44);
		float L_12 = V_1;
		HandGrabUseInteractor_MoveFingers_mECE2F452BC3A0C4BD900636485A60F0033A13EC8(__this, L_11, L_12, NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.HandGrabUseInteractor::IsUsingInteractable(Oculus.Interaction.HandGrab.HandGrabUseInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandGrabUseInteractor_IsUsingInteractable_m958E30962197C2721156A1DA2A44397B38841FCA (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* ___interactable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerUseAPI_t2E54300BBAA0D2A2536D3A576AE87B701C8E8A06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (interactable == null)
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_0 = ___interactable0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000b:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_0 = 0;
		goto IL_003c;
	}

IL_000f:
	{
		// HandFinger finger = (HandFinger)i;
		int32_t L_2 = V_0;
		V_1 = L_2;
		// if (interactable.UseFingers[finger] == FingerRequirement.Ignored)
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_3 = ___interactable0;
		NullCheck(L_3);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_4;
		L_4 = HandGrabUseInteractable_get_UseFingers_m098413046899FFAC5388CD7C74AE3FCC3030C84D_inline(L_3, NULL);
		V_2 = L_4;
		int32_t L_5 = V_1;
		int32_t L_6;
		L_6 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_2), L_5, NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// float strength = UseAPI.GetFingerUseStrength(finger);
		RuntimeObject* L_7;
		L_7 = HandGrabUseInteractor_get_UseAPI_mD285A0CE71C1D5FE09683305289E4580B7F343F2_inline(__this, NULL);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9;
		L_9 = InterfaceFuncInvoker1< float, int32_t >::Invoke(0 /* System.Single Oculus.Interaction.IFingerUseAPI::GetFingerUseStrength(Oculus.Interaction.Input.HandFinger) */, IFingerUseAPI_t2E54300BBAA0D2A2536D3A576AE87B701C8E8A06_il2cpp_TypeInfo_var, L_7, L_8);
		// if (strength > interactable.StrengthDeadzone)
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_10 = ___interactable0;
		NullCheck(L_10);
		float L_11;
		L_11 = HandGrabUseInteractable_get_StrengthDeadzone_mE6F18EAEF485AC7A4C9100433AA2E39D41E0C7DE_inline(L_10, NULL);
		if ((!(((float)L_9) > ((float)L_11))))
		{
			goto IL_0038;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0038:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003c:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)5)))
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Single Oculus.Interaction.HandGrab.HandGrabUseInteractor::CalculateUseStrength(System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandGrabUseInteractor_CalculateUseStrength_m794BEE70895AC8257A21035555B4F8D8E70C2019 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___fingerUseStrength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFingerUseAPI_t2E54300BBAA0D2A2536D3A576AE87B701C8E8A06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// float requiredStrength = 1f;
		V_0 = (1.0f);
		// float optionalStrength = 0;
		V_1 = (0.0f);
		// bool requiredSet = false;
		V_2 = (bool)0;
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_3 = 0;
		goto IL_00e3;
	}

IL_0015:
	{
		// HandFinger finger = (HandFinger)i;
		int32_t L_0 = V_3;
		V_4 = L_0;
		// if (SelectedInteractable.UseFingers[finger] == FingerRequirement.Ignored)
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_1;
		L_1 = Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_inline(__this, Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_RuntimeMethod_var);
		NullCheck(L_1);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_2;
		L_2 = HandGrabUseInteractable_get_UseFingers_m098413046899FFAC5388CD7C74AE3FCC3030C84D_inline(L_1, NULL);
		V_6 = L_2;
		int32_t L_3 = V_4;
		int32_t L_4;
		L_4 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_6), L_3, NULL);
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		// fingerUseStrength[i] = 0f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_5 = ___fingerUseStrength0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = *((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C**)L_5);
		int32_t L_7 = V_3;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)(0.0f));
		// continue;
		goto IL_00df;
	}

IL_003e:
	{
		// float strength = UseAPI.GetFingerUseStrength(finger);
		RuntimeObject* L_8;
		L_8 = HandGrabUseInteractor_get_UseAPI_mD285A0CE71C1D5FE09683305289E4580B7F343F2_inline(__this, NULL);
		int32_t L_9 = V_4;
		NullCheck(L_8);
		float L_10;
		L_10 = InterfaceFuncInvoker1< float, int32_t >::Invoke(0 /* System.Single Oculus.Interaction.IFingerUseAPI::GetFingerUseStrength(Oculus.Interaction.Input.HandFinger) */, IFingerUseAPI_t2E54300BBAA0D2A2536D3A576AE87B701C8E8A06_il2cpp_TypeInfo_var, L_8, L_9);
		V_5 = L_10;
		// fingerUseStrength[i] = Mathf.Clamp01((strength - SelectedInteractable.UseStrengthDeadZone) / (1f - SelectedInteractable.UseStrengthDeadZone));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_11 = ___fingerUseStrength0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = *((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C**)L_11);
		int32_t L_13 = V_3;
		float L_14 = V_5;
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_15;
		L_15 = Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_inline(__this, Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_RuntimeMethod_var);
		NullCheck(L_15);
		float L_16;
		L_16 = HandGrabUseInteractable_get_UseStrengthDeadZone_mA500D3AB2844FADD6C41BF3BFB63E963A88BD378_inline(L_15, NULL);
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_17;
		L_17 = Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_inline(__this, Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_RuntimeMethod_var);
		NullCheck(L_17);
		float L_18;
		L_18 = HandGrabUseInteractable_get_UseStrengthDeadZone_mA500D3AB2844FADD6C41BF3BFB63E963A88BD378_inline(L_17, NULL);
		float L_19;
		L_19 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(((float)il2cpp_codegen_subtract(L_14, L_16))/((float)il2cpp_codegen_subtract((1.0f), L_18)))), NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (float)L_19);
		// if (SelectedInteractable.UseFingers[finger] == FingerRequirement.Required)
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_20;
		L_20 = Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_inline(__this, Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_RuntimeMethod_var);
		NullCheck(L_20);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_21;
		L_21 = HandGrabUseInteractable_get_UseFingers_m098413046899FFAC5388CD7C74AE3FCC3030C84D_inline(L_20, NULL);
		V_6 = L_21;
		int32_t L_22 = V_4;
		int32_t L_23;
		L_23 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_6), L_22, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)2))))
		{
			goto IL_009e;
		}
	}
	{
		// requiredSet = true;
		V_2 = (bool)1;
		// requiredStrength = Mathf.Min(requiredStrength, fingerUseStrength[i]);
		float L_24 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_25 = ___fingerUseStrength0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = *((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C**)L_25);
		int32_t L_27 = V_3;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		float L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		float L_30;
		L_30 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_24, L_29, NULL);
		V_0 = L_30;
		goto IL_00c2;
	}

IL_009e:
	{
		// else if (SelectedInteractable.UseFingers[finger] == FingerRequirement.Optional)
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_31;
		L_31 = Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_inline(__this, Interactor_2_get_SelectedInteractable_m1AD0AC6292ED29849890DB06C5A35E3867ABB61D_RuntimeMethod_var);
		NullCheck(L_31);
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_32;
		L_32 = HandGrabUseInteractable_get_UseFingers_m098413046899FFAC5388CD7C74AE3FCC3030C84D_inline(L_31, NULL);
		V_6 = L_32;
		int32_t L_33 = V_4;
		int32_t L_34;
		L_34 = GrabbingRule_get_Item_m87B36C25D493D03CB84F3CC495841F952C2025AC((&V_6), L_33, NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_00c2;
		}
	}
	{
		// optionalStrength = Mathf.Max(optionalStrength, fingerUseStrength[i]);
		float L_35 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_36 = ___fingerUseStrength0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = *((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C**)L_36);
		int32_t L_38 = V_3;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		float L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		float L_41;
		L_41 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_35, L_40, NULL);
		V_1 = L_41;
	}

IL_00c2:
	{
		// if (fingerUseStrength[i] > 0)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_42 = ___fingerUseStrength0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_43 = *((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C**)L_42);
		int32_t L_44 = V_3;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		float L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		if ((!(((float)L_46) > ((float)(0.0f)))))
		{
			goto IL_00d7;
		}
	}
	{
		// MarkFingerInUse(finger);
		int32_t L_47 = V_4;
		HandGrabUseInteractor_MarkFingerInUse_m30868B719C621C3E89FA06052ACB71F9994363A5(__this, L_47, NULL);
		goto IL_00df;
	}

IL_00d7:
	{
		// UnmarkFingerInUse(finger);
		int32_t L_48 = V_4;
		HandGrabUseInteractor_UnmarkFingerInUse_mBAEC19AEDA455E002EC61928FEBB501EC9151CB4(__this, L_48, NULL);
	}

IL_00df:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00e3:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) < ((int32_t)5)))
		{
			goto IL_0015;
		}
	}
	{
		// return requiredSet ? requiredStrength : optionalStrength;
		bool L_51 = V_2;
		if (L_51)
		{
			goto IL_00ef;
		}
	}
	{
		float L_52 = V_1;
		return L_52;
	}

IL_00ef:
	{
		float L_53 = V_0;
		return L_53;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::MoveFingers(System.Single[]&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_MoveFingers_mECE2F452BC3A0C4BD900636485A60F0033A13EC8 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___fingerUseProgress0, float ___useProgress1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		V_0 = 0;
		goto IL_0043;
	}

IL_0004:
	{
		// HandFinger finger = (HandFinger)i;
		int32_t L_0 = V_0;
		V_1 = L_0;
		// float progress = Mathf.Min(useProgress, fingerUseProgress[i]);
		float L_1 = ___useProgress1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_2 = ___fingerUseProgress0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = *((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C**)L_2);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		float L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		float L_7;
		L_7 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_1, L_6, NULL);
		V_2 = L_7;
		// LerpFingerRotation(_relaxedHandPose.JointRotations,
		//   _tightHandPose.JointRotations,
		//   _currentTarget.HandPose.JointRotations,
		//   finger, progress);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_8 = __this->____relaxedHandPose_39;
		NullCheck(L_8);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_9;
		L_9 = HandPose_get_JointRotations_m8299C59A02C209EE82FBDE99A2E9D4E60BC169A5(L_8, NULL);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_10 = __this->____tightHandPose_40;
		NullCheck(L_10);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_11;
		L_11 = HandPose_get_JointRotations_m8299C59A02C209EE82FBDE99A2E9D4E60BC169A5(L_10, NULL);
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_12 = __this->____currentTarget_38;
		NullCheck(L_12);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_13;
		L_13 = HandGrabTarget_get_HandPose_m0B3888C57588259FCF28F8A89821CC8C1820A573(L_12, NULL);
		NullCheck(L_13);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_14;
		L_14 = HandPose_get_JointRotations_m8299C59A02C209EE82FBDE99A2E9D4E60BC169A5(L_13, NULL);
		int32_t L_15 = V_1;
		float L_16 = V_2;
		HandGrabUseInteractor_LerpFingerRotation_mF570F078A9DE94FB5613687A3C66EE83ADF3401B(__this, L_9, L_11, L_14, L_15, L_16, NULL);
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0043:
	{
		// for (int i = 0; i < Constants.NUM_FINGERS; i++)
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::MarkFingerInUse(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_MarkFingerInUse_m30868B719C621C3E89FA06052ACB71F9994363A5 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, int32_t ___finger0, const RuntimeMethod* method) 
{
	{
		// _fingersInUse = (HandFingerFlags)(((int)_fingersInUse) | (1 << (int)finger));
		int32_t L_0 = __this->____fingersInUse_43;
		int32_t L_1 = ___finger0;
		__this->____fingersInUse_43 = ((int32_t)((int32_t)L_0|((int32_t)(1<<((int32_t)((int32_t)L_1&((int32_t)31)))))));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::UnmarkFingerInUse(Oculus.Interaction.Input.HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_UnmarkFingerInUse_mBAEC19AEDA455E002EC61928FEBB501EC9151CB4 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, int32_t ___finger0, const RuntimeMethod* method) 
{
	{
		// _fingersInUse = (HandFingerFlags)(((int)_fingersInUse) & ~(1 << (int)finger));
		int32_t L_0 = __this->____fingersInUse_43;
		int32_t L_1 = ___finger0;
		__this->____fingersInUse_43 = ((int32_t)((int32_t)L_0&((~((int32_t)(1<<((int32_t)((int32_t)L_1&((int32_t)31)))))))));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::LerpFingerRotation(UnityEngine.Quaternion[],UnityEngine.Quaternion[],UnityEngine.Quaternion[],Oculus.Interaction.Input.HandFinger,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_LerpFingerRotation_mF570F078A9DE94FB5613687A3C66EE83ADF3401B (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___from0, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___to1, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___result2, int32_t ___finger3, float ___t4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int[] joints = FingersMetadata.FINGER_TO_JOINT_INDEX[(int)finger];
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_0 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___FINGER_TO_JOINT_INDEX_1;
		int32_t L_1 = ___finger3;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// for (int i = 0; i < joints.Length; i++)
		V_1 = 0;
		goto IL_0031;
	}

IL_000d:
	{
		// int jointIndex = joints[i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// result[jointIndex] = Quaternion.Slerp(from[jointIndex], to[jointIndex], t);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_8 = ___result2;
		int32_t L_9 = V_2;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_10 = ___from0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_14 = ___to1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		float L_18 = ___t4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_13, L_17, L_18, NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_19);
		// for (int i = 0; i < joints.Length; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0031:
	{
		// for (int i = 0; i < joints.Length; i++)
		int32_t L_21 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// Oculus.Interaction.Input.HandFingerFlags Oculus.Interaction.HandGrab.HandGrabUseInteractor::GrabbingFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandGrabUseInteractor_GrabbingFingers_mA6802AC7FF71D2D4B16B71C870B4FA606FC9B803 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	{
		// return _fingersInUse;
		int32_t L_0 = __this->____fingersInUse_43;
		return L_0;
	}
}
// Oculus.Interaction.HandGrab.HandGrabUseInteractable Oculus.Interaction.HandGrab.HandGrabUseInteractor::ComputeCandidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* HandGrabUseInteractor_ComputeCandidate_m78A3FDE3A21AAB77A4C8287E5031AFA081243E87 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t5437CBA93E9A995267594C6AA8CA47B4802C0A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t4195A536B4B2F14DAD0C3F8678507791A93EC849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactable_2_get_Registry_m92AF8CDDED4AD88B6C822EC7364B48CB5E8F67E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* V_3 = NULL;
	float V_4 = 0.0f;
	HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* G_B4_0 = NULL;
	HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* G_B5_1 = NULL;
	{
		// float bestScore = float.NegativeInfinity;
		V_0 = (-std::numeric_limits<float>::infinity());
		// HandGrabUseInteractable bestCandidate = null;
		V_1 = (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4*)NULL;
		// _usesHandPose = false;
		__this->____usesHandPose_45 = (bool)0;
		// IEnumerable<HandGrabUseInteractable> candidates = HandGrabUseInteractable.Registry.List(this);
		il2cpp_codegen_runtime_class_init_inline(Interactable_2_tC2F55168D9A586C053A2B4DC4686A8134DCDCB51_il2cpp_TypeInfo_var);
		InteractableRegistry_2_tF312D472EC904880D80DA181D54DABA3C503D4DC* L_0;
		L_0 = Interactable_2_get_Registry_m92AF8CDDED4AD88B6C822EC7364B48CB5E8F67E0_inline(Interactable_2_get_Registry_m92AF8CDDED4AD88B6C822EC7364B48CB5E8F67E0_RuntimeMethod_var);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* >::Invoke(6 /* System.Collections.Generic.IEnumerable`1<TInteractable> Oculus.Interaction.InteractableRegistry`2<Oculus.Interaction.HandGrab.HandGrabUseInteractor,Oculus.Interaction.HandGrab.HandGrabUseInteractable>::List(TInteractor) */, L_0, __this);
		// foreach (HandGrabUseInteractable candidate in candidates)
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Oculus.Interaction.HandGrab.HandGrabUseInteractable>::GetEnumerator() */, IEnumerable_1_t5437CBA93E9A995267594C6AA8CA47B4802C0A6F_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_00a0;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_00a0:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008d_1;
			}

IL_0022_1:
			{
				// foreach (HandGrabUseInteractable candidate in candidates)
				RuntimeObject* L_5 = V_2;
				NullCheck(L_5);
				HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_6;
				L_6 = InterfaceFuncInvoker0< HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Oculus.Interaction.HandGrab.HandGrabUseInteractable>::get_Current() */, IEnumerator_1_t4195A536B4B2F14DAD0C3F8678507791A93EC849_il2cpp_TypeInfo_var, L_5);
				V_3 = L_6;
				// candidate.FindBestHandPoses(Hand != null ? Hand.Scale : 1f,
				//     ref _cachedRelaxedHandPose, ref _cachedTightHandPose,
				//     out float score);
				HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_7 = V_3;
				RuntimeObject* L_8;
				L_8 = HandGrabUseInteractor_get_Hand_m414B6EBFAEA220DEC05577FA517CD062BA33720A_inline(__this, NULL);
				G_B3_0 = L_7;
				if (L_8)
				{
					G_B4_0 = L_7;
					goto IL_0039_1;
				}
			}
			{
				G_B5_0 = (1.0f);
				G_B5_1 = G_B3_0;
				goto IL_0044_1;
			}

IL_0039_1:
			{
				RuntimeObject* L_9;
				L_9 = HandGrabUseInteractor_get_Hand_m414B6EBFAEA220DEC05577FA517CD062BA33720A_inline(__this, NULL);
				NullCheck(L_9);
				float L_10;
				L_10 = InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single Oculus.Interaction.Input.IHand::get_Scale() */, IHand_tE8954B30C59B7A5FE09959C74E4BEEBA8521C1E5_il2cpp_TypeInfo_var, L_9);
				G_B5_0 = L_10;
				G_B5_1 = G_B4_0;
			}

IL_0044_1:
			{
				HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** L_11 = (&__this->____cachedRelaxedHandPose_41);
				HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** L_12 = (&__this->____cachedTightHandPose_42);
				NullCheck(G_B5_1);
				bool L_13;
				L_13 = HandGrabUseInteractable_FindBestHandPoses_mE5A79BE9283DEBCAFBF32631663F9A00C299792A(G_B5_1, G_B5_0, L_11, L_12, (&V_4), NULL);
				// if (score > bestScore)
				float L_14 = V_4;
				float L_15 = V_0;
				if ((!(((float)L_14) > ((float)L_15))))
				{
					goto IL_008d_1;
				}
			}
			{
				// bestScore = score;
				float L_16 = V_4;
				V_0 = L_16;
				// bestCandidate = candidate;
				HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_17 = V_3;
				V_1 = L_17;
				// _relaxedHandPose.CopyFrom(_cachedRelaxedHandPose);
				HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_18 = __this->____relaxedHandPose_39;
				HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_19 = __this->____cachedRelaxedHandPose_41;
				NullCheck(L_18);
				HandPose_CopyFrom_mC60EE82AF04119C195F5738410C669828A1591A2(L_18, L_19, (bool)0, NULL);
				// _tightHandPose.CopyFrom(_cachedTightHandPose);
				HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_20 = __this->____tightHandPose_40;
				HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_21 = __this->____cachedTightHandPose_42;
				NullCheck(L_20);
				HandPose_CopyFrom_mC60EE82AF04119C195F5738410C669828A1591A2(L_20, L_21, (bool)0, NULL);
				// _usesHandPose = true;
				__this->____usesHandPose_45 = (bool)1;
			}

IL_008d_1:
			{
				// foreach (HandGrabUseInteractable candidate in candidates)
				RuntimeObject* L_22 = V_2;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_00a1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		// return bestCandidate;
		HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* L_24 = V_1;
		return L_24;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::InjectAllHandGrabUseInteractor(Oculus.Interaction.IFingerUseAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_InjectAllHandGrabUseInteractor_m4A61C928F34016A5500368AD1AF31119B9170065 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, RuntimeObject* ___useApi0, const RuntimeMethod* method) 
{
	{
		// InjectUseApi(useApi);
		RuntimeObject* L_0 = ___useApi0;
		HandGrabUseInteractor_InjectUseApi_mEA8953B98660299343557DFE75AFB45F6C1983B4(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::InjectUseApi(Oculus.Interaction.IFingerUseAPI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_InjectUseApi_mEA8953B98660299343557DFE75AFB45F6C1983B4 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, RuntimeObject* ___useApi0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _useAPI = useApi as MonoBehaviour;
		RuntimeObject* L_0 = ___useApi0;
		__this->____useAPI_36 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____useAPI_36), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// UseAPI = useApi;
		RuntimeObject* L_1 = ___useApi0;
		HandGrabUseInteractor_set_UseAPI_mB187F2F858452D42FC32163E6BC9C961CBF353D5_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::InjectOptionalHand(Oculus.Interaction.Input.IHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor_InjectOptionalHand_m3963D958DDF01829F8CA0C0D1FF81E7411AF9AB1 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, RuntimeObject* ___hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hand = hand as MonoBehaviour;
		RuntimeObject* L_0 = ___hand0;
		__this->____hand_34 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hand_34), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// Hand = hand;
		RuntimeObject* L_1 = ___hand0;
		HandGrabUseInteractor_set_Hand_mC2D783BF4E9E51636628260004C2C6E2617EBE78_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGrabUseInteractor__ctor_mF97E4FB7B8F90DDDFF44DBA14ACD4ABAF0BE8D45 (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interactor_2__ctor_m763A26614E135B08429ADA69D99460D6CC5AC413_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__58_0_mB9256BC7B97DE8DBFC54710014F00E3AADE33CC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__58_1_m15DE75BBB7BB5DF9D1AFD9E0DEA28CF4B4490BB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* G_B2_0 = NULL;
	HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* G_B2_1 = NULL;
	Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* G_B1_0 = NULL;
	HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* G_B1_1 = NULL;
	Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* G_B4_0 = NULL;
	HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* G_B4_1 = NULL;
	Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* G_B3_0 = NULL;
	HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* G_B3_1 = NULL;
	{
		// private HandGrabTarget _currentTarget = new HandGrabTarget();
		HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* L_0 = (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2*)il2cpp_codegen_object_new(HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HandGrabTarget__ctor_mD06AA25755FCB5214EA8107FDB7B5BDBFC5F7B6B(L_0, NULL);
		__this->____currentTarget_38 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentTarget_38), (void*)L_0);
		// private HandPose _relaxedHandPose = new HandPose();
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_1 = (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733*)il2cpp_codegen_object_new(HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HandPose__ctor_m8DDCB748C9A9A7127EB91225555F359A38D15A2A(L_1, NULL);
		__this->____relaxedHandPose_39 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relaxedHandPose_39), (void*)L_1);
		// private HandPose _tightHandPose = new HandPose();
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_2 = (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733*)il2cpp_codegen_object_new(HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HandPose__ctor_m8DDCB748C9A9A7127EB91225555F359A38D15A2A(L_2, NULL);
		__this->____tightHandPose_40 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tightHandPose_40), (void*)L_2);
		// private HandPose _cachedRelaxedHandPose = new HandPose();
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_3 = (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733*)il2cpp_codegen_object_new(HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HandPose__ctor_m8DDCB748C9A9A7127EB91225555F359A38D15A2A(L_3, NULL);
		__this->____cachedRelaxedHandPose_41 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cachedRelaxedHandPose_41), (void*)L_3);
		// private HandPose _cachedTightHandPose = new HandPose();
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_4 = (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733*)il2cpp_codegen_object_new(HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		HandPose__ctor_m8DDCB748C9A9A7127EB91225555F359A38D15A2A(L_4, NULL);
		__this->____cachedTightHandPose_42 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cachedTightHandPose_42), (void*)L_4);
		// private float[] _fingerUseStrength = new float[Constants.NUM_FINGERS];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->____fingerUseStrength_44 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fingerUseStrength_44), (void*)L_5);
		// public Action<IHandGrabState> WhenHandGrabStarted { get; set; } = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var);
		Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* L_6 = ((U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var))->___U3CU3E9__58_0_1;
		Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = __this;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = __this;
			goto IL_0063;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var);
		U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6* L_8 = ((U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* L_9 = (Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110*)il2cpp_codegen_object_new(Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_1__ctor_m8B5893791AC6F389BE4D61A6AFF54C63BFF054AA(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__58_0_mB9256BC7B97DE8DBFC54710014F00E3AADE33CC1_RuntimeMethod_var), NULL);
		Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* L_10 = L_9;
		((U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var))->___U3CU3E9__58_0_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var))->___U3CU3E9__58_0_1), (void*)L_10);
		G_B2_0 = L_10;
		G_B2_1 = G_B1_1;
	}

IL_0063:
	{
		NullCheck(G_B2_1);
		G_B2_1->___U3CWhenHandGrabStartedU3Ek__BackingField_48 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___U3CWhenHandGrabStartedU3Ek__BackingField_48), (void*)G_B2_0);
		// public Action<IHandGrabState> WhenHandGrabEnded { get; set; } = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var);
		Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* L_11 = ((U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var))->___U3CU3E9__58_1_2;
		Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* L_12 = L_11;
		G_B3_0 = L_12;
		G_B3_1 = __this;
		if (L_12)
		{
			G_B4_0 = L_12;
			G_B4_1 = __this;
			goto IL_0088;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var);
		U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6* L_13 = ((U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* L_14 = (Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110*)il2cpp_codegen_object_new(Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_m8B5893791AC6F389BE4D61A6AFF54C63BFF054AA(L_14, L_13, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__58_1_m15DE75BBB7BB5DF9D1AFD9E0DEA28CF4B4490BB6_RuntimeMethod_var), NULL);
		Action_1_tEE448C86BCBDE5EB9960793E7C7D040085E01110* L_15 = L_14;
		((U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var))->___U3CU3E9__58_1_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var))->___U3CU3E9__58_1_2), (void*)L_15);
		G_B4_0 = L_15;
		G_B4_1 = G_B3_1;
	}

IL_0088:
	{
		NullCheck(G_B4_1);
		G_B4_1->___U3CWhenHandGrabEndedU3Ek__BackingField_49 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___U3CWhenHandGrabEndedU3Ek__BackingField_49), (void*)G_B4_0);
		Interactor_2__ctor_m763A26614E135B08429ADA69D99460D6CC5AC413(__this, Interactor_2__ctor_m763A26614E135B08429ADA69D99460D6CC5AC413_RuntimeMethod_var);
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
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5E45D6169FC47C3E13A8F656D3021615EB02C642 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6* L_0 = (U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6*)il2cpp_codegen_object_new(U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m01F7112D39365E05175D3DF3750A00AA77A5BEC3(L_0, NULL);
		((U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m01F7112D39365E05175D3DF3750A00AA77A5BEC3 (U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor/<>c::<.ctor>b__58_0(Oculus.Interaction.HandGrab.IHandGrabState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__58_0_mB9256BC7B97DE8DBFC54710014F00E3AADE33CC1 (U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6* __this, RuntimeObject* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// public Action<IHandGrabState> WhenHandGrabStarted { get; set; } = delegate { };
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.HandGrabUseInteractor/<>c::<.ctor>b__58_1(Oculus.Interaction.HandGrab.IHandGrabState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__58_1_m15DE75BBB7BB5DF9D1AFD9E0DEA28CF4B4490BB6 (U3CU3Ec_t305CF150BE787812F4E63ABC093290BD02249AC6* __this, RuntimeObject* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// public Action<IHandGrabState> WhenHandGrabEnded { get; set; } = delegate { };
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
// Oculus.Interaction.HandGrab.PoseTravelData Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::get_TravellingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 AutoMoveTowardsTargetProvider_get_TravellingData_mF02BE005C3DE47885E415EC145B57740F629AB4D (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, const RuntimeMethod* method) 
{
	{
		// return _travellingData;
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_0 = __this->____travellingData_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::set_TravellingData(Oculus.Interaction.HandGrab.PoseTravelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTargetProvider_set_TravellingData_mCA000FEA916F0C455BEC47F748EAD92320F11025 (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ___value0, const RuntimeMethod* method) 
{
	{
		// _travellingData = value;
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_0 = ___value0;
		__this->____travellingData_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____travellingData_4))->____travelCurve_2), (void*)NULL);
		// }
		return;
	}
}
// Oculus.Interaction.IPointableElement Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::get_PointableElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AutoMoveTowardsTargetProvider_get_PointableElement_mD81498A01C294D57039CE52094BDBFC3E6FF1F22 (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, const RuntimeMethod* method) 
{
	{
		// public IPointableElement PointableElement { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPointableElementU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::set_PointableElement(Oculus.Interaction.IPointableElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTargetProvider_set_PointableElement_m20585FD0C8FE3E584415FD5AB1D6278FD2E79E73 (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IPointableElement PointableElement { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPointableElementU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPointableElementU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTargetProvider_Awake_m248B65AC444026C4F4E4C42362AF46B927EF8E78 (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointableElement_t5D9695CD8759D692B8F8430451929CCB2EBF63F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PointableElement = _pointableElement as IPointableElement;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->____pointableElement_5;
		AutoMoveTowardsTargetProvider_set_PointableElement_m20585FD0C8FE3E584415FD5AB1D6278FD2E79E73_inline(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IPointableElement_t5D9695CD8759D692B8F8430451929CCB2EBF63F1_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTargetProvider_Start_m407DEBFD0D982729C3771ECBD643ABDE053A9CAC (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, const RuntimeMethod* method) 
{
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&__this->____started_7);
		MonoBehaviourStartExtensions_BeginStart_mDD969725C4C386681AC8271DD8C4073818218BBA(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// this.EndStart(ref _started);
		bool* L_1 = (&__this->____started_7);
		MonoBehaviourStartExtensions_EndStart_m886958C775D916BE56C23EF36B446A1D268AABF0(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTargetProvider_LateUpdate_mDA84BC9E52788F615B04AC472D1CCCB38F0725FC (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCBDEF89CB18FD67BE9ACA733E113197AC808893C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6C8E4C059ECD7EDE71AC309DCCA77FFC556E9E45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9FE0898D90075160735205D491616AB82F6E6DD6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* V_1 = NULL;
	{
		// for (int i = _movers.Count - 1; i >= 0; i--)
		List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3* L_0 = __this->____movers_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m6C8E4C059ECD7EDE71AC309DCCA77FFC556E9E45_inline(L_0, List_1_get_Count_m6C8E4C059ECD7EDE71AC309DCCA77FFC556E9E45_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0044;
	}

IL_0010:
	{
		// AutoMoveTowardsTarget mover = _movers[i];
		List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3* L_2 = __this->____movers_8;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* L_4;
		L_4 = List_1_get_Item_m9FE0898D90075160735205D491616AB82F6E6DD6(L_2, L_3, List_1_get_Item_m9FE0898D90075160735205D491616AB82F6E6DD6_RuntimeMethod_var);
		V_1 = L_4;
		// if (mover.Aborting)
		AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* L_5 = V_1;
		NullCheck(L_5);
		bool L_6;
		L_6 = AutoMoveTowardsTarget_get_Aborting_m93A3BBED040ADA7F6D4A8C448033506CBA4B2ADD_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		// mover.Tick();
		AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* L_7 = V_1;
		NullCheck(L_7);
		AutoMoveTowardsTarget_Tick_mBE1ECDBB25386202E4AC27EEC9B1F028113B3D5B(L_7, NULL);
		// if (mover.Stopped)
		AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = AutoMoveTowardsTarget_get_Stopped_m844AE9CA4785C0D4708C7D8172948C2D5580DDE9(L_8, NULL);
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		// _movers.Remove(mover);
		List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3* L_10 = __this->____movers_8;
		AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = List_1_Remove_mCBDEF89CB18FD67BE9ACA733E113197AC808893C(L_10, L_11, List_1_Remove_mCBDEF89CB18FD67BE9ACA733E113197AC808893C_RuntimeMethod_var);
	}

IL_0040:
	{
		// for (int i = _movers.Count - 1; i >= 0; i--)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0044:
	{
		// for (int i = _movers.Count - 1; i >= 0; i--)
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// Oculus.Interaction.IMovement Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::CreateMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AutoMoveTowardsTargetProvider_CreateMovement_mB24D2D95EACD6CBE5A943F0F3512D9074C2B8507 (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoMoveTowardsTargetProvider_HandleAborted_m3E35D76D9017728C8722EB83F398A13044A01CA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AutoMoveTowardsTarget mover = new AutoMoveTowardsTarget(_travellingData, PointableElement);
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_0 = __this->____travellingData_4;
		RuntimeObject* L_1;
		L_1 = AutoMoveTowardsTargetProvider_get_PointableElement_mD81498A01C294D57039CE52094BDBFC3E6FF1F22_inline(__this, NULL);
		AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* L_2 = (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA*)il2cpp_codegen_object_new(AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AutoMoveTowardsTarget__ctor_mF4142E6D4C8481E1726758FF0B9273B882412D1B(L_2, L_0, L_1, NULL);
		// mover.WhenAborted += HandleAborted;
		AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* L_3 = L_2;
		AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* L_4 = L_3;
		NullCheck(L_4);
		Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D* L_5 = L_4->___WhenAborted_3;
		Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D* L_6 = (Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D*)il2cpp_codegen_object_new(Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mD192D48E5388CD0F6D69B0DCDDC5A26071143069(L_6, __this, (intptr_t)((void*)AutoMoveTowardsTargetProvider_HandleAborted_m3E35D76D9017728C8722EB83F398A13044A01CA3_RuntimeMethod_var), NULL);
		Delegate_t* L_7;
		L_7 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_5, L_6, NULL);
		NullCheck(L_4);
		L_4->___WhenAborted_3 = ((Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D*)Castclass((RuntimeObject*)L_7, Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___WhenAborted_3), (void*)((Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D*)Castclass((RuntimeObject*)L_7, Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D_il2cpp_TypeInfo_var)));
		// return mover;
		return L_3;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::HandleAborted(Oculus.Interaction.HandGrab.AutoMoveTowardsTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTargetProvider_HandleAborted_m3E35D76D9017728C8722EB83F398A13044A01CA3 (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* ___mover0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoMoveTowardsTargetProvider_HandleAborted_m3E35D76D9017728C8722EB83F398A13044A01CA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB7201F3DA3DAEE5E2C270A01C5DC90CDD6A2E1CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mover.WhenAborted -= HandleAborted;
		AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* L_0 = ___mover0;
		AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* L_1 = L_0;
		NullCheck(L_1);
		Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D* L_2 = L_1->___WhenAborted_3;
		Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D* L_3 = (Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D*)il2cpp_codegen_object_new(Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mD192D48E5388CD0F6D69B0DCDDC5A26071143069(L_3, __this, (intptr_t)((void*)AutoMoveTowardsTargetProvider_HandleAborted_m3E35D76D9017728C8722EB83F398A13044A01CA3_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		NullCheck(L_1);
		L_1->___WhenAborted_3 = ((Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D*)Castclass((RuntimeObject*)L_4, Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___WhenAborted_3), (void*)((Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D*)Castclass((RuntimeObject*)L_4, Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D_il2cpp_TypeInfo_var)));
		// _movers.Add(mover);
		List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3* L_5 = __this->____movers_8;
		AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* L_6 = ___mover0;
		NullCheck(L_5);
		List_1_Add_mB7201F3DA3DAEE5E2C270A01C5DC90CDD6A2E1CC_inline(L_5, L_6, List_1_Add_mB7201F3DA3DAEE5E2C270A01C5DC90CDD6A2E1CC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::InjectAllAutoMoveTowardsTargetProvider(Oculus.Interaction.IPointableElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTargetProvider_InjectAllAutoMoveTowardsTargetProvider_mAA6E3F25E83AB13A54644EF9ECCFE522C6B57763 (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, RuntimeObject* ___pointableElement0, const RuntimeMethod* method) 
{
	{
		// InjectPointableElement(pointableElement);
		RuntimeObject* L_0 = ___pointableElement0;
		AutoMoveTowardsTargetProvider_InjectPointableElement_mF26205230CA7AC1AABAF7FA124E5F04FD8B00899(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::InjectPointableElement(Oculus.Interaction.IPointableElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTargetProvider_InjectPointableElement_mF26205230CA7AC1AABAF7FA124E5F04FD8B00899 (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, RuntimeObject* ___pointableElement0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PointableElement = pointableElement;
		RuntimeObject* L_0 = ___pointableElement0;
		AutoMoveTowardsTargetProvider_set_PointableElement_m20585FD0C8FE3E584415FD5AB1D6278FD2E79E73_inline(__this, L_0, NULL);
		// _pointableElement = pointableElement as MonoBehaviour;
		RuntimeObject* L_1 = ___pointableElement0;
		__this->____pointableElement_5 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_1, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pointableElement_5), (void*)((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_1, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTargetProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTargetProvider__ctor_m6B075409D9E786DB17FB8DB1DDA05FF69D10C853 (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5213B8756CC79A33A336ACB05FC3AEBDD73203AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private PoseTravelData _travellingData = PoseTravelData.DEFAULT;
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_0;
		L_0 = PoseTravelData_get_DEFAULT_m69B7FCB5D00A4C883EB181A296B4BB4CFD462054(NULL);
		__this->____travellingData_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____travellingData_4))->____travelCurve_2), (void*)NULL);
		// public List<AutoMoveTowardsTarget> _movers = new List<AutoMoveTowardsTarget>();
		List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3* L_1 = (List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3*)il2cpp_codegen_object_new(List_1_t69A86B986D22732BEBBF0390DE3A6077271FB4E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m5213B8756CC79A33A336ACB05FC3AEBDD73203AD(L_1, List_1__ctor_m5213B8756CC79A33A336ACB05FC3AEBDD73203AD_RuntimeMethod_var);
		__this->____movers_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____movers_8), (void*)L_1);
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
// UnityEngine.Pose Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::get_Pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 AutoMoveTowardsTarget_get_Pose_m1E4B88C93333AC7EFAD78F1B5CBDB9E7104C2EF0 (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, const RuntimeMethod* method) 
{
	{
		// public Pose Pose => _tween.Pose;
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_0 = __this->____tween_5;
		NullCheck(L_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Tween_get_Pose_m5398408D5BAB2891B997A8EFAC9F074848400F38_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::get_Stopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AutoMoveTowardsTarget_get_Stopped_m844AE9CA4785C0D4708C7D8172948C2D5580DDE9 (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, const RuntimeMethod* method) 
{
	{
		// public bool Stopped => _tween == null || _tween.Stopped;
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_0 = __this->____tween_5;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_1 = __this->____tween_5;
		NullCheck(L_1);
		bool L_2;
		L_2 = Tween_get_Stopped_m35E440EB83E4E21D08B26517D664B8454D1D83C2(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::get_Aborting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AutoMoveTowardsTarget_get_Aborting_m93A3BBED040ADA7F6D4A8C448033506CBA4B2ADD (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, const RuntimeMethod* method) 
{
	{
		// public bool Aborting { get; private set; }
		bool L_0 = __this->___U3CAbortingU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::set_Aborting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTarget_set_Aborting_m1EF4B5FF5EAAF74B5BBC0F65CC3C0A9F30E608CD (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Aborting { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CAbortingU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::get_Identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AutoMoveTowardsTarget_get_Identifier_mC094FF36D5FDA1070FBB069B7B705E44E0D62862 (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, const RuntimeMethod* method) 
{
	{
		// public int Identifier => _identifier.ID;
		UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342* L_0 = __this->____identifier_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UniqueIdentifier_get_ID_mF4CE854D1058901A90EF10A16586703536E64537_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::.ctor(Oculus.Interaction.HandGrab.PoseTravelData,Oculus.Interaction.IPointableElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTarget__ctor_mF4142E6D4C8481E1726758FF0B9273B882412D1B (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ___travellingData0, RuntimeObject* ___pointableElement1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__18_0_mB2752FFF6A598BB55677EC43176E608E366E5148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D* G_B2_0 = NULL;
	AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* G_B2_1 = NULL;
	Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D* G_B1_0 = NULL;
	AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* G_B1_1 = NULL;
	{
		// public Action<AutoMoveTowardsTarget> WhenAborted = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_il2cpp_TypeInfo_var);
		Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D* L_0 = ((U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_1;
		Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_il2cpp_TypeInfo_var);
		U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355* L_2 = ((U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D* L_3 = (Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D*)il2cpp_codegen_object_new(Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mD192D48E5388CD0F6D69B0DCDDC5A26071143069(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__18_0_mB2752FFF6A598BB55677EC43176E608E366E5148_RuntimeMethod_var), NULL);
		Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D* L_4 = L_3;
		((U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->___WhenAborted_3 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___WhenAborted_3), (void*)G_B2_0);
		// public AutoMoveTowardsTarget(PoseTravelData travellingData, IPointableElement pointableElement)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _identifier = UniqueIdentifier.Generate();
		il2cpp_codegen_runtime_class_init_inline(UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342_il2cpp_TypeInfo_var);
		UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342* L_5;
		L_5 = UniqueIdentifier_Generate_m0FC6D0775EAF79B0058B1C0291F9926D9A075291(NULL);
		__this->____identifier_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____identifier_4), (void*)L_5);
		// _travellingData = travellingData;
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_6 = ___travellingData0;
		__this->____travellingData_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____travellingData_0))->____travelCurve_2), (void*)NULL);
		// _pointableElement = pointableElement;
		RuntimeObject* L_7 = ___pointableElement1;
		__this->____pointableElement_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pointableElement_1), (void*)L_7);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::MoveTo(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTarget_MoveTo_m3150DA2F93DA38EAB5AFA68020B6AE4E4D130D53 (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t16439AC0253118742562394ACC7B97D80B44200D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoMoveTowardsTarget_HandlePointerEventRaised_m112BFE802412F6E02916DB1FEBF78766E715511D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointable_t6C38207E57F79F53F59DC406EBD33D85E5BBFC72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AbortSelfAligment();
		AutoMoveTowardsTarget_AbortSelfAligment_m11E1109D693E4129A4FFE62678BEC3EF898CE0A6(__this, NULL);
		// _target = target;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___target0;
		__this->____target_6 = L_0;
		// _tween = _travellingData.CreateTween(_source, target);
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128* L_1 = (&__this->____travellingData_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = (&__this->____source_7);
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_3;
		L_3 = PoseTravelData_CreateTween_m4083C8FB9F3974585BBC2C6F34833914AFD2ACA9(L_1, L_2, (&___target0), NULL);
		__this->____tween_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tween_5), (void*)L_3);
		// if (!_eventRegistered)
		bool L_4 = __this->____eventRegistered_8;
		if (L_4)
		{
			goto IL_004c;
		}
	}
	{
		// _pointableElement.WhenPointerEventRaised += HandlePointerEventRaised;
		RuntimeObject* L_5 = __this->____pointableElement_1;
		Action_1_t16439AC0253118742562394ACC7B97D80B44200D* L_6 = (Action_1_t16439AC0253118742562394ACC7B97D80B44200D*)il2cpp_codegen_object_new(Action_1_t16439AC0253118742562394ACC7B97D80B44200D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m4052E43C460A30441C3F436AC271D3F5CDC77FA4(L_6, __this, (intptr_t)((void*)AutoMoveTowardsTarget_HandlePointerEventRaised_m112BFE802412F6E02916DB1FEBF78766E715511D_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< Action_1_t16439AC0253118742562394ACC7B97D80B44200D* >::Invoke(0 /* System.Void Oculus.Interaction.IPointable::add_WhenPointerEventRaised(System.Action`1<Oculus.Interaction.PointerEvent>) */, IPointable_t6C38207E57F79F53F59DC406EBD33D85E5BBFC72_il2cpp_TypeInfo_var, L_5, L_6);
		// _eventRegistered = true;
		__this->____eventRegistered_8 = (bool)1;
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::UpdateTarget(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTarget_UpdateTarget_mF11B9DFA45200B58D521109FD41B822FFA3E0610 (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___target0, const RuntimeMethod* method) 
{
	{
		// _target = target;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___target0;
		__this->____target_6 = L_0;
		// _tween.UpdateTarget(_target);
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_1 = __this->____tween_5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = __this->____target_6;
		NullCheck(L_1);
		Tween_UpdateTarget_m77957BF4F8C34BC54D39D0E04FE1C5B6FE877E98(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::StopAndSetPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTarget_StopAndSetPose_mAAD3ACD8367AD83C78BE6E967CC2FD74B1C6A450 (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t16439AC0253118742562394ACC7B97D80B44200D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoMoveTowardsTarget_HandlePointerEventRaised_m112BFE802412F6E02916DB1FEBF78766E715511D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointable_t6C38207E57F79F53F59DC406EBD33D85E5BBFC72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_eventRegistered)
		bool L_0 = __this->____eventRegistered_8;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// _pointableElement.WhenPointerEventRaised -= HandlePointerEventRaised;
		RuntimeObject* L_1 = __this->____pointableElement_1;
		Action_1_t16439AC0253118742562394ACC7B97D80B44200D* L_2 = (Action_1_t16439AC0253118742562394ACC7B97D80B44200D*)il2cpp_codegen_object_new(Action_1_t16439AC0253118742562394ACC7B97D80B44200D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m4052E43C460A30441C3F436AC271D3F5CDC77FA4(L_2, __this, (intptr_t)((void*)AutoMoveTowardsTarget_HandlePointerEventRaised_m112BFE802412F6E02916DB1FEBF78766E715511D_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t16439AC0253118742562394ACC7B97D80B44200D* >::Invoke(1 /* System.Void Oculus.Interaction.IPointable::remove_WhenPointerEventRaised(System.Action`1<Oculus.Interaction.PointerEvent>) */, IPointable_t6C38207E57F79F53F59DC406EBD33D85E5BBFC72_il2cpp_TypeInfo_var, L_1, L_2);
		// _eventRegistered = false;
		__this->____eventRegistered_8 = (bool)0;
	}

IL_0026:
	{
		// _source = pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = ___pose0;
		__this->____source_7 = L_3;
		// if (_tween != null && !_tween.Stopped)
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_4 = __this->____tween_5;
		if (!L_4)
		{
			goto IL_0063;
		}
	}
	{
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_5 = __this->____tween_5;
		NullCheck(L_5);
		bool L_6;
		L_6 = Tween_get_Stopped_m35E440EB83E4E21D08B26517D664B8454D1D83C2(L_5, NULL);
		if (L_6)
		{
			goto IL_0063;
		}
	}
	{
		// GeneratePointerEvent(PointerEventType.Hover);
		AutoMoveTowardsTarget_GeneratePointerEvent_m7E9169A81A4AAE7646CB0305B141D1E87763BBA1(__this, 0, NULL);
		// GeneratePointerEvent(PointerEventType.Select);
		AutoMoveTowardsTarget_GeneratePointerEvent_m7E9169A81A4AAE7646CB0305B141D1E87763BBA1(__this, 2, NULL);
		// Aborting = true;
		AutoMoveTowardsTarget_set_Aborting_m1EF4B5FF5EAAF74B5BBC0F65CC3C0A9F30E608CD_inline(__this, (bool)1, NULL);
		// WhenAborted.Invoke(this);
		Action_1_t0B96885211322977EE19013FB96FC0D3AE49AE9D* L_7 = __this->___WhenAborted_3;
		NullCheck(L_7);
		Action_1_Invoke_mF46895F6421818FEC02CDF83F5D5F5777A8F4B2A_inline(L_7, __this, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTarget_Tick_mBE1ECDBB25386202E4AC27EEC9B1F028113B3D5B (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, const RuntimeMethod* method) 
{
	{
		// _tween.Tick();
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_0 = __this->____tween_5;
		NullCheck(L_0);
		Tween_Tick_m4A5E94CFB16D5C8A37EE501BFA09ED8CEB49E1E6(L_0, NULL);
		// if (Aborting)
		bool L_1;
		L_1 = AutoMoveTowardsTarget_get_Aborting_m93A3BBED040ADA7F6D4A8C448033506CBA4B2ADD_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// GeneratePointerEvent(PointerEventType.Move);
		AutoMoveTowardsTarget_GeneratePointerEvent_m7E9169A81A4AAE7646CB0305B141D1E87763BBA1(__this, 4, NULL);
		// if (_tween.Stopped)
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_2 = __this->____tween_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = Tween_get_Stopped_m35E440EB83E4E21D08B26517D664B8454D1D83C2(L_2, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// AbortSelfAligment();
		AutoMoveTowardsTarget_AbortSelfAligment_m11E1109D693E4129A4FFE62678BEC3EF898CE0A6(__this, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::HandlePointerEventRaised(Oculus.Interaction.PointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTarget_HandlePointerEventRaised_m112BFE802412F6E02916DB1FEBF78766E715511D (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, PointerEvent_tAEB047AC9AE96DA96400B3C6FA88E56C917608BC ___evt0, const RuntimeMethod* method) 
{
	{
		// if (evt.Type == PointerEventType.Select || evt.Type == PointerEventType.Unselect)
		int32_t L_0;
		L_0 = PointerEvent_get_Type_mC8D094C70BF61CC306E7BB11E48F8623BF3CED3D_inline((&___evt0), NULL);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1;
		L_1 = PointerEvent_get_Type_mC8D094C70BF61CC306E7BB11E48F8623BF3CED3D_inline((&___evt0), NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_001a;
		}
	}

IL_0014:
	{
		// AbortSelfAligment();
		AutoMoveTowardsTarget_AbortSelfAligment_m11E1109D693E4129A4FFE62678BEC3EF898CE0A6(__this, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::AbortSelfAligment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTarget_AbortSelfAligment_m11E1109D693E4129A4FFE62678BEC3EF898CE0A6 (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, const RuntimeMethod* method) 
{
	{
		// if (Aborting)
		bool L_0;
		L_0 = AutoMoveTowardsTarget_get_Aborting_m93A3BBED040ADA7F6D4A8C448033506CBA4B2ADD_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// Aborting = false;
		AutoMoveTowardsTarget_set_Aborting_m1EF4B5FF5EAAF74B5BBC0F65CC3C0A9F30E608CD_inline(__this, (bool)0, NULL);
		// GeneratePointerEvent(PointerEventType.Unselect);
		AutoMoveTowardsTarget_GeneratePointerEvent_m7E9169A81A4AAE7646CB0305B141D1E87763BBA1(__this, 3, NULL);
		// GeneratePointerEvent(PointerEventType.Unhover);
		AutoMoveTowardsTarget_GeneratePointerEvent_m7E9169A81A4AAE7646CB0305B141D1E87763BBA1(__this, 1, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget::GeneratePointerEvent(Oculus.Interaction.PointerEventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveTowardsTarget_GeneratePointerEvent_m7E9169A81A4AAE7646CB0305B141D1E87763BBA1 (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, int32_t ___pointerEventType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointableElement_t5D9695CD8759D692B8F8430451929CCB2EBF63F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEvent_tAEB047AC9AE96DA96400B3C6FA88E56C917608BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// PointerEvent evt = new PointerEvent(Identifier, pointerEventType, Pose);
		int32_t L_0;
		L_0 = AutoMoveTowardsTarget_get_Identifier_mC094FF36D5FDA1070FBB069B7B705E44E0D62862(__this, NULL);
		int32_t L_1 = ___pointerEventType0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = AutoMoveTowardsTarget_get_Pose_m1E4B88C93333AC7EFAD78F1B5CBDB9E7104C2EF0(__this, NULL);
		PointerEvent__ctor_m82E1413B448C015A646DFA1BD12A1D6EFE5F0AFB((&V_0), L_0, L_1, L_2, NULL, NULL);
		// _pointableElement.ProcessPointerEvent(evt);
		RuntimeObject* L_3 = __this->____pointableElement_1;
		PointerEvent_tAEB047AC9AE96DA96400B3C6FA88E56C917608BC L_4 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker1< PointerEvent_tAEB047AC9AE96DA96400B3C6FA88E56C917608BC >::Invoke(0 /* System.Void Oculus.Interaction.IPointableElement::ProcessPointerEvent(Oculus.Interaction.PointerEvent) */, IPointableElement_t5D9695CD8759D692B8F8430451929CCB2EBF63F1_il2cpp_TypeInfo_var, L_3, L_4);
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
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m11F96B2769769B984BE4AB4CD3681D218A074A1A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355* L_0 = (U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355*)il2cpp_codegen_object_new(U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m250890D055BECB118370FF1017E670F794D54D2B(L_0, NULL);
		((U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m250890D055BECB118370FF1017E670F794D54D2B (U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.AutoMoveTowardsTarget/<>c::<.ctor>b__18_0(Oculus.Interaction.HandGrab.AutoMoveTowardsTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__18_0_mB2752FFF6A598BB55677EC43176E608E366E5148 (U3CU3Ec_t4ADE3ADAA59AACC39E8C047A0511F4DA6B09C355* __this, AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// public Action<AutoMoveTowardsTarget> WhenAborted = delegate { };
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
// System.Void Oculus.Interaction.HandGrab.FollowTargetProvider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowTargetProvider_Awake_m9A2161EAC3A0F134D22E146D93FED9D6241EF990 (FollowTargetProvider_tEAF324DD11C2B03960560CBCB3C928A360C79492* __this, const RuntimeMethod* method) 
{
	{
		// _space = this.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->____space_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____space_5), (void*)L_0);
		// }
		return;
	}
}
// Oculus.Interaction.IMovement Oculus.Interaction.HandGrab.FollowTargetProvider::CreateMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FollowTargetProvider_CreateMovement_mFEA3CF612E67C65BDBEC6AD0ACE42FA6B922683D (FollowTargetProvider_tEAF324DD11C2B03960560CBCB3C928A360C79492* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new FollowTarget(_speed, _space);
		float L_0 = __this->____speed_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____space_5;
		FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB* L_2 = (FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB*)il2cpp_codegen_object_new(FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FollowTarget__ctor_m0B3C5BC0E42D33EDD3CB2FD61628E604533CACA5(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Oculus.Interaction.HandGrab.FollowTargetProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowTargetProvider__ctor_m88B291F414C0610B8C8AB1029BAA82EB5033FC81 (FollowTargetProvider_tEAF324DD11C2B03960560CBCB3C928A360C79492* __this, const RuntimeMethod* method) 
{
	{
		// private float _speed = 5f;
		__this->____speed_4 = (5.0f);
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
// UnityEngine.Pose Oculus.Interaction.HandGrab.FollowTarget::get_Pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 FollowTarget_get_Pose_m9A9A25D23D1F0F577F45781F0478C7BD3CC8081A (FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB* __this, const RuntimeMethod* method) 
{
	{
		// public Pose Pose => ToWorld(_localPose);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = (&__this->____localPose_3);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = FollowTarget_ToWorld_mEBAA06960CF83B5739A2A4B398D43073A5926247(__this, L_0, NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.FollowTarget::get_Stopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FollowTarget_get_Stopped_m54DC44B42F07231A1B4F23D3A77466C9E2D14631 (FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB* __this, const RuntimeMethod* method) 
{
	{
		// public bool Stopped => false;
		return (bool)0;
	}
}
// System.Void Oculus.Interaction.HandGrab.FollowTarget::.ctor(System.Single,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowTarget__ctor_m0B3C5BC0E42D33EDD3CB2FD61628E604533CACA5 (FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB* __this, float ___speed0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___space1, const RuntimeMethod* method) 
{
	{
		// public FollowTarget(float speed, Transform space)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _speed = speed;
		float L_0 = ___speed0;
		__this->____speed_0 = L_0;
		// _space = space;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___space1;
		__this->____space_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____space_1), (void*)L_1);
		// }
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandGrab.FollowTarget::ToLocal(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 FollowTarget_ToLocal_mB34B0FF3265CF1E408D10BCB08822CF91A743057 (FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 localPos = _space.InverseTransformPoint(pose.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____space_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___pose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___position_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_0, L_2, NULL);
		// Quaternion localRot = Quaternion.Inverse(_space.rotation) * pose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____space_1;
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_5, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = ___pose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = L_7->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_6, L_8, NULL);
		V_0 = L_9;
		// return new Pose(localPos, localRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = V_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_11), L_3, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Pose Oculus.Interaction.HandGrab.FollowTarget::ToWorld(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 FollowTarget_ToWorld_mEBAA06960CF83B5739A2A4B398D43073A5926247 (FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 worldPos = _space.TransformPoint(pose.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____space_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___pose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___position_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_0, L_2, NULL);
		// Quaternion worldRot = _space.rotation * pose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____space_1;
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_6 = ___pose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = L_6->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_5, L_7, NULL);
		V_0 = L_8;
		// return new Pose(worldPos, worldRot);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_10), L_3, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void Oculus.Interaction.HandGrab.FollowTarget::MoveTo(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowTarget_MoveTo_mDCB9B53939E3F890D911F1F09736AB9BCAB0B591 (FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___target0, const RuntimeMethod* method) 
{
	{
		// _startTime = Time.time;
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->____startTime_4 = L_0;
		// _localTarget = ToLocal(target);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = FollowTarget_ToLocal_mB34B0FF3265CF1E408D10BCB08822CF91A743057(__this, (&___target0), NULL);
		__this->____localTarget_2 = L_1;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.FollowTarget::UpdateTarget(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowTarget_UpdateTarget_mC82F800D7E8AF98C3CED723C1F4B4E6AFE90644C (FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___target0, const RuntimeMethod* method) 
{
	{
		// _localTarget = ToLocal(target);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = FollowTarget_ToLocal_mB34B0FF3265CF1E408D10BCB08822CF91A743057(__this, (&___target0), NULL);
		__this->____localTarget_2 = L_0;
		// Tick();
		FollowTarget_Tick_m4E132B2624423C60BD306DCF4A7103CA1CDFA14B(__this, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.FollowTarget::StopAndSetPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowTarget_StopAndSetPose_m6CD9448F748D041A0D4F3A159263264FBE481D57 (FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___source0, const RuntimeMethod* method) 
{
	{
		// _localPose = ToLocal(source);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = FollowTarget_ToLocal_mB34B0FF3265CF1E408D10BCB08822CF91A743057(__this, (&___source0), NULL);
		__this->____localPose_3 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.FollowTarget::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowTarget_Tick_m4E132B2624423C60BD306DCF4A7103CA1CDFA14B (FollowTarget_t9B9629AC3C0BB497CF49C8960537C15AC3E518FB* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float now = Time.time;
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		V_0 = L_0;
		// float delta = (now - _startTime) * _speed;
		float L_1 = V_0;
		float L_2 = __this->____startTime_4;
		float L_3 = __this->____speed_0;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_3));
		// _startTime = now;
		float L_4 = V_0;
		__this->____startTime_4 = L_4;
		// _localPose.position = Vector3.MoveTowards(_localPose.position, _localTarget.position, delta);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_5 = (&__this->____localPose_3);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_6 = (&__this->____localPose_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = (&__this->____localTarget_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8->___position_0;
		float L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_7, L_9, L_10, NULL);
		L_5->___position_0 = L_11;
		// _localPose.rotation = Quaternion.RotateTowards(_localPose.rotation, _localTarget.rotation, delta * ROTATION_SPEED_FACTOR);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = (&__this->____localPose_3);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_13 = (&__this->____localPose_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = L_13->___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_15 = (&__this->____localTarget_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = L_15->___rotation_1;
		float L_17 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_RotateTowards_mD7C332050D876CB28A704B9005476BE06823F85F_inline(L_14, L_16, ((float)il2cpp_codegen_multiply(L_17, (50.0f))), NULL);
		L_12->___rotation_1 = L_18;
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
// Oculus.Interaction.IMovement Oculus.Interaction.HandGrab.MoveAtSourceProvider::CreateMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MoveAtSourceProvider_CreateMovement_mAE43C2F477AB1EE56206D866B61C2466AACEF9C9 (MoveAtSourceProvider_tBBCD01E6850B9B1A1AC653AAB391AB5DFF447BC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveRelativeToTarget_t81F9D1739B4EE088A5F6C1183A80B20AFC6C1F53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new MoveRelativeToTarget();
		MoveRelativeToTarget_t81F9D1739B4EE088A5F6C1183A80B20AFC6C1F53* L_0 = (MoveRelativeToTarget_t81F9D1739B4EE088A5F6C1183A80B20AFC6C1F53*)il2cpp_codegen_object_new(MoveRelativeToTarget_t81F9D1739B4EE088A5F6C1183A80B20AFC6C1F53_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MoveRelativeToTarget__ctor_mC263D35AF9C09296C4FE10CD2E024FFBBC46F2A0(L_0, NULL);
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveAtSourceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveAtSourceProvider__ctor_m90CE48BF6BA84E45862B815A60460EA229A90416 (MoveAtSourceProvider_tBBCD01E6850B9B1A1AC653AAB391AB5DFF447BC9* __this, const RuntimeMethod* method) 
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
// UnityEngine.Pose Oculus.Interaction.HandGrab.MoveRelativeToTarget::get_Pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MoveRelativeToTarget_get_Pose_m3B633193C3A12EA7056336A26697EE93840B818D (MoveRelativeToTarget_t81F9D1739B4EE088A5F6C1183A80B20AFC6C1F53* __this, const RuntimeMethod* method) 
{
	{
		// public Pose Pose => _current;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____current_0;
		return L_0;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.MoveRelativeToTarget::get_Stopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MoveRelativeToTarget_get_Stopped_m8BE2165704C77A29C2D861928D93FB3E340EDC20 (MoveRelativeToTarget_t81F9D1739B4EE088A5F6C1183A80B20AFC6C1F53* __this, const RuntimeMethod* method) 
{
	{
		// public bool Stopped => true;
		return (bool)1;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveRelativeToTarget::MoveTo(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveRelativeToTarget_MoveTo_mF06FF22EC369E852DEA00F834C9EBC5BAD9DFFB4 (MoveRelativeToTarget_t81F9D1739B4EE088A5F6C1183A80B20AFC6C1F53* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___target0, const RuntimeMethod* method) 
{
	{
		// _originalTarget = target;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___target0;
		__this->____originalTarget_1 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveRelativeToTarget::UpdateTarget(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveRelativeToTarget_UpdateTarget_m026BE6AA5BE012AEE87B7EBDA0B09500664372B1 (MoveRelativeToTarget_t81F9D1739B4EE088A5F6C1183A80B20AFC6C1F53* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___target0, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Pose grabberDelta = PoseUtils.Delta(_originalTarget, target);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = (&__this->____originalTarget_1);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = PoseUtils_Delta_mB6858A11877733C3D760D8815E087B73A3A38401(L_0, (&___target0), NULL);
		V_0 = L_1;
		// PoseUtils.Multiply(_originalSource, grabberDelta, ref _current);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = (&__this->____originalSource_2);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = (&__this->____current_0);
		PoseUtils_Multiply_m77B1C96978D7280D7ECF65A7EE77E98532AB8B8E(L_2, (&V_0), L_3, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveRelativeToTarget::StopAndSetPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveRelativeToTarget_StopAndSetPose_m2054A14FE053BD279D76652AB178EC9AE6C2A9EA (MoveRelativeToTarget_t81F9D1739B4EE088A5F6C1183A80B20AFC6C1F53* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___source0, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _current = _originalSource = source;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___source0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = L_0;
		V_0 = L_1;
		__this->____originalSource_2 = L_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = V_0;
		__this->____current_0 = L_2;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveRelativeToTarget::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveRelativeToTarget_Tick_m0F12B1A34FE79C932BF33CFC76E86E2D5E3FAEB2 (MoveRelativeToTarget_t81F9D1739B4EE088A5F6C1183A80B20AFC6C1F53* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveRelativeToTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveRelativeToTarget__ctor_mC263D35AF9C09296C4FE10CD2E024FFBBC46F2A0 (MoveRelativeToTarget_t81F9D1739B4EE088A5F6C1183A80B20AFC6C1F53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Pose _current = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		__this->____current_0 = L_0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Oculus.Interaction.IMovement Oculus.Interaction.HandGrab.MoveFromTargetProvider::CreateMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MoveFromTargetProvider_CreateMovement_mAE3ECECBD4009126701908AC79EF92C19738F92D (MoveFromTargetProvider_t0BB14180BEF6C766D348E2873065C6173D2BAE9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new MoveFromTarget();
		MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2* L_0 = (MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2*)il2cpp_codegen_object_new(MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MoveFromTarget__ctor_mB40F7E467AEC107D1276F9E69D2A1F91358420D8(L_0, NULL);
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveFromTargetProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveFromTargetProvider__ctor_mFF9BA67D65DB1333E3B17A6D44219D21D74F3633 (MoveFromTargetProvider_t0BB14180BEF6C766D348E2873065C6173D2BAE9E* __this, const RuntimeMethod* method) 
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
// UnityEngine.Pose Oculus.Interaction.HandGrab.MoveFromTarget::get_Pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MoveFromTarget_get_Pose_mA525471074E6CECC03F89DC32DB22B954738B984 (MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2* __this, const RuntimeMethod* method) 
{
	{
		// public Pose Pose { get; private set; } = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CPoseU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveFromTarget::set_Pose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveFromTarget_set_Pose_m931467373A425F35BBDF4CC95E735865BB2EFB33 (MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value0, const RuntimeMethod* method) 
{
	{
		// public Pose Pose { get; private set; } = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___value0;
		__this->___U3CPoseU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.MoveFromTarget::get_Stopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MoveFromTarget_get_Stopped_m563C7991DAD2008B4E15831AF7F2BC5ADF9D9B49 (MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2* __this, const RuntimeMethod* method) 
{
	{
		// public bool Stopped => true;
		return (bool)1;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveFromTarget::StopMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveFromTarget_StopMovement_mC313E97C2AD4942B84322ED3A5A0C77E73F54677 (MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveFromTarget::MoveTo(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveFromTarget_MoveTo_m98D43224C2C59FEA105B93271AA4A8115BCCC2D9 (MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___target0, const RuntimeMethod* method) 
{
	{
		// Pose = target;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___target0;
		MoveFromTarget_set_Pose_m931467373A425F35BBDF4CC95E735865BB2EFB33_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveFromTarget::UpdateTarget(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveFromTarget_UpdateTarget_m5231BAF63706E96BA5BF6077F1B69B5BEB32301B (MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___target0, const RuntimeMethod* method) 
{
	{
		// Pose = target;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___target0;
		MoveFromTarget_set_Pose_m931467373A425F35BBDF4CC95E735865BB2EFB33_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveFromTarget::StopAndSetPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveFromTarget_StopAndSetPose_mA9AD59D17C6D1BE6721F0FB7B24F6B4187D9A04F (MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___source0, const RuntimeMethod* method) 
{
	{
		// Pose = source;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___source0;
		MoveFromTarget_set_Pose_m931467373A425F35BBDF4CC95E735865BB2EFB33_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveFromTarget::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveFromTarget_Tick_mB47819063B0C5EAD0294F5E0BC897D0D8026E404 (MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveFromTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveFromTarget__ctor_mB40F7E467AEC107D1276F9E69D2A1F91358420D8 (MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Pose Pose { get; private set; } = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		__this->___U3CPoseU3Ek__BackingField_0 = L_0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Oculus.Interaction.IMovement Oculus.Interaction.HandGrab.MoveTowardsTargetProvider::CreateMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MoveTowardsTargetProvider_CreateMovement_m4BBA79BC765672142B1D68F35B17D5BE77576CD2 (MoveTowardsTargetProvider_t56437D74B9848593E3170C23598798B0873A7453* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveTowardsTarget_t253F3F7A83B2B8B2B66405D7DEE43F285324C608_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new MoveTowardsTarget(_travellingData);
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_0 = __this->____travellingData_4;
		MoveTowardsTarget_t253F3F7A83B2B8B2B66405D7DEE43F285324C608* L_1 = (MoveTowardsTarget_t253F3F7A83B2B8B2B66405D7DEE43F285324C608*)il2cpp_codegen_object_new(MoveTowardsTarget_t253F3F7A83B2B8B2B66405D7DEE43F285324C608_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MoveTowardsTarget__ctor_m51BFABBAC4846D3300B8447A16A316C0F57FE748(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveTowardsTargetProvider::InjectAllMoveTowardsTargetProvider(Oculus.Interaction.HandGrab.PoseTravelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTowardsTargetProvider_InjectAllMoveTowardsTargetProvider_m2484BB8FD5AD83C318913514CE928CAFD52A64DC (MoveTowardsTargetProvider_t56437D74B9848593E3170C23598798B0873A7453* __this, PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ___travellingData0, const RuntimeMethod* method) 
{
	{
		// InjectTravellingData(travellingData);
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_0 = ___travellingData0;
		MoveTowardsTargetProvider_InjectTravellingData_m8C3767A34BD99106165616074F702E386855FAD2_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveTowardsTargetProvider::InjectTravellingData(Oculus.Interaction.HandGrab.PoseTravelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTowardsTargetProvider_InjectTravellingData_m8C3767A34BD99106165616074F702E386855FAD2 (MoveTowardsTargetProvider_t56437D74B9848593E3170C23598798B0873A7453* __this, PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ___travellingData0, const RuntimeMethod* method) 
{
	{
		// _travellingData = travellingData;
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_0 = ___travellingData0;
		__this->____travellingData_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____travellingData_4))->____travelCurve_2), (void*)NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveTowardsTargetProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTowardsTargetProvider__ctor_m4F22DD72BFB47FD0F5D580ED8821F22A0F8CD250 (MoveTowardsTargetProvider_t56437D74B9848593E3170C23598798B0873A7453* __this, const RuntimeMethod* method) 
{
	{
		// private PoseTravelData _travellingData = PoseTravelData.FAST;
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_0;
		L_0 = PoseTravelData_get_FAST_mD1B7A32F129CCCDEE58882558247324FEED5E4D3(NULL);
		__this->____travellingData_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____travellingData_4))->____travelCurve_2), (void*)NULL);
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
// UnityEngine.Pose Oculus.Interaction.HandGrab.MoveTowardsTarget::get_Pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 MoveTowardsTarget_get_Pose_mA37AEE22A1314FD085E7CC0C1D28BD577FF4F955 (MoveTowardsTarget_t253F3F7A83B2B8B2B66405D7DEE43F285324C608* __this, const RuntimeMethod* method) 
{
	{
		// public Pose Pose => _tween.Pose;
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_0 = __this->____tween_1;
		NullCheck(L_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Tween_get_Pose_m5398408D5BAB2891B997A8EFAC9F074848400F38_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.MoveTowardsTarget::get_Stopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MoveTowardsTarget_get_Stopped_m5EF0BB9B00B4E57DB4DE58160EA7D9789D04A7AB (MoveTowardsTarget_t253F3F7A83B2B8B2B66405D7DEE43F285324C608* __this, const RuntimeMethod* method) 
{
	{
		// public bool Stopped => _tween != null && _tween.Stopped;
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_0 = __this->____tween_1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_1 = __this->____tween_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = Tween_get_Stopped_m35E440EB83E4E21D08B26517D664B8454D1D83C2(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveTowardsTarget::.ctor(Oculus.Interaction.HandGrab.PoseTravelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTowardsTarget__ctor_m51BFABBAC4846D3300B8447A16A316C0F57FE748 (MoveTowardsTarget_t253F3F7A83B2B8B2B66405D7DEE43F285324C608* __this, PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ___travellingData0, const RuntimeMethod* method) 
{
	{
		// public MoveTowardsTarget(PoseTravelData travellingData)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _travellingData = travellingData;
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_0 = ___travellingData0;
		__this->____travellingData_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____travellingData_0))->____travelCurve_2), (void*)NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveTowardsTarget::MoveTo(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTowardsTarget_MoveTo_m82562C606D1283BD8FD0AC04126CA678854C500E (MoveTowardsTarget_t253F3F7A83B2B8B2B66405D7DEE43F285324C608* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___target0, const RuntimeMethod* method) 
{
	{
		// _target = target;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___target0;
		__this->____target_3 = L_0;
		// _tween = _travellingData.CreateTween(_source, target);
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128* L_1 = (&__this->____travellingData_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = (&__this->____source_2);
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_3;
		L_3 = PoseTravelData_CreateTween_m4083C8FB9F3974585BBC2C6F34833914AFD2ACA9(L_1, L_2, (&___target0), NULL);
		__this->____tween_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tween_1), (void*)L_3);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveTowardsTarget::UpdateTarget(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTowardsTarget_UpdateTarget_mC3DECBA236BBBFF95555B7D539D2B0609FFC43CC (MoveTowardsTarget_t253F3F7A83B2B8B2B66405D7DEE43F285324C608* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_target != target)
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____target_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Pose_op_Inequality_m02CD51E757B2E25C978261A32EBD15B1342EA7BC(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// _target = target;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = ___target0;
		__this->____target_3 = L_3;
		// _tween.UpdateTarget(_target);
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_4 = __this->____tween_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = __this->____target_3;
		NullCheck(L_4);
		Tween_UpdateTarget_m77957BF4F8C34BC54D39D0E04FE1C5B6FE877E98(L_4, L_5, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveTowardsTarget::StopAndSetPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTowardsTarget_StopAndSetPose_m22FF76F50E9712F8C4772CF6B49B015A06ADF6C1 (MoveTowardsTarget_t253F3F7A83B2B8B2B66405D7DEE43F285324C608* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose0, const RuntimeMethod* method) 
{
	Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* G_B2_0 = NULL;
	Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* G_B1_0 = NULL;
	{
		// _source = pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___pose0;
		__this->____source_2 = L_0;
		// _tween?.StopAndSetPose(_source);
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_1 = __this->____tween_1;
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = __this->____source_2;
		NullCheck(G_B2_0);
		Tween_StopAndSetPose_m49EB8B4D719445E0876618E4E5EF9BE0D3921417(G_B2_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.MoveTowardsTarget::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTowardsTarget_Tick_m318D9E1DEC6C2F6DD0453376CE24722AB670661E (MoveTowardsTarget_t253F3F7A83B2B8B2B66405D7DEE43F285324C608* __this, const RuntimeMethod* method) 
{
	{
		// _tween.Tick();
		Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* L_0 = __this->____tween_1;
		NullCheck(L_0);
		Tween_Tick_m4A5E94CFB16D5C8A37EE501BFA09ED8CEB49E1E6(L_0, NULL);
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
// System.Single Oculus.Interaction.HandGrab.ObjectPullProvider::get_Speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ObjectPullProvider_get_Speed_m0FD811891A66E901629BB83CD26A092D4BFC8AA4 (ObjectPullProvider_t1958B720C7EEAFA0C80B609391803F4A57451F57* __this, const RuntimeMethod* method) 
{
	{
		// return _speed;
		float L_0 = __this->____speed_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.ObjectPullProvider::set_Speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPullProvider_set_Speed_m4FD36FC564614C06ECFE0B52589B1E1A7F1F1848 (ObjectPullProvider_t1958B720C7EEAFA0C80B609391803F4A57451F57* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// _speed = value;
		float L_0 = ___value0;
		__this->____speed_4 = L_0;
		// }
		return;
	}
}
// System.Single Oculus.Interaction.HandGrab.ObjectPullProvider::get_DeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ObjectPullProvider_get_DeadZone_mE4C8B888D94FB315ECDBB28F5DEF97366F0253FE (ObjectPullProvider_t1958B720C7EEAFA0C80B609391803F4A57451F57* __this, const RuntimeMethod* method) 
{
	{
		// return _deadZone;
		float L_0 = __this->____deadZone_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.ObjectPullProvider::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPullProvider_set_DeadZone_m64F10A808339A527BEE41B87BE8A723FB16B68FE (ObjectPullProvider_t1958B720C7EEAFA0C80B609391803F4A57451F57* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// _deadZone = value;
		float L_0 = ___value0;
		__this->____deadZone_5 = L_0;
		// }
		return;
	}
}
// Oculus.Interaction.IMovement Oculus.Interaction.HandGrab.ObjectPullProvider::CreateMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPullProvider_CreateMovement_mEB490B2B1240BC2813FFFDCEC054B120D2148103 (ObjectPullProvider_t1958B720C7EEAFA0C80B609391803F4A57451F57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPull_tD1031CDA5079CA57992B11EC5BF46D5E75029DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ObjectPull(_speed, _deadZone);
		float L_0 = __this->____speed_4;
		float L_1 = __this->____deadZone_5;
		ObjectPull_tD1031CDA5079CA57992B11EC5BF46D5E75029DC4* L_2 = (ObjectPull_tD1031CDA5079CA57992B11EC5BF46D5E75029DC4*)il2cpp_codegen_object_new(ObjectPull_tD1031CDA5079CA57992B11EC5BF46D5E75029DC4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ObjectPull__ctor_m240B78CD0E18520E50A8C957B1224BB9FE153EFE(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Oculus.Interaction.HandGrab.ObjectPullProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPullProvider__ctor_m74322CD9DAF1B96AE812727CE3995D63BF60B391 (ObjectPullProvider_t1958B720C7EEAFA0C80B609391803F4A57451F57* __this, const RuntimeMethod* method) 
{
	{
		// private float _speed = 1f;
		__this->____speed_4 = (1.0f);
		// private float _deadZone = 0.02f;
		__this->____deadZone_5 = (0.0199999996f);
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
// UnityEngine.Pose Oculus.Interaction.HandGrab.ObjectPull::get_Pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ObjectPull_get_Pose_m19B161CA2816CE1226592A770F7CB9807089620E (ObjectPull_tD1031CDA5079CA57992B11EC5BF46D5E75029DC4* __this, const RuntimeMethod* method) 
{
	{
		// public Pose Pose => _current;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____current_2;
		return L_0;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.ObjectPull::get_Stopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectPull_get_Stopped_mBE1B9FDA5ECB7C51783737DFD078C8363E7D71E2 (ObjectPull_tD1031CDA5079CA57992B11EC5BF46D5E75029DC4* __this, const RuntimeMethod* method) 
{
	{
		// public bool Stopped => _reachedGrabber;
		bool L_0 = __this->____reachedGrabber_10;
		return L_0;
	}
}
// System.Void Oculus.Interaction.HandGrab.ObjectPull::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPull__ctor_m240B78CD0E18520E50A8C957B1224BB9FE153EFE (ObjectPull_tD1031CDA5079CA57992B11EC5BF46D5E75029DC4* __this, float ___speed0, float ___deadZone1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float _speed = 1f;
		__this->____speed_0 = (1.0f);
		// private Pose _current = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		__this->____current_2 = L_0;
		// private Vector3 _translationDelta = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->____translationDelta_7 = L_1;
		// public ObjectPull(float speed, float deadZone)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _speed = speed;
		float L_2 = ___speed0;
		__this->____speed_0 = L_2;
		// _deadZone = deadZone;
		float L_3 = ___deadZone1;
		__this->____deadZone_1 = L_3;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.ObjectPull::MoveTo(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPull_MoveTo_mCD787811603AF45A8539A23F423A50B1C6DF8991 (ObjectPull_tD1031CDA5079CA57992B11EC5BF46D5E75029DC4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___target0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// _target = _grabberStartPose = target;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___target0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = L_0;
		V_1 = L_1;
		__this->____grabberStartPose_3 = L_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = V_1;
		__this->____target_5 = L_2;
		// _current = _grabbableStartPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = __this->____grabbableStartPose_4;
		__this->____current_2 = L_3;
		// _lastTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->____lastTime_8 = L_4;
		// _reachedGrabber = false;
		__this->____reachedGrabber_10 = (bool)0;
		// Vector3 grabDir = (_grabbableStartPose.position - _grabberStartPose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_5 = (&__this->____grabbableStartPose_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = (&__this->____grabberStartPose_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_6, L_8, NULL);
		V_0 = L_9;
		// _originalDistance = grabDir.magnitude;
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		__this->____originalDistance_9 = L_10;
		// _pullingPlane = new Plane(grabDir.normalized, _grabberStartPose.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = (&__this->____grabberStartPose_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_0;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_14;
		memset((&L_14), 0, sizeof(L_14));
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&L_14), L_11, L_13, /*hidden argument*/NULL);
		__this->____pullingPlane_6 = L_14;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.ObjectPull::UpdateTarget(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPull_UpdateTarget_m8298C1B1DFB069993E63885974A59B8121247953 (ObjectPull_tD1031CDA5079CA57992B11EC5BF46D5E75029DC4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___target0, const RuntimeMethod* method) 
{
	{
		// _target = target;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___target0;
		__this->____target_5 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.ObjectPull::StopAndSetPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPull_StopAndSetPose_mC39E1E43D250154C44CCCDD899E0802A376373E0 (ObjectPull_tD1031CDA5079CA57992B11EC5BF46D5E75029DC4* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___source0, const RuntimeMethod* method) 
{
	{
		// _grabbableStartPose = source;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___source0;
		__this->____grabbableStartPose_4 = L_0;
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.ObjectPull::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPull_Tick_m1AE4ED62DA75091E1BD330DE0847D9D215F9E31E (ObjectPull_tD1031CDA5079CA57992B11EC5BF46D5E75029DC4* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// if (_reachedGrabber)
		bool L_0 = __this->____reachedGrabber_10;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// _current = _target;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = __this->____target_5;
		__this->____current_2 = L_1;
		// return;
		return;
	}

IL_0015:
	{
		// float timeDelta = (Time.time - _lastTime);
		float L_2;
		L_2 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_3 = __this->____lastTime_8;
		V_0 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// _lastTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->____lastTime_8 = L_4;
		// float posDelta = _pullingPlane.GetDistanceToPoint(_target.position);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_5 = (&__this->____pullingPlane_6);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_6 = (&__this->____target_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___position_0;
		float L_8;
		L_8 = Plane_GetDistanceToPoint_m43E27525BB203513B13EF35F8EDB3785CA4AE6DC(L_5, L_7, NULL);
		V_1 = L_8;
		// if (Mathf.Abs(posDelta) < _deadZone)
		float L_9 = V_1;
		float L_10;
		L_10 = fabsf(L_9);
		float L_11 = __this->____deadZone_1;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_0053;
		}
	}
	{
		// return;
		return;
	}

IL_0053:
	{
		// Vector3 direction = (_current.position - _target.position).normalized;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = (&__this->____current_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_14 = (&__this->____target_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_13, L_15, NULL);
		V_3 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_2 = L_17;
		// _translationDelta = direction * posDelta * _speed * timeDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		float L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, L_19, NULL);
		float L_21 = __this->____speed_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_20, L_21, NULL);
		float L_23 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_22, L_23, NULL);
		__this->____translationDelta_7 = L_24;
		// float remainingDistance = Vector3.Distance(_current.position, _target.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_25 = (&__this->____current_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = L_25->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_27 = (&__this->____target_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = L_27->___position_0;
		float L_29;
		L_29 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_26, L_28, NULL);
		// if (remainingDistance < _translationDelta.magnitude)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = (&__this->____translationDelta_7);
		float L_31;
		L_31 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_30, NULL);
		if ((!(((float)L_29) < ((float)L_31))))
		{
			goto IL_00d1;
		}
	}
	{
		// _reachedGrabber = true;
		__this->____reachedGrabber_10 = (bool)1;
		// _current = _target;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_32 = __this->____target_5;
		__this->____current_2 = L_32;
		return;
	}

IL_00d1:
	{
		// _current.position += _translationDelta;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_33 = (&__this->____current_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = (&L_33->___position_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = L_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = __this->____translationDelta_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_36, L_37, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_35 = L_38;
		// float currentDistance = Vector3.Distance(_current.position, _target.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_39 = (&__this->____current_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = L_39->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_41 = (&__this->____target_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = L_41->___position_0;
		float L_43;
		L_43 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_40, L_42, NULL);
		V_4 = L_43;
		// float progress = 1f - Mathf.Clamp01(currentDistance / _originalDistance);
		float L_44 = V_4;
		float L_45 = __this->____originalDistance_9;
		float L_46;
		L_46 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_44/L_45)), NULL);
		V_5 = ((float)il2cpp_codegen_subtract((1.0f), L_46));
		// _current.rotation = Quaternion.Slerp(_grabbableStartPose.rotation, _target.rotation, progress);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_47 = (&__this->____current_2);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_48 = (&__this->____grabbableStartPose_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49 = L_48->___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_50 = (&__this->____target_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51 = L_50->___rotation_1;
		float L_52 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53;
		L_53 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_49, L_51, L_52, NULL);
		L_47->___rotation_1 = L_53;
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
// System.Void Oculus.Interaction.HandGrab.Visuals.HandGhost::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_Reset_mEF96E0C0F813B865333F579E384865E22F3C5A33 (HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisHandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633_m0835DE09189A0620828731AD8C384B4F87AAC7CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93_m99013C452832DD9880440E2E4258715CAFF7E8F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _puppet = this.GetComponent<HandPuppet>();
		HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* L_0;
		L_0 = Component_GetComponent_TisHandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93_m99013C452832DD9880440E2E4258715CAFF7E8F5(__this, Component_GetComponent_TisHandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93_m99013C452832DD9880440E2E4258715CAFF7E8F5_RuntimeMethod_var);
		__this->____puppet_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____puppet_4), (void*)L_0);
		// _handGrabPose = this.GetComponentInParent<HandGrabPose>();
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_1;
		L_1 = Component_GetComponentInParent_TisHandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633_m0835DE09189A0620828731AD8C384B4F87AAC7CF(__this, Component_GetComponentInParent_TisHandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633_m0835DE09189A0620828731AD8C384B4F87AAC7CF_RuntimeMethod_var);
		__this->____handGrabPose_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handGrabPose_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.Visuals.HandGhost::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_OnValidate_m184567FA3A40D5F54C270B76EB2E34C5C2F23C2B (HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisHandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633_m0835DE09189A0620828731AD8C384B4F87AAC7CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* V_0 = NULL;
	{
		// if (_puppet == null)
		HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* L_0 = __this->____puppet_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (_handGrabPose == null)
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_2 = __this->____handGrabPose_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// HandGrabPose point = this.GetComponentInParent<HandGrabPose>();
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_4;
		L_4 = Component_GetComponentInParent_TisHandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633_m0835DE09189A0620828731AD8C384B4F87AAC7CF(__this, Component_GetComponentInParent_TisHandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633_m0835DE09189A0620828731AD8C384B4F87AAC7CF_RuntimeMethod_var);
		V_0 = L_4;
		// if (point != null)
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		// SetPose(point);
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_7 = V_0;
		HandGhost_SetPose_mBCEE145AE51655C0A3D3732A0D2327E772B9C613(__this, L_7, NULL);
		return;
	}

IL_0035:
	{
		// else if (_handGrabPose != null)
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_8 = __this->____handGrabPose_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		// SetPose(_handGrabPose);
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_10 = __this->____handGrabPose_5;
		HandGhost_SetPose_mBCEE145AE51655C0A3D3732A0D2327E772B9C613(__this, L_10, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.Visuals.HandGhost::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_Start_m3C63505B38FB014C8D99372777CBF4D4450D4D84 (HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.Visuals.HandGhost::SetPose(Oculus.Interaction.HandGrab.HandGrabPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_SetPose_mBCEE145AE51655C0A3D3732A0D2327E772B9C613 (HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* __this, HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* ___handGrabPose0, const RuntimeMethod* method) 
{
	HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* V_2 = NULL;
	{
		// HandPose userPose = handGrabPose.HandPose;
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_0 = ___handGrabPose0;
		NullCheck(L_0);
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_1;
		L_1 = HandGrabPose_get_HandPose_m8C5E0AB3D739D860A1A06D7D979BA855197E2CAF(L_0, NULL);
		V_0 = L_1;
		// if (userPose == null)
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// Transform relativeTo = handGrabPose.RelativeTo;
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_3 = ___handGrabPose0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = HandGrabPose_get_RelativeTo_m5DFEA3BC65DF4B58C8BB75628AFB81A18B9399C4_inline(L_3, NULL);
		V_1 = L_4;
		// _puppet.SetJointRotations(userPose.JointRotations);
		HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* L_5 = __this->____puppet_4;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_6 = V_0;
		NullCheck(L_6);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_7;
		L_7 = HandPose_get_JointRotations_m8299C59A02C209EE82FBDE99A2E9D4E60BC169A5(L_6, NULL);
		V_2 = L_7;
		NullCheck(L_5);
		HandPuppet_SetJointRotations_mCF68E9C51DD3D9FC751DBF91CBFE61B53EB4EEFA(L_5, (&V_2), NULL);
		// SetRootPose(handGrabPose.RelativeGrip, relativeTo);
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_8 = ___handGrabPose0;
		NullCheck(L_8);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = HandGrabPose_get_RelativeGrip_mE08DBF35C604EE1F10F414F465EDEAD88A5A8903(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_1;
		HandGhost_SetRootPose_m7408BD6E00E12E207736646ECBF2D3C642EF16A0(__this, L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.Visuals.HandGhost::SetRootPose(UnityEngine.Pose,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_SetRootPose_m7408BD6E00E12E207736646ECBF2D3C642EF16A0 (HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___rootPose0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo1, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// rootPose.Postmultiply(relativeTo.GetPose());
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___relativeTo1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = PoseUtils_GetPose_m913669538E46AA3E2671EFA9B84A6E449C05886D(L_0, 0, NULL);
		V_0 = L_1;
		PoseUtils_Postmultiply_m4F1BBE85E92DC9DE3AFDFE54C520174A5ACCE9E9((&___rootPose0), (&V_0), NULL);
		// _puppet.SetRootPose(rootPose);
		HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* L_2 = __this->____puppet_4;
		NullCheck(L_2);
		HandPuppet_SetRootPose_m6DB81D7F080458642FA00033AB3230ACA7858FC2(L_2, (&___rootPose0), NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.Visuals.HandGhost::InjectAllHandGhost(Oculus.Interaction.HandGrab.Visuals.HandPuppet,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_InjectAllHandGhost_mC8AEF270A1F708542D675D14AAC7C3D9E4314910 (HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* __this, HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* ___puppet0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gripPoint1, const RuntimeMethod* method) 
{
	{
		// InjectHandPuppet(puppet);
		HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* L_0 = ___puppet0;
		HandGhost_InjectHandPuppet_m97D18FD7941364BCB8BE93AD6C54DF59040F785C_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.Visuals.HandGhost::InjectHandPuppet(Oculus.Interaction.HandGrab.Visuals.HandPuppet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_InjectHandPuppet_m97D18FD7941364BCB8BE93AD6C54DF59040F785C (HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* __this, HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* ___puppet0, const RuntimeMethod* method) 
{
	{
		// _puppet = puppet;
		HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* L_0 = ___puppet0;
		__this->____puppet_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____puppet_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.Visuals.HandGhost::InjectOptionalHandGrabPose(Oculus.Interaction.HandGrab.HandGrabPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost_InjectOptionalHandGrabPose_m3F71FE85A65FC31BBBD43F7E035EBA176B46418B (HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* __this, HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* ___handGrabPose0, const RuntimeMethod* method) 
{
	{
		// _handGrabPose = handGrabPose;
		HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* L_0 = ___handGrabPose0;
		__this->____handGrabPose_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handGrabPose_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.Visuals.HandGhost::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhost__ctor_mB27B571B40A46BF98451DB47DE0520F0457DC3AD (HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* __this, const RuntimeMethod* method) 
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
// Oculus.Interaction.HandGrab.Visuals.HandGhost Oculus.Interaction.HandGrab.Visuals.HandGhostProvider::GetHand(Oculus.Interaction.Input.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* HandGhostProvider_GetHand_m4336E51B7EB5108C56E6666F64CECE9F2CDE930A (HandGhostProvider_t4CD53E9BA943CD4AB32C1A73852996949A03428C* __this, int32_t ___handedness0, const RuntimeMethod* method) 
{
	{
		// return handedness == Handedness.Left ? _leftHand : _rightHand;
		int32_t L_0 = ___handedness0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* L_1 = __this->____rightHand_5;
		return L_1;
	}

IL_000a:
	{
		HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* L_2 = __this->____leftHand_4;
		return L_2;
	}
}
// System.Void Oculus.Interaction.HandGrab.Visuals.HandGhostProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGhostProvider__ctor_m96A2E5FA5B3E2919E8A84AF3DFBBBBD13F03A6A3 (HandGhostProvider_t4CD53E9BA943CD4AB32C1A73852996949A03428C* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// UnityEngine.Quaternion Oculus.Interaction.HandGrab.Visuals.HandJointMap::get_RotationOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 HandJointMap_get_RotationOffset_m610FC1E8B49DC6375AEF4D14789A8A5163827D76 (HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* __this, const RuntimeMethod* method) 
{
	{
		// return Quaternion.Euler(rotationOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___rotationOffset_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion Oculus.Interaction.HandGrab.Visuals.HandJointMap::get_TrackedRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 HandJointMap_get_TrackedRotation_m167A5B38200DA8D4F864BB4411D65FB2B9F4584A (HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* __this, const RuntimeMethod* method) 
{
	{
		// return Quaternion.Inverse(RotationOffset) * transform.localRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = HandJointMap_get_RotationOffset_m610FC1E8B49DC6375AEF4D14789A8A5163827D76(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___transform_1;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Void Oculus.Interaction.HandGrab.Visuals.HandJointMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandJointMap__ctor_m54D229241E427A37B35BCDE816F079FDF4448B0D (HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Oculus.Interaction.HandGrab.Visuals.JointCollection::.ctor(System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.Visuals.HandJointMap>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointCollection__ctor_mD1445CE17E9BA2E6D117134408DA3D0A40122C89 (JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C* __this, List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298* ___joints0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_m69887F993FAA7A96E76FA52A8460787B5E695992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tC0F10360EFB8F3D70115A87A93FEDD66CE179939_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m08F5C3117AD635289AAEA9DA8E49903A89F3312F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t42CF4388422BEDD954E30C615D8F95DB40CFBF0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass2_0_t42CF4388422BEDD954E30C615D8F95DB40CFBF0B* V_1 = NULL;
	{
		// private int[] _jointIndices = new int[FingersMetadata.HAND_JOINT_IDS.Length];
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_0 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->____jointIndices_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointIndices_0), (void*)L_1);
		// public JointCollection(List<HandJointMap> joints)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _jointMaps = joints;
		List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298* L_2 = ___joints0;
		__this->____jointMaps_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointMaps_1), (void*)L_2);
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; i++)
		V_0 = 0;
		goto IL_0054;
	}

IL_0023:
	{
		U3CU3Ec__DisplayClass2_0_t42CF4388422BEDD954E30C615D8F95DB40CFBF0B* L_3 = (U3CU3Ec__DisplayClass2_0_t42CF4388422BEDD954E30C615D8F95DB40CFBF0B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t42CF4388422BEDD954E30C615D8F95DB40CFBF0B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ec__DisplayClass2_0__ctor_m91669D30BAF3F6D88CAE7367EF47D0944D10CD28(L_3, NULL);
		V_1 = L_3;
		// HandJointId boneId = FingersMetadata.HAND_JOINT_IDS[i];
		U3CU3Ec__DisplayClass2_0_t42CF4388422BEDD954E30C615D8F95DB40CFBF0B* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_5 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (int32_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		L_4->___boneId_0 = L_8;
		// _jointIndices[i] = joints.FindIndex(bone => bone.id == boneId);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____jointIndices_0;
		int32_t L_10 = V_0;
		List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298* L_11 = ___joints0;
		U3CU3Ec__DisplayClass2_0_t42CF4388422BEDD954E30C615D8F95DB40CFBF0B* L_12 = V_1;
		Predicate_1_tC0F10360EFB8F3D70115A87A93FEDD66CE179939* L_13 = (Predicate_1_tC0F10360EFB8F3D70115A87A93FEDD66CE179939*)il2cpp_codegen_object_new(Predicate_1_tC0F10360EFB8F3D70115A87A93FEDD66CE179939_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Predicate_1__ctor_mFCCC5C96281120EBC4F0DA0826F614A0A45B9B41(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m08F5C3117AD635289AAEA9DA8E49903A89F3312F_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		int32_t L_14;
		L_14 = List_1_FindIndex_m69887F993FAA7A96E76FA52A8460787B5E695992(L_11, L_13, List_1_FindIndex_m69887F993FAA7A96E76FA52A8460787B5E695992_RuntimeMethod_var);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_14);
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; i++)
		int32_t L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_17 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		// }
		return;
	}
}
// Oculus.Interaction.HandGrab.Visuals.HandJointMap Oculus.Interaction.HandGrab.Visuals.JointCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* JointCollection_get_Item_mDB150E35184535410436EBBB2FA785AE6A40611A (JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C* __this, int32_t ___jointIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB6E8B1A92A44C5EE095C97190554B9D136272194_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int joint = _jointIndices[jointIndex];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____jointIndices_0;
		int32_t L_1 = ___jointIndex0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// if (joint >= 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// return _jointMaps[joint];
		List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298* L_5 = __this->____jointMaps_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* L_7;
		L_7 = List_1_get_Item_mB6E8B1A92A44C5EE095C97190554B9D136272194(L_5, L_6, List_1_get_Item_mB6E8B1A92A44C5EE095C97190554B9D136272194_RuntimeMethod_var);
		return L_7;
	}

IL_001a:
	{
		// return null;
		return (HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70*)NULL;
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
// System.Void Oculus.Interaction.HandGrab.Visuals.JointCollection/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m91669D30BAF3F6D88CAE7367EF47D0944D10CD28 (U3CU3Ec__DisplayClass2_0_t42CF4388422BEDD954E30C615D8F95DB40CFBF0B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Oculus.Interaction.HandGrab.Visuals.JointCollection/<>c__DisplayClass2_0::<.ctor>b__0(Oculus.Interaction.HandGrab.Visuals.HandJointMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m08F5C3117AD635289AAEA9DA8E49903A89F3312F (U3CU3Ec__DisplayClass2_0_t42CF4388422BEDD954E30C615D8F95DB40CFBF0B* __this, HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* ___bone0, const RuntimeMethod* method) 
{
	{
		// _jointIndices[i] = joints.FindIndex(bone => bone.id == boneId);
		HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* L_0 = ___bone0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___id_0;
		int32_t L_2 = __this->___boneId_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.Visuals.HandJointMap> Oculus.Interaction.HandGrab.Visuals.HandPuppet::get_JointMaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298* HandPuppet_get_JointMaps_m576AE4E90A28C2FA67CC3D9FC9513EAB162A6489 (HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* __this, const RuntimeMethod* method) 
{
	{
		// return _jointMaps;
		List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298* L_0 = __this->____jointMaps_4;
		return L_0;
	}
}
// System.Single Oculus.Interaction.HandGrab.Visuals.HandPuppet::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandPuppet_get_Scale_m166B3531F3AD67D9A03B2458EF7085A1FCF4E5F3 (HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* __this, const RuntimeMethod* method) 
{
	{
		// return this.transform.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		return L_2;
	}
}
// System.Void Oculus.Interaction.HandGrab.Visuals.HandPuppet::set_Scale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPuppet_set_Scale_m56825042ED58D1BE897EE017ACA87A2041E00C43 (HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// this.transform.localScale = Vector3.one * value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_2 = ___value0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_3, NULL);
		// }
		return;
	}
}
// Oculus.Interaction.HandGrab.Visuals.JointCollection Oculus.Interaction.HandGrab.Visuals.HandPuppet::get_JointsCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C* HandPuppet_get_JointsCache_mC8D04BB7E47125BAAA67CE73FEDAAEC5A5B982F2 (HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_jointsCache == null)
		JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C* L_0 = __this->____jointsCache_5;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// _jointsCache = new JointCollection(_jointMaps);
		List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298* L_1 = __this->____jointMaps_4;
		JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C* L_2 = (JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C*)il2cpp_codegen_object_new(JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		JointCollection__ctor_mD1445CE17E9BA2E6D117134408DA3D0A40122C89(L_2, L_1, NULL);
		__this->____jointsCache_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointsCache_5), (void*)L_2);
	}

IL_0019:
	{
		// return _jointsCache;
		JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C* L_3 = __this->____jointsCache_5;
		return L_3;
	}
}
// System.Void Oculus.Interaction.HandGrab.Visuals.HandPuppet::SetJointRotations(UnityEngine.Quaternion[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPuppet_SetJointRotations_mCF68E9C51DD3D9FC751DBF91CBFE61B53EB4EEFA (HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** ___jointRotations0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; ++i)
		V_0 = 0;
		goto IL_003a;
	}

IL_0004:
	{
		// HandJointMap jointMap = JointsCache[i];
		JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C* L_0;
		L_0 = HandPuppet_get_JointsCache_mC8D04BB7E47125BAAA67CE73FEDAAEC5A5B982F2(__this, NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* L_2;
		L_2 = JointCollection_get_Item_mDB150E35184535410436EBBB2FA785AE6A40611A(L_0, L_1, NULL);
		V_1 = L_2;
		// if (jointMap != null)
		HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// Transform jointTransform = jointMap.transform;
		HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* L_4 = V_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4->___transform_1;
		V_2 = L_5;
		// Quaternion targetRot = jointMap.RotationOffset * jointRotations[i];
		HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* L_6 = V_1;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = HandJointMap_get_RotationOffset_m610FC1E8B49DC6375AEF4D14789A8A5163827D76(L_6, NULL);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** L_8 = ___jointRotations0;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_9 = *((QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7**)L_8);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_7, L_12, NULL);
		V_3 = L_13;
		// jointTransform.localRotation = targetRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = V_3;
		NullCheck(L_14);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_14, L_15, NULL);
	}

IL_0036:
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; ++i)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_003a:
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; ++i)
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_18 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.Visuals.HandPuppet::SetRootPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPuppet_SetRootPose_m6DB81D7F080458642FA00033AB3230ACA7858FC2 (HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___rootPose0, const RuntimeMethod* method) 
{
	{
		// this.transform.SetPose(rootPose, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___rootPose0;
		PoseUtils_SetPose_m6C9BE185A66754389A49FD711DEE68A07DE059BB(L_0, L_1, 0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.Visuals.HandPuppet::CopyCachedJoints(Oculus.Interaction.HandGrab.HandPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPuppet_CopyCachedJoints_m863979CB560762E9286210C25A3FA27DE31FD6E7 (HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* __this, HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* V_1 = NULL;
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; ++i)
		V_0 = 0;
		goto IL_002b;
	}

IL_0004:
	{
		// HandJointMap jointMap = JointsCache[i];
		JointCollection_t6C7488C25C8A8BF7980457CDEBC846586F4B351C* L_0;
		L_0 = HandPuppet_get_JointsCache_mC8D04BB7E47125BAAA67CE73FEDAAEC5A5B982F2(__this, NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* L_2;
		L_2 = JointCollection_get_Item_mDB150E35184535410436EBBB2FA785AE6A40611A(L_0, L_1, NULL);
		V_1 = L_2;
		// if (jointMap != null)
		HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// result.JointRotations[i] = jointMap.TrackedRotation;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733** L_4 = ___result0;
		HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* L_5 = *((HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733**)L_4);
		NullCheck(L_5);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_6;
		L_6 = HandPose_get_JointRotations_m8299C59A02C209EE82FBDE99A2E9D4E60BC169A5(L_5, NULL);
		int32_t L_7 = V_0;
		HandJointMap_tBA77297BE072893A749541576245A4AA6B708B70* L_8 = V_1;
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = HandJointMap_get_TrackedRotation_m167A5B38200DA8D4F864BB4411D65FB2B9F4584A(L_8, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_9);
	}

IL_0027:
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; ++i)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002b:
	{
		// for (int i = 0; i < FingersMetadata.HAND_JOINT_IDS.Length; ++i)
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_12 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.HandGrab.Visuals.HandPuppet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPuppet__ctor_mC5C4B855F35AC20BE510067F0B1ECEBA00D64119 (HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA5D608E34E465C69D325BAA61B356DC6540053CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<HandJointMap> _jointMaps = new List<HandJointMap>(FingersMetadata.HAND_JOINT_IDS.Length);
		il2cpp_codegen_runtime_class_init_inline(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var);
		HandJointIdU5BU5D_t85CF04830177EED60C21BFBDBD779BFF523E9587* L_0 = ((FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_StaticFields*)il2cpp_codegen_static_fields_for(FingersMetadata_tB5723ACFD00379AE39F2FD1A8D3E43241F9E262E_il2cpp_TypeInfo_var))->___HAND_JOINT_IDS_0;
		NullCheck(L_0);
		List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298* L_1 = (List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298*)il2cpp_codegen_object_new(List_1_t8269AA06C6C8116CF2CFE526D80B6DDE680E6298_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mA5D608E34E465C69D325BAA61B356DC6540053CA(L_1, ((int32_t)(((RuntimeArray*)L_0)->max_length)), List_1__ctor_mA5D608E34E465C69D325BAA61B356DC6540053CA_RuntimeMethod_var);
		__this->____jointMaps_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointMaps_4), (void*)L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* HandGrabPose_get_RelativeTo_m5DFEA3BC65DF4B58C8BB75628AFB81A18B9399C4_inline (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, const RuntimeMethod* method) 
{
	{
		// public Transform RelativeTo { get => _relativeTo; set => _relativeTo = value; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____relativeTo_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPose_get_Handedness_m21EDF49CE58ECD438C557618E3092D7E1462A88C_inline (HandPose_t0B0F57FC79F74C9D20E54C6999A45D59FDDAC733* __this, const RuntimeMethod* method) 
{
	{
		// get => _handedness;
		int32_t L_0 = __this->____handedness_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabPose_set_SnapSurface_m3002A1B131F5391025AA837CED87B62243741CAA_inline (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// _snapSurface = value;
		RuntimeObject* L_0 = ___value0;
		__this->____snapSurface_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____snapSurface_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabPose_InjectRelativeTo_mF83642B801839E104D51EE2A4DE2CD83AD817EF9_inline (HandGrabPose_t347682EF05B32B395F27F50DB38500405C17C633* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo0, const RuntimeMethod* method) 
{
	{
		// _relativeTo = relativeTo;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___relativeTo0;
		__this->____relativeTo_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____relativeTo_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandGrabTarget_get_Anchor_m4348AEC7F7B3A414A8C539E717571543431A7D8A_inline (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, const RuntimeMethod* method) 
{
	{
		// public GrabAnchor Anchor { get; private set; } = GrabAnchor.None;
		int32_t L_0 = __this->___U3CAnchorU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabTarget_set_Anchor_mAB5B33ED470AEABD65A477DBA6620EADA588DB9F_inline (HandGrabTarget_t93717B2210720C2850DA2EBC5438DBDB5C8AFCC2* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public GrabAnchor Anchor { get; private set; } = GrabAnchor.None;
		int32_t L_0 = ___value0;
		__this->___U3CAnchorU3Ek__BackingField_0 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___values0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) > ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___values0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* HandGrabInteractable_get_HandGrabPoses_m8C6BA9970270C7812825C68E3B615064DDC184B9_inline (HandGrabInteractable_tAA4FA87F97EBE085B00C9989B64494E72E717127* __this, const RuntimeMethod* method) 
{
	{
		// public List<HandGrabPose> HandGrabPoses => _handGrabPoses;
		List_1_t0CE96229A3ACC4ABBEF59FAAF3DA7E0F989E7FD9* L_0 = __this->____handGrabPoses_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabUseInteractable_set_HandUseDelegate_m92A62BAD59BCF0E60F997E84461B9F2EF15CACF1_inline (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// private IHandGrabUseDelegate HandUseDelegate { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CHandUseDelegateU3Ek__BackingField_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandUseDelegateU3Ek__BackingField_24), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandGrabUseInteractable_get_HandUseDelegate_mD930323D6D43D3AF5974E4966B1D94F4CD7F3EAB_inline (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) 
{
	{
		// private IHandGrabUseDelegate HandUseDelegate { get; set; }
		RuntimeObject* L_0 = __this->___U3CHandUseDelegateU3Ek__BackingField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabUseInteractable_set_UseProgress_m928ABB671AA64B824AC5F61A64EA9FE743D33DF2_inline (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float UseProgress { get; private set; }
		float L_0 = ___value0;
		__this->___U3CUseProgressU3Ek__BackingField_29 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HandGrabUseInteractable_get_UseProgress_mF1E5CF795E73176B232C8CFB1536ED492D6FF87C_inline (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) 
{
	{
		// public float UseProgress { get; private set; }
		float L_0 = __this->___U3CUseProgressU3Ek__BackingField_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabUseInteractor_set_Hand_mC2D783BF4E9E51636628260004C2C6E2617EBE78_inline (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IHand Hand { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CHandU3Ek__BackingField_35 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHandU3Ek__BackingField_35), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGrabUseInteractor_set_UseAPI_mB187F2F858452D42FC32163E6BC9C961CBF353D5_inline (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IFingerUseAPI UseAPI { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CUseAPIU3Ek__BackingField_37 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUseAPIU3Ek__BackingField_37), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D HandGrabUseInteractable_get_UseFingers_m098413046899FFAC5388CD7C74AE3FCC3030C84D_inline (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) 
{
	{
		// return _useFingers;
		GrabbingRule_tBFBDE400621FCCCEB23EF9A44E42B11AE7DBF27D L_0 = __this->____useFingers_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandGrabUseInteractor_get_UseAPI_mD285A0CE71C1D5FE09683305289E4580B7F343F2_inline (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	{
		// public IFingerUseAPI UseAPI { get; private set; }
		RuntimeObject* L_0 = __this->___U3CUseAPIU3Ek__BackingField_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HandGrabUseInteractable_get_StrengthDeadzone_mE6F18EAEF485AC7A4C9100433AA2E39D41E0C7DE_inline (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) 
{
	{
		// return _strengthDeadzone;
		float L_0 = __this->____strengthDeadzone_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HandGrabUseInteractable_get_UseStrengthDeadZone_mA500D3AB2844FADD6C41BF3BFB63E963A88BD378_inline (HandGrabUseInteractable_t7B18FA843065BC0F35943FF6E2908976DC55A1E4* __this, const RuntimeMethod* method) 
{
	{
		// public float UseStrengthDeadZone => _strengthDeadzone;
		float L_0 = __this->____strengthDeadzone_26;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HandGrabUseInteractor_get_Hand_m414B6EBFAEA220DEC05577FA517CD062BA33720A_inline (HandGrabUseInteractor_tE6A0783D2AFEBEB1CCAD069379E40E15B551A575* __this, const RuntimeMethod* method) 
{
	{
		// public IHand Hand { get; private set; }
		RuntimeObject* L_0 = __this->___U3CHandU3Ek__BackingField_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoMoveTowardsTargetProvider_set_PointableElement_m20585FD0C8FE3E584415FD5AB1D6278FD2E79E73_inline (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IPointableElement PointableElement { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPointableElementU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPointableElementU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AutoMoveTowardsTarget_get_Aborting_m93A3BBED040ADA7F6D4A8C448033506CBA4B2ADD_inline (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, const RuntimeMethod* method) 
{
	{
		// public bool Aborting { get; private set; }
		bool L_0 = __this->___U3CAbortingU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AutoMoveTowardsTargetProvider_get_PointableElement_mD81498A01C294D57039CE52094BDBFC3E6FF1F22_inline (AutoMoveTowardsTargetProvider_t80698DEA98B98EE24D6852550743BC26BE82BE2E* __this, const RuntimeMethod* method) 
{
	{
		// public IPointableElement PointableElement { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPointableElementU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Tween_get_Pose_m5398408D5BAB2891B997A8EFAC9F074848400F38_inline (Tween_t31BD626A4786A5E37E6B138C3ACB5021A477D967* __this, const RuntimeMethod* method) 
{
	{
		// public Pose Pose => _pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____pose_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniqueIdentifier_get_ID_mF4CE854D1058901A90EF10A16586703536E64537_inline (UniqueIdentifier_t2CFA79939EF9F08A544BAA867445202C60871342* __this, const RuntimeMethod* method) 
{
	{
		// public int ID { get; private set; }
		int32_t L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoMoveTowardsTarget_set_Aborting_m1EF4B5FF5EAAF74B5BBC0F65CC3C0A9F30E608CD_inline (AutoMoveTowardsTarget_t4BFF12FDCF0A4E6F6779BBB9E235189D670DC3AA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Aborting { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CAbortingU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEvent_get_Type_mC8D094C70BF61CC306E7BB11E48F8623BF3CED3D_inline (PointerEvent_tAEB047AC9AE96DA96400B3C6FA88E56C917608BC* __this, const RuntimeMethod* method) 
{
	{
		// public PointerEventType Type { get; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
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
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MoveFromTarget_set_Pose_m931467373A425F35BBDF4CC95E735865BB2EFB33_inline (MoveFromTarget_t412B1085B03E6E3ED8507ADB634B2C3614CEFFE2* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value0, const RuntimeMethod* method) 
{
	{
		// public Pose Pose { get; private set; } = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___value0;
		__this->___U3CPoseU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MoveTowardsTargetProvider_InjectTravellingData_m8C3767A34BD99106165616074F702E386855FAD2_inline (MoveTowardsTargetProvider_t56437D74B9848593E3170C23598798B0873A7453* __this, PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 ___travellingData0, const RuntimeMethod* method) 
{
	{
		// _travellingData = travellingData;
		PoseTravelData_t092B8D4C15C3021341B48BC8D17087BA3CF5D128 L_0 = ___travellingData0;
		__this->____travellingData_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____travellingData_4))->____travelCurve_2), (void*)NULL);
		// }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandGhost_InjectHandPuppet_m97D18FD7941364BCB8BE93AD6C54DF59040F785C_inline (HandGhost_t13717DE6E643EE24008E97E724AA5D9DC420D154* __this, HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* ___puppet0, const RuntimeMethod* method) 
{
	{
		// _puppet = puppet;
		HandPuppet_t0DDD55FECB3DFDE11E86CA72161BC028D3794B93* L_0 = ___puppet0;
		__this->____puppet_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____puppet_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Interactor_2_get_Interactable_mF7BA57CB616205BA5E3AA22FA8FC51AEC21CDF0D_gshared_inline (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, const RuntimeMethod* method) 
{
	{
		// public TInteractable Interactable => _interactable;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____interactable_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Interactor_2_get_SelectedInteractable_m41004AA167C324EB9F1E1CE294883634C5A67D06_gshared_inline (Interactor_2_tB69FAA3485595D33B3457BF46F7B1207B8811F32* __this, const RuntimeMethod* method) 
{
	{
		// public TInteractable SelectedInteractable => _selectedInteractable;
		RuntimeObject* L_0 = (RuntimeObject*)__this->____selectedInteractable_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InteractableRegistry_2_t8EFC4239DE1EFD29A8A89A869EE7B5A824303B7D* Interactable_2_get_Registry_mDFDFFE264623ECD27E68CFCA53895A246C2CAB83_gshared_inline (const RuntimeMethod* method) 
{
	{
		// public static InteractableRegistry<TInteractor, TInteractable> Registry => _registry;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		InteractableRegistry_2_t8EFC4239DE1EFD29A8A89A869EE7B5A824303B7D* L_0 = ((Interactable_2_t632FBB168CB990D64A8675C1947BBB76A646714F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->____registry_22;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
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
