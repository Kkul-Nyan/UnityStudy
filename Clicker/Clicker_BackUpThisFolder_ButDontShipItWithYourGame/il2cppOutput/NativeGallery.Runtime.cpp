#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.String>
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>
struct Task_1_t95921EB64E237ACD28589D64B693C652268F225E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Exception
struct Exception_t;
// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NativeGalleryNamespace.NGCallbackHelper
struct NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E;
// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid
struct NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52;
// NativeGalleryNamespace.NGPermissionCallbackAndroid
struct NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8;
// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B;
// NativeGallery/<>c__DisplayClass56_0
struct U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3;
// NativeGallery/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266;
// NativeGallery/MediaPickCallback
struct MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6;
// NativeGallery/MediaPickMultipleCallback
struct MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B;
// NativeGallery/MediaSaveCallback
struct MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6;
IL2CPP_EXTERN_C String_t* _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D;
IL2CPP_EXTERN_C String_t* _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2;
IL2CPP_EXTERN_C String_t* _stringLiteral1323FA5608C80AC5A0D5F2B0116C96A1B9AFD381;
IL2CPP_EXTERN_C String_t* _stringLiteral15332598528DB5F9A0B9473BE7DCE0BB1F8DCAA7;
IL2CPP_EXTERN_C String_t* _stringLiteral1797A6EC252879FB0D0CD0D8E0F03D8E0BBA57F2;
IL2CPP_EXTERN_C String_t* _stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF;
IL2CPP_EXTERN_C String_t* _stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral23A7F9B10A9B248A502580BB07C34BEC789A2F26;
IL2CPP_EXTERN_C String_t* _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D;
IL2CPP_EXTERN_C String_t* _stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB;
IL2CPP_EXTERN_C String_t* _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
IL2CPP_EXTERN_C String_t* _stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9;
IL2CPP_EXTERN_C String_t* _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148;
IL2CPP_EXTERN_C String_t* _stringLiteral52E8298879B687FBFF2F48674AA2AFC36D912949;
IL2CPP_EXTERN_C String_t* _stringLiteral5D67C2D23D0E67BA40CD70B037A9F218807BB46F;
IL2CPP_EXTERN_C String_t* _stringLiteral607285AB0953DA016EC17D19BDAD10655BEFA8D4;
IL2CPP_EXTERN_C String_t* _stringLiteral660F6D5965E09393894520A3BBDDAE9F5DEF81D2;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4;
IL2CPP_EXTERN_C String_t* _stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36;
IL2CPP_EXTERN_C String_t* _stringLiteral7BB4B5568C63748C896DED09B403F2FC4F274E91;
IL2CPP_EXTERN_C String_t* _stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4D2503591255173AC6769BB8A784B9CC5B5BC6;
IL2CPP_EXTERN_C String_t* _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C;
IL2CPP_EXTERN_C String_t* _stringLiteral98C4991DBD0370C554791D1BED854533606B6973;
IL2CPP_EXTERN_C String_t* _stringLiteral98D8432FB035A9F29AEDD1E5D592A5692F9AA073;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA3A21FB44DD18299A19A0B86BA27CEB4EDA6A941;
IL2CPP_EXTERN_C String_t* _stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
IL2CPP_EXTERN_C String_t* _stringLiteralB597875EBD28AFB2321AEF6A4F26300FEAF5AFC6;
IL2CPP_EXTERN_C String_t* _stringLiteralB647406DCE91EB1E9AB81ED58CDE39EE7ECA5EE5;
IL2CPP_EXTERN_C String_t* _stringLiteralC996D117D3819CA770138BE5B4BD64D4BB591694;
IL2CPP_EXTERN_C String_t* _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
IL2CPP_EXTERN_C String_t* _stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF;
IL2CPP_EXTERN_C String_t* _stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D;
IL2CPP_EXTERN_C String_t* _stringLiteralE3287997374A5B6321B447152239EBE224279EB6;
IL2CPP_EXTERN_C String_t* _stringLiteralEFE01C2CC4005799E2DF6AA0CDD5DE116776AFBC;
IL2CPP_EXTERN_C String_t* _stringLiteralF811A8F3778A439E75478C3728BE25A7853EAF83;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_m67C4EEF6523F9F73C156BC909CC41E3D386B27F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_mD70B97106F5EBCAC671ACB1B08B83DEB4081F9C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_m5ED31D703D86B23C2BD26E50E32AC34B04CAA16A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_m9D85B2A13EEC0A5B764D2AB401D9AB4588D4FF4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_mC4C3CDA36FC1EA790DC014119EB8F14BC851918A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_m0317DCFD1691CDB68B4539DEDEDBE1BB19C87685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E_m122B4342704895B942EB668E066A8907E156D51F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_GetImageProperties_mD9D7562C327369A4FEE99EF08D2A0F6A1BEE0376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_GetVideoProperties_mE39CF69BF80843823CDC1B153B29B38413804E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveImageToGallery_mF141267D9981DE0618B1A3BF29B96D1C8BF5D711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisString_t_m9E7C8D767B9CC9AB0DC7022AA55938E0A70AEE42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadImageAtPathAsyncU3Ed__56_MoveNext_m268BC22CE7C8B68270C61E8B270C419689030B02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_mD53F98485F21EB4840C5FC510F8A15C1E9D9489B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass56_0_U3CLoadImageAtPathAsyncU3Eb__0_mB8A2E535E00FCFEB2B71356D3811A3C103512ABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass58_0_U3CGetVideoThumbnailAsyncU3Eb__0_m08F0D4033386F55339DF1E7E5FB5F90B0FF5653E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m6E894223713913587A5A8F533F621719D7DF949D_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF014A065BC76D0FEB5B12ABB99A95712F7EFC69A 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// NativeGallery
struct NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
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

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8  : public RuntimeObject
{
	// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::<>4__this
	NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* ___U3CU3E4__this_0;
	// System.String NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::path
	String_t* ___path_1;
};

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B  : public RuntimeObject
{
	// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::<>4__this
	NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* ___U3CU3E4__this_0;
	// System.String[] NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::result
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___result_1;
};

// NativeGallery/<>c__DisplayClass56_0
struct U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3  : public RuntimeObject
{
	// System.String NativeGallery/<>c__DisplayClass56_0::imagePath
	String_t* ___imagePath_0;
	// System.String NativeGallery/<>c__DisplayClass56_0::temporaryImagePath
	String_t* ___temporaryImagePath_1;
	// System.Int32 NativeGallery/<>c__DisplayClass56_0::maxSize
	int32_t ___maxSize_2;
};

// NativeGallery/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266  : public RuntimeObject
{
	// System.String NativeGallery/<>c__DisplayClass58_0::videoPath
	String_t* ___videoPath_0;
	// System.String NativeGallery/<>c__DisplayClass58_0::temporaryImagePath
	String_t* ___temporaryImagePath_1;
	// System.Int32 NativeGallery/<>c__DisplayClass58_0::maxSize
	int32_t ___maxSize_2;
	// System.Double NativeGallery/<>c__DisplayClass58_0::captureTimeInSeconds
	double ___captureTimeInSeconds_3;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>
struct TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t95921EB64E237ACD28589D64B693C652268F225E* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;
};

// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>
struct Task_1_t95921EB64E237ACD28589D64B693C652268F225E  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_result_22;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// System.Runtime.CompilerServices.YieldAwaitable
struct YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB__padding[1];
	};
};

// NativeGallery/ImageProperties
struct ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59 
{
	// System.Int32 NativeGallery/ImageProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/ImageProperties::height
	int32_t ___height_1;
	// System.String NativeGallery/ImageProperties::mimeType
	String_t* ___mimeType_2;
	// NativeGallery/ImageOrientation NativeGallery/ImageProperties::orientation
	int32_t ___orientation_3;
};
// Native definition for P/Invoke marshalling of NativeGallery/ImageProperties
struct ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_pinvoke
{
	int32_t ___width_0;
	int32_t ___height_1;
	char* ___mimeType_2;
	int32_t ___orientation_3;
};
// Native definition for COM marshalling of NativeGallery/ImageProperties
struct ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_com
{
	int32_t ___width_0;
	int32_t ___height_1;
	Il2CppChar* ___mimeType_2;
	int32_t ___orientation_3;
};

// NativeGallery/VideoProperties
struct VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5 
{
	// System.Int32 NativeGallery/VideoProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/VideoProperties::height
	int32_t ___height_1;
	// System.Int64 NativeGallery/VideoProperties::duration
	int64_t ___duration_2;
	// System.Single NativeGallery/VideoProperties::rotation
	float ___rotation_3;
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A__padding[1];
	};
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>
struct AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t95921EB64E237ACD28589D64B693C652268F225E* ___m_task_2;
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
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

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid
struct NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// NativeGallery/MediaPickCallback NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::callback
	MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___callback_4;
	// NativeGallery/MediaPickMultipleCallback NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::callbackMultiple
	MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___callbackMultiple_5;
	// NativeGalleryNamespace.NGCallbackHelper NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::callbackHelper
	NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* ___callbackHelper_6;
};

// NativeGalleryNamespace.NGPermissionCallbackAndroid
struct NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Object NativeGalleryNamespace.NGPermissionCallbackAndroid::threadLock
	RuntimeObject* ___threadLock_4;
	// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::<Result>k__BackingField
	int32_t ___U3CResultU3Ek__BackingField_5;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.UnityException
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// NativeGallery/<GetVideoThumbnailAsync>d__58
struct U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C 
{
	// System.Int32 NativeGallery/<GetVideoThumbnailAsync>d__58::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D> NativeGallery/<GetVideoThumbnailAsync>d__58::<>t__builder
	AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F ___U3CU3Et__builder_1;
	// System.String NativeGallery/<GetVideoThumbnailAsync>d__58::videoPath
	String_t* ___videoPath_2;
	// System.Int32 NativeGallery/<GetVideoThumbnailAsync>d__58::maxSize
	int32_t ___maxSize_3;
	// System.Double NativeGallery/<GetVideoThumbnailAsync>d__58::captureTimeInSeconds
	double ___captureTimeInSeconds_4;
	// NativeGallery/<>c__DisplayClass58_0 NativeGallery/<GetVideoThumbnailAsync>d__58::<>8__1
	U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266* ___U3CU3E8__1_5;
	// System.Boolean NativeGallery/<GetVideoThumbnailAsync>d__58::markTextureNonReadable
	bool ___markTextureNonReadable_6;
	// System.Boolean NativeGallery/<GetVideoThumbnailAsync>d__58::generateMipmaps
	bool ___generateMipmaps_7;
	// System.Boolean NativeGallery/<GetVideoThumbnailAsync>d__58::linearColorSpace
	bool ___linearColorSpace_8;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> NativeGallery/<GetVideoThumbnailAsync>d__58::<>u__1
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__1_9;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D> NativeGallery/<GetVideoThumbnailAsync>d__58::<>u__2
	TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B ___U3CU3Eu__2_10;
};

// NativeGallery/<LoadImageAtPathAsync>d__56
struct U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21 
{
	// System.Int32 NativeGallery/<LoadImageAtPathAsync>d__56::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D> NativeGallery/<LoadImageAtPathAsync>d__56::<>t__builder
	AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F ___U3CU3Et__builder_1;
	// System.String NativeGallery/<LoadImageAtPathAsync>d__56::imagePath
	String_t* ___imagePath_2;
	// System.Int32 NativeGallery/<LoadImageAtPathAsync>d__56::maxSize
	int32_t ___maxSize_3;
	// System.Boolean NativeGallery/<LoadImageAtPathAsync>d__56::linearColorSpace
	bool ___linearColorSpace_4;
	// System.Boolean NativeGallery/<LoadImageAtPathAsync>d__56::markTextureNonReadable
	bool ___markTextureNonReadable_5;
	// System.Boolean NativeGallery/<LoadImageAtPathAsync>d__56::generateMipmaps
	bool ___generateMipmaps_6;
	// NativeGallery/<>c__DisplayClass56_0 NativeGallery/<LoadImageAtPathAsync>d__56::<>8__1
	U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3* ___U3CU3E8__1_7;
	// System.String NativeGallery/<LoadImageAtPathAsync>d__56::<loadPath>5__2
	String_t* ___U3CloadPathU3E5__2_8;
	// UnityEngine.Texture2D NativeGallery/<LoadImageAtPathAsync>d__56::<result>5__3
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CresultU3E5__3_9;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> NativeGallery/<LoadImageAtPathAsync>d__56::<>u__1
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__1_10;
	// UnityEngine.Networking.UnityWebRequest NativeGallery/<LoadImageAtPathAsync>d__56::<www>5__4
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwwwU3E5__4_11;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation NativeGallery/<LoadImageAtPathAsync>d__56::<asyncOperation>5__5
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___U3CasyncOperationU3E5__5_12;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter NativeGallery/<LoadImageAtPathAsync>d__56::<>u__2
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__2_13;
};

// System.Func`1<System.String>
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// NativeGallery/MediaPickCallback
struct MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6  : public MulticastDelegate_t
{
};

// NativeGallery/MediaPickMultipleCallback
struct MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B  : public MulticastDelegate_t
{
};

// NativeGallery/MediaSaveCallback
struct MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D  : public MulticastDelegate_t
{
};

// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
	// System.String System.IO.FileNotFoundException::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_18;
	// System.String System.IO.FileNotFoundException::<FusionLog>k__BackingField
	String_t* ___U3CFusionLogU3Ek__BackingField_19;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// NativeGalleryNamespace.NGCallbackHelper
struct NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action NativeGalleryNamespace.NGCallbackHelper::mainThreadAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___mainThreadAction_4;
};

// <Module>

// <Module>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// System.MarshalByRefObject

// System.MarshalByRefObject

// NativeGallery
struct NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields
{
	// UnityEngine.AndroidJavaClass NativeGallery::m_ajc
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___m_ajc_0;
	// UnityEngine.AndroidJavaObject NativeGallery::m_context
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_context_1;
	// System.String NativeGallery::m_temporaryImagePath
	String_t* ___m_temporaryImagePath_2;
	// System.String NativeGallery::m_selectedMediaPath
	String_t* ___m_selectedMediaPath_3;
};

// NativeGallery

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0

// NativeGallery/<>c__DisplayClass56_0

// NativeGallery/<>c__DisplayClass56_0

// NativeGallery/<>c__DisplayClass58_0

// NativeGallery/<>c__DisplayClass58_0

// Unity.Collections.NativeArray`1<System.Byte>

// Unity.Collections.NativeArray`1<System.Byte>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>

// System.Threading.Tasks.Task`1<System.String>

// System.Threading.Tasks.Task`1<System.String>

// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>

// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// System.Runtime.CompilerServices.AsyncMethodBuilderCore

// System.Runtime.CompilerServices.AsyncMethodBuilderCore

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// System.Void

// System.Void

// System.Runtime.CompilerServices.YieldAwaitable

// System.Runtime.CompilerServices.YieldAwaitable

// NativeGallery/ImageProperties

// NativeGallery/ImageProperties

// NativeGallery/VideoProperties

