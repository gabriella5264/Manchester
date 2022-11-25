#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// UnityEngine.RangeAttribute
struct RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// System.String
struct String_t;
// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B;
// UnityEngine.XR.Management.XRConfigurationDataAttribute
struct XRConfigurationDataAttribute_tC94F83D607B934FF3F894802DF857C51AA165236;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.XR.Management.XRConfigurationDataAttribute
struct XRConfigurationDataAttribute_tC94F83D607B934FF3F894802DF857C51AA165236  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String UnityEngine.XR.Management.XRConfigurationDataAttribute::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_0;
	// System.String UnityEngine.XR.Management.XRConfigurationDataAttribute::<buildSettingsKey>k__BackingField
	String_t* ___U3CbuildSettingsKeyU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRConfigurationDataAttribute_tC94F83D607B934FF3F894802DF857C51AA165236, ___U3CdisplayNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_0() const { return ___U3CdisplayNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_0() { return &___U3CdisplayNameU3Ek__BackingField_0; }
	inline void set_U3CdisplayNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbuildSettingsKeyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRConfigurationDataAttribute_tC94F83D607B934FF3F894802DF857C51AA165236, ___U3CbuildSettingsKeyU3Ek__BackingField_1)); }
	inline String_t* get_U3CbuildSettingsKeyU3Ek__BackingField_1() const { return ___U3CbuildSettingsKeyU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CbuildSettingsKeyU3Ek__BackingField_1() { return &___U3CbuildSettingsKeyU3Ek__BackingField_1; }
	inline void set_U3CbuildSettingsKeyU3Ek__BackingField_1(String_t* value)
	{
		___U3CbuildSettingsKeyU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbuildSettingsKeyU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.RangeAttribute
struct RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};


// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tooltip_0), (void*)value);
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRConfigurationDataAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRConfigurationDataAttribute__ctor_m8BC8EB57DFC926006F8E5F70E7A150F7711299BB (XRConfigurationDataAttribute_tC94F83D607B934FF3F894802DF857C51AA165236 * __this, String_t* ___displayName0, String_t* ___buildSettingsKey1, const RuntimeMethod* method);
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042 (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * __this, String_t* ___tooltip0, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000 (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * __this, float ___min0, float ___max1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
static void Wave_XRSDK_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[0];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[1];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[2];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[3];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
}
static void InputDeviceTracker_t33E181C3B7AD73249C6315BA7FAD459E59EAC223_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void InputDeviceTracker_t33E181C3B7AD73249C6315BA7FAD459E59EAC223_CustomAttributesCacheGenerator_InputDeviceTracker_Name_m537363EED39D3503C254BB8918CD773521F980D8(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void InputDeviceTracker_t33E181C3B7AD73249C6315BA7FAD459E59EAC223_CustomAttributesCacheGenerator_InputDeviceTracker_SerialNumber_m774B977F50E13D5408ACDEF62AF39C1381E7FBE8(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		XRConfigurationDataAttribute_tC94F83D607B934FF3F894802DF857C51AA165236 * tmp = (XRConfigurationDataAttribute_tC94F83D607B934FF3F894802DF857C51AA165236 *)cache->attributes[0];
		XRConfigurationDataAttribute__ctor_m8BC8EB57DFC926006F8E5F70E7A150F7711299BB(tmp, il2cpp_codegen_string_new_wrapper("\x57\x61\x76\x65\x58\x52\x53\x65\x74\x74\x69\x6E\x67\x73"), il2cpp_codegen_string_new_wrapper("\x63\x6F\x6D\x2E\x68\x74\x63\x2E\x75\x70\x6D\x2E\x77\x61\x76\x65\x2E\x78\x72\x73\x64\x6B\x2E\x78\x72\x73\x65\x74\x74\x69\x6E\x67\x73"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_preferedStereoRenderingPath(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x49\x6E\x20\x55\x52\x50\x2C\x20\x6F\x6E\x6C\x79\x20\x53\x69\x6E\x67\x6C\x65\x50\x61\x73\x73\x20\x63\x61\x6E\x20\x62\x65\x20\x75\x73\x65\x64\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_useDoubleWidth(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x44\x6F\x75\x62\x6C\x65\x20\x57\x69\x64\x74\x68\x20\x74\x65\x78\x74\x75\x72\x65\x2E\x20\x20\x4F\x6E\x20\x41\x6E\x64\x72\x6F\x69\x64\x2C\x20\x6F\x6E\x6C\x79\x20\x4D\x75\x6C\x74\x69\x50\x61\x73\x73\x20\x63\x61\x6E\x20\x68\x61\x76\x65\x20\x64\x6F\x75\x62\x6C\x65\x20\x77\x69\x64\x74\x68\x20\x74\x65\x78\x74\x75\x72\x65\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_useRenderMask(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x45\x6E\x61\x62\x6C\x65\x20\x52\x65\x6E\x64\x65\x72\x4D\x61\x73\x6B\x20\x28\x4F\x63\x63\x6C\x75\x73\x69\x6F\x6E\x20\x4D\x65\x73\x68\x29\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_enableTimeWarpStabilizedMode(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x49\x66\x20\x79\x6F\x75\x20\x73\x65\x6C\x65\x63\x74\x20\x4F\x6E\x2C\x20\x69\x74\x20\x77\x69\x6C\x6C\x20\x72\x65\x64\x75\x63\x65\x20\x6A\x69\x74\x74\x65\x72\x20\x69\x6E\x20\x73\x6F\x6D\x65\x20\x63\x61\x73\x65\x2E\x20\x50\x6C\x65\x61\x73\x65\x20\x72\x65\x66\x65\x72\x20\x64\x65\x76\x65\x6C\x6F\x70\x65\x72\x20\x67\x75\x69\x64\x65\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_adaptiveQualityMode(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x41\x64\x61\x70\x74\x69\x76\x65\x20\x51\x75\x61\x6C\x69\x74\x79\x20\x4D\x6F\x64\x65\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_AQ_SendQualityEvent(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x41\x6C\x6C\x6F\x77\x20\x73\x65\x74\x20\x71\x75\x61\x6C\x69\x74\x79\x20\x73\x74\x72\x61\x74\x65\x67\x79\x20\x69\x73\x20\x73\x65\x6E\x64\x20\x71\x75\x61\x6C\x69\x74\x79\x20\x65\x76\x65\x6E\x74\x2E\x20\x53\x65\x6E\x64\x51\x75\x61\x6C\x69\x74\x79\x45\x76\x65\x6E\x74\x20\x3D\x20\x66\x61\x6C\x73\x65\x20\x69\x66\x20\x71\x75\x61\x6C\x69\x74\x79\x20\x73\x74\x72\x61\x74\x65\x67\x79\x20\x75\x73\x65\x20\x64\x65\x66\x61\x75\x6C\x74\x2E"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_AQ_AutoFoveation(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x41\x6C\x6C\x6F\x77\x20\x73\x65\x74\x20\x61\x75\x74\x6F\x20\x66\x6F\x76\x65\x61\x74\x69\x6F\x6E\x20\x71\x75\x61\x6C\x69\x74\x79\x20\x73\x74\x72\x61\x74\x65\x67\x79\x2E\x20\x41\x75\x74\x6F\x46\x6F\x76\x65\x61\x74\x69\x6F\x6E\x20\x3D\x20\x66\x61\x6C\x73\x65\x20\x69\x66\x20\x71\x75\x61\x6C\x69\x74\x79\x20\x73\x74\x72\x61\x74\x65\x67\x79\x20\x64\x69\x73\x61\x62\x6C\x65\x20\x66\x6F\x76\x65\x61\x74\x69\x6F\x6E\x2E"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_useAQDynamicResolution(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x45\x6E\x61\x62\x6C\x65\x20\x44\x79\x6E\x61\x6D\x69\x63\x20\x52\x65\x73\x6F\x6C\x75\x74\x69\x6F\x6E\x20\x62\x61\x73\x65\x64\x20\x6F\x6E\x20\x41\x64\x61\x70\x74\x69\x76\x65\x20\x51\x75\x61\x6C\x69\x74\x79\x20\x65\x76\x65\x6E\x74\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_DR_DefaultIndex(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x59\x6F\x75\x20\x63\x61\x6E\x20\x63\x68\x6F\x6F\x73\x65\x20\x6F\x6E\x65\x20\x6F\x66\x20\x72\x65\x73\x6F\x6C\x75\x74\x69\x6F\x6E\x20\x73\x63\x61\x6C\x65\x20\x66\x72\x6F\x6D\x20\x74\x68\x69\x73\x20\x6C\x69\x73\x74\x20\x61\x73\x20\x61\x20\x64\x65\x66\x61\x75\x6C\x74\x20\x72\x65\x73\x6F\x6C\x75\x74\x69\x6F\x6E\x20\x73\x63\x61\x6C\x65\x20\x62\x79\x20\x73\x65\x74\x74\x69\x6E\x67\x20\x74\x68\x65\x20\x64\x65\x66\x61\x75\x6C\x74\x20\x69\x6E\x64\x65\x78\x2E"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_DR_TextSize(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x75\x6E\x69\x74\x20\x75\x73\x65\x64\x20\x66\x6F\x72\x20\x6D\x65\x61\x73\x75\x72\x69\x6E\x67\x20\x74\x65\x78\x74\x20\x73\x69\x7A\x65\x20\x68\x65\x72\x65\x20\x69\x73\x20\x64\x6D\x6D\x20\x28\x44\x69\x73\x74\x61\x6E\x63\x65\x2D\x49\x6E\x64\x65\x70\x65\x6E\x64\x65\x6E\x74\x20\x4D\x69\x6C\x6C\x69\x6D\x65\x74\x65\x72\x29\x2E\x20\x54\x68\x65\x20\x6D\x65\x74\x68\x6F\x64\x20\x6F\x66\x20\x63\x6F\x6E\x76\x65\x72\x73\x69\x6F\x6E\x20\x66\x72\x6F\x6D\x20\x55\x6E\x69\x74\x79\x20\x74\x65\x78\x74\x20\x73\x69\x7A\x65\x20\x69\x6E\x74\x6F\x20\x64\x6D\x6D\x20\x63\x61\x6E\x20\x62\x65\x20\x66\x6F\x75\x6E\x64\x20\x69\x6E\x20\x74\x68\x65\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x6F\x66\x20\x74\x68\x65\x20\x53\x44\x4B\x2E"), NULL);
	}
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[2];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 20.0f, 40.0f, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_DR_ResolutionScaleList(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_foveationMode(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x74\x20\x66\x6F\x76\x65\x61\x74\x69\x6F\x6E\x4D\x6F\x64\x65\x2E\x20\x20\x43\x68\x6F\x6F\x73\x65\x20\x64\x65\x66\x61\x75\x6C\x74\x20\x6D\x6F\x64\x65\x20\x77\x69\x6C\x6C\x20\x61\x70\x70\x6C\x79\x20\x64\x65\x76\x69\x63\x65\x27\x73\x20\x63\x6F\x6E\x66\x69\x67\x2E"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_leftClearVisionFOV(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[1];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 1.0f, 179.0f, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[2];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x74\x20\x4C\x65\x66\x74\x43\x6C\x65\x61\x72\x56\x69\x73\x69\x6F\x6E\x46\x4F\x56"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_rightClearVisionFOV(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 1.0f, 179.0f, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[2];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x74\x20\x52\x69\x67\x68\x74\x43\x6C\x65\x61\x72\x56\x69\x73\x69\x6F\x6E\x46\x4F\x56"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_leftPeripheralQuality(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x74\x20\x4C\x65\x66\x74\x50\x65\x72\x69\x70\x68\x65\x72\x61\x6C\x51\x75\x61\x6C\x69\x74\x79"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_rightPeripheralQuality(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x74\x20\x52\x69\x67\x68\x74\x50\x65\x72\x69\x70\x68\x65\x72\x61\x6C\x51\x75\x61\x6C\x69\x74\x79"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_overridePixelDensity(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x45\x6E\x61\x62\x6C\x65\x64\x20\x74\x6F\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x20\x73\x79\x73\x74\x65\x6D\x27\x73\x20\x50\x69\x78\x65\x6C\x44\x65\x6E\x73\x69\x74\x79\x2E\x20\x20\x44\x69\x73\x61\x62\x6C\x65\x64\x20\x74\x6F\x20\x75\x73\x65\x20\x73\x79\x73\x74\x65\x6D\x27\x73\x20\x50\x69\x78\x65\x6C\x44\x65\x6E\x73\x69\x74\x79\x2E"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_pixelDensity(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x50\x69\x78\x65\x6C\x44\x65\x6E\x73\x69\x74\x79\x20\x69\x73\x20\x61\x20\x73\x63\x61\x6C\x65\x20\x74\x6F\x20\x74\x68\x65\x20\x72\x65\x61\x6C\x20\x64\x69\x73\x70\x6C\x61\x79\x27\x73\x20\x77\x69\x64\x74\x68\x20\x61\x6E\x64\x20\x68\x65\x69\x67\x68\x74\x2E\x20\x20\x49\x74\x20\x69\x73\x20\x75\x73\x65\x20\x74\x6F\x20\x73\x65\x74\x20\x61\x20\x64\x65\x66\x61\x75\x6C\x74\x20\x65\x79\x65\x20\x62\x75\x66\x66\x65\x72\x20\x73\x69\x7A\x65\x2E\x20\x20\x54\x68\x65\x20\x64\x65\x66\x61\x75\x6C\x74\x20\x65\x79\x65\x20\x62\x75\x66\x66\x65\x72\x20\x73\x69\x7A\x65\x20\x77\x69\x6C\x6C\x20\x62\x65\x20\x63\x61\x6C\x63\x75\x6C\x61\x74\x65\x64\x20\x62\x79\x20\x28\x64\x69\x73\x70\x6C\x61\x79\x20\x77\x2C\x20\x64\x69\x73\x70\x6C\x61\x79\x20\x68\x29\x20\x2A\x20\x70\x69\x78\x65\x6C\x44\x65\x6E\x73\x69\x74\x79\x2E"), NULL);
	}
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[2];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.100000001f, 2.0f, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_resolutionScale(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.100000001f, 1.0f, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[2];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x52\x65\x73\x6F\x6C\x75\x74\x69\x6F\x6E\x53\x63\x61\x6C\x65\x20\x69\x73\x20\x61\x20\x73\x63\x61\x6C\x65\x20\x74\x6F\x20\x74\x68\x65\x20\x64\x65\x66\x61\x75\x6C\x74\x20\x65\x79\x65\x20\x62\x75\x66\x66\x65\x72\x20\x73\x69\x7A\x65\x20\x77\x68\x69\x63\x68\x20\x69\x73\x20\x64\x65\x63\x69\x64\x65\x64\x20\x62\x79\x20\x50\x69\x78\x65\x6C\x44\x65\x6E\x73\x69\x74\x79\x2E\x20\x20\x44\x65\x66\x61\x75\x6C\x74\x20\x69\x73\x20\x31\x2E\x20\x20\x59\x6F\x75\x20\x63\x61\x6E\x20\x61\x6C\x73\x6F\x20\x75\x73\x65\x20\x58\x52\x53\x65\x74\x74\x69\x6E\x67\x73\x2E\x65\x79\x65\x54\x65\x78\x74\x75\x72\x65\x52\x65\x73\x6F\x6C\x75\x74\x69\x6F\x6E\x53\x63\x61\x6C\x65\x20\x74\x6F\x20\x63\x6F\x6E\x66\x69\x67\x75\x72\x65\x20\x69\x74\x20\x69\x6E\x20\x74\x68\x65\x20\x72\x75\x6E\x74\x69\x6D\x65\x2E\x20\x20\x54\x68\x65\x20\x66\x69\x6E\x61\x6C\x20\x65\x79\x65\x20\x62\x75\x66\x66\x65\x72\x20\x73\x69\x7A\x65\x20\x77\x69\x6C\x6C\x20\x62\x65\x20\x63\x61\x6C\x63\x75\x6C\x61\x74\x65\x64\x20\x62\x79\x20\x28\x65\x79\x65\x20\x62\x75\x66\x66\x65\x72\x20\x77\x2C\x20\x65\x79\x65\x20\x62\x75\x66\x66\x65\x72\x20\x68\x29\x20\x2A\x20\x72\x65\x73\x6F\x6C\x75\x74\x69\x6F\x6E\x53\x63\x61\x6C\x65\x2E"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_debugLogFlagForNative(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x62\x75\x67\x20\x6C\x6F\x67\x20\x66\x6C\x61\x67\x20\x77\x68\x69\x63\x68\x20\x6E\x61\x74\x69\x76\x65\x20\x58\x52\x20\x70\x6C\x75\x67\x69\x6E\x20\x73\x68\x6F\x75\x6C\x64\x20\x66\x6F\x6C\x6C\x6F\x77\x2E"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_debugLogFlagForUnity(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x62\x75\x67\x20\x6C\x6F\x67\x20\x66\x6C\x61\x67\x20\x77\x68\x69\x63\x68\x20\x55\x6E\x69\x74\x79\x20\x50\x6C\x61\x79\x65\x72\x20\x73\x68\x6F\x75\x6C\x64\x20\x66\x6F\x6C\x6C\x6F\x77\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_overrideLogFlagForNative(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x76\x65\x72\x72\x69\x64\x65\x20\x74\x68\x65\x20\x4C\x6F\x67\x46\x6C\x61\x67\x20\x66\x6F\x72\x20\x6E\x61\x74\x69\x76\x65\x2E"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_useCMPChecker(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x45\x6E\x61\x62\x6C\x65\x20\x43\x6F\x6D\x70\x61\x74\x69\x62\x69\x6C\x69\x74\x79\x20\x43\x68\x65\x63\x6B\x65\x72\x20\x69\x6E\x20\x64\x65\x76\x65\x6C\x6F\x70\x6D\x65\x6E\x74\x20\x62\x75\x69\x6C\x64\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_amcMode(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x74\x20\x74\x68\x65\x20\x6D\x6F\x64\x65\x20\x6F\x66\x20\x41\x64\x61\x70\x74\x69\x76\x65\x20\x4D\x6F\x74\x69\x6F\x6E\x20\x43\x6F\x6D\x70\x65\x6E\x73\x61\x74\x6F\x72\x20\x28\x41\x4D\x43\x29\x2E\x20\x20\x59\x6F\x75\x20\x63\x61\x6E\x20\x63\x68\x6F\x6F\x73\x65\x20\x74\x6F\x20\x66\x6F\x72\x63\x65\x20\x65\x6E\x61\x62\x6C\x65\x20\x6F\x6E\x65\x20\x6F\x66\x20\x55\x6E\x69\x76\x65\x72\x73\x61\x6C\x20\x4D\x6F\x74\x69\x6F\x6E\x20\x43\x6F\x6D\x70\x65\x6E\x73\x61\x74\x6F\x72\x20\x28\x55\x4D\x43\x29\x20\x61\x6E\x64\x20\x50\x6F\x73\x69\x74\x69\x6F\x6E\x61\x6C\x20\x4D\x6F\x74\x69\x6F\x6E\x20\x43\x6F\x6D\x70\x65\x6E\x73\x61\x74\x6F\x72\x20\x28\x50\x4D\x43\x29\x2E\x20\x20\x4F\x72\x20\x75\x73\x65\x20\x61\x75\x74\x6F\x20\x55\x4D\x43\x2E\x20\x20\x44\x65\x66\x61\x75\x6C\x74\x20\x69\x73\x20\x6F\x66\x66"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_amcModeConfirm(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x30\x2E\x20\x6E\x6F\x74\x20\x61\x63\x63\x65\x70\x74\x2C\x20\x31\x2E\x20\x61\x63\x63\x65\x70\x74\x2C\x20\x32\x2E\x20\x61\x63\x63\x65\x70\x74\x20\x61\x6E\x64\x20\x64\x6F\x6E\x27\x74\x20\x61\x73\x6B\x20\x61\x67\x61\x69\x6E"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_fadeOut(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x66\x61\x75\x6C\x74\x20\x69\x73\x20\x6F\x66\x66\x2E\x20\x20\x42\x65\x66\x6F\x72\x65\x20\x79\x6F\x75\x20\x65\x6E\x61\x62\x6C\x65\x20\x74\x68\x69\x73\x20\x6F\x70\x74\x69\x6F\x6E\x2C\x20\x70\x6C\x65\x61\x73\x65\x20\x73\x65\x65\x20\x6F\x6E\x6C\x69\x6E\x65\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x20\x22\x46\x61\x64\x65\x4F\x75\x74\x20\x65\x66\x66\x65\x63\x74\x22\x20\x63\x68\x61\x70\x74\x65\x72\x20\x66\x69\x72\x73\x74\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_enableFSE(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x44\x69\x73\x61\x62\x6C\x65\x64\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6C\x74\x2E\x20\x45\x6E\x61\x62\x6C\x65\x20\x74\x68\x69\x73\x20\x6F\x70\x74\x69\x6F\x6E\x20\x74\x6F\x20\x65\x6E\x61\x62\x6C\x65\x20\x74\x68\x65\x20\x46\x72\x61\x6D\x65\x20\x53\x68\x61\x72\x70\x6E\x65\x73\x73\x20\x45\x6E\x68\x61\x6E\x63\x65\x6D\x65\x6E\x74\x20\x66\x65\x61\x74\x75\x72\x65\x2E\xA\x57\x68\x65\x6E\x20\x65\x6E\x61\x62\x6C\x65\x64\x2C\x20\x74\x68\x65\x20\x66\x69\x6E\x61\x6C\x20\x69\x6D\x61\x67\x65\x20\x77\x69\x6C\x6C\x20\x62\x65\x20\x73\x68\x61\x72\x70\x65\x6E\x65\x64\x20\x77\x68\x69\x63\x68\x20\x63\x61\x6E\x20\x69\x6D\x70\x72\x6F\x76\x65\x20\x74\x68\x69\x6E\x67\x73\x20\x6C\x69\x6B\x65\x20\x74\x65\x78\x74\x20\x73\x68\x61\x72\x70\x6E\x65\x73\x73\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_FSE_Level(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 1.0f, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[2];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x74\x20\x74\x68\x65\x20\x65\x6E\x68\x61\x6E\x63\x65\x6D\x65\x6E\x74\x20\x6C\x65\x76\x65\x6C\x20\x6F\x66\x20\x74\x68\x65\x20\x46\x72\x61\x6D\x65\x20\x53\x68\x61\x72\x70\x6E\x65\x73\x73\x20\x45\x6E\x68\x61\x6E\x63\x65\x6D\x65\x6E\x74\x20\x66\x65\x61\x74\x75\x72\x65\x2E\xA\x54\x68\x65\x20\x68\x69\x67\x68\x65\x72\x20\x74\x68\x65\x20\x6C\x65\x76\x65\x6C\x2C\x20\x74\x68\x65\x20\x73\x74\x72\x6F\x6E\x67\x65\x72\x20\x74\x68\x65\x20\x73\x68\x61\x72\x70\x65\x6E\x69\x6E\x67\x20\x65\x66\x66\x65\x63\x74\x2E"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_supportedFPS(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x74\x20\x74\x68\x65\x20\x41\x70\x70\x20\x73\x75\x70\x70\x6F\x72\x74\x65\x64\x20\x46\x50\x53\x2E\x20\x28\x45\x78\x70\x65\x72\x69\x6D\x65\x6E\x74\x61\x6C\x20\x66\x75\x6E\x63\x74\x69\x6F\x6E\x29\xA\x48\x4D\x44\x20\x44\x65\x66\x61\x75\x6C\x74\x3A\xA\x41\x70\x70\x20\x77\x69\x6C\x6C\x20\x72\x75\x6E\x20\x77\x69\x74\x68\x20\x48\x4D\x44\x20\x64\x65\x66\x61\x75\x6C\x74\x20\x46\x50\x53\x2E\xA\x31\x32\x30\x20\x46\x50\x53\x3A\xA\x44\x65\x63\x6C\x61\x72\x65\x20\x74\x68\x65\x20\x41\x70\x70\x20\x63\x61\x6E\x20\x73\x75\x70\x70\x6F\x72\x74\x20\x75\x70\x20\x74\x6F\x20\x31\x32\x30\x20\x46\x50\x53\x20\x61\x6E\x64\x20\x74\x68\x65\x20\x48\x4D\x44\x20\x64\x69\x73\x70\x6C\x61\x79\x20\x77\x69\x6C\x6C\x20\x73\x77\x69\x74\x63\x68\x20\x74\x6F\x20\x31\x32\x30\x20\x46\x50\x53\x20\x74\x6F\x20\x72\x75\x6E\x20\x79\x6F\x75\x72\x20\x41\x70\x70\x20\x69\x66\x20\x69\x74\x20\x63\x61\x6E\x20\x73\x75\x70\x70\x6F\x72\x74\x2E\xA\x4E\x6F\x74\x69\x63\x65\x20\x3A\x20\x59\x6F\x75\x20\x6D\x75\x73\x74\x20\x74\x6F\x20\x74\x75\x6E\x65\x20\x79\x6F\x75\x72\x20\x41\x70\x70\x20\x74\x6F\x20\x6D\x61\x6B\x65\x20\x69\x74\x20\x73\x75\x69\x74\x61\x62\x6C\x65\x20\x66\x6F\x72\x20\x72\x75\x6E\x6E\x69\x6E\x67\x20\x61\x74\x20\x31\x32\x30\x46\x50\x53\x2C\x20\x6F\x72\x20\x41\x70\x70\x20\x6D\x69\x67\x68\x74\x20\x67\x65\x74\x20\x77\x6F\x72\x73\x65\x20\x72\x65\x6E\x64\x65\x72\x69\x6E\x67\x20\x70\x65\x72\x66\x6F\x72\x6D\x61\x6E\x63\x65\x20\x61\x6E\x64\x20\x63\x61\x75\x73\x65\x20\x6A\x69\x74\x74\x65\x72\x20\x70\x68\x65\x6E\x6F\x6D\x65\x6E\x6F\x6E\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_waveXRFolder(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x57\x61\x76\x65\x20\x58\x52\x20\x46\x65\x61\x74\x75\x72\x65\x20\x50\x61\x63\x6B\x61\x67\x65\x20\x66\x6F\x6C\x64\x65\x72\x20\x6C\x6F\x63\x61\x74\x69\x6F\x6E"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_waveEssenceFolder(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x57\x61\x76\x65\x20\x45\x73\x73\x65\x6E\x63\x65\x20\x46\x65\x61\x74\x75\x72\x65\x20\x50\x61\x63\x6B\x61\x67\x65\x20\x66\x6F\x6C\x64\x65\x72\x20\x6C\x6F\x63\x61\x74\x69\x6F\x6E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_displayGamutPreferences(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x44\x69\x73\x70\x6C\x61\x79\x20\x67\x61\x6D\x75\x74\x20\x70\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x73\x2E\x20\x20\x57\x61\x76\x65\x20\x77\x69\x6C\x6C\x20\x74\x72\x79\x20\x74\x6F\x20\x61\x70\x70\x6C\x79\x20\x67\x61\x6D\x75\x74\x20\x66\x72\x6F\x6D\x20\x74\x68\x65\x20\x74\x6F\x70\x20\x6F\x66\x20\x74\x68\x65\x20\x6C\x69\x73\x74\x2E\x20\x20\x57\x68\x65\x6E\x20\x74\x68\x65\x20\x65\x61\x72\x69\x65\x72\x20\x67\x61\x6D\x75\x74\x20\x69\x73\x20\x61\x63\x63\x65\x70\x74\x65\x64\x2C\x20\x57\x61\x76\x65\x20\x77\x69\x6C\x6C\x20\x6E\x6F\x74\x20\x74\x72\x79\x20\x74\x68\x65\x20\x6E\x65\x78\x74\x2E\x20\x20\x4E\x6F\x74\x20\x61\x6C\x6C\x20\x67\x61\x6D\x75\x74\x20\x70\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x68\x65\x72\x65\x20\x63\x61\x6E\x20\x62\x65\x20\x61\x63\x63\x65\x70\x74\x65\x64\x2E\x20\x20\x49\x74\x27\x73\x20\x64\x65\x70\x65\x6E\x64\x65\x64\x20\x6F\x6E\x20\x64\x65\x76\x69\x63\x65\x2E\x20\x20\x54\x68\x65\x20\x73\x52\x47\x42\x20\x69\x73\x20\x64\x65\x66\x61\x75\x6C\x74\x20\x61\x63\x63\x65\x70\x74\x61\x62\x6C\x65\x20\x66\x6F\x72\x20\x61\x6C\x6C\x20\x64\x65\x76\x69\x63\x65\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_enableAutoFallbackForMultiLayer(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x6C\x65\x63\x74\x20\x74\x6F\x20\x65\x6E\x61\x62\x6C\x65\x20\x61\x75\x74\x6F\x20\x66\x61\x6C\x6C\x62\x61\x63\x6B\x20\x77\x68\x65\x6E\x20\x75\x73\x69\x6E\x67\x20\x4D\x75\x6C\x74\x69\x2D\x4C\x61\x79\x65\x72\x20\x28\x69\x2E\x65\x2E\x20\x4C\x61\x79\x65\x72\x73\x20\x74\x68\x61\x74\x20\x65\x78\x63\x65\x65\x64\x20\x74\x68\x65\x20\x6D\x61\x78\x69\x6D\x75\x6D\x20\x6C\x61\x79\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x77\x69\x6C\x6C\x20\x62\x65\x20\x72\x65\x6E\x64\x65\x72\x65\x64\x20\x69\x6E\x2D\x67\x61\x6D\x65\x29\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_EnableTracker(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x6C\x65\x63\x74\x20\x74\x6F\x20\x65\x6E\x61\x62\x6C\x65\x20\x74\x68\x65\x20\x54\x72\x61\x63\x6B\x65\x72\x20\x66\x65\x61\x74\x75\x72\x65\x20\x77\x68\x65\x6E\x20\x41\x50\x20\x73\x74\x61\x72\x74\x73\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_EnableNaturalHand(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x6C\x65\x63\x74\x20\x74\x6F\x20\x65\x6E\x61\x62\x6C\x65\x20\x74\x68\x65\x20\x4E\x61\x74\x75\x72\x61\x6C\x20\x48\x61\x6E\x64\x20\x66\x65\x61\x74\x75\x72\x65\x20\x77\x68\x65\x6E\x20\x41\x50\x20\x73\x74\x61\x72\x74\x73\x2E"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_EnableElectronicHand(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x6C\x65\x63\x74\x20\x74\x6F\x20\x65\x6E\x61\x62\x6C\x65\x20\x74\x68\x65\x20\x45\x6C\x65\x63\x74\x72\x6F\x6E\x69\x63\x20\x48\x61\x6E\x64\x20\x66\x65\x61\x74\x75\x72\x65\x20\x77\x68\x65\x6E\x20\x41\x50\x20\x73\x74\x61\x72\x74\x73\x2E"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_EnableLipExpression(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x6C\x65\x63\x74\x20\x74\x6F\x20\x65\x6E\x61\x62\x6C\x65\x20\x74\x68\x65\x20\x4C\x69\x70\x20\x45\x78\x70\x72\x65\x73\x73\x69\x6F\x6E\x20\x66\x65\x61\x74\x75\x72\x65\x20\x77\x68\x65\x6E\x20\x41\x50\x20\x73\x74\x61\x72\x74\x73\x2E"), NULL);
	}
}
static void WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_EnableEyeExpression(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x6C\x65\x63\x74\x20\x74\x6F\x20\x65\x6E\x61\x62\x6C\x65\x20\x74\x68\x65\x20\x45\x79\x65\x20\x45\x78\x70\x72\x65\x73\x73\x69\x6F\x6E\x20\x66\x65\x61\x74\x75\x72\x65\x20\x77\x68\x65\x6E\x20\x41\x50\x20\x73\x74\x61\x72\x74\x73\x2E"), NULL);
	}
}
static void U3CPrivateImplementationDetailsU3E_t322B1CF7EC4E28105817E1FDC3D7714BBDC98379_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Wave_XRSDK_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Wave_XRSDK_AttributeGenerators[44] = 
{
	InputDeviceTracker_t33E181C3B7AD73249C6315BA7FAD459E59EAC223_CustomAttributesCacheGenerator,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t322B1CF7EC4E28105817E1FDC3D7714BBDC98379_CustomAttributesCacheGenerator,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_preferedStereoRenderingPath,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_useDoubleWidth,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_useRenderMask,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_enableTimeWarpStabilizedMode,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_adaptiveQualityMode,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_AQ_SendQualityEvent,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_AQ_AutoFoveation,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_useAQDynamicResolution,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_DR_DefaultIndex,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_DR_TextSize,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_DR_ResolutionScaleList,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_foveationMode,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_leftClearVisionFOV,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_rightClearVisionFOV,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_leftPeripheralQuality,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_rightPeripheralQuality,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_overridePixelDensity,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_pixelDensity,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_resolutionScale,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_debugLogFlagForNative,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_debugLogFlagForUnity,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_overrideLogFlagForNative,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_useCMPChecker,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_amcMode,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_amcModeConfirm,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_fadeOut,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_enableFSE,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_FSE_Level,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_supportedFPS,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_waveXRFolder,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_waveEssenceFolder,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_displayGamutPreferences,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_enableAutoFallbackForMultiLayer,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_EnableTracker,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_EnableNaturalHand,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_EnableElectronicHand,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_EnableLipExpression,
	WaveXRSettings_t85C3BF8654D42505A5E504BD443912E2EA36B4C6_CustomAttributesCacheGenerator_EnableEyeExpression,
	InputDeviceTracker_t33E181C3B7AD73249C6315BA7FAD459E59EAC223_CustomAttributesCacheGenerator_InputDeviceTracker_Name_m537363EED39D3503C254BB8918CD773521F980D8,
	InputDeviceTracker_t33E181C3B7AD73249C6315BA7FAD459E59EAC223_CustomAttributesCacheGenerator_InputDeviceTracker_SerialNumber_m774B977F50E13D5408ACDEF62AF39C1381E7FBE8,
	Wave_XRSDK_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
