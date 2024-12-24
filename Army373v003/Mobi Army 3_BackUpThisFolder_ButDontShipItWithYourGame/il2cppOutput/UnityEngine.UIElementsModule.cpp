#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA;
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B;
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;

IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIElementsRuntimeUtilityNative_t7BF21E9B58D15C2BA6C3DA27D7257B16A05665CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2EB7EACAE6B3BFBFD70862A8840592343396CF46;
IL2CPP_EXTERN_C String_t* _stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF;
IL2CPP_EXTERN_C String_t* _stringLiteral807D31E7D618CFE25644A0B838EBD88C978E78F1;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_BaselineInternal_mE6CDCD2F9C884415E362BF5578B34FFFF52BC6C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_MeasureInternal_mA92CB63CB8B411FA5EC2B36DF5441A9C93C8A5E7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t2915620281D112A443FB14861757F697852D8729 
{
};
struct Native_t692F431FC40013EFEC9527B38509A2A519106700  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UIElementsRuntimeUtilityNative_t7BF21E9B58D15C2BA6C3DA27D7257B16A05665CF  : public RuntimeObject
{
};
struct Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
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
struct YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB 
{
	float ___width;
	float ___height;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct MarkerFlags_t58228A99AC6567F565911ED792189DBBDFF83E30 
{
	uint16_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct YogaMeasureMode_t4CDDFFE6BF3C67D6185C158ABCAA610B8B227A48 
{
	int32_t ___value__;
};
struct YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B  : public RuntimeObject
{
	intptr_t ____ygNode;
	MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8* ____measureFunction;
	BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8* ____baselineFunction;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};
struct Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA  : public MulticastDelegate_t
{
};
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2  : public MulticastDelegate_t
{
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8  : public MulticastDelegate_t
{
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct UIElementsRuntimeUtilityNative_t7BF21E9B58D15C2BA6C3DA27D7257B16A05665CF_StaticFields
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___RepaintOverlayPanelsCallback;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___UpdateRuntimePanelsCallback;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___RepaintOffscreenPanelsCallback;
};
struct Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_StaticFields
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___GraphicsResourcesRecreate;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___EngineUpdate;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___FlushPendingResources;
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* ___RegisterIntermediateRenderers;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeAdd;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeExecute;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeCleanup;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerRaiseEngineUpdate;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___0_obj, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB YogaNode_MeasureInternal_mA92CB63CB8B411FA5EC2B36DF5441A9C93C8A5E7 (YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_mE6CDCD2F9C884415E362BF5578B34FFFF52BC6C1 (YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_inline (MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_inline (BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___0_obj, method);
}
inline void Action_1_Invoke_mCEB98AA7C8ED536CE7A592667637829D2D609DCF_inline (Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
inline void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*, intptr_t, const RuntimeMethod*))Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64 (String_t* ___0_name, uint16_t ___1_categoryId, uint16_t ___2_flags, int32_t ___3_metadataCount, const RuntimeMethod* method) ;
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
float BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_Multicast(BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8* currentDelegate = reinterpret_cast<BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B*, float, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_node, ___1_width, ___2_height, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
float BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_OpenInst(BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	typedef float (*FunctionPointerType) (YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_node, ___1_width, ___2_height, method);
}
float BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_OpenStatic(BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_node, ___1_width, ___2_height, method);
}
float BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_OpenVirtual(BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	return VirtualFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_node, ___1_width, ___2_height);
}
float BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_OpenInterface(BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	return InterfaceFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_node, ___1_width, ___2_height);
}
float BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_OpenGenericVirtual(BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	return GenericVirtualFuncInvoker2< float, float, float >::Invoke(method, ___0_node, ___1_width, ___2_height);
}
float BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_OpenGenericInterface(BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	return GenericInterfaceFuncInvoker2< float, float, float >::Invoke(method, ___0_node, ___1_width, ___2_height);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaselineFunction__ctor_mB96F611BB5FD8849C6DC1C69A017B5F9A482DAC3 (BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B (BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_node, ___1_width, ___2_height, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_Multicast(MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8* currentDelegate = reinterpret_cast<MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8*>(delegatesToInvoke[i]);
		typedef YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB (*FunctionPointerType) (RuntimeObject*, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B*, float, int32_t, float, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_OpenInst(MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	typedef YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB (*FunctionPointerType) (YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B*, float, int32_t, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode, method);
}
YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_OpenStatic(MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method)
{
	typedef YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB (*FunctionPointerType) (YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B*, float, int32_t, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode, method);
}
YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_OpenVirtual(MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	return VirtualFuncInvoker4< YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode);
}
YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_OpenInterface(MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	return InterfaceFuncInvoker4< YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode);
}
YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_OpenGenericVirtual(MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	return GenericVirtualFuncInvoker4< YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB, float, int32_t, float, int32_t >::Invoke(method, ___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode);
}
YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_OpenGenericInterface(MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method)
{
	NullCheck(___0_node);
	return GenericInterfaceFuncInvoker4< YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB, float, int32_t, float, int32_t >::Invoke(method, ___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasureFunction__ctor_m03A58477C9EFCE58C52AF4CA149B8881E9A55548 (MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5 (MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method) 
{
	typedef YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB (*FunctionPointerType) (RuntimeObject*, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B*, float, int32_t, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeMeasureInvoke_m448DB3A849285A6B8845A0D5B1084F543D31F43E (YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, intptr_t ___5_returnValueAddress, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___5_returnValueAddress;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* L_2 = ___0_node;
		float L_3 = ___1_width;
		int32_t L_4 = ___2_widthMode;
		float L_5 = ___3_height;
		int32_t L_6 = ___4_heightMode;
		YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB L_7;
		L_7 = YogaNode_MeasureInternal_mA92CB63CB8B411FA5EC2B36DF5441A9C93C8A5E7(L_2, L_3, L_4, L_5, L_6, NULL);
		*(YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB*)L_1 = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeBaselineInvoke_m47559BB828CD8D0A835DEE50ECC2FFBCBA005599 (YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, float ___2_height, intptr_t ___3_returnValueAddress, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___3_returnValueAddress;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* L_2 = ___0_node;
		float L_3 = ___1_width;
		float L_4 = ___2_height;
		float L_5;
		L_5 = YogaNode_BaselineInternal_mE6CDCD2F9C884415E362BF5578B34FFFF52BC6C1(L_2, L_3, L_4, NULL);
		*((float*)L_1) = (float)L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB YogaNode_MeasureInternal_mA92CB63CB8B411FA5EC2B36DF5441A9C93C8A5E7 (YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method) 
{
	bool V_0 = false;
	YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* L_0 = ___0_node;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* L_1 = ___0_node;
		NullCheck(L_1);
		MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8* L_2 = L_1->____measureFunction;
		G_B3_0 = ((((RuntimeObject*)(MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral807D31E7D618CFE25644A0B838EBD88C978E78F1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaNode_MeasureInternal_mA92CB63CB8B411FA5EC2B36DF5441A9C93C8A5E7_RuntimeMethod_var)));
	}

IL_0020:
	{
		YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* L_5 = ___0_node;
		NullCheck(L_5);
		MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8* L_6 = L_5->____measureFunction;
		YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* L_7 = ___0_node;
		float L_8 = ___1_width;
		int32_t L_9 = ___2_widthMode;
		float L_10 = ___3_height;
		int32_t L_11 = ___4_heightMode;
		NullCheck(L_6);
		YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB L_12;
		L_12 = MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_inline(L_6, L_7, L_8, L_9, L_10, L_11, NULL);
		V_1 = L_12;
		goto IL_0034;
	}

IL_0034:
	{
		YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_mE6CDCD2F9C884415E362BF5578B34FFFF52BC6C1 (YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* L_0 = ___0_node;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* L_1 = ___0_node;
		NullCheck(L_1);
		BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8* L_2 = L_1->____baselineFunction;
		G_B3_0 = ((((RuntimeObject*)(BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2EB7EACAE6B3BFBFD70862A8840592343396CF46)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaNode_BaselineInternal_mE6CDCD2F9C884415E362BF5578B34FFFF52BC6C1_RuntimeMethod_var)));
	}

IL_0020:
	{
		YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* L_5 = ___0_node;
		NullCheck(L_5);
		BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8* L_6 = L_5->____baselineFunction;
		YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* L_7 = ___0_node;
		float L_8 = ___1_width;
		float L_9 = ___2_height;
		NullCheck(L_6);
		float L_10;
		L_10 = BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_inline(L_6, L_7, L_8, L_9, NULL);
		V_1 = L_10;
		goto IL_0031;
	}

IL_0031:
	{
		float L_11 = V_1;
		return L_11;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_RepaintOverlayPanels_m6D6A8A57DD315A491C24434E9A9475AE829B9809 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtilityNative_t7BF21E9B58D15C2BA6C3DA27D7257B16A05665CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((UIElementsRuntimeUtilityNative_t7BF21E9B58D15C2BA6C3DA27D7257B16A05665CF_StaticFields*)il2cpp_codegen_static_fields_for(UIElementsRuntimeUtilityNative_t7BF21E9B58D15C2BA6C3DA27D7257B16A05665CF_il2cpp_TypeInfo_var))->___RepaintOverlayPanelsCallback;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_UpdateRuntimePanels_m12DC61546EA04E667B924669822735C03F761E95 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtilityNative_t7BF21E9B58D15C2BA6C3DA27D7257B16A05665CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((UIElementsRuntimeUtilityNative_t7BF21E9B58D15C2BA6C3DA27D7257B16A05665CF_StaticFields*)il2cpp_codegen_static_fields_for(UIElementsRuntimeUtilityNative_t7BF21E9B58D15C2BA6C3DA27D7257B16A05665CF_il2cpp_TypeInfo_var))->___UpdateRuntimePanelsCallback;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_RepaintOffscreenPanels_m3DACE4CD09DD7464A2C13C72BC61E0F5A78FD8B9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtilityNative_t7BF21E9B58D15C2BA6C3DA27D7257B16A05665CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((UIElementsRuntimeUtilityNative_t7BF21E9B58D15C2BA6C3DA27D7257B16A05665CF_StaticFields*)il2cpp_codegen_static_fields_for(UIElementsRuntimeUtilityNative_t7BF21E9B58D15C2BA6C3DA27D7257B16A05665CF_il2cpp_TypeInfo_var))->___RepaintOffscreenPanelsCallback;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseGraphicsResourcesRecreate_mF33D7223297EC8AB4C3273397005E442BF6FAA11 (bool ___0_recreate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ((Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var))->___GraphicsResourcesRecreate;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		bool L_2 = ___0_recreate;
		NullCheck(G_B2_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseEngineUpdate_m2D3D837B201E72568207882032626907E05F0327 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var))->___EngineUpdate;
		V_0 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var))->___EngineUpdate;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseFlushPendingResources_mA1138479367B74CFF601A3E7617C6861CCD814B2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var))->___FlushPendingResources;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRegisterIntermediateRenderers_mF86BF645336D859D165A103ED551C8036502C33B (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* G_B2_0 = NULL;
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_0 = ((Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var))->___RegisterIntermediateRenderers;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___0_camera;
		NullCheck(G_B2_0);
		Action_1_Invoke_mCEB98AA7C8ED536CE7A592667637829D2D609DCF_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeAdd_m7710751B3024FDC11AC7EA9B2224FBD9C73E068B (intptr_t ___0_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B2_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ((Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var))->___RenderNodeAdd;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___0_userData;
		NullCheck(G_B2_0);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeExecute_m1478319E20BE01E5F15FE82A48635DC9C9A4892C (intptr_t ___0_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B2_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ((Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var))->___RenderNodeExecute;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___0_userData;
		NullCheck(G_B2_0);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeCleanup_m92C3DD2F46BBB88D1FB2B4701779FE3EB720B746 (intptr_t ___0_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B2_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ((Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var))->___RenderNodeCleanup;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___0_userData;
		NullCheck(G_B2_0);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility__cctor_m462F466B065A735D1D573736C7AC1D251C0271EE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF, NULL);
		((Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var))->___s_MarkerRaiseEngineUpdate = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB MeasureFunction_Invoke_m57BA4BE3E3623583F56D7B3F38818D2CE4C9FEC5_inline (MeasureFunction_tFF5C288931BCD9972BF58C7247560B30D8ED91C8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, int32_t ___2_widthMode, float ___3_height, int32_t ___4_heightMode, const RuntimeMethod* method) 
{
	typedef YogaSize_t3FF1BB4D590ACFC61602BA2713211CFBF1AA9DCB (*FunctionPointerType) (RuntimeObject*, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B*, float, int32_t, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_node, ___1_width, ___2_widthMode, ___3_height, ___4_heightMode, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_m13EB3EF10C95E981D9420E97CEB4DB0E34863C8B_inline (BaselineFunction_tC445BD8DBEF6E2D011F0761B6387F9DD019812E8* __this, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___0_node, float ___1_width, float ___2_height, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_node, ___1_width, ___2_height, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64(L_0, (uint16_t)1, 0, 0, NULL);
		__this->___m_Ptr = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