// NativeGallery/VideoProperties

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_StaticFields
{
	// System.Threading.WaitCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_waitCallbackRunAction
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___s_waitCallbackRunAction_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_sendOrPostCallbackRunAction
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___s_sendOrPostCallbackRunAction_1;
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter

// Interop/Sys/FileStatus

// Interop/Sys/FileStatus

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>
struct AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t95921EB64E237ACD28589D64B693C652268F225E* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.AndroidJavaProxy

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.Networking.CertificateHandler

// UnityEngine.Networking.CertificateHandler

// System.Delegate

// System.Delegate

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.IO.FileStatus

// System.IO.FileStatus

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Networking.UploadHandler

// UnityEngine.Networking.UploadHandler

// UnityEngine.Component

// UnityEngine.Component

// System.IO.FileSystemInfo

// System.IO.FileSystemInfo

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid

// NativeGalleryNamespace.NGPermissionCallbackAndroid

// NativeGalleryNamespace.NGPermissionCallbackAndroid

// System.SystemException

// System.SystemException

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.UnityException

// UnityEngine.UnityException

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// NativeGallery/<GetVideoThumbnailAsync>d__58

// NativeGallery/<GetVideoThumbnailAsync>d__58

// NativeGallery/<LoadImageAtPathAsync>d__56

// NativeGallery/<LoadImageAtPathAsync>d__56

// System.Func`1<System.String>

// System.Func`1<System.String>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.IO.DirectoryInfo

// System.IO.DirectoryInfo

// System.IO.IOException

// System.IO.IOException

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// NativeGallery/MediaPickCallback

// NativeGallery/MediaPickCallback

// NativeGallery/MediaPickMultipleCallback

// NativeGallery/MediaPickMultipleCallback

// NativeGallery/MediaSaveCallback

// NativeGallery/MediaSaveCallback

// System.IO.FileNotFoundException

// System.IO.FileNotFoundException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// NativeGalleryNamespace.NGCallbackHelper

// NativeGalleryNamespace.NGCallbackHelper
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<NativeGallery/<LoadImageAtPathAsync>d__56>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_m698C51EF8529846805D4FCE7581704EF2BB39E84_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<NativeGallery/<GetVideoThumbnailAsync>d__58>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_mB83CBCEFCF5A17E47FB7F32942EF6D30CD70FACB_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<T> NativeGallery::TryCallNativeAndroidFunctionOnSeparateThread<System.Object>(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisRuntimeObject_m92D428319DB8229FA19529903EFED7AD9C8D6593_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_function, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,NativeGallery/<LoadImageAtPathAsync>d__56>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_mC1A2C540C6ED845F06E2C46A0867C16D729920AC_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,NativeGallery/<LoadImageAtPathAsync>d__56>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_m91F73B89BB1CB823BDB771865DF70C138CE1DC05_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21* ___1_stateMachine, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixelData<System.Byte>(Unity.Collections.NativeArray`1<T>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_data, int32_t ___1_mipLevel, int32_t ___2_sourceDataStartIndex, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,NativeGallery/<GetVideoThumbnailAsync>d__58>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_mB22E9433EE8F8CD96F11D08C26D839B4B2160750_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C* ___1_stateMachine, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaClass NativeGallery::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A (const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject NativeGallery::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___0_key, int32_t ___1_defaultValue, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid__ctor_m00B158EB122D1CAC9BB41B8A298981AD16F7B56F (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, RuntimeObject* ___0_threadLock, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_m191C26F8B4F43175AF59865CC66AD5678C72402D_inline (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Monitor::Wait(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_Wait_m322138959FFE3F4F3212658ACB0C30C981880D28 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
// System.Boolean NativeGallery::IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_m08C8520C94ABF511EA6E7F48E63697CA7857BAAD (const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mediaBytes, String_t* ___1_album, String_t* ___2_filename, int32_t ___3_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___4_callback, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240 (String_t* ___0_existingMediaPath, String_t* ___1_album, String_t* ___2_filename, int32_t ___3_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___4_callback, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075 (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
// System.Byte[] NativeGallery::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeGallery_GetTextureBytes_mB475FDFD6E1FBEAA043E1190CC5B4172EE3536EF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, bool ___1_isJpeg, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared)(__this, ___0_methodName, ___1_args, method);
}
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, int32_t ___1_mediaType, String_t* ___2_mime, String_t* ___3_title, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, int32_t ___1_mediaType, String_t* ___2_mime, String_t* ___3_title, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// NativeGallery/Permission NativeGallery::RequestPermission(NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_mB2F20A17757755EB1B2C3F171DCD5944A4CF1706 (int32_t ___0_permissionType, int32_t ___1_mediaTypes, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String NativeGallery::GetTemporarySavePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_GetTemporarySavePath_m2057630E0A0206CEEC5C908A37470E49A0D70E60 (String_t* ___0_filename, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077 (String_t* ___0_path, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, const RuntimeMethod* method) ;
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_m7E98DD903D33ED3D5E3036C256CE09CC0422359E (String_t* ___0_path, String_t* ___1_album, int32_t ___2_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.FileNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1 (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m3798F05909C43D7EA26130D51D0A15CFCBE7458A (String_t* ___0_sourceFileName, String_t* ___1_destFileName, bool ___2_overwrite, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.Boolean,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::.ctor(NativeGallery/MediaPickCallback,NativeGallery/MediaPickMultipleCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid__ctor_mDA59DF94D1E808D51945EFC7935434A3B2D00E61 (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* __this, MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___1_callbackMultiple, const RuntimeMethod* method) ;
// System.String NativeGallery::get_SelectedMediaPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedMediaPath_mBB0C7C91D1B7ED7D8D2F457B86432E2D7AA7A19F (const RuntimeMethod* method) ;
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_m8B64B58699A6EEB502428C3444FBFEE702E63997 (const RuntimeMethod* method) ;
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, int32_t ___1_quality, const RuntimeMethod* method) ;
// System.Byte[] NativeGallery::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeGallery_GetTextureBytesFromCopy_m23C31F7FB9D56BD6144EA7D15230E0718D84DED7 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, bool ___1_isJpeg, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F (int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_temp, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_dest, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_source, int32_t ___1_destX, int32_t ___2_destY, bool ___3_recalculateMipMaps, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___0_updateMipmaps, bool ___1_makeNoLongerReadable, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_maxTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991 (const RuntimeMethod* method) ;
// System.String NativeGallery::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_m05418FC4CC85508CDAE30BEDCC344C85884E1BF8 (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, bool ___4_linear, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, bool ___2_markNonReadable, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::Create()
inline AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::Start<NativeGallery/<LoadImageAtPathAsync>d__56>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_m0317DCFD1691CDB68B4539DEDEDBE1BB19C87685 (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_m698C51EF8529846805D4FCE7581704EF2BB39E84_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::get_Task()
inline Task_1_t95921EB64E237ACD28589D64B693C652268F225E* AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t95921EB64E237ACD28589D64B693C652268F225E* (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE (String_t* ___0_imagePath, int32_t ___1_maxSize, bool ___2_markTextureNonReadable, bool ___3_generateMipmaps, bool ___4_linearColorSpace, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::Start<NativeGallery/<GetVideoThumbnailAsync>d__58>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_mC4C3CDA36FC1EA790DC014119EB8F14BC851918A (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_mB83CBCEFCF5A17E47FB7F32942EF6D30CD70FACB_gshared)(__this, ___0_stateMachine, method);
}
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3 (ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59* __this, int32_t ___0_width, int32_t ___1_height, String_t* ___2_mimeType, int32_t ___3_orientation, const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2 (String_t* ___0_s, int64_t* ___1_result, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___0_oldChar, Il2CppChar ___1_newChar, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mFB8CC32F0016FBB6EFCB97953CF3515767EB6431 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, float* ___3_result, const RuntimeMethod* method) ;
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD (VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5* __this, int32_t ___0_width, int32_t ___1_height, int64_t ___2_duration, float ___3_rotation, const RuntimeMethod* method) ;
// System.Void NativeGallery/<>c__DisplayClass56_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass56_0__ctor_m3BF386E4C1683C7BE72320555EFB81C690DB1E2F (U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task`1<T> NativeGallery::TryCallNativeAndroidFunctionOnSeparateThread<System.String>(System.Func`1<T>)
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisString_t_m9E7C8D767B9CC9AB0DC7022AA55938E0A70AEE42 (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___0_function, const RuntimeMethod* method)
{
	return ((  Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* (*) (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*, const RuntimeMethod*))NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisRuntimeObject_m92D428319DB8229FA19529903EFED7AD9C8D6593_gshared)(___0_function, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,NativeGallery/<LoadImageAtPathAsync>d__56>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_mD70B97106F5EBCAC671ACB1B08B83DEB4081F9C5 (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___0_awaiter, U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_mC1A2C540C6ED845F06E2C46A0867C16D729920AC_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestTexture_GetTexture_m45F855106C834021AC0DFA25FE31BA14C42693CA (String_t* ___0_uri, bool ___1_nonReadable, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable System.Threading.Tasks.Task::Yield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1 (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter System.Runtime.CompilerServices.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E (YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,NativeGallery/<LoadImageAtPathAsync>d__56>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_m9D85B2A13EEC0A5B764D2AB401D9AB4588D4FF4B (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_m91F73B89BB1CB823BDB771865DF70C138CE1DC05_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DownloadHandlerTexture_GetContent_m86BC88F58305A1B21C21CE7D82658197932EFB18 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_www, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_gshared)(__this, method);
}
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixelData<System.Byte>(Unity.Collections.NativeArray`1<T>,System.Int32,System.Int32)
inline void Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_data, int32_t ___1_mipLevel, int32_t ___2_sourceDataStartIndex, const RuntimeMethod* method)
{
	((  void (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, int32_t, int32_t, const RuntimeMethod*))Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212_gshared)(__this, ___0_data, ___1_mipLevel, ___2_sourceDataStartIndex, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688 (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void NativeGallery/<LoadImageAtPathAsync>d__56::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageAtPathAsyncU3Ed__56_MoveNext_m268BC22CE7C8B68270C61E8B270C419689030B02 (U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void NativeGallery/<LoadImageAtPathAsync>d__56::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageAtPathAsyncU3Ed__56_SetStateMachine_m80F5304D2F999E6E67B6C74D18A4BFD8A7D102B3 (U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void NativeGallery/<>c__DisplayClass58_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0__ctor_m18D1E4394641E5CC23B40C6E2F274B3756A237B3 (U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,NativeGallery/<GetVideoThumbnailAsync>d__58>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_m67C4EEF6523F9F73C156BC909CC41E3D386B27F4 (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___0_awaiter, U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_mB22E9433EE8F8CD96F11D08C26D839B4B2160750_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D> NativeGallery::LoadImageAtPathAsync(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t95921EB64E237ACD28589D64B693C652268F225E* NativeGallery_LoadImageAtPathAsync_m3C74F160A60055587A069839F0228D2B275CEBA0 (String_t* ___0_imagePath, int32_t ___1_maxSize, bool ___2_markTextureNonReadable, bool ___3_generateMipmaps, bool ___4_linearColorSpace, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<UnityEngine.Texture2D>::GetAwaiter()
inline TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C (Task_1_t95921EB64E237ACD28589D64B693C652268F225E* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B (*) (Task_1_t95921EB64E237ACD28589D64B693C652268F225E*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911 (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>,NativeGallery/<GetVideoThumbnailAsync>d__58>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_m5ED31D703D86B23C2BD26E50E32AC34B04CAA16A (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* ___0_awaiter, U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*, U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_mB22E9433EE8F8CD96F11D08C26D839B4B2160750_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>::GetResult()
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* __this, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void NativeGallery/<GetVideoThumbnailAsync>d__58::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetVideoThumbnailAsyncU3Ed__58_MoveNext_mDF77FEAD001979EA545BE46531D4F204D0277C6B (U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C* __this, const RuntimeMethod* method) ;
// System.Void NativeGallery/<GetVideoThumbnailAsync>d__58::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetVideoThumbnailAsyncU3Ed__58_SetStateMachine_mA11C42144D619E83C5D2033AC00658D46D90615A (U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<NativeGalleryNamespace.NGCallbackHelper>()
inline NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* GameObject_AddComponent_TisNGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E_m122B4342704895B942EB668E066A8907E156D51F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mC570477CEA424C12BDAE3117665FE99C9D0EA387 (U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGCallbackHelper::CallOnMainThread(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGCallbackHelper_CallOnMainThread_mF7F169DC018B729E70CDD5017BA99B7F3DBA54D8_inline (NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_function, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7E74F3E4FBDB854C815800DE26A4F447CBBE6E91 (U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_inline (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::MediaReceiveCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_MediaReceiveCallback_mB3DA436490521248AE6B7A1DA4B11C2C209A5295 (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::MediaReceiveMultipleCallback(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_MediaReceiveMultipleCallback_m3A0489AD51509EDBD6536C89282460F879A3801A (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method) ;
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::set_Result(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_mC34052700FD02618001671CCB526869C496673EB_inline (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Pulse(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Pulse_mA8279943D6C2913ADFAF661E35C4951BDFACE43D (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
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
// UnityEngine.AndroidJavaClass NativeGallery::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFE01C2CC4005799E2DF6AA0CDD5DE116776AFBC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_ajc == null )
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_ajc_0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// m_ajc = new AndroidJavaClass( "com.yasirkula.unity.NativeGallery" );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteralEFE01C2CC4005799E2DF6AA0CDD5DE116776AFBC, NULL);
		((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_ajc_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_ajc_0), (void*)L_1);
	}

IL_0016:
	{
		// return m_ajc;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_ajc_0;
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject NativeGallery::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// if( m_context == null )
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_context_1;
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		// using( AndroidJavaObject unityClass = new AndroidJavaClass( "com.unity3d.player.UnityPlayer" ) )
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// m_context = unityClass.GetStatic<AndroidJavaObject>( "currentActivity" );
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
			NullCheck(L_4);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
			L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_4, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_context_1 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_context_1), (void*)L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// return m_context;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_context_1;
		return L_6;
	}
}
// System.String NativeGallery::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_m05418FC4CC85508CDAE30BEDCC344C85884E1BF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_temporaryImagePath == null )
		String_t* L_0 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_temporaryImagePath_2;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_temporaryImagePath = Path.Combine( Application.temporaryCachePath, "tmpImg" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_1, _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2, NULL);
		((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_temporaryImagePath_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_temporaryImagePath_2), (void*)L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_4;
		L_4 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_3, NULL);
	}

IL_0026:
	{
		// return m_temporaryImagePath;
		String_t* L_5 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_temporaryImagePath_2;
		return L_5;
	}
}
// System.String NativeGallery::get_SelectedMediaPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedMediaPath_mBB0C7C91D1B7ED7D8D2F457B86432E2D7AA7A19F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_selectedMediaPath == null )
		String_t* L_0 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_selectedMediaPath_3;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_selectedMediaPath = Path.Combine( Application.temporaryCachePath, "pickedMedia" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_1, _stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B, NULL);
		((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_selectedMediaPath_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_selectedMediaPath_3), (void*)L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_4;
		L_4 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_3, NULL);
	}

IL_0026:
	{
		// return m_selectedMediaPath;
		String_t* L_5 = ((NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t5E55EACA16F196F4214E0A3AB3A39B5CF555EB0B_il2cpp_TypeInfo_var))->___m_selectedMediaPath_3;
		return L_5;
	}
}
// NativeGallery/Permission NativeGallery::CheckPermission(NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_CheckPermission_m11F20257C849D8E3E02D7B8095A672825AADAA84 (int32_t ___0_permissionType, int32_t ___1_mediaTypes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral660F6D5965E09393894520A3BBDDAE9F5DEF81D2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Permission result = (Permission) AJC.CallStatic<int>( "CheckPermission", Context, permissionType == PermissionType.Read, (int) mediaTypes );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___0_permissionType;
		bool L_6 = ((bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0));
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___1_mediaTypes;
		int32_t L_10 = ((int32_t)L_9);
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		NullCheck(L_0);
		int32_t L_12;
		L_12 = AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A(L_0, _stringLiteral660F6D5965E09393894520A3BBDDAE9F5DEF81D2, L_8, AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		V_0 = L_12;
		// if( result == Permission.Denied && (Permission) PlayerPrefs.GetInt( "NativeGalleryPermission", (int) Permission.ShouldAsk ) == Permission.ShouldAsk )
		int32_t L_13 = V_0;
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_14;
		L_14 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148, 2, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_0046;
		}
	}
	{
		// result = Permission.ShouldAsk;
		V_0 = 2;
	}

IL_0046:
	{
		// return result;
		int32_t L_15 = V_0;
		return L_15;
	}
}
// NativeGallery/Permission NativeGallery::RequestPermission(NativeGallery/PermissionType,NativeGallery/MediaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_mB2F20A17757755EB1B2C3F171DCD5944A4CF1706 (int32_t ___0_permissionType, int32_t ___1_mediaTypes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// object threadLock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		V_0 = L_0;
		// lock( threadLock )
		RuntimeObject* L_1 = V_0;
		V_1 = L_1;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ad:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_00b6;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_00b6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_2), NULL);
				// NGPermissionCallbackAndroid nativeCallback = new NGPermissionCallbackAndroid( threadLock );
				RuntimeObject* L_5 = V_0;
				NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* L_6 = (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB*)il2cpp_codegen_object_new(NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				NGPermissionCallbackAndroid__ctor_m00B158EB122D1CAC9BB41B8A298981AD16F7B56F(L_6, L_5, NULL);
				V_3 = L_6;
				// AJC.CallStatic( "RequestPermission", Context, nativeCallback, permissionType == PermissionType.Read, (int) mediaTypes, PlayerPrefs.GetInt( "NativeGalleryPermission", (int) Permission.ShouldAsk ) );
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_7;
				L_7 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10;
				L_10 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
				NullCheck(L_9);
				ArrayElementTypeCheck (L_9, L_10);
				(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
				NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* L_12 = V_3;
				NullCheck(L_11);
				ArrayElementTypeCheck (L_11, L_12);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
				int32_t L_14 = ___0_permissionType;
				bool L_15 = ((bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0));
				RuntimeObject* L_16 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_15);
				NullCheck(L_13);
				ArrayElementTypeCheck (L_13, L_16);
				(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
				int32_t L_18 = ___1_mediaTypes;
				int32_t L_19 = ((int32_t)L_18);
				RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, L_20);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
				int32_t L_22;
				L_22 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148, 2, NULL);
				int32_t L_23 = L_22;
				RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
				NullCheck(L_21);
				ArrayElementTypeCheck (L_21, L_24);
				(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_24);
				NullCheck(L_7);
				AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_7, _stringLiteral0443845674FDE6986E4ECC72A8C096004DF51FC6, L_21, NULL);
				// if( nativeCallback.Result == -1 )
				NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* L_25 = V_3;
				NullCheck(L_25);
				int32_t L_26;
				L_26 = NGPermissionCallbackAndroid_get_Result_m191C26F8B4F43175AF59865CC66AD5678C72402D_inline(L_25, NULL);
				if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
				{
					goto IL_0072_1;
				}
			}
			{
				// System.Threading.Monitor.Wait( threadLock );
				RuntimeObject* L_27 = V_0;
				bool L_28;
				L_28 = Monitor_Wait_m322138959FFE3F4F3212658ACB0C30C981880D28(L_27, NULL);
			}

IL_0072_1:
			{
				// if( (Permission) nativeCallback.Result != Permission.ShouldAsk && PlayerPrefs.GetInt( "NativeGalleryPermission", -1 ) != nativeCallback.Result )
				NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* L_29 = V_3;
				NullCheck(L_29);
				int32_t L_30;
				L_30 = NGPermissionCallbackAndroid_get_Result_m191C26F8B4F43175AF59865CC66AD5678C72402D_inline(L_29, NULL);
				if ((((int32_t)L_30) == ((int32_t)2)))
				{
					goto IL_00a3_1;
				}
			}
			{
				int32_t L_31;
				L_31 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148, (-1), NULL);
				NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* L_32 = V_3;
				NullCheck(L_32);
				int32_t L_33;
				L_33 = NGPermissionCallbackAndroid_get_Result_m191C26F8B4F43175AF59865CC66AD5678C72402D_inline(L_32, NULL);
				if ((((int32_t)L_31) == ((int32_t)L_33)))
				{
					goto IL_00a3_1;
				}
			}
			{
				// PlayerPrefs.SetInt( "NativeGalleryPermission", nativeCallback.Result );
				NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* L_34 = V_3;
				NullCheck(L_34);
				int32_t L_35;
				L_35 = NGPermissionCallbackAndroid_get_Result_m191C26F8B4F43175AF59865CC66AD5678C72402D_inline(L_34, NULL);
				PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral519276B36C92AA64006C0D21451C2C34FE5C1148, L_35, NULL);
				// PlayerPrefs.Save();
				PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
			}

IL_00a3_1:
			{
				// return (Permission) nativeCallback.Result;
				NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* L_36 = V_3;
				NullCheck(L_36);
				int32_t L_37;
				L_37 = NGPermissionCallbackAndroid_get_Result_m191C26F8B4F43175AF59865CC66AD5678C72402D_inline(L_36, NULL);
				V_4 = L_37;
				goto IL_00b7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b7:
	{
		// }
		int32_t L_38 = V_4;
		return L_38;
	}
}
// System.Void NativeGallery::TryExtendLimitedAccessPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_TryExtendLimitedAccessPermission_mDAC7C73A2003140F4BAEA45D337879E8D635A7CF (const RuntimeMethod* method) 
{
	{
		// if( IsMediaPickerBusy() )
		bool L_0;
		L_0 = NativeGallery_IsMediaPickerBusy_m08C8520C94ABF511EA6E7F48E63697CA7857BAAD(NULL);
		// return;
		return;
	}
}
// System.Boolean NativeGallery::CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanOpenSettings_mB480A4B0E4AA86054713BA82021DBE8EF846CB2B (const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void NativeGallery::OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_OpenSettings_mC3C5C5092A5C8F1E25548FC6B5F0684753541A98 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A4D2503591255173AC6769BB8A784B9CC5B5BC6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AJC.CallStatic( "OpenSettings", Context );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral8A4D2503591255173AC6769BB8A784B9CC5B5BC6, L_2, NULL);
		// }
		return;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m2AF3D2C35694767051735B811A2DE73E48141A9C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mediaBytes, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Image, callback );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_mediaBytes;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_0, L_1, L_2, 1, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m00EE9B0042E36A283C925D51F1211B9F649DB746 (String_t* ___0_existingMediaPath, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Image, callback );
		String_t* L_0 = ___0_existingMediaPath;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240(L_0, L_1, L_2, 1, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(UnityEngine.Texture2D,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_mF141267D9981DE0618B1A3BF29B96D1C8BF5D711 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_image, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( image == null )
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_image;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'image' is null!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15332598528DB5F9A0B9473BE7DCE0BB1F8DCAA7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveImageToGallery_mF141267D9981DE0618B1A3BF29B96D1C8BF5D711_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if( filename.EndsWith( ".jpeg", StringComparison.OrdinalIgnoreCase ) || filename.EndsWith( ".jpg", StringComparison.OrdinalIgnoreCase ) )
		String_t* L_3 = ___2_filename;
		NullCheck(L_3);
		bool L_4;
		L_4 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_3, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, 5, NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_5 = ___2_filename;
		NullCheck(L_5);
		bool L_6;
		L_6 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_5, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, 5, NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}

IL_0030:
	{
		// return SaveToGallery( GetTextureBytes( image, true ), album, filename, MediaType.Image, callback );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = ___0_image;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = NativeGallery_GetTextureBytes_mB475FDFD6E1FBEAA043E1190CC5B4172EE3536EF(L_7, (bool)1, NULL);
		String_t* L_9 = ___1_album;
		String_t* L_10 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_11 = ___3_callback;
		int32_t L_12;
		L_12 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_8, L_9, L_10, 1, L_11, NULL);
		return L_12;
	}

IL_0041:
	{
		// else if( filename.EndsWith( ".png", StringComparison.OrdinalIgnoreCase ) )
		String_t* L_13 = ___2_filename;
		NullCheck(L_13);
		bool L_14;
		L_14 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_13, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, 5, NULL);
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		// return SaveToGallery( GetTextureBytes( image, false ), album, filename, MediaType.Image, callback );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = ___0_image;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = NativeGallery_GetTextureBytes_mB475FDFD6E1FBEAA043E1190CC5B4172EE3536EF(L_15, (bool)0, NULL);
		String_t* L_17 = ___1_album;
		String_t* L_18 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_19 = ___3_callback;
		int32_t L_20;
		L_20 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_16, L_17, L_18, 1, L_19, NULL);
		return L_20;
	}

IL_0060:
	{
		// return SaveToGallery( GetTextureBytes( image, false ), album, filename + ".png", MediaType.Image, callback );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = ___0_image;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = NativeGallery_GetTextureBytes_mB475FDFD6E1FBEAA043E1190CC5B4172EE3536EF(L_21, (bool)0, NULL);
		String_t* L_23 = ___1_album;
		String_t* L_24 = ___2_filename;
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_24, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_26 = ___3_callback;
		int32_t L_27;
		L_27 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_22, L_23, L_25, 1, L_26, NULL);
		return L_27;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_m6E8834DA9847B65AB58366743E32F828B24BEE05 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mediaBytes, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Video, callback );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_mediaBytes;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_0, L_1, L_2, 2, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_m170EBCAA3C3128904E6E6C5F0397BD6E040352F6 (String_t* ___0_existingMediaPath, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Video, callback );
		String_t* L_0 = ___0_existingMediaPath;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240(L_0, L_1, L_2, 2, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveAudioToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveAudioToGallery_m98B698674CCE8A1B9FB847E69A0AB20229C29416 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mediaBytes, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Audio, callback );
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_mediaBytes;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454(L_0, L_1, L_2, 4, L_3, NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveAudioToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveAudioToGallery_m992C5F625CA1D657F05B415BE227A99E5C6B2A9F (String_t* ___0_existingMediaPath, String_t* ___1_album, String_t* ___2_filename, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Audio, callback );
		String_t* L_0 = ___0_existingMediaPath;
		String_t* L_1 = ___1_album;
		String_t* L_2 = ___2_filename;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_3 = ___3_callback;
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240(L_0, L_1, L_2, 4, L_3, NULL);
		return L_4;
	}
}
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_m8B64B58699A6EEB502428C3444FBFEE702E63997 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC996D117D3819CA770138BE5B4BD64D4BB591694);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AJC.CallStatic<bool>( "CanSelectMultipleMedia" );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteralC996D117D3819CA770138BE5B4BD64D4BB591694, L_1, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean NativeGallery::CanSelectMultipleMediaTypesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleMediaTypesFromGallery_m285088023ECD53F60EB6C0848FC2C74C6B93FAB2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98D8432FB035A9F29AEDD1E5D592A5692F9AA073);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AJC.CallStatic<bool>( "CanSelectMultipleMediaTypes" );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteral98D8432FB035A9F29AEDD1E5D592A5692F9AA073, L_1, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_2;
	}
}
// NativeGallery/Permission NativeGallery::GetImageFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImageFromGallery_m046CBE10C42FBF23C2C265CDA6BBE14534A1BE19 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMediaFromGallery( callback, MediaType.Image, mime, title );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1(L_0, 1, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetVideoFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideoFromGallery_mCB867EFB787DDF037FA7CE37116297E4D6BE6C93 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMediaFromGallery( callback, MediaType.Video, mime, title );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1(L_0, 2, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetAudioFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetAudioFromGallery_m52427EDF876CCD6CA3023D3701418FE889BDC361 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMediaFromGallery( callback, MediaType.Audio, mime, title );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1(L_0, 4, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetMixedMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMixedMediaFromGallery_m1D09D42F1CC363166CCD8B30DC51F2DADBFCED0F (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, int32_t ___1_mediaTypes, String_t* ___2_title, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, mediaTypes, "*/*", title );
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___0_callback;
		int32_t L_1 = ___1_mediaTypes;
		String_t* L_2 = ___2_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1(L_0, L_1, _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetImagesFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImagesFromGallery_m0173A98B4E42DF72287C48216792CCBBA5D322BB (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Image, mime, title );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C(L_0, 1, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetVideosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideosFromGallery_m47FC2D6059067CE6538C69255B58EA4C20CC6D41 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Video, mime, title );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C(L_0, 2, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetAudiosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetAudiosFromGallery_mCC57680119F1432F730E068E2AE173E01CE4AD6E (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, String_t* ___1_title, String_t* ___2_mime, const RuntimeMethod* method) 
{
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Audio, mime, title );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_0 = ___0_callback;
		String_t* L_1 = ___2_mime;
		String_t* L_2 = ___1_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C(L_0, 4, L_1, L_2, NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetMixedMediasFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMixedMediasFromGallery_m5958D8BFBC304CA77FCEC85AE32F028B7862481C (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, int32_t ___1_mediaTypes, String_t* ___2_title, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, mediaTypes, "*/*", title );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_0 = ___0_callback;
		int32_t L_1 = ___1_mediaTypes;
		String_t* L_2 = ___2_title;
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C(L_0, L_1, _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF, L_2, NULL);
		return L_3;
	}
}
// System.Boolean NativeGallery::IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_m08C8520C94ABF511EA6E7F48E63697CA7857BAAD (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// NativeGallery/MediaType NativeGallery::GetMediaTypeOfFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaTypeOfFile_m2B9362DA4D77A54A20CE8CBCAA066451592390CF (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52E8298879B687FBFF2F48674AA2AFC36D912949);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral607285AB0953DA016EC17D19BDAD10655BEFA8D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB597875EBD28AFB2321AEF6A4F26300FEAF5AFC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB647406DCE91EB1E9AB81ED58CDE39EE7ECA5EE5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_000a:
	{
		// string extension = Path.GetExtension( path );
		String_t* L_2 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_2, NULL);
		V_0 = L_3;
		// if( string.IsNullOrEmpty( extension ) )
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_001b:
	{
		// if( extension[0] == '.' )
		String_t* L_6 = V_0;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, 0, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0039;
		}
	}
	{
		// if( extension.Length == 1 )
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_0031:
	{
		// extension = extension.Substring( 1 );
		String_t* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_10, 1, NULL);
		V_0 = L_11;
	}

IL_0039:
	{
		// string mime = AJC.CallStatic<string>( "GetMimeTypeFromExtension", extension.ToLowerInvariant() );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_12;
		L_12 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		String_t* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		NullCheck(L_12);
		String_t* L_17;
		L_17 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_12, _stringLiteral52E8298879B687FBFF2F48674AA2AFC36D912949, L_14, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_1 = L_17;
		// if( string.IsNullOrEmpty( mime ) )
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_18, NULL);
		if (!L_19)
		{
			goto IL_0062;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_0062:
	{
		// else if( mime.StartsWith( "image/" ) )
		String_t* L_20 = V_1;
		NullCheck(L_20);
		bool L_21;
		L_21 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_20, _stringLiteralB597875EBD28AFB2321AEF6A4F26300FEAF5AFC6, NULL);
		if (!L_21)
		{
			goto IL_0071;
		}
	}
	{
		// return MediaType.Image;
		return (int32_t)(1);
	}

IL_0071:
	{
		// else if( mime.StartsWith( "video/" ) )
		String_t* L_22 = V_1;
		NullCheck(L_22);
		bool L_23;
		L_23 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_22, _stringLiteralB647406DCE91EB1E9AB81ED58CDE39EE7ECA5EE5, NULL);
		if (!L_23)
		{
			goto IL_0080;
		}
	}
	{
		// return MediaType.Video;
		return (int32_t)(2);
	}

IL_0080:
	{
		// else if( mime.StartsWith( "audio/" ) )
		String_t* L_24 = V_1;
		NullCheck(L_24);
		bool L_25;
		L_25 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_24, _stringLiteral607285AB0953DA016EC17D19BDAD10655BEFA8D4, NULL);
		if (!L_25)
		{
			goto IL_008f;
		}
	}
	{
		// return MediaType.Audio;
		return (int32_t)(4);
	}

IL_008f:
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mediaBytes, String_t* ___1_album, String_t* ___2_filename, int32_t ___3_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___4_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B13_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Write, mediaType );
		int32_t L_0 = ___3_mediaType;
		int32_t L_1;
		L_1 = NativeGallery_RequestPermission_mB2F20A17757755EB1B2C3F171DCD5944A4CF1706(1, L_0, NULL);
		// if( result == Permission.Granted )
		int32_t L_2 = L_1;
		G_B1_0 = L_2;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B13_0 = L_2;
			goto IL_0076;
		}
	}
	{
		// if( mediaBytes == null || mediaBytes.Length == 0 )
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_mediaBytes;
		G_B2_0 = G_B1_0;
		if (!L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_mediaBytes;
		NullCheck(L_4);
		G_B3_0 = G_B2_0;
		if ((((RuntimeArray*)L_4)->max_length))
		{
			G_B4_0 = G_B2_0;
			goto IL_001d;
		}
	}

IL_0012:
	{
		// throw new ArgumentException( "Parameter 'mediaBytes' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7BB4B5568C63748C896DED09B403F2FC4F274E91)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if( album == null || album.Length == 0 )
		String_t* L_6 = ___1_album;
		G_B5_0 = G_B4_0;
		if (!L_6)
		{
			G_B6_0 = G_B4_0;
			goto IL_0028;
		}
	}
	{
		String_t* L_7 = ___1_album;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		G_B6_0 = G_B5_0;
		if (L_8)
		{
			G_B7_0 = G_B5_0;
			goto IL_0033;
		}
	}

IL_0028:
	{
		// throw new ArgumentException( "Parameter 'album' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454_RuntimeMethod_var)));
	}

IL_0033:
	{
		// if( filename == null || filename.Length == 0 )
		String_t* L_10 = ___2_filename;
		G_B8_0 = G_B7_0;
		if (!L_10)
		{
			G_B9_0 = G_B7_0;
			goto IL_003e;
		}
	}
	{
		String_t* L_11 = ___2_filename;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		G_B9_0 = G_B8_0;
		if (L_12)
		{
			G_B10_0 = G_B8_0;
			goto IL_0049;
		}
	}

IL_003e:
	{
		// throw new ArgumentException( "Parameter 'filename' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mAD9820FA0C518D117A499DC5D99BF99D240C4454_RuntimeMethod_var)));
	}

IL_0049:
	{
		// if( string.IsNullOrEmpty( Path.GetExtension( filename ) ) )
		String_t* L_14 = ___2_filename;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_14, NULL);
		bool L_16;
		L_16 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_15, NULL);
		G_B11_0 = G_B10_0;
		if (!L_16)
		{
			G_B12_0 = G_B10_0;
			goto IL_0060;
		}
	}
	{
		// Debug.LogWarning( "'filename' doesn't have an extension, this might result in unexpected behaviour!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7, NULL);
		G_B12_0 = G_B11_0;
	}

IL_0060:
	{
		// string path = GetTemporarySavePath( filename );
		String_t* L_17 = ___2_filename;
		String_t* L_18;
		L_18 = NativeGallery_GetTemporarySavePath_m2057630E0A0206CEEC5C908A37470E49A0D70E60(L_17, NULL);
		// File.WriteAllBytes( path, mediaBytes );
		String_t* L_19 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___0_mediaBytes;
		File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_19, L_20, NULL);
		// SaveToGalleryInternal( path, album, mediaType, callback );
		String_t* L_21 = ___1_album;
		int32_t L_22 = ___3_mediaType;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_23 = ___4_callback;
		NativeGallery_SaveToGalleryInternal_m7E98DD903D33ED3D5E3036C256CE09CC0422359E(L_19, L_21, L_22, L_23, NULL);
		G_B13_0 = G_B12_0;
	}

IL_0076:
	{
		// return result;
		return G_B13_0;
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240 (String_t* ___0_existingMediaPath, String_t* ___1_album, String_t* ___2_filename, int32_t ___3_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___4_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Write, mediaType );
		int32_t L_0 = ___3_mediaType;
		int32_t L_1;
		L_1 = NativeGallery_RequestPermission_mB2F20A17757755EB1B2C3F171DCD5944A4CF1706(1, L_0, NULL);
		// if( result == Permission.Granted )
		int32_t L_2 = L_1;
		G_B1_0 = L_2;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B14_0 = L_2;
			goto IL_009d;
		}
	}
	{
		// if( !File.Exists( existingMediaPath ) )
		String_t* L_3 = ___0_existingMediaPath;
		bool L_4;
		L_4 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_3, NULL);
		G_B2_0 = G_B1_0;
		if (L_4)
		{
			G_B3_0 = G_B1_0;
			goto IL_0027;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + existingMediaPath );
		String_t* L_5 = ___0_existingMediaPath;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_5, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_7 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240_RuntimeMethod_var)));
	}

IL_0027:
	{
		// if( album == null || album.Length == 0 )
		String_t* L_8 = ___1_album;
		G_B4_0 = G_B3_0;
		if (!L_8)
		{
			G_B5_0 = G_B3_0;
			goto IL_0032;
		}
	}
	{
		String_t* L_9 = ___1_album;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		G_B5_0 = G_B4_0;
		if (L_10)
		{
			G_B6_0 = G_B4_0;
			goto IL_003d;
		}
	}

IL_0032:
	{
		// throw new ArgumentException( "Parameter 'album' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240_RuntimeMethod_var)));
	}

IL_003d:
	{
		// if( filename == null || filename.Length == 0 )
		String_t* L_12 = ___2_filename;
		G_B7_0 = G_B6_0;
		if (!L_12)
		{
			G_B8_0 = G_B6_0;
			goto IL_0048;
		}
	}
	{
		String_t* L_13 = ___2_filename;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		G_B8_0 = G_B7_0;
		if (L_14)
		{
			G_B9_0 = G_B7_0;
			goto IL_0053;
		}
	}

IL_0048:
	{
		// throw new ArgumentException( "Parameter 'filename' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_mC512FADA8F0312FA131B768E103068CD34B83240_RuntimeMethod_var)));
	}

IL_0053:
	{
		// if( string.IsNullOrEmpty( Path.GetExtension( filename ) ) )
		String_t* L_16 = ___2_filename;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_16, NULL);
		bool L_18;
		L_18 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_17, NULL);
		G_B10_0 = G_B9_0;
		if (!L_18)
		{
			G_B13_0 = G_B9_0;
			goto IL_0084;
		}
	}
	{
		// string originalExtension = Path.GetExtension( existingMediaPath );
		String_t* L_19 = ___0_existingMediaPath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_20;
		L_20 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_19, NULL);
		V_1 = L_20;
		// if( string.IsNullOrEmpty( originalExtension ) )
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_21, NULL);
		G_B11_0 = G_B10_0;
		if (!L_22)
		{
			G_B12_0 = G_B10_0;
			goto IL_007b;
		}
	}
	{
		// Debug.LogWarning( "'filename' doesn't have an extension, this might result in unexpected behaviour!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7, NULL);
		G_B13_0 = G_B11_0;
		goto IL_0084;
	}

IL_007b:
	{
		// filename += originalExtension;
		String_t* L_23 = ___2_filename;
		String_t* L_24 = V_1;
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_23, L_24, NULL);
		___2_filename = L_25;
		G_B13_0 = G_B12_0;
	}

IL_0084:
	{
		// string path = GetTemporarySavePath( filename );
		String_t* L_26 = ___2_filename;
		String_t* L_27;
		L_27 = NativeGallery_GetTemporarySavePath_m2057630E0A0206CEEC5C908A37470E49A0D70E60(L_26, NULL);
		V_0 = L_27;
		// File.Copy( existingMediaPath, path, true );
		String_t* L_28 = ___0_existingMediaPath;
		String_t* L_29 = V_0;
		File_Copy_m3798F05909C43D7EA26130D51D0A15CFCBE7458A(L_28, L_29, (bool)1, NULL);
		// SaveToGalleryInternal( path, album, mediaType, callback );
		String_t* L_30 = V_0;
		String_t* L_31 = ___1_album;
		int32_t L_32 = ___3_mediaType;
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_33 = ___4_callback;
		NativeGallery_SaveToGalleryInternal_m7E98DD903D33ED3D5E3036C256CE09CC0422359E(L_30, L_31, L_32, L_33, NULL);
		G_B14_0 = G_B13_0;
	}

IL_009d:
	{
		// return result;
		return G_B14_0;
	}
}
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_m7E98DD903D33ED3D5E3036C256CE09CC0422359E (String_t* ___0_path, String_t* ___1_album, int32_t ___2_mediaType, MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* ___3_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98C4991DBD0370C554791D1BED854533606B6973);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string savePath = AJC.CallStatic<string>( "SaveMedia", Context, (int) mediaType, path, album );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___2_mediaType;
		int32_t L_6 = ((int32_t)L_5);
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		String_t* L_9 = ___0_path;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		String_t* L_11 = ___1_album;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		NullCheck(L_0);
		String_t* L_12;
		L_12 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteral98C4991DBD0370C554791D1BED854533606B6973, L_10, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_12;
		// File.Delete( path );
		String_t* L_13 = ___0_path;
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_13, NULL);
		// if( callback != null )
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_14 = ___3_callback;
		if (!L_14)
		{
			goto IL_0048;
		}
	}
	{
		// callback( !string.IsNullOrEmpty( savePath ), savePath );
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* L_15 = ___3_callback;
		String_t* L_16 = V_0;
		bool L_17;
		L_17 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_16, NULL);
		String_t* L_18 = V_0;
		NullCheck(L_15);
		MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline(L_15, (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0), L_18, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.String NativeGallery::GetTemporarySavePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_GetTemporarySavePath_m2057630E0A0206CEEC5C908A37470E49A0D70E60 (String_t* ___0_filename, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string saveDir = Path.Combine( Application.persistentDataPath, "NGallery" );
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, _stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF, NULL);
		// Directory.CreateDirectory( saveDir );
		String_t* L_2 = L_1;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_3;
		L_3 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_2, NULL);
		// return Path.Combine( saveDir, filename );
		String_t* L_4 = ___0_filename;
		String_t* L_5;
		L_5 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_2, L_4, NULL);
		return L_5;
	}
}
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_mE04A8BFF146401DA572B17485B97A88D11A509E1 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, int32_t ___1_mediaType, String_t* ___2_mime, String_t* ___3_title, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Read, mediaType );
		int32_t L_0 = ___1_mediaType;
		int32_t L_1;
		L_1 = NativeGallery_RequestPermission_mB2F20A17757755EB1B2C3F171DCD5944A4CF1706(0, L_0, NULL);
		V_0 = L_1;
		// if( result == Permission.Granted && !IsMediaPickerBusy() )
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_3;
		L_3 = NativeGallery_IsMediaPickerBusy_m08C8520C94ABF511EA6E7F48E63697CA7857BAAD(NULL);
		if (L_3)
		{
			goto IL_005c;
		}
	}
	{
		// AJC.CallStatic( "PickMedia", Context, new NGMediaReceiveCallbackAndroid( callback, null ), (int) mediaType, false, SelectedMediaPath, mime, title );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4;
		L_4 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_9 = ___0_callback;
		NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* L_10 = (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52*)il2cpp_codegen_object_new(NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		NGMediaReceiveCallbackAndroid__ctor_mDA59DF94D1E808D51945EFC7935434A3B2D00E61(L_10, L_9, (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B*)NULL, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		int32_t L_12 = ___1_mediaType;
		int32_t L_13 = ((int32_t)L_12);
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		bool L_16 = ((bool)0);
		RuntimeObject* L_17 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_15;
		String_t* L_19;
		L_19 = NativeGallery_get_SelectedMediaPath_mBB0C7C91D1B7ED7D8D2F457B86432E2D7AA7A19F(NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_18;
		String_t* L_21 = ___2_mime;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_20;
		String_t* L_23 = ___3_title;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_23);
		NullCheck(L_4);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_4, _stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36, L_22, NULL);
	}

IL_005c:
	{
		// return result;
		int32_t L_24 = V_0;
		return L_24;
	}
}
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_mA60A18D80705ACD41BBACC5DB898F2BA758DF35C (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___0_callback, int32_t ___1_mediaType, String_t* ___2_mime, String_t* ___3_title, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Read, mediaType );
		int32_t L_0 = ___1_mediaType;
		int32_t L_1;
		L_1 = NativeGallery_RequestPermission_mB2F20A17757755EB1B2C3F171DCD5944A4CF1706(0, L_0, NULL);
		V_0 = L_1;
		// if( result == Permission.Granted && !IsMediaPickerBusy() )
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		bool L_3;
		L_3 = NativeGallery_IsMediaPickerBusy_m08C8520C94ABF511EA6E7F48E63697CA7857BAAD(NULL);
		if (L_3)
		{
			goto IL_006f;
		}
	}
	{
		// if( CanSelectMultipleFilesFromGallery() )
		bool L_4;
		L_4 = NativeGallery_CanSelectMultipleFilesFromGallery_m8B64B58699A6EEB502428C3444FBFEE702E63997(NULL);
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		// AJC.CallStatic( "PickMedia", Context, new NGMediaReceiveCallbackAndroid( null, callback ), (int) mediaType, true, SelectedMediaPath, mime, title );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5;
		L_5 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_10 = ___0_callback;
		NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* L_11 = (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52*)il2cpp_codegen_object_new(NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		NGMediaReceiveCallbackAndroid__ctor_mDA59DF94D1E808D51945EFC7935434A3B2D00E61(L_11, (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*)NULL, L_10, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_9;
		int32_t L_13 = ___1_mediaType;
		int32_t L_14 = ((int32_t)L_13);
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		bool L_17 = ((bool)1);
		RuntimeObject* L_18 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_16;
		String_t* L_20;
		L_20 = NativeGallery_get_SelectedMediaPath_mBB0C7C91D1B7ED7D8D2F457B86432E2D7AA7A19F(NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		String_t* L_22 = ___2_mime;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		String_t* L_24 = ___3_title;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_24);
		NullCheck(L_5);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_5, _stringLiteral79107FD6C984A88C27C9EA8214F1DDC00A8F6C36, L_23, NULL);
		goto IL_006f;
	}

IL_0065:
	{
		// else if( callback != null )
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_25 = ___0_callback;
		if (!L_25)
		{
			goto IL_006f;
		}
	}
	{
		// callback( null );
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_26 = ___0_callback;
		NullCheck(L_26);
		MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline(L_26, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
	}

IL_006f:
	{
		// return result;
		int32_t L_27 = V_0;
		return L_27;
	}
}
// System.Byte[] NativeGallery::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeGallery_GetTextureBytes_mB475FDFD6E1FBEAA043E1190CC5B4172EE3536EF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, bool ___1_isJpeg, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			// return isJpeg ? texture.EncodeToJPG( 100 ) : texture.EncodeToPNG();
			bool L_0 = ___1_isJpeg;
			if (L_0)
			{
				goto IL_000b_1;
			}
		}
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___0_texture;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
			L_2 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_1, NULL);
			G_B3_0 = L_2;
			goto IL_0013_1;
		}

IL_000b_1:
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = ___0_texture;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
			L_4 = ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F(L_3, ((int32_t)100), NULL);
			G_B3_0 = L_4;
		}

IL_0013_1:
		{
			V_0 = G_B3_0;
			goto IL_002c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0021;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(UnityEngine.UnityException)
		// catch( UnityException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___0_texture;
		bool L_6 = ___1_isJpeg;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = NativeGallery_GetTextureBytesFromCopy_m23C31F7FB9D56BD6144EA7D15230E0718D84DED7(L_5, L_6, NULL);
		V_0 = L_7;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	}// end catch (depth: 1)

CATCH_0021:
	{// begin catch(System.ArgumentException)
		// catch( ArgumentException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___0_texture;
		bool L_9 = ___1_isJpeg;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = NativeGallery_GetTextureBytesFromCopy_m23C31F7FB9D56BD6144EA7D15230E0718D84DED7(L_8, L_9, NULL);
		V_0 = L_10;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	}// end catch (depth: 1)

IL_002c:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		return L_11;
	}
}
// System.Byte[] NativeGallery::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeGallery_GetTextureBytesFromCopy_m23C31F7FB9D56BD6144EA7D15230E0718D84DED7 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, bool ___1_isJpeg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B11_0 = NULL;
	{
		// Debug.LogWarning( "Saving non-readable textures is slower than saving readable textures" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9, NULL);
		// Texture2D sourceTexReadable = null;
		V_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		// RenderTexture rt = RenderTexture.GetTemporary( texture.width, texture.height );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_texture;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___0_texture;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
		L_4 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(L_1, L_3, NULL);
		V_1 = L_4;
		// RenderTexture activeRT = RenderTexture.active;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5;
		L_5 = RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7(NULL);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{// begin finally (depth: 1)
				// RenderTexture.active = activeRT;
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = V_2;
				RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_6, NULL);
				// RenderTexture.ReleaseTemporary( rt );
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = V_1;
				RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_7, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// Graphics.Blit( texture, rt );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___0_texture;
					RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = V_1;
					il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
					Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_8, L_9, NULL);
					// RenderTexture.active = rt;
					RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = V_1;
					RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_10, NULL);
					// sourceTexReadable = new Texture2D( texture.width, texture.height, isJpeg ? TextureFormat.RGB24 : TextureFormat.RGBA32, false );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = ___0_texture;
					NullCheck(L_11);
					int32_t L_12;
					L_12 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = ___0_texture;
					NullCheck(L_13);
					int32_t L_14;
					L_14 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
					bool L_15 = ___1_isJpeg;
					G_B2_0 = L_14;
					G_B2_1 = L_12;
					if (L_15)
					{
						G_B3_0 = L_14;
						G_B3_1 = L_12;
						goto IL_0043_2;
					}
				}
				{
					G_B4_0 = 4;
					G_B4_1 = G_B2_0;
					G_B4_2 = G_B2_1;
					goto IL_0044_2;
				}

IL_0043_2:
				{
					G_B4_0 = 3;
					G_B4_1 = G_B3_0;
					G_B4_2 = G_B3_1;
				}

IL_0044_2:
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
					NullCheck(L_16);
					Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_16, G_B4_2, G_B4_1, G_B4_0, (bool)0, NULL);
					V_0 = L_16;
					// sourceTexReadable.ReadPixels( new Rect( 0, 0, texture.width, texture.height ), 0, 0, false );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = V_0;
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ___0_texture;
					NullCheck(L_18);
					int32_t L_19;
					L_19 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = ___0_texture;
					NullCheck(L_20);
					int32_t L_21;
					L_21 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_20);
					Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
					memset((&L_22), 0, sizeof(L_22));
					Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_22), (0.0f), (0.0f), ((float)L_19), ((float)L_21), /*hidden argument*/NULL);
					NullCheck(L_17);
					Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C(L_17, L_22, 0, 0, (bool)0, NULL);
					// sourceTexReadable.Apply( false, false );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23 = V_0;
					NullCheck(L_23);
					Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_23, (bool)0, (bool)0, NULL);
					// }
					goto IL_0097;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_007b_1;
				}
				throw e;
			}

CATCH_007b_1:
			{// begin catch(System.Exception)
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// Object.DestroyImmediate( sourceTexReadable );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = V_0;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_24, NULL);
				// return null;
				V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00be;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b7:
			{// begin finally (depth: 1)
				// Object.DestroyImmediate( sourceTexReadable );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_25, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// return isJpeg ? sourceTexReadable.EncodeToJPG( 100 ) : sourceTexReadable.EncodeToPNG();
					bool L_26 = ___1_isJpeg;
					if (L_26)
					{
						goto IL_00a3_2;
					}
				}
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
					L_28 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_27, NULL);
					G_B11_0 = L_28;
					goto IL_00ab_2;
				}

IL_00a3_2:
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
					L_30 = ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F(L_29, ((int32_t)100), NULL);
					G_B11_0 = L_30;
				}

IL_00ab_2:
				{
					V_3 = G_B11_0;
					goto IL_00be;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00ae_1;
				}
				throw e;
			}

CATCH_00ae_1:
			{// begin catch(System.Exception)
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// return null;
				V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00be;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00be:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_3;
		return L_31;
	}
}
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE (String_t* ___0_imagePath, int32_t ___1_maxSize, bool ___2_markTextureNonReadable, bool ___3_generateMipmaps, bool ___4_linearColorSpace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B10_0 = 0;
	{
		// if( string.IsNullOrEmpty( imagePath ) )
		String_t* L_0 = ___0_imagePath;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'imagePath' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_3 = ___0_imagePath;
		bool L_4;
		L_4 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_3, NULL);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_5 = ___0_imagePath;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_5, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_7 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if( maxSize <= 0 )
		int32_t L_8 = ___1_maxSize;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_9;
		L_9 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		___1_maxSize = L_9;
	}

IL_0037:
	{
		// string loadPath = AJC.CallStatic<string>( "LoadImageAtPath", Context, imagePath, TemporaryImagePath, maxSize );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10;
		L_10 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13;
		L_13 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_12;
		String_t* L_15 = ___0_imagePath;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_14;
		String_t* L_17;
		L_17 = NativeGallery_get_TemporaryImagePath_m05418FC4CC85508CDAE30BEDCC344C85884E1BF8(NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_16;
		int32_t L_19 = ___1_maxSize;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_21);
		NullCheck(L_10);
		String_t* L_22;
		L_22 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_10, _stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D, L_18, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_22;
		// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_23 = ___0_imagePath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_23, NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_24, NULL);
		V_1 = L_25;
		// TextureFormat format = ( extension == ".jpg" || extension == ".jpeg" ) ? TextureFormat.RGB24 : TextureFormat.RGBA32;
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
		if (L_27)
		{
			goto IL_0093;
		}
	}
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
		if (L_29)
		{
			goto IL_0093;
		}
	}
	{
		G_B10_0 = 4;
		goto IL_0094;
	}

IL_0093:
	{
		G_B10_0 = 3;
	}

IL_0094:
	{
		V_2 = G_B10_0;
		// Texture2D result = new Texture2D( 2, 2, format, generateMipmaps, linearColorSpace );
		int32_t L_30 = V_2;
		bool L_31 = ___3_generateMipmaps;
		bool L_32 = ___4_linearColorSpace;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_33, 2, 2, L_30, L_31, L_32, NULL);
		V_3 = L_33;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00dd:
			{// begin finally (depth: 1)
				{
					// if( loadPath != imagePath )
					String_t* L_34 = V_0;
					String_t* L_35 = ___0_imagePath;
					bool L_36;
					L_36 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_34, L_35, NULL);
					if (!L_36)
					{
						goto IL_00f1;
					}
				}
				try
				{// begin try (depth: 2)
					// File.Delete( loadPath );
					String_t* L_37 = V_0;
					File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_37, NULL);
					// }
					goto IL_00f1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_00ee;
					}
					throw e;
				}

CATCH_00ee:
				{// begin catch(System.Object)
					// catch { }
					// catch { }
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00f1;
				}// end catch (depth: 2)

IL_00f1:
				{
					// }
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// if( !result.LoadImage( File.ReadAllBytes( loadPath ), markTextureNonReadable ) )
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_38 = V_3;
					String_t* L_39 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
					L_40 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_39, NULL);
					bool L_41 = ___2_markTextureNonReadable;
					bool L_42;
					L_42 = ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF(L_38, L_40, L_41, NULL);
					if (L_42)
					{
						goto IL_00cb_2;
					}
				}
				{
					// Debug.LogWarning( "Couldn't load image at path: " + loadPath );
					String_t* L_43 = V_0;
					String_t* L_44;
					L_44 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4, L_43, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_44, NULL);
					// Object.DestroyImmediate( result );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_45 = V_3;
					il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
					Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_45, NULL);
					// return null;
					V_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
					goto IL_00f4;
				}

IL_00cb_2:
				{
					// }
					goto IL_00f2;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00cd_1;
				}
				throw e;
			}

CATCH_00cd_1:
			{// begin catch(System.Exception)
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// Object.DestroyImmediate( result );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_46 = V_3;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_46, NULL);
				// return null;
				V_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00f4;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f2:
	{
		// return result;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_47 = V_3;
		return L_47;
	}

IL_00f4:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_48 = V_4;
		return L_48;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D> NativeGallery::LoadImageAtPathAsync(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t95921EB64E237ACD28589D64B693C652268F225E* NativeGallery_LoadImageAtPathAsync_m3C74F160A60055587A069839F0228D2B275CEBA0 (String_t* ___0_imagePath, int32_t ___1_maxSize, bool ___2_markTextureNonReadable, bool ___3_generateMipmaps, bool ___4_linearColorSpace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_m0317DCFD1691CDB68B4539DEDEDBE1BB19C87685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4(AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		String_t* L_1 = ___0_imagePath;
		(&V_0)->___imagePath_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___imagePath_2), (void*)L_1);
		int32_t L_2 = ___1_maxSize;
		(&V_0)->___maxSize_3 = L_2;
		bool L_3 = ___2_markTextureNonReadable;
		(&V_0)->___markTextureNonReadable_5 = L_3;
		bool L_4 = ___3_generateMipmaps;
		(&V_0)->___generateMipmaps_6 = L_4;
		bool L_5 = ___4_linearColorSpace;
		(&V_0)->___linearColorSpace_4 = L_5;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_m0317DCFD1691CDB68B4539DEDEDBE1BB19C87685(L_6, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_m0317DCFD1691CDB68B4539DEDEDBE1BB19C87685_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_7 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t95921EB64E237ACD28589D64B693C652268F225E* L_8;
		L_8 = AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E(L_7, AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var);
		return L_8;
	}
}
// UnityEngine.Texture2D NativeGallery::GetVideoThumbnail(System.String,System.Int32,System.Double,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeGallery_GetVideoThumbnail_m6D508C9C4809F558BAB746AC8F307AEEB4BDC499 (String_t* ___0_videoPath, int32_t ___1_maxSize, double ___2_captureTimeInSeconds, bool ___3_markTextureNonReadable, bool ___4_generateMipmaps, bool ___5_linearColorSpace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D67C2D23D0E67BA40CD70B037A9F218807BB46F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if( maxSize <= 0 )
		int32_t L_0 = ___1_maxSize;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_1;
		L_1 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		___1_maxSize = L_1;
	}

IL_000b:
	{
		// string thumbnailPath = AJC.CallStatic<string>( "GetVideoThumbnail", Context, videoPath, TemporaryImagePath + ".png", false, maxSize, captureTimeInSeconds );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2;
		L_2 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___0_videoPath;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		String_t* L_9;
		L_9 = NativeGallery_get_TemporaryImagePath_m05418FC4CC85508CDAE30BEDCC344C85884E1BF8(NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		bool L_12 = ((bool)0);
		RuntimeObject* L_13 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_11;
		int32_t L_15 = ___1_maxSize;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_14;
		double L_19 = ___2_captureTimeInSeconds;
		double L_20 = L_19;
		RuntimeObject* L_21 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_21);
		NullCheck(L_2);
		String_t* L_22;
		L_22 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_2, _stringLiteral5D67C2D23D0E67BA40CD70B037A9F218807BB46F, L_18, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_22;
		// if( !string.IsNullOrEmpty( thumbnailPath ) )
		String_t* L_23 = V_0;
		bool L_24;
		L_24 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_23, NULL);
		if (L_24)
		{
			goto IL_006f;
		}
	}
	{
		// return LoadImageAtPath( thumbnailPath, maxSize, markTextureNonReadable, generateMipmaps, linearColorSpace );
		String_t* L_25 = V_0;
		int32_t L_26 = ___1_maxSize;
		bool L_27 = ___3_markTextureNonReadable;
		bool L_28 = ___4_generateMipmaps;
		bool L_29 = ___5_linearColorSpace;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30;
		L_30 = NativeGallery_LoadImageAtPath_m62187A34B7B063FBEFFD7E200DEC2332313A56AE(L_25, L_26, L_27, L_28, L_29, NULL);
		return L_30;
	}

IL_006f:
	{
		// return null;
		return (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D> NativeGallery::GetVideoThumbnailAsync(System.String,System.Int32,System.Double,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t95921EB64E237ACD28589D64B693C652268F225E* NativeGallery_GetVideoThumbnailAsync_mAF9922FDCA74E6C3BDBB19E4CE1793869EDA8D6A (String_t* ___0_videoPath, int32_t ___1_maxSize, double ___2_captureTimeInSeconds, bool ___3_markTextureNonReadable, bool ___4_generateMipmaps, bool ___5_linearColorSpace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_mC4C3CDA36FC1EA790DC014119EB8F14BC851918A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4(AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		String_t* L_1 = ___0_videoPath;
		(&V_0)->___videoPath_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___videoPath_2), (void*)L_1);
		int32_t L_2 = ___1_maxSize;
		(&V_0)->___maxSize_3 = L_2;
		double L_3 = ___2_captureTimeInSeconds;
		(&V_0)->___captureTimeInSeconds_4 = L_3;
		bool L_4 = ___3_markTextureNonReadable;
		(&V_0)->___markTextureNonReadable_6 = L_4;
		bool L_5 = ___4_generateMipmaps;
		(&V_0)->___generateMipmaps_7 = L_5;
		bool L_6 = ___5_linearColorSpace;
		(&V_0)->___linearColorSpace_8 = L_6;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_7 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_mC4C3CDA36FC1EA790DC014119EB8F14BC851918A(L_7, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_mC4C3CDA36FC1EA790DC014119EB8F14BC851918A_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_8 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t95921EB64E237ACD28589D64B693C652268F225E* L_9;
		L_9 = AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E(L_8, AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var);
		return L_9;
	}
}
// NativeGallery/ImageProperties NativeGallery::GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59 NativeGallery_GetImageProperties_mD9D7562C327369A4FEE99EF08D2A0F6A1BEE0376 (String_t* ___0_imagePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3A21FB44DD18299A19A0B86BA27CEB4EDA6A941);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_0 = ___0_imagePath;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_2 = ___0_imagePath;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_2, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_4 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_GetImageProperties_mD9D7562C327369A4FEE99EF08D2A0F6A1BEE0376_RuntimeMethod_var)));
	}

IL_0019:
	{
		// string value = AJC.CallStatic<string>( "GetImageProperties", Context, imagePath );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5;
		L_5 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		String_t* L_10 = ___0_imagePath;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		NullCheck(L_5);
		String_t* L_11;
		L_11 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_5, _stringLiteralA3A21FB44DD18299A19A0B86BA27CEB4EDA6A941, L_9, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_11;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// string mimeType = null;
		V_3 = (String_t*)NULL;
		// ImageOrientation orientation = ImageOrientation.Unknown;
		V_4 = (-1);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_12, NULL);
		if (L_13)
		{
			goto IL_0130;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_14 = V_0;
		NullCheck(L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_14, ((int32_t)62), 0, NULL);
		V_5 = L_15;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_5;
		if (!L_16)
		{
			goto IL_0130;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_5;
		NullCheck(L_17);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))) < ((int32_t)4)))
		{
			goto IL_0130;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_5;
		NullCheck(L_18);
		int32_t L_19 = 0;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_20, NULL);
		bool L_22;
		L_22 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_21, (&V_1), NULL);
		if (L_22)
		{
			goto IL_007f;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_007f:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_25, NULL);
		bool L_27;
		L_27 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_26, (&V_2), NULL);
		if (L_27)
		{
			goto IL_0093;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_0093:
	{
		// mimeType = properties[2].Trim();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_5;
		NullCheck(L_28);
		int32_t L_29 = 2;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		String_t* L_31;
		L_31 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_30, NULL);
		V_3 = L_31;
		// if( mimeType.Length == 0 )
		String_t* L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_32, NULL);
		if (L_33)
		{
			goto IL_011a;
		}
	}
	{
		// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_34 = ___0_imagePath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_35;
		L_35 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_34, NULL);
		NullCheck(L_35);
		String_t* L_36;
		L_36 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_35, NULL);
		V_7 = L_36;
		// if( extension == ".png" )
		String_t* L_37 = V_7;
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		if (!L_38)
		{
			goto IL_00c8;
		}
	}
	{
		// mimeType = "image/png";
		V_3 = _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		goto IL_011a;
	}

IL_00c8:
	{
		// else if( extension == ".jpg" || extension == ".jpeg" )
		String_t* L_39 = V_7;
		bool L_40;
		L_40 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_39, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
		if (L_40)
		{
			goto IL_00e4;
		}
	}
	{
		String_t* L_41 = V_7;
		bool L_42;
		L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
		if (!L_42)
		{
			goto IL_00ec;
		}
	}

IL_00e4:
	{
		// mimeType = "image/jpeg";
		V_3 = _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
		goto IL_011a;
	}

IL_00ec:
	{
		// else if( extension == ".gif" )
		String_t* L_43 = V_7;
		bool L_44;
		L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D, NULL);
		if (!L_44)
		{
			goto IL_0102;
		}
	}
	{
		// mimeType = "image/gif";
		V_3 = _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
		goto IL_011a;
	}

IL_0102:
	{
		// else if( extension == ".bmp" )
		String_t* L_45 = V_7;
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C, NULL);
		if (!L_46)
		{
			goto IL_0118;
		}
	}
	{
		// mimeType = "image/bmp";
		V_3 = _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
		goto IL_011a;
	}

IL_0118:
	{
		// mimeType = null;
		V_3 = (String_t*)NULL;
	}

IL_011a:
	{
		// if( int.TryParse( properties[3].Trim(), out orientationInt ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = V_5;
		NullCheck(L_47);
		int32_t L_48 = 3;
		String_t* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		String_t* L_50;
		L_50 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_49, NULL);
		bool L_51;
		L_51 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_50, (&V_6), NULL);
		if (!L_51)
		{
			goto IL_0130;
		}
	}
	{
		// orientation = (ImageOrientation) orientationInt;
		int32_t L_52 = V_6;
		V_4 = L_52;
	}

IL_0130:
	{
		// return new ImageProperties( width, height, mimeType, orientation );
		int32_t L_53 = V_1;
		int32_t L_54 = V_2;
		String_t* L_55 = V_3;
		int32_t L_56 = V_4;
		ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59 L_57;
		memset((&L_57), 0, sizeof(L_57));
		ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3((&L_57), L_53, L_54, L_55, L_56, /*hidden argument*/NULL);
		return L_57;
	}
}
// NativeGallery/VideoProperties NativeGallery::GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5 NativeGallery_GetVideoProperties_mE39CF69BF80843823CDC1B153B29B38413804E95 (String_t* ___0_videoPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF811A8F3778A439E75478C3728BE25A7853EAF83);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	float V_4 = 0.0f;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	{
		// if( !File.Exists( videoPath ) )
		String_t* L_0 = ___0_videoPath;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + videoPath );
		String_t* L_2 = ___0_videoPath;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_2, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_4 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_GetVideoProperties_mE39CF69BF80843823CDC1B153B29B38413804E95_RuntimeMethod_var)));
	}

IL_0019:
	{
		// string value = AJC.CallStatic<string>( "GetVideoProperties", Context, videoPath );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5;
		L_5 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		String_t* L_10 = ___0_videoPath;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		NullCheck(L_5);
		String_t* L_11;
		L_11 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_5, _stringLiteralF811A8F3778A439E75478C3728BE25A7853EAF83, L_9, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_11;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// long duration = 0L;
		V_3 = ((int64_t)0);
		// float rotation = 0f;
		V_4 = (0.0f);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_12, NULL);
		if (L_13)
		{
			goto IL_00d0;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_14 = V_0;
		NullCheck(L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_14, ((int32_t)62), 0, NULL);
		V_5 = L_15;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_5;
		if (!L_16)
		{
			goto IL_00d0;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_5;
		NullCheck(L_17);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))) < ((int32_t)4)))
		{
			goto IL_00d0;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_5;
		NullCheck(L_18);
		int32_t L_19 = 0;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_20, NULL);
		bool L_22;
		L_22 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_21, (&V_1), NULL);
		if (L_22)
		{
			goto IL_007b;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_007b:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_25, NULL);
		bool L_27;
		L_27 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_26, (&V_2), NULL);
		if (L_27)
		{
			goto IL_008f;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_008f:
	{
		// if( !long.TryParse( properties[2].Trim(), out duration ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_5;
		NullCheck(L_28);
		int32_t L_29 = 2;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		String_t* L_31;
		L_31 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_30, NULL);
		bool L_32;
		L_32 = Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2(L_31, (&V_3), NULL);
		if (L_32)
		{
			goto IL_00a4;
		}
	}
	{
		// duration = 0L;
		V_3 = ((int64_t)0);
	}

IL_00a4:
	{
		// if( !float.TryParse( properties[3].Trim().Replace( ',', '.' ), NumberStyles.Float, CultureInfo.InvariantCulture, out rotation ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_5;
		NullCheck(L_33);
		int32_t L_34 = 3;
		String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		String_t* L_36;
		L_36 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_35, NULL);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_36, ((int32_t)44), ((int32_t)46), NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_38;
		L_38 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_39;
		L_39 = Single_TryParse_mFB8CC32F0016FBB6EFCB97953CF3515767EB6431(L_37, ((int32_t)167), L_38, (&V_4), NULL);
		if (L_39)
		{
			goto IL_00d0;
		}
	}
	{
		// rotation = 0f;
		V_4 = (0.0f);
	}

IL_00d0:
	{
		// if( rotation == -90f )
		float L_40 = V_4;
		if ((!(((float)L_40) == ((float)(-90.0f)))))
		{
			goto IL_00e0;
		}
	}
	{
		// rotation = 270f;
		V_4 = (270.0f);
	}

IL_00e0:
	{
		// return new VideoProperties( width, height, duration, rotation );
		int32_t L_41 = V_1;
		int32_t L_42 = V_2;
		int64_t L_43 = V_3;
		float L_44 = V_4;
		VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5 L_45;
		memset((&L_45), 0, sizeof(L_45));
		VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD((&L_45), L_41, L_42, L_43, L_44, /*hidden argument*/NULL);
		return L_45;
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
// Conversion methods for marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_pinvoke(const ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59& unmarshaled, ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_pinvoke& marshaled)
{
	marshaled.___width_0 = unmarshaled.___width_0;
	marshaled.___height_1 = unmarshaled.___height_1;
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_string(unmarshaled.___mimeType_2);
	marshaled.___orientation_3 = unmarshaled.___orientation_3;
}
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_pinvoke_back(const ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_pinvoke& marshaled, ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59& unmarshaled)
{
	int32_t unmarshaledwidth_temp_0 = 0;
	unmarshaledwidth_temp_0 = marshaled.___width_0;
	unmarshaled.___width_0 = unmarshaledwidth_temp_0;
	int32_t unmarshaledheight_temp_1 = 0;
	unmarshaledheight_temp_1 = marshaled.___height_1;
	unmarshaled.___height_1 = unmarshaledheight_temp_1;
	unmarshaled.___mimeType_2 = il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mimeType_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2));
	int32_t unmarshaledorientation_temp_3 = 0;
	unmarshaledorientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.___orientation_3 = unmarshaledorientation_temp_3;
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_pinvoke_cleanup(ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// Conversion methods for marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_com(const ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59& unmarshaled, ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_com& marshaled)
{
	marshaled.___width_0 = unmarshaled.___width_0;
	marshaled.___height_1 = unmarshaled.___height_1;
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___mimeType_2);
	marshaled.___orientation_3 = unmarshaled.___orientation_3;
}
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_com_back(const ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_com& marshaled, ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59& unmarshaled)
{
	int32_t unmarshaledwidth_temp_0 = 0;
	unmarshaledwidth_temp_0 = marshaled.___width_0;
	unmarshaled.___width_0 = unmarshaledwidth_temp_0;
	int32_t unmarshaledheight_temp_1 = 0;
	unmarshaledheight_temp_1 = marshaled.___height_1;
	unmarshaled.___height_1 = unmarshaledheight_temp_1;
	unmarshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mimeType_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2));
	int32_t unmarshaledorientation_temp_3 = 0;
	unmarshaledorientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.___orientation_3 = unmarshaledorientation_temp_3;
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshal_com_cleanup(ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3 (ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59* __this, int32_t ___0_width, int32_t ___1_height, String_t* ___2_mimeType, int32_t ___3_orientation, const RuntimeMethod* method) 
{
	{
		// this.width = width;
		int32_t L_0 = ___0_width;
		__this->___width_0 = L_0;
		// this.height = height;
		int32_t L_1 = ___1_height;
		__this->___height_1 = L_1;
		// this.mimeType = mimeType;
		String_t* L_2 = ___2_mimeType;
		__this->___mimeType_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mimeType_2), (void*)L_2);
		// this.orientation = orientation;
		int32_t L_3 = ___3_orientation;
		__this->___orientation_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3_AdjustorThunk (RuntimeObject* __this, int32_t ___0_width, int32_t ___1_height, String_t* ___2_mimeType, int32_t ___3_orientation, const RuntimeMethod* method)
{
	ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ImageProperties_t7C971D51A4992A01CD205754169B919B56696F59*>(__this + _offset);
	ImageProperties__ctor_m544A791184FB701B39531F6E5CB3C023856797E3(_thisAdjusted, ___0_width, ___1_height, ___2_mimeType, ___3_orientation, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD (VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5* __this, int32_t ___0_width, int32_t ___1_height, int64_t ___2_duration, float ___3_rotation, const RuntimeMethod* method) 
{
	{
		// this.width = width;
		int32_t L_0 = ___0_width;
		__this->___width_0 = L_0;
		// this.height = height;
		int32_t L_1 = ___1_height;
		__this->___height_1 = L_1;
		// this.duration = duration;
		int64_t L_2 = ___2_duration;
		__this->___duration_2 = L_2;
		// this.rotation = rotation;
		float L_3 = ___3_rotation;
		__this->___rotation_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD_AdjustorThunk (RuntimeObject* __this, int32_t ___0_width, int32_t ___1_height, int64_t ___2_duration, float ___3_rotation, const RuntimeMethod* method)
{
	VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VideoProperties_t11DD7C4EACACE50EA3D710F3E2595A68B17103A5*>(__this + _offset);
	VideoProperties__ctor_mF5D60E1ACB2B90A080BDB94C6362E49F835B2BFD(_thisAdjusted, ___0_width, ___1_height, ___2_duration, ___3_rotation, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_Multicast(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* currentDelegate = reinterpret_cast<MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_success, ___1_path, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenInst(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_success, ___1_path, method);
}
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenStatic(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_success, ___1_path, method);
}
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenStaticInvoker(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	InvokerActionInvoker2< bool, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_success, ___1_path);
}
void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_ClosedStaticInvoker(MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, bool, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_success, ___1_path);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_path' to native representation
	char* ____1_path_marshaled = NULL;
	____1_path_marshaled = il2cpp_codegen_marshal_string(___1_path);

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___0_success), ____1_path_marshaled);

	// Marshaling cleanup of parameter '___1_path' native representation
	il2cpp_codegen_marshal_free(____1_path_marshaled);
	____1_path_marshaled = NULL;

}
// System.Void NativeGallery/MediaSaveCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback__ctor_mC807D0DC716FCEACAB7FC85AD2916F702D92E5EF (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_Multicast;
}
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_success, ___1_path, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeGallery/MediaSaveCallback::BeginInvoke(System.Boolean,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaSaveCallback_BeginInvoke_m43DF1543431C55DFD9BCFF30017FA4F4FC2BEB72 (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___0_success);
	__d_args[1] = ___1_path;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void NativeGallery/MediaSaveCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_EndInvoke_mE988BF2B3A6EBA13C068BF8BAAFF8B9C2E4298BE (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_Multicast(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* currentDelegate = reinterpret_cast<MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_path, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenInst(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	NullCheck(___0_path);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_path, method);
}
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenStatic(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_path, method);
}
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenStaticInvoker(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_path);
}
void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_ClosedStaticInvoker(MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_path);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Native function invocation
	il2cppPInvokeFunc(____0_path_marshaled);

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

}
// System.Void NativeGallery/MediaPickCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback__ctor_m6772B2B8FB0ED8FC367118012A390E247874EA4D (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_Multicast;
}
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_path, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeGallery/MediaPickCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaPickCallback_BeginInvoke_m722D25075399F4136F7A72DEB486B16E6979F072 (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_path;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeGallery/MediaPickCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_EndInvoke_m789929E1A570D84F6AE2F20FB722F42CC027E97D (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_Multicast(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* currentDelegate = reinterpret_cast<MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_paths, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenInst(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	NullCheck(___0_paths);
	typedef void (*FunctionPointerType) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_paths, method);
}
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenStatic(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_paths, method);
}
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenStaticInvoker(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	InvokerActionInvoker1< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_paths);
}
void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_ClosedStaticInvoker(MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_paths);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char**);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_paths' to native representation
	char** ____0_paths_marshaled = NULL;
	if (___0_paths != NULL)
	{
		il2cpp_array_size_t ____0_paths_Length = (___0_paths)->max_length;
		____0_paths_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____0_paths_Length + 1);
		(____0_paths_marshaled)[____0_paths_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____0_paths_Length); i++)
		{
			(____0_paths_marshaled)[i] = il2cpp_codegen_marshal_string((___0_paths)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____0_paths_marshaled = NULL;
	}

	// Native function invocation
	il2cppPInvokeFunc(____0_paths_marshaled);

	// Marshaling cleanup of parameter '___0_paths' native representation
	if (____0_paths_marshaled != NULL)
	{
		const il2cpp_array_size_t ____0_paths_marshaled_CleanupLoopCount = (___0_paths != NULL) ? (___0_paths)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____0_paths_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____0_paths_marshaled)[i]);
			(____0_paths_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____0_paths_marshaled);
		____0_paths_marshaled = NULL;
	}

}
// System.Void NativeGallery/MediaPickMultipleCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback__ctor_m51B26CBD435D26A6CC44DFA51D2C58D74D6F1CE9 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_Multicast;
}
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_paths, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeGallery/MediaPickMultipleCallback::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaPickMultipleCallback_BeginInvoke_m6321A0529E97A8616F70F36CC82830AD8B1A38C9 (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_paths;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeGallery/MediaPickMultipleCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_EndInvoke_m52B699AF968CA46D70F40ED0B433D9FE577753EF (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGallery/<>c__DisplayClass56_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass56_0__ctor_m3BF386E4C1683C7BE72320555EFB81C690DB1E2F (U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String NativeGallery/<>c__DisplayClass56_0::<LoadImageAtPathAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass56_0_U3CLoadImageAtPathAsyncU3Eb__0_mB8A2E535E00FCFEB2B71356D3811A3C103512ABF (U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string loadPath = await TryCallNativeAndroidFunctionOnSeparateThread( () => AJC.CallStatic<string>( "LoadImageAtPath", Context, imagePath, temporaryImagePath, maxSize ) );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = __this->___imagePath_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = __this->___temporaryImagePath_1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		int32_t L_9 = __this->___maxSize_2;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		NullCheck(L_0);
		String_t* L_12;
		L_12 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteralDD146CE30524569A8784D1FFE34EA505C910727D, L_8, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_12;
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
// System.Void NativeGallery/<LoadImageAtPathAsync>d__56::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageAtPathAsyncU3Ed__56_MoveNext_m268BC22CE7C8B68270C61E8B270C419689030B02 (U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_mD70B97106F5EBCAC671ACB1B08B83DEB4081F9C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_m9D85B2A13EEC0A5B764D2AB401D9AB4588D4FF4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisString_t_m9E7C8D767B9CC9AB0DC7022AA55938E0A70AEE42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass56_0_U3CLoadImageAtPathAsyncU3Eb__0_mB8A2E535E00FCFEB2B71356D3811A3C103512ABF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3287997374A5B6321B447152239EBE224279EB6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_4;
	memset((&V_4), 0, sizeof(V_4));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_5;
	memset((&V_5), 0, sizeof(V_5));
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_6 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_7 = NULL;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_8;
	memset((&V_8), 0, sizeof(V_8));
	String_t* V_9 = NULL;
	int32_t V_10 = 0;
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	String_t* G_B15_0 = NULL;
	U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21* G_B15_1 = NULL;
	String_t* G_B14_0 = NULL;
	U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21* G_B14_1 = NULL;
	int32_t G_B16_0 = 0;
	String_t* G_B16_1 = NULL;
	U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21* G_B16_2 = NULL;
	int32_t G_B49_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0101_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_016d_1;
			}
		}
		{
			U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3* L_3 = (U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			U3CU3Ec__DisplayClass56_0__ctor_m3BF386E4C1683C7BE72320555EFB81C690DB1E2F(L_3, NULL);
			__this->___U3CU3E8__1_7 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_7), (void*)L_3);
			U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3* L_4 = __this->___U3CU3E8__1_7;
			String_t* L_5 = __this->___imagePath_2;
			NullCheck(L_4);
			L_4->___imagePath_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&L_4->___imagePath_0), (void*)L_5);
			U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3* L_6 = __this->___U3CU3E8__1_7;
			int32_t L_7 = __this->___maxSize_3;
			NullCheck(L_6);
			L_6->___maxSize_2 = L_7;
			// if( string.IsNullOrEmpty( imagePath ) )
			U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3* L_8 = __this->___U3CU3E8__1_7;
			NullCheck(L_8);
			String_t* L_9 = L_8->___imagePath_0;
			bool L_10;
			L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
			if (!L_10)
			{
				goto IL_005e_1;
			}
		}
		{
			// throw new ArgumentException( "Parameter 'imagePath' is null or empty!" );
			ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
			NullCheck(L_11);
			ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadImageAtPathAsyncU3Ed__56_MoveNext_m268BC22CE7C8B68270C61E8B270C419689030B02_RuntimeMethod_var)));
		}

IL_005e_1:
		{
			// if( !File.Exists( imagePath ) )
			U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3* L_12 = __this->___U3CU3E8__1_7;
			NullCheck(L_12);
			String_t* L_13 = L_12->___imagePath_0;
			bool L_14;
			L_14 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_13, NULL);
			if (L_14)
			{
				goto IL_008b_1;
			}
		}
		{
			// throw new FileNotFoundException( "File not found at " + imagePath );
			U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3* L_15 = __this->___U3CU3E8__1_7;
			NullCheck(L_15);
			String_t* L_16 = L_15->___imagePath_0;
			String_t* L_17;
			L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_16, NULL);
			FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_18 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
			NullCheck(L_18);
			FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_18, L_17, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadImageAtPathAsyncU3Ed__56_MoveNext_m268BC22CE7C8B68270C61E8B270C419689030B02_RuntimeMethod_var)));
		}

IL_008b_1:
		{
			// if( maxSize <= 0 )
			U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3* L_19 = __this->___U3CU3E8__1_7;
			NullCheck(L_19);
			int32_t L_20 = L_19->___maxSize_2;
			if ((((int32_t)L_20) > ((int32_t)0)))
			{
				goto IL_00a9_1;
			}
		}
		{
			// maxSize = SystemInfo.maxTextureSize;
			U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3* L_21 = __this->___U3CU3E8__1_7;
			int32_t L_22;
			L_22 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
			NullCheck(L_21);
			L_21->___maxSize_2 = L_22;
		}

IL_00a9_1:
		{
			// string temporaryImagePath = TemporaryImagePath; // Must be accessed from main thread
			U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3* L_23 = __this->___U3CU3E8__1_7;
			String_t* L_24;
			L_24 = NativeGallery_get_TemporaryImagePath_m05418FC4CC85508CDAE30BEDCC344C85884E1BF8(NULL);
			NullCheck(L_23);
			L_23->___temporaryImagePath_1 = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&L_23->___temporaryImagePath_1), (void*)L_24);
			// string loadPath = await TryCallNativeAndroidFunctionOnSeparateThread( () => AJC.CallStatic<string>( "LoadImageAtPath", Context, imagePath, temporaryImagePath, maxSize ) );
			U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3* L_25 = __this->___U3CU3E8__1_7;
			Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_26 = (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*)il2cpp_codegen_object_new(Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
			NullCheck(L_26);
			Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass56_0_U3CLoadImageAtPathAsyncU3Eb__0_mB8A2E535E00FCFEB2B71356D3811A3C103512ABF_RuntimeMethod_var), NULL);
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_27;
			L_27 = NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisString_t_m9E7C8D767B9CC9AB0DC7022AA55938E0A70AEE42(L_26, NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisString_t_m9E7C8D767B9CC9AB0DC7022AA55938E0A70AEE42_RuntimeMethod_var);
			NullCheck(L_27);
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_28;
			L_28 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_27, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
			V_3 = L_28;
			bool L_29;
			L_29 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_3), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_011d_1;
			}
		}
		{
			int32_t L_30 = 0;
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_31 = V_3;
			__this->___U3CU3Eu__1_10 = L_31;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_10))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_32 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_mD70B97106F5EBCAC671ACB1B08B83DEB4081F9C5(L_32, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_mD70B97106F5EBCAC671ACB1B08B83DEB4081F9C5_RuntimeMethod_var);
			goto IL_0423;
		}

IL_0101_1:
		{
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_33 = __this->___U3CU3Eu__1_10;
			V_3 = L_33;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_34 = (&__this->___U3CU3Eu__1_10);
			il2cpp_codegen_initobj(L_34, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
		}

IL_011d_1:
		{
			String_t* L_36;
			L_36 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_3), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
			V_2 = L_36;
			String_t* L_37 = V_2;
			__this->___U3CloadPathU3E5__2_8 = L_37;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloadPathU3E5__2_8), (void*)L_37);
			// Texture2D result = null;
			__this->___U3CresultU3E5__3_9 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_9), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
			// if( !linearColorSpace )
			bool L_38 = __this->___linearColorSpace_4;
			if (L_38)
			{
				goto IL_02d8_1;
			}
		}
		{
			// using( UnityWebRequest www = UnityWebRequestTexture.GetTexture( "file://" + loadPath, markTextureNonReadable && !generateMipmaps ) )
			String_t* L_39 = __this->___U3CloadPathU3E5__2_8;
			String_t* L_40;
			L_40 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_39, NULL);
			bool L_41 = __this->___markTextureNonReadable_5;
			G_B14_0 = L_40;
			G_B14_1 = __this;
			if (!L_41)
			{
				G_B15_0 = L_40;
				G_B15_1 = __this;
				goto IL_0162_1;
			}
		}
		{
			bool L_42 = __this->___generateMipmaps_6;
			G_B16_0 = ((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
			G_B16_1 = G_B14_0;
			G_B16_2 = G_B14_1;
			goto IL_0163_1;
		}

IL_0162_1:
		{
			G_B16_0 = 0;
			G_B16_1 = G_B15_0;
			G_B16_2 = G_B15_1;
		}

IL_0163_1:
		{
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_43;
			L_43 = UnityWebRequestTexture_GetTexture_m45F855106C834021AC0DFA25FE31BA14C42693CA(G_B16_1, (bool)G_B16_0, NULL);
			G_B16_2->___U3CwwwU3E5__4_11 = L_43;
			Il2CppCodeGenWriteBarrier((void**)(&G_B16_2->___U3CwwwU3E5__4_11), (void*)L_43);
		}

IL_016d_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_02b9_1:
				{// begin finally (depth: 2)
					{
						int32_t L_44 = V_0;
						if ((((int32_t)L_44) >= ((int32_t)0)))
						{
							goto IL_02d0_1;
						}
					}
					{
						UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_45 = __this->___U3CwwwU3E5__4_11;
						if (!L_45)
						{
							goto IL_02d0_1;
						}
					}
					{
						UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_46 = __this->___U3CwwwU3E5__4_11;
						NullCheck(L_46);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_46);
					}

IL_02d0_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_47 = V_0;
					if ((((int32_t)L_47) == ((int32_t)1)))
					{
						goto IL_01c2_2;
					}
				}
				{
					// UnityWebRequestAsyncOperation asyncOperation = www.SendWebRequest();
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_48 = __this->___U3CwwwU3E5__4_11;
					NullCheck(L_48);
					UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_49;
					L_49 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_48, NULL);
					__this->___U3CasyncOperationU3E5__5_12 = L_49;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncOperationU3E5__5_12), (void*)L_49);
					goto IL_01e6_2;
				}

IL_0185_2:
				{
					// await Task.Yield();
					il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
					YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_50;
					L_50 = Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1(NULL);
					V_5 = L_50;
					YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_51;
					L_51 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_5), NULL);
					V_4 = L_51;
					bool L_52;
					L_52 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_4), NULL);
					if (L_52)
					{
						goto IL_01df_2;
					}
				}
				{
					int32_t L_53 = 1;
					V_0 = L_53;
					__this->___U3CU3E1__state_0 = L_53;
					YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_54 = V_4;
					__this->___U3CU3Eu__2_13 = L_54;
					AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_55 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_m9D85B2A13EEC0A5B764D2AB401D9AB4588D4FF4B(L_55, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21_m9D85B2A13EEC0A5B764D2AB401D9AB4588D4FF4B_RuntimeMethod_var);
					goto IL_0423;
				}

IL_01c2_2:
				{
					YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_56 = __this->___U3CU3Eu__2_13;
					V_4 = L_56;
					YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_57 = (&__this->___U3CU3Eu__2_13);
					il2cpp_codegen_initobj(L_57, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
					int32_t L_58 = (-1);
					V_0 = L_58;
					__this->___U3CU3E1__state_0 = L_58;
				}

IL_01df_2:
				{
					YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_4), NULL);
				}

IL_01e6_2:
				{
					// while( !asyncOperation.isDone )
					UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_59 = __this->___U3CasyncOperationU3E5__5_12;
					NullCheck(L_59);
					bool L_60;
					L_60 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_59, NULL);
					if (!L_60)
					{
						goto IL_0185_2;
					}
				}
				{
					// if( www.result != UnityWebRequest.Result.Success )
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_61 = __this->___U3CwwwU3E5__4_11;
					NullCheck(L_61);
					int32_t L_62;
					L_62 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_61, NULL);
					if ((((int32_t)L_62) == ((int32_t)1)))
					{
						goto IL_0220_2;
					}
				}
				{
					// Debug.LogWarning( "Couldn't use UnityWebRequest to load image, falling back to LoadImage: " + www.error );
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_63 = __this->___U3CwwwU3E5__4_11;
					NullCheck(L_63);
					String_t* L_64;
					L_64 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_63, NULL);
					String_t* L_65;
					L_65 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE3287997374A5B6321B447152239EBE224279EB6, L_64, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_65, NULL);
					goto IL_02b0_2;
				}

IL_0220_2:
				{
					// Texture2D texture = DownloadHandlerTexture.GetContent( www );
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_66 = __this->___U3CwwwU3E5__4_11;
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_67;
					L_67 = DownloadHandlerTexture_GetContent_m86BC88F58305A1B21C21CE7D82658197932EFB18(L_66, NULL);
					V_6 = L_67;
					// if( !generateMipmaps )
					bool L_68 = __this->___generateMipmaps_6;
					if (L_68)
					{
						goto IL_023f_2;
					}
				}
				{
					// result = texture;
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_69 = V_6;
					__this->___U3CresultU3E5__3_9 = L_69;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_9), (void*)L_69);
					goto IL_02b0_2;
				}

IL_023f_2:
				{
					// Texture2D mipmapTexture = null;
					V_7 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_02a4_2:
						{// begin finally (depth: 3)
							{
								int32_t L_70 = V_0;
								if ((((int32_t)L_70) >= ((int32_t)0)))
								{
									goto IL_02af_2;
								}
							}
							{
								// Object.DestroyImmediate( texture );
								Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_71 = V_6;
								il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
								Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_71, NULL);
							}

IL_02af_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						try
						{// begin try (depth: 4)
							// NativeArray<byte> textureData = texture.GetRawTextureData<byte>();
							Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_72 = V_6;
							NullCheck(L_72);
							NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_73;
							L_73 = Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608(L_72, Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var);
							V_8 = L_73;
							// mipmapTexture = new Texture2D( texture.width, texture.height, texture.format, true );
							Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_74 = V_6;
							NullCheck(L_74);
							int32_t L_75;
							L_75 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_74);
							Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_76 = V_6;
							NullCheck(L_76);
							int32_t L_77;
							L_77 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_76);
							Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_78 = V_6;
							NullCheck(L_78);
							int32_t L_79;
							L_79 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(L_78, NULL);
							Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_80 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
							NullCheck(L_80);
							Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_80, L_75, L_77, L_79, (bool)1, NULL);
							V_7 = L_80;
							// mipmapTexture.SetPixelData( textureData, 0 );
							Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_81 = V_7;
							NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_82 = V_8;
							NullCheck(L_81);
							Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212(L_81, L_82, 0, 0, Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212_RuntimeMethod_var);
							// mipmapTexture.Apply( true, markTextureNonReadable );
							Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_83 = V_7;
							bool L_84 = __this->___markTextureNonReadable_5;
							NullCheck(L_83);
							Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_83, (bool)1, L_84, NULL);
							// result = mipmapTexture;
							Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_85 = V_7;
							__this->___U3CresultU3E5__3_9 = L_85;
							Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_9), (void*)L_85);
							// }
							goto IL_02a2_3;
						}// end try (depth: 4)
						catch(Il2CppExceptionWrapper& e)
						{
							if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
							{
								IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
								goto CATCH_028b_3;
							}
							throw e;
						}

CATCH_028b_3:
						{// begin catch(System.Exception)
							{
								// Debug.LogException( e );
								il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
								Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
								// if( mipmapTexture )
								Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_86 = V_7;
								il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
								bool L_87;
								L_87 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_86, NULL);
								if (!L_87)
								{
									goto IL_02a0_3;
								}
							}
							{
								// Object.DestroyImmediate( mipmapTexture );
								Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_88 = V_7;
								il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
								Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_88, NULL);
							}

IL_02a0_3:
							{
								// }
								IL2CPP_POP_ACTIVE_EXCEPTION();
								goto IL_02a2_3;
							}
						}// end catch (depth: 4)

IL_02a2_3:
						{
							goto IL_02b0_2;
						}
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_02b0_2:
				{
					// }
					__this->___U3CasyncOperationU3E5__5_12 = (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncOperationU3E5__5_12), (void*)(UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL);
					goto IL_02d1_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_02d1_1:
		{
			__this->___U3CwwwU3E5__4_11 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__4_11), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
		}

IL_02d8_1:
		{
			// if( !result ) // Fallback to Texture2D.LoadImage if something goes wrong
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_89 = __this->___U3CresultU3E5__3_9;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_90;
			L_90 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_89, NULL);
			if (L_90)
			{
				goto IL_03c3_1;
			}
		}
		{
			// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
			U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3* L_91 = __this->___U3CU3E8__1_7;
			NullCheck(L_91);
			String_t* L_92 = L_91->___imagePath_0;
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			String_t* L_93;
			L_93 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_92, NULL);
			NullCheck(L_93);
			String_t* L_94;
			L_94 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_93, NULL);
			V_9 = L_94;
			// TextureFormat format = ( extension == ".jpg" || extension == ".jpeg" ) ? TextureFormat.RGB24 : TextureFormat.RGBA32;
			String_t* L_95 = V_9;
			bool L_96;
			L_96 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_95, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
			if (L_96)
			{
				goto IL_031e_1;
			}
		}
		{
			String_t* L_97 = V_9;
			bool L_98;
			L_98 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_97, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
			if (L_98)
			{
				goto IL_031e_1;
			}
		}
		{
			G_B49_0 = 4;
			goto IL_031f_1;
		}

IL_031e_1:
		{
			G_B49_0 = 3;
		}

IL_031f_1:
		{
			V_10 = G_B49_0;
			// result = new Texture2D( 2, 2, format, generateMipmaps, linearColorSpace );
			int32_t L_99 = V_10;
			bool L_100 = __this->___generateMipmaps_6;
			bool L_101 = __this->___linearColorSpace_4;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_102 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
			NullCheck(L_102);
			Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_102, 2, 2, L_99, L_100, L_101, NULL);
			__this->___U3CresultU3E5__3_9 = L_102;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_9), (void*)L_102);
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0396_1:
				{// begin finally (depth: 2)
					{
						int32_t L_103 = V_0;
						if ((((int32_t)L_103) >= ((int32_t)0)))
						{
							goto IL_03c2_1;
						}
					}
					{
						// if( loadPath != imagePath )
						String_t* L_104 = __this->___U3CloadPathU3E5__2_8;
						U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3* L_105 = __this->___U3CU3E8__1_7;
						NullCheck(L_105);
						String_t* L_106 = L_105->___imagePath_0;
						bool L_107;
						L_107 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_104, L_106, NULL);
						if (!L_107)
						{
							goto IL_03c2_1;
						}
					}
					try
					{// begin try (depth: 3)
						// File.Delete( loadPath );
						String_t* L_108 = __this->___U3CloadPathU3E5__2_8;
						File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_108, NULL);
						// }
						goto IL_03c2_1;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
						{
							IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
							goto CATCH_03bf_1;
						}
						throw e;
					}

CATCH_03bf_1:
					{// begin catch(System.Object)
						// catch { }
						// catch { }
						IL2CPP_POP_ACTIVE_EXCEPTION();
						goto IL_03c2_1;
					}// end catch (depth: 3)

IL_03c2_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				try
				{// begin try (depth: 3)
					{
						// if( !result.LoadImage( File.ReadAllBytes( loadPath ), markTextureNonReadable ) )
						Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_109 = __this->___U3CresultU3E5__3_9;
						String_t* L_110 = __this->___U3CloadPathU3E5__2_8;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111;
						L_111 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_110, NULL);
						bool L_112 = __this->___markTextureNonReadable_5;
						bool L_113;
						L_113 = ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF(L_109, L_111, L_112, NULL);
						if (L_113)
						{
							goto IL_037e_3;
						}
					}
					{
						// Debug.LogWarning( "Couldn't load image at path: " + loadPath );
						String_t* L_114 = __this->___U3CloadPathU3E5__2_8;
						String_t* L_115;
						L_115 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4, L_114, NULL);
						il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
						Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_115, NULL);
						// Object.DestroyImmediate( result );
						Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_116 = __this->___U3CresultU3E5__3_9;
						il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
						Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_116, NULL);
						// return null;
						V_1 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
						goto IL_03fa;
					}

IL_037e_3:
					{
						// }
						goto IL_0394_2;
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_0380_2;
					}
					throw e;
				}

CATCH_0380_2:
				{// begin catch(System.Exception)
					// Debug.LogException( e );
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
					Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
					// Object.DestroyImmediate( result );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_117 = __this->___U3CresultU3E5__3_9;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
					Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_117, NULL);
					// return null;
					V_1 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_03fa;
				}// end catch (depth: 3)

IL_0394_2:
				{
					goto IL_03c3_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_03c3_1:
		{
			// return result;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_118 = __this->___U3CresultU3E5__3_9;
			V_1 = L_118;
			goto IL_03fa;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03cc;
		}
		throw e;
	}

CATCH_03cc:
	{// begin catch(System.Exception)
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_7 = (U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_7), (void*)(U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3*)NULL);
		__this->___U3CloadPathU3E5__2_8 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloadPathU3E5__2_8), (void*)(String_t*)NULL);
		__this->___U3CresultU3E5__3_9 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_9), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_119 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_120 = V_11;
		AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B(L_119, L_120, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0423;
	}// end catch (depth: 1)

IL_03fa:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_7 = (U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_7), (void*)(U3CU3Ec__DisplayClass56_0_t61B10E379C882101ABDE12B31014B6048D4FBAC3*)NULL);
		__this->___U3CloadPathU3E5__2_8 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloadPathU3E5__2_8), (void*)(String_t*)NULL);
		__this->___U3CresultU3E5__3_9 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_9), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_121 = (&__this->___U3CU3Et__builder_1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_122 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688(L_121, L_122, AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var);
	}

IL_0423:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadImageAtPathAsyncU3Ed__56_MoveNext_m268BC22CE7C8B68270C61E8B270C419689030B02_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21*>(__this + _offset);
	U3CLoadImageAtPathAsyncU3Ed__56_MoveNext_m268BC22CE7C8B68270C61E8B270C419689030B02(_thisAdjusted, method);
}
// System.Void NativeGallery/<LoadImageAtPathAsync>d__56::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageAtPathAsyncU3Ed__56_SetStateMachine_m80F5304D2F999E6E67B6C74D18A4BFD8A7D102B3 (U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadImageAtPathAsyncU3Ed__56_SetStateMachine_m80F5304D2F999E6E67B6C74D18A4BFD8A7D102B3_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadImageAtPathAsyncU3Ed__56_t68C3FF69A56F7DC995A48B5B31E634DD8179BE21*>(__this + _offset);
	U3CLoadImageAtPathAsyncU3Ed__56_SetStateMachine_m80F5304D2F999E6E67B6C74D18A4BFD8A7D102B3(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGallery/<>c__DisplayClass58_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0__ctor_m18D1E4394641E5CC23B40C6E2F274B3756A237B3 (U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String NativeGallery/<>c__DisplayClass58_0::<GetVideoThumbnailAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass58_0_U3CGetVideoThumbnailAsyncU3Eb__0_m08F0D4033386F55339DF1E7E5FB5F90B0FF5653E (U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D67C2D23D0E67BA40CD70B037A9F218807BB46F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string thumbnailPath = await TryCallNativeAndroidFunctionOnSeparateThread( () => AJC.CallStatic<string>( "GetVideoThumbnail", Context, videoPath, temporaryImagePath + ".png", false, maxSize, captureTimeInSeconds ) );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = NativeGallery_get_AJC_m3DDA1C8C4108FA60670B808FB9BC23D478131F8A(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = NativeGallery_get_Context_mCCF96284368BB81A57E494FC19AF01D785AA5DAE(NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = __this->___videoPath_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = __this->___temporaryImagePath_1;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_6;
		bool L_10 = ((bool)0);
		RuntimeObject* L_11 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_9;
		int32_t L_13 = __this->___maxSize_2;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		double L_17 = __this->___captureTimeInSeconds_3;
		double L_18 = L_17;
		RuntimeObject* L_19 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_19);
		NullCheck(L_0);
		String_t* L_20;
		L_20 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteral5D67C2D23D0E67BA40CD70B037A9F218807BB46F, L_16, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_20;
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
// System.Void NativeGallery/<GetVideoThumbnailAsync>d__58::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetVideoThumbnailAsyncU3Ed__58_MoveNext_mDF77FEAD001979EA545BE46531D4F204D0277C6B (U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_m67C4EEF6523F9F73C156BC909CC41E3D386B27F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_m5ED31D703D86B23C2BD26E50E32AC34B04CAA16A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisString_t_m9E7C8D767B9CC9AB0DC7022AA55938E0A70AEE42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass58_0_U3CGetVideoThumbnailAsyncU3Eb__0_m08F0D4033386F55339DF1E7E5FB5F90B0FF5653E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_00c8_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0148_1;
			}
		}
		{
			U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266* L_3 = (U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			U3CU3Ec__DisplayClass58_0__ctor_m18D1E4394641E5CC23B40C6E2F274B3756A237B3(L_3, NULL);
			__this->___U3CU3E8__1_5 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)L_3);
			U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266* L_4 = __this->___U3CU3E8__1_5;
			String_t* L_5 = __this->___videoPath_2;
			NullCheck(L_4);
			L_4->___videoPath_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&L_4->___videoPath_0), (void*)L_5);
			U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266* L_6 = __this->___U3CU3E8__1_5;
			int32_t L_7 = __this->___maxSize_3;
			NullCheck(L_6);
			L_6->___maxSize_2 = L_7;
			U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266* L_8 = __this->___U3CU3E8__1_5;
			double L_9 = __this->___captureTimeInSeconds_4;
			NullCheck(L_8);
			L_8->___captureTimeInSeconds_3 = L_9;
			// if( maxSize <= 0 )
			U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266* L_10 = __this->___U3CU3E8__1_5;
			NullCheck(L_10);
			int32_t L_11 = L_10->___maxSize_2;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_0070_1;
			}
		}
		{
			// maxSize = SystemInfo.maxTextureSize;
			U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266* L_12 = __this->___U3CU3E8__1_5;
			int32_t L_13;
			L_13 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
			NullCheck(L_12);
			L_12->___maxSize_2 = L_13;
		}

IL_0070_1:
		{
			// string temporaryImagePath = TemporaryImagePath; // Must be accessed from main thread
			U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266* L_14 = __this->___U3CU3E8__1_5;
			String_t* L_15;
			L_15 = NativeGallery_get_TemporaryImagePath_m05418FC4CC85508CDAE30BEDCC344C85884E1BF8(NULL);
			NullCheck(L_14);
			L_14->___temporaryImagePath_1 = L_15;
			Il2CppCodeGenWriteBarrier((void**)(&L_14->___temporaryImagePath_1), (void*)L_15);
			// string thumbnailPath = await TryCallNativeAndroidFunctionOnSeparateThread( () => AJC.CallStatic<string>( "GetVideoThumbnail", Context, videoPath, temporaryImagePath + ".png", false, maxSize, captureTimeInSeconds ) );
			U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266* L_16 = __this->___U3CU3E8__1_5;
			Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_17 = (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*)il2cpp_codegen_object_new(Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
			NullCheck(L_17);
			Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass58_0_U3CGetVideoThumbnailAsyncU3Eb__0_m08F0D4033386F55339DF1E7E5FB5F90B0FF5653E_RuntimeMethod_var), NULL);
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_18;
			L_18 = NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisString_t_m9E7C8D767B9CC9AB0DC7022AA55938E0A70AEE42(L_17, NativeGallery_TryCallNativeAndroidFunctionOnSeparateThread_TisString_t_m9E7C8D767B9CC9AB0DC7022AA55938E0A70AEE42_RuntimeMethod_var);
			NullCheck(L_18);
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_19;
			L_19 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_18, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
			V_3 = L_19;
			bool L_20;
			L_20 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_3), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_00e4_1;
			}
		}
		{
			int32_t L_21 = 0;
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_22 = V_3;
			__this->___U3CU3Eu__1_9 = L_22;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_9))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_23 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_m67C4EEF6523F9F73C156BC909CC41E3D386B27F4(L_23, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_m67C4EEF6523F9F73C156BC909CC41E3D386B27F4_RuntimeMethod_var);
			goto IL_01ae;
		}

IL_00c8_1:
		{
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_24 = __this->___U3CU3Eu__1_9;
			V_3 = L_24;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_25 = (&__this->___U3CU3Eu__1_9);
			il2cpp_codegen_initobj(L_25, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
			int32_t L_26 = (-1);
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
		}

IL_00e4_1:
		{
			String_t* L_27;
			L_27 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_3), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
			V_2 = L_27;
			// if( !string.IsNullOrEmpty( thumbnailPath ) )
			String_t* L_28 = V_2;
			bool L_29;
			L_29 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_28, NULL);
			if (L_29)
			{
				goto IL_016f_1;
			}
		}
		{
			// return await LoadImageAtPathAsync( thumbnailPath, maxSize, markTextureNonReadable, generateMipmaps, linearColorSpace );
			String_t* L_30 = V_2;
			U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266* L_31 = __this->___U3CU3E8__1_5;
			NullCheck(L_31);
			int32_t L_32 = L_31->___maxSize_2;
			bool L_33 = __this->___markTextureNonReadable_6;
			bool L_34 = __this->___generateMipmaps_7;
			bool L_35 = __this->___linearColorSpace_8;
			Task_1_t95921EB64E237ACD28589D64B693C652268F225E* L_36;
			L_36 = NativeGallery_LoadImageAtPathAsync_m3C74F160A60055587A069839F0228D2B275CEBA0(L_30, L_32, L_33, L_34, L_35, NULL);
			NullCheck(L_36);
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_37;
			L_37 = Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C(L_36, Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var);
			V_4 = L_37;
			bool L_38;
			L_38 = TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911((&V_4), TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_0165_1;
			}
		}
		{
			int32_t L_39 = 1;
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_40 = V_4;
			__this->___U3CU3Eu__2_10 = L_40;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_10))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_41 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_m5ED31D703D86B23C2BD26E50E32AC34B04CAA16A(L_41, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C_m5ED31D703D86B23C2BD26E50E32AC34B04CAA16A_RuntimeMethod_var);
			goto IL_01ae;
		}

IL_0148_1:
		{
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_42 = __this->___U3CU3Eu__2_10;
			V_4 = L_42;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* L_43 = (&__this->___U3CU3Eu__2_10);
			il2cpp_codegen_initobj(L_43, sizeof(TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
		}

IL_0165_1:
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_45;
			L_45 = TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C((&V_4), TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var);
			V_1 = L_45;
			goto IL_0193;
		}

IL_016f_1:
		{
			// return null;
			V_1 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
			goto IL_0193;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0173;
		}
		throw e;
	}

CATCH_0173:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_5 = (U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)(U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266*)NULL);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_46 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_47 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B(L_46, L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01ae;
	}// end catch (depth: 1)

IL_0193:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_5 = (U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)(U3CU3Ec__DisplayClass58_0_t03A25575E78FFC955773B0C8D4B04EA8DBE83266*)NULL);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_48 = (&__this->___U3CU3Et__builder_1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_49 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688(L_48, L_49, AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var);
	}

IL_01ae:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetVideoThumbnailAsyncU3Ed__58_MoveNext_mDF77FEAD001979EA545BE46531D4F204D0277C6B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C*>(__this + _offset);
	U3CGetVideoThumbnailAsyncU3Ed__58_MoveNext_mDF77FEAD001979EA545BE46531D4F204D0277C6B(_thisAdjusted, method);
}
// System.Void NativeGallery/<GetVideoThumbnailAsync>d__58::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetVideoThumbnailAsyncU3Ed__58_SetStateMachine_mA11C42144D619E83C5D2033AC00658D46D90615A (U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m0ECA1B3B604CFFB8A5DE544E2A0A0025BFE6B6FD_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetVideoThumbnailAsyncU3Ed__58_SetStateMachine_mA11C42144D619E83C5D2033AC00658D46D90615A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetVideoThumbnailAsyncU3Ed__58_t269966A4E953ABBD7E24FF5D6A0294C5175B2B1C*>(__this + _offset);
	U3CGetVideoThumbnailAsyncU3Ed__58_SetStateMachine_mA11C42144D619E83C5D2033AC00658D46D90615A(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGalleryNamespace.NGCallbackHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper_Awake_mE4B8A9C18896CAF1E7CF776CDD3510BC5E8E71E3 (NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad( gameObject );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGCallbackHelper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper_Update_m14FAA6654D7EF046826BA233F9B206D89AB28BBC (NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* __this, const RuntimeMethod* method) 
{
	{
		// if( mainThreadAction != null )
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___mainThreadAction_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// System.Action temp = mainThreadAction;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___mainThreadAction_4;
		// mainThreadAction = null;
		__this->___mainThreadAction_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainThreadAction_4), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		// temp();
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGCallbackHelper::CallOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper_CallOnMainThread_mF7F169DC018B729E70CDD5017BA99B7F3DBA54D8 (NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_function, const RuntimeMethod* method) 
{
	{
		// mainThreadAction = function;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_function;
		__this->___mainThreadAction_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainThreadAction_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGCallbackHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper__ctor_mB5DCC404262A38A0DDF25EDBC00C0858834327AE (NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* __this, const RuntimeMethod* method) 
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
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::.ctor(NativeGallery/MediaPickCallback,NativeGallery/MediaPickMultipleCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid__ctor_mDA59DF94D1E808D51945EFC7935434A3B2D00E61 (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* __this, MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* ___0_callback, MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* ___1_callbackMultiple, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E_m122B4342704895B942EB668E066A8907E156D51F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1323FA5608C80AC5A0D5F2B0116C96A1B9AFD381);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23A7F9B10A9B248A502580BB07C34BEC789A2F26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NGMediaReceiveCallbackAndroid( NativeGallery.MediaPickCallback callback, NativeGallery.MediaPickMultipleCallback callbackMultiple ) : base( "com.yasirkula.unity.NativeGalleryMediaReceiver" )
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral1323FA5608C80AC5A0D5F2B0116C96A1B9AFD381, NULL);
		// this.callback = callback;
		MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_0 = ___0_callback;
		__this->___callback_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_4), (void*)L_0);
		// this.callbackMultiple = callbackMultiple;
		MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_1 = ___1_callbackMultiple;
		__this->___callbackMultiple_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackMultiple_5), (void*)L_1);
		// callbackHelper = new GameObject( "NGCallbackHelper" ).AddComponent<NGCallbackHelper>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral23A7F9B10A9B248A502580BB07C34BEC789A2F26, NULL);
		NullCheck(L_2);
		NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* L_3;
		L_3 = GameObject_AddComponent_TisNGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E_m122B4342704895B942EB668E066A8907E156D51F(L_2, GameObject_AddComponent_TisNGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E_m122B4342704895B942EB668E066A8907E156D51F_RuntimeMethod_var);
		__this->___callbackHelper_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackHelper_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::OnMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_OnMediaReceived_m927E33E6BA4435928E353290FE197407D0D935DE (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_mD53F98485F21EB4840C5FC510F8A15C1E9D9489B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8* L_0 = (U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_mC570477CEA424C12BDAE3117665FE99C9D0EA387(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8* L_2 = V_0;
		String_t* L_3 = ___0_path;
		NullCheck(L_2);
		L_2->___path_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___path_1), (void*)L_3);
		// callbackHelper.CallOnMainThread( () => MediaReceiveCallback( path ) );
		NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* L_4 = __this->___callbackHelper_6;
		U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_mD53F98485F21EB4840C5FC510F8A15C1E9D9489B_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		NGCallbackHelper_CallOnMainThread_mF7F169DC018B729E70CDD5017BA99B7F3DBA54D8_inline(L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::OnMultipleMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_OnMultipleMediaReceived_m3D0BBCFE8A0047BFD2D8EDC32365ECCF5C917E09 (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* __this, String_t* ___0_paths, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m6E894223713913587A5A8F533F621719D7DF949D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* L_0 = (U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m7E74F3E4FBDB854C815800DE26A4F447CBBE6E91(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// string[] result = null;
		U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* L_2 = V_0;
		NullCheck(L_2);
		L_2->___result_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___result_1), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		// if( !string.IsNullOrEmpty( paths ) )
		String_t* L_3 = ___0_paths;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (L_4)
		{
			goto IL_0096;
		}
	}
	{
		// string[] pathsSplit = paths.Split( '>' );
		String_t* L_5 = ___0_paths;
		NullCheck(L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_5, ((int32_t)62), 0, NULL);
		V_1 = L_6;
		// int validPathCount = 0;
		V_2 = 0;
		// for( int i = 0; i < pathsSplit.Length; i++ )
		V_3 = 0;
		goto IL_003e;
	}

IL_002c:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_1;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		if (L_11)
		{
			goto IL_003a;
		}
	}
	{
		// validPathCount++;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003a:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003e:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_14 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_002c;
		}
	}
	{
		// if( validPathCount == 0 )
		int32_t L_16 = V_2;
		if (L_16)
		{
			goto IL_0050;
		}
	}
	{
		// pathsSplit = new string[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		V_1 = L_17;
		goto IL_008f;
	}

IL_0050:
	{
		// else if( validPathCount != pathsSplit.Length )
		int32_t L_18 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_1;
		NullCheck(L_19);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_008f;
		}
	}
	{
		// string[] validPaths = new string[validPathCount];
		int32_t L_20 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_4 = L_21;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_5 = 0;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_6 = 0;
		goto IL_0085;
	}

IL_0066:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		String_t* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		bool L_26;
		L_26 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_25, NULL);
		if (L_26)
		{
			goto IL_007f;
		}
	}
	{
		// validPaths[j++] = pathsSplit[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = V_4;
		int32_t L_28 = V_6;
		int32_t L_29 = L_28;
		V_6 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = V_1;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_33);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (String_t*)L_33);
	}

IL_007f:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0085:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_35 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = V_1;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_0066;
		}
	}
	{
		// pathsSplit = validPaths;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = V_4;
		V_1 = L_37;
	}

IL_008f:
	{
		// result = pathsSplit;
		U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* L_38 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = V_1;
		NullCheck(L_38);
		L_38->___result_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___result_1), (void*)L_39);
	}

IL_0096:
	{
		// callbackHelper.CallOnMainThread( () => MediaReceiveMultipleCallback( result ) );
		NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* L_40 = __this->___callbackHelper_6;
		U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* L_41 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_42 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_42, L_41, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m6E894223713913587A5A8F533F621719D7DF949D_RuntimeMethod_var), NULL);
		NullCheck(L_40);
		NGCallbackHelper_CallOnMainThread_mF7F169DC018B729E70CDD5017BA99B7F3DBA54D8_inline(L_40, L_42, NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::MediaReceiveCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_MediaReceiveCallback_mB3DA436490521248AE6B7A1DA4B11C2C209A5295 (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// path = null;
		___0_path = (String_t*)NULL;
	}

IL_000b:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0022:
			{// begin finally (depth: 1)
				// Object.Destroy( callbackHelper.gameObject );
				NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* L_2 = __this->___callbackHelper_6;
				NullCheck(L_2);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if( callback != null )
				MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_4 = __this->___callback_4;
				if (!L_4)
				{
					goto IL_0020_1;
				}
			}
			{
				// callback( path );
				MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* L_5 = __this->___callback_4;
				String_t* L_6 = ___0_path;
				NullCheck(L_5);
				MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_inline(L_5, L_6, NULL);
			}

IL_0020_1:
			{
				// }
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::MediaReceiveMultipleCallback(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_MediaReceiveMultipleCallback_m3A0489AD51509EDBD6536C89282460F879A3801A (NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( paths != null && paths.Length == 0 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_paths;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_paths;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000a;
		}
	}
	{
		// paths = null;
		___0_paths = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}

IL_000a:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				// Object.Destroy( callbackHelper.gameObject );
				NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* L_2 = __this->___callbackHelper_6;
				NullCheck(L_2);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if( callbackMultiple != null )
				MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_4 = __this->___callbackMultiple_5;
				if (!L_4)
				{
					goto IL_001f_1;
				}
			}
			{
				// callbackMultiple( paths );
				MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* L_5 = __this->___callbackMultiple_5;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ___0_paths;
				NullCheck(L_5);
				MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline(L_5, L_6, NULL);
			}

IL_001f_1:
			{
				// }
				goto IL_0032;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
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
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mC570477CEA424C12BDAE3117665FE99C9D0EA387 (U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::<OnMediaReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_mD53F98485F21EB4840C5FC510F8A15C1E9D9489B (U3CU3Ec__DisplayClass4_0_tD80C32708DF9E47C151599335772558DC8B3D9E8* __this, const RuntimeMethod* method) 
{
	{
		// callbackHelper.CallOnMainThread( () => MediaReceiveCallback( path ) );
		NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* L_0 = __this->___U3CU3E4__this_0;
		String_t* L_1 = __this->___path_1;
		NullCheck(L_0);
		NGMediaReceiveCallbackAndroid_MediaReceiveCallback_mB3DA436490521248AE6B7A1DA4B11C2C209A5295(L_0, L_1, NULL);
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
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7E74F3E4FBDB854C815800DE26A4F447CBBE6E91 (U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::<OnMultipleMediaReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m6E894223713913587A5A8F533F621719D7DF949D (U3CU3Ec__DisplayClass5_0_tAE5229FA2486EA375EA2E7C0D014785D19289D9B* __this, const RuntimeMethod* method) 
{
	{
		// callbackHelper.CallOnMainThread( () => MediaReceiveMultipleCallback( result ) );
		NGMediaReceiveCallbackAndroid_tB8DDBFAD614592BF98999BEAC00A75E0D420CC52* L_0 = __this->___U3CU3E4__this_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___result_1;
		NullCheck(L_0);
		NGMediaReceiveCallbackAndroid_MediaReceiveMultipleCallback_m3A0489AD51509EDBD6536C89282460F879A3801A(L_0, L_1, NULL);
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
// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_m191C26F8B4F43175AF59865CC66AD5678C72402D (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, const RuntimeMethod* method) 
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = __this->___U3CResultU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::set_Result(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_mC34052700FD02618001671CCB526869C496673EB (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CResultU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid__ctor_m00B158EB122D1CAC9BB41B8A298981AD16F7B56F (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, RuntimeObject* ___0_threadLock, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1797A6EC252879FB0D0CD0D8E0F03D8E0BBA57F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NGPermissionCallbackAndroid( object threadLock ) : base( "com.yasirkula.unity.NativeGalleryPermissionReceiver" )
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral1797A6EC252879FB0D0CD0D8E0F03D8E0BBA57F2, NULL);
		// Result = -1;
		NGPermissionCallbackAndroid_set_Result_mC34052700FD02618001671CCB526869C496673EB_inline(__this, (-1), NULL);
		// this.threadLock = threadLock;
		RuntimeObject* L_0 = ___0_threadLock;
		__this->___threadLock_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___threadLock_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::OnPermissionResult(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_OnPermissionResult_mD0CDC84DE59FF176ECF2171C036A483E7FD771F2 (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, int32_t ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// Result = result;
		int32_t L_0 = ___0_result;
		NGPermissionCallbackAndroid_set_Result_mC34052700FD02618001671CCB526869C496673EB_inline(__this, L_0, NULL);
		// lock( threadLock )
		RuntimeObject* L_1 = __this->___threadLock_4;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// Monitor.Pulse( threadLock );
			RuntimeObject* L_5 = __this->___threadLock_4;
			Monitor_Pulse_mA8279943D6C2913ADFAF661E35C4951BDFACE43D(L_5, NULL);
			// }
			goto IL_002f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_m191C26F8B4F43175AF59865CC66AD5678C72402D_inline (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, const RuntimeMethod* method) 
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = __this->___U3CResultU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_mD97247E7132D61D5D8C1E3063FEF0C09205E925C_inline (MediaSaveCallback_tEAA0B6F692AE0F92C02E21CDDB75ADFF4D89CD1D* __this, bool ___0_success, String_t* ___1_path, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_success, ___1_path, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m5FE7D489E8659411C7E24DB7E892B439C9990F3D_inline (MediaPickMultipleCallback_t717A5D378751E2CACB53E6BA25386FF8DB41627B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_paths, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_paths, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGCallbackHelper_CallOnMainThread_mF7F169DC018B729E70CDD5017BA99B7F3DBA54D8_inline (NGCallbackHelper_t66F469013909FD93F5CEDB7C9C6689E79EB4605E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_function, const RuntimeMethod* method) 
{
	{
		// mainThreadAction = function;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_function;
		__this->___mainThreadAction_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainThreadAction_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m25F1FD61CF9FE4C835CD3298D790CBB61691BC4E_inline (MediaPickCallback_tC207F6F3EEE18F64B03E23D5C9FA8C79517A5EB6* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_path, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_mC34052700FD02618001671CCB526869C496673EB_inline (NGPermissionCallbackAndroid_t6824CF0103F77A92558E94C46463D4DECB491EEB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CResultU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
