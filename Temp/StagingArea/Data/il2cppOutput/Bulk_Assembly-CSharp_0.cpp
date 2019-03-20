#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// controlaArma
struct controlaArma_t304522419;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// controlaBala
struct controlaBala_t734916306;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.Object
struct Object_t1021602117;
// controlaCamera
struct controlaCamera_t2416640349;
// controlaInimigo
struct controlaInimigo_t2784593982;
// UnityEngine.Animator
struct Animator_t69676727;
// controlaJogador
struct controlaJogador_t774392268;
// UnityEngine.Camera
struct Camera_t189460977;
// geradorInimigo
struct geradorInimigo_t4119446484;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Void
struct Void_t1841601450;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t834278767;

extern RuntimeClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1756533147_m3064851704_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral3645101709;
extern const uint32_t controlaArma_Update_m2736495123_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t4233889191_m520013213_RuntimeMethod_var;
extern const uint32_t controlaBala_Start_m1196263667_MetadataUsageId;
extern RuntimeClass* Vector3_t2243707580_il2cpp_TypeInfo_var;
extern const uint32_t controlaBala_FixedUpdate_m3981099106_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral607966824;
extern const uint32_t controlaBala_OnTriggerEnter_m2717093051_MetadataUsageId;
extern const uint32_t controlaCamera_Start_m1995409662_MetadataUsageId;
extern const uint32_t controlaCamera_Update_m697541789_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_t69676727_m475627522_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral4103707378;
extern const uint32_t controlaInimigo_Start_m2944981827_MetadataUsageId;
extern RuntimeClass* Quaternion_t4030073918_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral903977439;
extern const uint32_t controlaInimigo_FixedUpdate_m3003141658_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TiscontrolaJogador_t774392268_m796051139_RuntimeMethod_var;
extern const uint32_t controlaInimigo_AtacaJogador_m2067341835_MetadataUsageId;
extern const uint32_t controlaJogador_Start_m3180244007_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral855845486;
extern Il2CppCodeGenString* _stringLiteral1635882288;
extern Il2CppCodeGenString* _stringLiteral776382294;
extern Il2CppCodeGenString* _stringLiteral2328218740;
extern const uint32_t controlaJogador_Update_m3029976654_MetadataUsageId;
extern const uint32_t controlaJogador_FixedUpdate_m575219556_MetadataUsageId;
extern const uint32_t geradorInimigo_Update_m832062302_MetadataUsageId;



#ifndef U3CMODULEU3E_T3783534231_H
#define U3CMODULEU3E_T3783534231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534231 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534231_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t1328083999* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t1328083999* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1328083999** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1328083999* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef LAYERMASK_T3188175821_H
#define LAYERMASK_T3188175821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3188175821 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3188175821, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3188175821_H
#ifndef INT32_T2071877448_H
#define INT32_T2071877448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2071877448 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2071877448, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2071877448_H
#ifndef VECTOR2_T2243707579_H
#define VECTOR2_T2243707579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2243707579 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2243707579_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2243707579  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2243707579  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2243707579  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2243707579  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2243707579  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2243707579  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2243707579  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2243707579  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2243707579  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2243707579 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2243707579  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___oneVector_3)); }
	inline Vector2_t2243707579  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2243707579 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2243707579  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___upVector_4)); }
	inline Vector2_t2243707579  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2243707579 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2243707579  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___downVector_5)); }
	inline Vector2_t2243707579  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2243707579 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2243707579  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___leftVector_6)); }
	inline Vector2_t2243707579  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2243707579 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2243707579  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___rightVector_7)); }
	inline Vector2_t2243707579  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2243707579 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2243707579  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2243707579  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2243707579 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2243707579  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2243707579  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2243707579 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2243707579  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2243707579_H
#ifndef SINGLE_T2076509932_H
#define SINGLE_T2076509932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2076509932 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2076509932, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2076509932_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef BOOLEAN_T3825574718_H
#define BOOLEAN_T3825574718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3825574718 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3825574718, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3825574718_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3825574718_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
#ifndef VECTOR3_T2243707580_H
#define VECTOR3_T2243707580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2243707580 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2243707580_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2243707580  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2243707580  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2243707580  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2243707580  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2243707580  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2243707580  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2243707580  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2243707580  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2243707580  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2243707580  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2243707580  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2243707580 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2243707580  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___oneVector_5)); }
	inline Vector3_t2243707580  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2243707580 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2243707580  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___upVector_6)); }
	inline Vector3_t2243707580  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2243707580 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2243707580  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___downVector_7)); }
	inline Vector3_t2243707580  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2243707580 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2243707580  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___leftVector_8)); }
	inline Vector3_t2243707580  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2243707580 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2243707580  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___rightVector_9)); }
	inline Vector3_t2243707580  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2243707580 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2243707580  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2243707580  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2243707580 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2243707580  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___backVector_11)); }
	inline Vector3_t2243707580  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2243707580 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2243707580  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2243707580  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2243707580 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2243707580  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2243707580  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2243707580 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2243707580  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2243707580_H
#ifndef QUATERNION_T4030073918_H
#define QUATERNION_T4030073918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t4030073918 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t4030073918_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t4030073918  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t4030073918_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t4030073918  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t4030073918 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t4030073918  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T4030073918_H
#ifndef OBJECT_T1021602117_H
#define OBJECT_T1021602117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1021602117  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021602117, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1021602117_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1021602117_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1021602117_H
#ifndef RAY_T2469606224_H
#define RAY_T2469606224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t2469606224 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t2243707580  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t2243707580  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Origin_0)); }
	inline Vector3_t2243707580  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t2243707580 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t2243707580  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Direction_1)); }
	inline Vector3_t2243707580  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t2243707580 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t2243707580  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T2469606224_H
#ifndef RAYCASTHIT_T87180320_H
#define RAYCASTHIT_T87180320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t87180320 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t2243707580  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t2243707580  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2243707579  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t3497673348 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Point_0)); }
	inline Vector3_t2243707580  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t2243707580 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t2243707580  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Normal_1)); }
	inline Vector3_t2243707580  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t2243707580 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t2243707580  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_UV_4)); }
	inline Vector2_t2243707579  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2243707579 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2243707579  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t87180320, ___m_Collider_5)); }
	inline Collider_t3497673348 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t3497673348 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t3497673348 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t87180320_marshaled_pinvoke
{
	Vector3_t2243707580  ___m_Point_0;
	Vector3_t2243707580  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2243707579  ___m_UV_4;
	Collider_t3497673348 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t87180320_marshaled_com
{
	Vector3_t2243707580  ___m_Point_0;
	Vector3_t2243707580  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2243707579  ___m_UV_4;
	Collider_t3497673348 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T87180320_H
#ifndef COMPONENT_T3819376471_H
#define COMPONENT_T3819376471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3819376471  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3819376471_H
#ifndef GAMEOBJECT_T1756533147_H
#define GAMEOBJECT_T1756533147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1756533147  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1756533147_H
#ifndef TRANSFORM_T3275118058_H
#define TRANSFORM_T3275118058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3275118058  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3275118058_H
#ifndef BEHAVIOUR_T955675639_H
#define BEHAVIOUR_T955675639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t955675639  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T955675639_H
#ifndef RIGIDBODY_T4233889191_H
#define RIGIDBODY_T4233889191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t4233889191  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T4233889191_H
#ifndef COLLIDER_T3497673348_H
#define COLLIDER_T3497673348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t3497673348  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T3497673348_H
#ifndef CAMERA_T189460977_H
#define CAMERA_T189460977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t189460977  : public Behaviour_t955675639
{
public:

public:
};

struct Camera_t189460977_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t834278767 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t834278767 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t834278767 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t189460977_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t834278767 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t834278767 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t834278767 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t189460977_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t834278767 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t834278767 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t834278767 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t189460977_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t834278767 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t834278767 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t834278767 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T189460977_H
#ifndef MONOBEHAVIOUR_T1158329972_H
#define MONOBEHAVIOUR_T1158329972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1158329972  : public Behaviour_t955675639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1158329972_H
#ifndef ANIMATOR_T69676727_H
#define ANIMATOR_T69676727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t69676727  : public Behaviour_t955675639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T69676727_H
#ifndef CONTROLAARMA_T304522419_H
#define CONTROLAARMA_T304522419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// controlaArma
struct  controlaArma_t304522419  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject controlaArma::Bala
	GameObject_t1756533147 * ___Bala_2;
	// UnityEngine.GameObject controlaArma::canoArma
	GameObject_t1756533147 * ___canoArma_3;

public:
	inline static int32_t get_offset_of_Bala_2() { return static_cast<int32_t>(offsetof(controlaArma_t304522419, ___Bala_2)); }
	inline GameObject_t1756533147 * get_Bala_2() const { return ___Bala_2; }
	inline GameObject_t1756533147 ** get_address_of_Bala_2() { return &___Bala_2; }
	inline void set_Bala_2(GameObject_t1756533147 * value)
	{
		___Bala_2 = value;
		Il2CppCodeGenWriteBarrier((&___Bala_2), value);
	}

	inline static int32_t get_offset_of_canoArma_3() { return static_cast<int32_t>(offsetof(controlaArma_t304522419, ___canoArma_3)); }
	inline GameObject_t1756533147 * get_canoArma_3() const { return ___canoArma_3; }
	inline GameObject_t1756533147 ** get_address_of_canoArma_3() { return &___canoArma_3; }
	inline void set_canoArma_3(GameObject_t1756533147 * value)
	{
		___canoArma_3 = value;
		Il2CppCodeGenWriteBarrier((&___canoArma_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLAARMA_T304522419_H
#ifndef CONTROLACAMERA_T2416640349_H
#define CONTROLACAMERA_T2416640349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// controlaCamera
struct  controlaCamera_t2416640349  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject controlaCamera::Jogador
	GameObject_t1756533147 * ___Jogador_2;
	// UnityEngine.Vector3 controlaCamera::distCompensar
	Vector3_t2243707580  ___distCompensar_3;

public:
	inline static int32_t get_offset_of_Jogador_2() { return static_cast<int32_t>(offsetof(controlaCamera_t2416640349, ___Jogador_2)); }
	inline GameObject_t1756533147 * get_Jogador_2() const { return ___Jogador_2; }
	inline GameObject_t1756533147 ** get_address_of_Jogador_2() { return &___Jogador_2; }
	inline void set_Jogador_2(GameObject_t1756533147 * value)
	{
		___Jogador_2 = value;
		Il2CppCodeGenWriteBarrier((&___Jogador_2), value);
	}

	inline static int32_t get_offset_of_distCompensar_3() { return static_cast<int32_t>(offsetof(controlaCamera_t2416640349, ___distCompensar_3)); }
	inline Vector3_t2243707580  get_distCompensar_3() const { return ___distCompensar_3; }
	inline Vector3_t2243707580 * get_address_of_distCompensar_3() { return &___distCompensar_3; }
	inline void set_distCompensar_3(Vector3_t2243707580  value)
	{
		___distCompensar_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLACAMERA_T2416640349_H
#ifndef GERADORINIMIGO_T4119446484_H
#define GERADORINIMIGO_T4119446484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// geradorInimigo
struct  geradorInimigo_t4119446484  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject geradorInimigo::Zumbi
	GameObject_t1756533147 * ___Zumbi_2;
	// System.Single geradorInimigo::contarTempo
	float ___contarTempo_3;
	// System.Single geradorInimigo::tempoGerarZumbi
	float ___tempoGerarZumbi_4;

public:
	inline static int32_t get_offset_of_Zumbi_2() { return static_cast<int32_t>(offsetof(geradorInimigo_t4119446484, ___Zumbi_2)); }
	inline GameObject_t1756533147 * get_Zumbi_2() const { return ___Zumbi_2; }
	inline GameObject_t1756533147 ** get_address_of_Zumbi_2() { return &___Zumbi_2; }
	inline void set_Zumbi_2(GameObject_t1756533147 * value)
	{
		___Zumbi_2 = value;
		Il2CppCodeGenWriteBarrier((&___Zumbi_2), value);
	}

	inline static int32_t get_offset_of_contarTempo_3() { return static_cast<int32_t>(offsetof(geradorInimigo_t4119446484, ___contarTempo_3)); }
	inline float get_contarTempo_3() const { return ___contarTempo_3; }
	inline float* get_address_of_contarTempo_3() { return &___contarTempo_3; }
	inline void set_contarTempo_3(float value)
	{
		___contarTempo_3 = value;
	}

	inline static int32_t get_offset_of_tempoGerarZumbi_4() { return static_cast<int32_t>(offsetof(geradorInimigo_t4119446484, ___tempoGerarZumbi_4)); }
	inline float get_tempoGerarZumbi_4() const { return ___tempoGerarZumbi_4; }
	inline float* get_address_of_tempoGerarZumbi_4() { return &___tempoGerarZumbi_4; }
	inline void set_tempoGerarZumbi_4(float value)
	{
		___tempoGerarZumbi_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GERADORINIMIGO_T4119446484_H
#ifndef CONTROLABALA_T734916306_H
#define CONTROLABALA_T734916306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// controlaBala
struct  controlaBala_t734916306  : public MonoBehaviour_t1158329972
{
public:
	// System.Single controlaBala::Velocidade
	float ___Velocidade_2;
	// UnityEngine.Rigidbody controlaBala::rgBala
	Rigidbody_t4233889191 * ___rgBala_3;

public:
	inline static int32_t get_offset_of_Velocidade_2() { return static_cast<int32_t>(offsetof(controlaBala_t734916306, ___Velocidade_2)); }
	inline float get_Velocidade_2() const { return ___Velocidade_2; }
	inline float* get_address_of_Velocidade_2() { return &___Velocidade_2; }
	inline void set_Velocidade_2(float value)
	{
		___Velocidade_2 = value;
	}

	inline static int32_t get_offset_of_rgBala_3() { return static_cast<int32_t>(offsetof(controlaBala_t734916306, ___rgBala_3)); }
	inline Rigidbody_t4233889191 * get_rgBala_3() const { return ___rgBala_3; }
	inline Rigidbody_t4233889191 ** get_address_of_rgBala_3() { return &___rgBala_3; }
	inline void set_rgBala_3(Rigidbody_t4233889191 * value)
	{
		___rgBala_3 = value;
		Il2CppCodeGenWriteBarrier((&___rgBala_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLABALA_T734916306_H
#ifndef CONTROLAINIMIGO_T2784593982_H
#define CONTROLAINIMIGO_T2784593982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// controlaInimigo
struct  controlaInimigo_t2784593982  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject controlaInimigo::Jogador
	GameObject_t1756533147 * ___Jogador_2;
	// System.Single controlaInimigo::Velocidade
	float ___Velocidade_3;
	// UnityEngine.Rigidbody controlaInimigo::rgInimigo
	Rigidbody_t4233889191 * ___rgInimigo_4;
	// UnityEngine.Animator controlaInimigo::anmtrInimigo
	Animator_t69676727 * ___anmtrInimigo_5;

public:
	inline static int32_t get_offset_of_Jogador_2() { return static_cast<int32_t>(offsetof(controlaInimigo_t2784593982, ___Jogador_2)); }
	inline GameObject_t1756533147 * get_Jogador_2() const { return ___Jogador_2; }
	inline GameObject_t1756533147 ** get_address_of_Jogador_2() { return &___Jogador_2; }
	inline void set_Jogador_2(GameObject_t1756533147 * value)
	{
		___Jogador_2 = value;
		Il2CppCodeGenWriteBarrier((&___Jogador_2), value);
	}

	inline static int32_t get_offset_of_Velocidade_3() { return static_cast<int32_t>(offsetof(controlaInimigo_t2784593982, ___Velocidade_3)); }
	inline float get_Velocidade_3() const { return ___Velocidade_3; }
	inline float* get_address_of_Velocidade_3() { return &___Velocidade_3; }
	inline void set_Velocidade_3(float value)
	{
		___Velocidade_3 = value;
	}

	inline static int32_t get_offset_of_rgInimigo_4() { return static_cast<int32_t>(offsetof(controlaInimigo_t2784593982, ___rgInimigo_4)); }
	inline Rigidbody_t4233889191 * get_rgInimigo_4() const { return ___rgInimigo_4; }
	inline Rigidbody_t4233889191 ** get_address_of_rgInimigo_4() { return &___rgInimigo_4; }
	inline void set_rgInimigo_4(Rigidbody_t4233889191 * value)
	{
		___rgInimigo_4 = value;
		Il2CppCodeGenWriteBarrier((&___rgInimigo_4), value);
	}

	inline static int32_t get_offset_of_anmtrInimigo_5() { return static_cast<int32_t>(offsetof(controlaInimigo_t2784593982, ___anmtrInimigo_5)); }
	inline Animator_t69676727 * get_anmtrInimigo_5() const { return ___anmtrInimigo_5; }
	inline Animator_t69676727 ** get_address_of_anmtrInimigo_5() { return &___anmtrInimigo_5; }
	inline void set_anmtrInimigo_5(Animator_t69676727 * value)
	{
		___anmtrInimigo_5 = value;
		Il2CppCodeGenWriteBarrier((&___anmtrInimigo_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLAINIMIGO_T2784593982_H
#ifndef CONTROLAJOGADOR_T774392268_H
#define CONTROLAJOGADOR_T774392268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// controlaJogador
struct  controlaJogador_t774392268  : public MonoBehaviour_t1158329972
{
public:
	// System.Single controlaJogador::Velocidade
	float ___Velocidade_2;
	// UnityEngine.Vector3 controlaJogador::direcao
	Vector3_t2243707580  ___direcao_3;
	// UnityEngine.LayerMask controlaJogador::mascaraChao
	LayerMask_t3188175821  ___mascaraChao_4;
	// UnityEngine.GameObject controlaJogador::textoJogador
	GameObject_t1756533147 * ___textoJogador_5;
	// System.Boolean controlaJogador::vivo
	bool ___vivo_6;
	// UnityEngine.Rigidbody controlaJogador::rgJogador
	Rigidbody_t4233889191 * ___rgJogador_7;
	// UnityEngine.Animator controlaJogador::anmtrJogador
	Animator_t69676727 * ___anmtrJogador_8;

public:
	inline static int32_t get_offset_of_Velocidade_2() { return static_cast<int32_t>(offsetof(controlaJogador_t774392268, ___Velocidade_2)); }
	inline float get_Velocidade_2() const { return ___Velocidade_2; }
	inline float* get_address_of_Velocidade_2() { return &___Velocidade_2; }
	inline void set_Velocidade_2(float value)
	{
		___Velocidade_2 = value;
	}

	inline static int32_t get_offset_of_direcao_3() { return static_cast<int32_t>(offsetof(controlaJogador_t774392268, ___direcao_3)); }
	inline Vector3_t2243707580  get_direcao_3() const { return ___direcao_3; }
	inline Vector3_t2243707580 * get_address_of_direcao_3() { return &___direcao_3; }
	inline void set_direcao_3(Vector3_t2243707580  value)
	{
		___direcao_3 = value;
	}

	inline static int32_t get_offset_of_mascaraChao_4() { return static_cast<int32_t>(offsetof(controlaJogador_t774392268, ___mascaraChao_4)); }
	inline LayerMask_t3188175821  get_mascaraChao_4() const { return ___mascaraChao_4; }
	inline LayerMask_t3188175821 * get_address_of_mascaraChao_4() { return &___mascaraChao_4; }
	inline void set_mascaraChao_4(LayerMask_t3188175821  value)
	{
		___mascaraChao_4 = value;
	}

	inline static int32_t get_offset_of_textoJogador_5() { return static_cast<int32_t>(offsetof(controlaJogador_t774392268, ___textoJogador_5)); }
	inline GameObject_t1756533147 * get_textoJogador_5() const { return ___textoJogador_5; }
	inline GameObject_t1756533147 ** get_address_of_textoJogador_5() { return &___textoJogador_5; }
	inline void set_textoJogador_5(GameObject_t1756533147 * value)
	{
		___textoJogador_5 = value;
		Il2CppCodeGenWriteBarrier((&___textoJogador_5), value);
	}

	inline static int32_t get_offset_of_vivo_6() { return static_cast<int32_t>(offsetof(controlaJogador_t774392268, ___vivo_6)); }
	inline bool get_vivo_6() const { return ___vivo_6; }
	inline bool* get_address_of_vivo_6() { return &___vivo_6; }
	inline void set_vivo_6(bool value)
	{
		___vivo_6 = value;
	}

	inline static int32_t get_offset_of_rgJogador_7() { return static_cast<int32_t>(offsetof(controlaJogador_t774392268, ___rgJogador_7)); }
	inline Rigidbody_t4233889191 * get_rgJogador_7() const { return ___rgJogador_7; }
	inline Rigidbody_t4233889191 ** get_address_of_rgJogador_7() { return &___rgJogador_7; }
	inline void set_rgJogador_7(Rigidbody_t4233889191 * value)
	{
		___rgJogador_7 = value;
		Il2CppCodeGenWriteBarrier((&___rgJogador_7), value);
	}

	inline static int32_t get_offset_of_anmtrJogador_8() { return static_cast<int32_t>(offsetof(controlaJogador_t774392268, ___anmtrJogador_8)); }
	inline Animator_t69676727 * get_anmtrJogador_8() const { return ___anmtrJogador_8; }
	inline Animator_t69676727 ** get_address_of_anmtrJogador_8() { return &___anmtrJogador_8; }
	inline void set_anmtrJogador_8(Animator_t69676727 * value)
	{
		___anmtrJogador_8 = value;
		Il2CppCodeGenWriteBarrier((&___anmtrJogador_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLAJOGADOR_T774392268_H


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m3829784634_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t2243707580  p1, Quaternion_t4030073918  p2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2724124387_gshared (Component_t3819376471 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2812611596_gshared (GameObject_t1756533147 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1825328214 (MonoBehaviour_t1158329972 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C"  bool Input_GetButtonDown_m717298472 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m3490276752 (GameObject_t1756533147 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m2304215762 (Transform_t3275118058 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t4030073918  Transform_get_rotation_m2617026815 (Transform_t3275118058 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1756533147_m3064851704(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1756533147 * (*) (RuntimeObject * /* static, unused */, GameObject_t1756533147 *, Vector3_t2243707580 , Quaternion_t4030073918 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, method) ((  Rigidbody_t4233889191 * (*) (Component_t3819376471 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2724124387_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern "C"  Vector3_t2243707580  Rigidbody_get_position_m3169298437 (Rigidbody_t4233889191 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m3374354972 (Component_t3819376471 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C"  Vector3_t2243707580  Transform_get_forward_m2144220796 (Transform_t3275118058 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  Vector3_op_Multiply_m2498445460 (RuntimeObject * __this /* static, unused */, Vector3_t2243707580  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m3925508629 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_op_Addition_m394909128 (RuntimeObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
extern "C"  void Rigidbody_MovePosition_m3548412564 (Rigidbody_t4233889191 * __this, Vector3_t2243707580  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Component::get_tag()
extern "C"  String_t* Component_get_tag_m124558427 (Component_t3819376471 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m2159020946 (Component_t3819376471 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m3959286051 (RuntimeObject * __this /* static, unused */, Object_t1021602117 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_op_Subtraction_m4046047256 (RuntimeObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2942701431 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
extern "C"  GameObject_t1756533147 * GameObject_FindWithTag_m3831463693 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m3327624272 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3275118058 * Transform_GetChild_m3136145191 (Transform_t3275118058 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m2693135142 (GameObject_t1756533147 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t69676727_m475627522(__this, method) ((  Animator_t69676727 * (*) (Component_t3819376471 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2724124387_gshared)(__this, method)
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Distance_m2960507181 (RuntimeObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C"  Quaternion_t4030073918  Quaternion_LookRotation_m3947405160 (RuntimeObject * __this /* static, unused */, Vector3_t2243707580  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
extern "C"  void Rigidbody_MoveRotation_m1493332569 (Rigidbody_t4233889191 * __this, Quaternion_t4030073918  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t2243707580  Vector3_get_normalized_m1057036856 (Vector3_t2243707580 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C"  void Animator_SetBool_m312734517 (Animator_t69676727 * __this, String_t* p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
extern "C"  void Time_set_timeScale_m2966928564 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<controlaJogador>()
#define GameObject_GetComponent_TiscontrolaJogador_t774392268_m796051139(__this, method) ((  controlaJogador_t774392268 * (*) (GameObject_t1756533147 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2812611596_gshared)(__this, method)
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m948504553 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m1555724485 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t2243707580  Vector3_get_zero_m3202043185 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Inequality_m1641959443 (RuntimeObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m2357316016 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t189460977 * Camera_get_main_m881971336 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t2243707580  Input_get_mousePosition_m2069200279 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C"  Ray_t2469606224  Camera_ScreenPointToRay_m3033403101 (Camera_t189460977 * __this, Vector3_t2243707580  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C"  int32_t LayerMask_op_Implicit_m1604355880 (RuntimeObject * __this /* static, unused */, LayerMask_t3188175821  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m2251823624 (RuntimeObject * __this /* static, unused */, Ray_t2469606224  p0, RaycastHit_t87180320 * p1, float p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C"  Vector3_t2243707580  RaycastHit_get_point_m3350410423 (RaycastHit_t87180320 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void controlaArma::.ctor()
extern "C"  void controlaArma__ctor_m4017663564 (controlaArma_t304522419 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void controlaArma::Start()
extern "C"  void controlaArma_Start_m1837724928 (controlaArma_t304522419 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void controlaArma::Update()
extern "C"  void controlaArma_Update_m2736495123 (controlaArma_t304522419 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (controlaArma_Update_m2736495123_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetButtonDown_m717298472(NULL /*static, unused*/, _stringLiteral3645101709, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		GameObject_t1756533147 * L_1 = __this->get_Bala_2();
		GameObject_t1756533147 * L_2 = __this->get_canoArma_3();
		Transform_t3275118058 * L_3 = GameObject_get_transform_m3490276752(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_position_m2304215762(L_3, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_5 = __this->get_canoArma_3();
		Transform_t3275118058 * L_6 = GameObject_get_transform_m3490276752(L_5, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_7 = Transform_get_rotation_m2617026815(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_1, L_4, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_RuntimeMethod_var);
	}

IL_003b:
	{
		return;
	}
}
// System.Void controlaBala::.ctor()
extern "C"  void controlaBala__ctor_m3180092975 (controlaBala_t734916306 * __this, const RuntimeMethod* method)
{
	{
		__this->set_Velocidade_2((20.0f));
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void controlaBala::Start()
extern "C"  void controlaBala_Start_m1196263667 (controlaBala_t734916306 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (controlaBala_Start_m1196263667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t4233889191 * L_0 = Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t4233889191_m520013213_RuntimeMethod_var);
		__this->set_rgBala_3(L_0);
		return;
	}
}
// System.Void controlaBala::FixedUpdate()
extern "C"  void controlaBala_FixedUpdate_m3981099106 (controlaBala_t734916306 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (controlaBala_FixedUpdate_m3981099106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t4233889191 * L_0 = __this->get_rgBala_3();
		Rigidbody_t4233889191 * L_1 = __this->get_rgBala_3();
		Vector3_t2243707580  L_2 = Rigidbody_get_position_m3169298437(L_1, /*hidden argument*/NULL);
		Transform_t3275118058 * L_3 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_forward_m2144220796(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_Velocidade_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_6 = Vector3_op_Multiply_m2498445460(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m3925508629(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_8 = Vector3_op_Multiply_m2498445460(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t2243707580  L_9 = Vector3_op_Addition_m394909128(NULL /*static, unused*/, L_2, L_8, /*hidden argument*/NULL);
		Rigidbody_MovePosition_m3548412564(L_0, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void controlaBala::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void controlaBala_OnTriggerEnter_m2717093051 (controlaBala_t734916306 * __this, Collider_t3497673348 * ___objtColisao0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (controlaBala_OnTriggerEnter_m2717093051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t3497673348 * L_0 = ___objtColisao0;
		String_t* L_1 = Component_get_tag_m124558427(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_1, _stringLiteral607966824, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Collider_t3497673348 * L_3 = ___objtColisao0;
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m2159020946(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m3959286051(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		GameObject_t1756533147 * L_5 = Component_get_gameObject_m2159020946(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m3959286051(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void controlaCamera::.ctor()
extern "C"  void controlaCamera__ctor_m3757114230 (controlaCamera_t2416640349 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void controlaCamera::Start()
extern "C"  void controlaCamera_Start_m1995409662 (controlaCamera_t2416640349 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (controlaCamera_Start_m1995409662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m2304215762(L_0, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_2 = __this->get_Jogador_2();
		Transform_t3275118058 * L_3 = GameObject_get_transform_m3490276752(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_position_m2304215762(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_5 = Vector3_op_Subtraction_m4046047256(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->set_distCompensar_3(L_5);
		return;
	}
}
// System.Void controlaCamera::Update()
extern "C"  void controlaCamera_Update_m697541789 (controlaCamera_t2416640349 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (controlaCamera_Update_m697541789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_1 = __this->get_Jogador_2();
		Transform_t3275118058 * L_2 = GameObject_get_transform_m3490276752(L_1, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m2304215762(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = __this->get_distCompensar_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_5 = Vector3_op_Addition_m394909128(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_m2942701431(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void controlaInimigo::.ctor()
extern "C"  void controlaInimigo__ctor_m1654594167 (controlaInimigo_t2784593982 * __this, const RuntimeMethod* method)
{
	{
		__this->set_Velocidade_3((5.0f));
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void controlaInimigo::Start()
extern "C"  void controlaInimigo_Start_m2944981827 (controlaInimigo_t2784593982 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (controlaInimigo_Start_m2944981827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		GameObject_t1756533147 * L_0 = GameObject_FindWithTag_m3831463693(NULL /*static, unused*/, _stringLiteral4103707378, /*hidden argument*/NULL);
		__this->set_Jogador_2(L_0);
		int32_t L_1 = Random_Range_m3327624272(NULL /*static, unused*/, 1, ((int32_t)28), /*hidden argument*/NULL);
		V_0 = L_1;
		Transform_t3275118058 * L_2 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		Transform_t3275118058 * L_4 = Transform_GetChild_m3136145191(L_2, L_3, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_5 = Component_get_gameObject_m2159020946(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_m2693135142(L_5, (bool)1, /*hidden argument*/NULL);
		Rigidbody_t4233889191 * L_6 = Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t4233889191_m520013213_RuntimeMethod_var);
		__this->set_rgInimigo_4(L_6);
		Animator_t69676727 * L_7 = Component_GetComponent_TisAnimator_t69676727_m475627522(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t69676727_m475627522_RuntimeMethod_var);
		__this->set_anmtrInimigo_5(L_7);
		return;
	}
}
// System.Void controlaInimigo::Update()
extern "C"  void controlaInimigo_Update_m231009068 (controlaInimigo_t2784593982 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void controlaInimigo::FixedUpdate()
extern "C"  void controlaInimigo_FixedUpdate_m3003141658 (controlaInimigo_t2784593982 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (controlaInimigo_FixedUpdate_m3003141658_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t4030073918  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m2304215762(L_0, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_2 = __this->get_Jogador_2();
		Transform_t3275118058 * L_3 = GameObject_get_transform_m3490276752(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_position_m2304215762(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		float L_5 = Vector3_Distance_m2960507181(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		GameObject_t1756533147 * L_6 = __this->get_Jogador_2();
		Transform_t3275118058 * L_7 = GameObject_get_transform_m3490276752(L_6, /*hidden argument*/NULL);
		Vector3_t2243707580  L_8 = Transform_get_position_m2304215762(L_7, /*hidden argument*/NULL);
		Transform_t3275118058 * L_9 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_10 = Transform_get_position_m2304215762(L_9, /*hidden argument*/NULL);
		Vector3_t2243707580  L_11 = Vector3_op_Subtraction_m4046047256(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		Vector3_t2243707580  L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t4030073918_il2cpp_TypeInfo_var);
		Quaternion_t4030073918  L_13 = Quaternion_LookRotation_m3947405160(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		Rigidbody_t4233889191 * L_14 = __this->get_rgInimigo_4();
		Quaternion_t4030073918  L_15 = V_2;
		Rigidbody_MoveRotation_m1493332569(L_14, L_15, /*hidden argument*/NULL);
		float L_16 = V_0;
		if ((!(((double)(((double)((double)L_16)))) > ((double)(2.5)))))
		{
			goto IL_00b2;
		}
	}
	{
		Rigidbody_t4233889191 * L_17 = __this->get_rgInimigo_4();
		Rigidbody_t4233889191 * L_18 = __this->get_rgInimigo_4();
		Vector3_t2243707580  L_19 = Rigidbody_get_position_m3169298437(L_18, /*hidden argument*/NULL);
		Vector3_t2243707580  L_20 = Vector3_get_normalized_m1057036856((&V_1), /*hidden argument*/NULL);
		float L_21 = __this->get_Velocidade_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_22 = Vector3_op_Multiply_m2498445460(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		float L_23 = Time_get_deltaTime_m3925508629(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_24 = Vector3_op_Multiply_m2498445460(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		Vector3_t2243707580  L_25 = Vector3_op_Addition_m394909128(NULL /*static, unused*/, L_19, L_24, /*hidden argument*/NULL);
		Rigidbody_MovePosition_m3548412564(L_17, L_25, /*hidden argument*/NULL);
		Animator_t69676727 * L_26 = __this->get_anmtrInimigo_5();
		Animator_SetBool_m312734517(L_26, _stringLiteral903977439, (bool)0, /*hidden argument*/NULL);
		goto IL_00c3;
	}

IL_00b2:
	{
		Animator_t69676727 * L_27 = __this->get_anmtrInimigo_5();
		Animator_SetBool_m312734517(L_27, _stringLiteral903977439, (bool)1, /*hidden argument*/NULL);
	}

IL_00c3:
	{
		return;
	}
}
// System.Void controlaInimigo::AtacaJogador()
extern "C"  void controlaInimigo_AtacaJogador_m2067341835 (controlaInimigo_t2784593982 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (controlaInimigo_AtacaJogador_m2067341835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Time_set_timeScale_m2966928564(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		GameObject_t1756533147 * L_0 = __this->get_Jogador_2();
		controlaJogador_t774392268 * L_1 = GameObject_GetComponent_TiscontrolaJogador_t774392268_m796051139(L_0, /*hidden argument*/GameObject_GetComponent_TiscontrolaJogador_t774392268_m796051139_RuntimeMethod_var);
		GameObject_t1756533147 * L_2 = L_1->get_textoJogador_5();
		GameObject_SetActive_m2693135142(L_2, (bool)1, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_3 = __this->get_Jogador_2();
		controlaJogador_t774392268 * L_4 = GameObject_GetComponent_TiscontrolaJogador_t774392268_m796051139(L_3, /*hidden argument*/GameObject_GetComponent_TiscontrolaJogador_t774392268_m796051139_RuntimeMethod_var);
		L_4->set_vivo_6((bool)0);
		return;
	}
}
// System.Void controlaJogador::.ctor()
extern "C"  void controlaJogador__ctor_m3803745395 (controlaJogador_t774392268 * __this, const RuntimeMethod* method)
{
	{
		__this->set_Velocidade_2((10.0f));
		__this->set_vivo_6((bool)1);
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void controlaJogador::Start()
extern "C"  void controlaJogador_Start_m3180244007 (controlaJogador_t774392268 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (controlaJogador_Start_m3180244007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Time_set_timeScale_m2966928564(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		Rigidbody_t4233889191 * L_0 = Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t4233889191_m520013213_RuntimeMethod_var);
		__this->set_rgJogador_7(L_0);
		Animator_t69676727 * L_1 = Component_GetComponent_TisAnimator_t69676727_m475627522(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t69676727_m475627522_RuntimeMethod_var);
		__this->set_anmtrJogador_8(L_1);
		return;
	}
}
// System.Void controlaJogador::Update()
extern "C"  void controlaJogador_Update_m3029976654 (controlaJogador_t774392268 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (controlaJogador_Update_m3029976654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m948504553(NULL /*static, unused*/, _stringLiteral855845486, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m948504553(NULL /*static, unused*/, _stringLiteral1635882288, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		float L_3 = V_1;
		Vector3_t2243707580  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m1555724485((&L_4), L_2, (0.0f), L_3, /*hidden argument*/NULL);
		__this->set_direcao_3(L_4);
		Vector3_t2243707580  L_5 = __this->get_direcao_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_6 = Vector3_get_zero_m3202043185(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_7 = Vector3_op_Inequality_m1641959443(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		Animator_t69676727 * L_8 = __this->get_anmtrJogador_8();
		Animator_SetBool_m312734517(L_8, _stringLiteral776382294, (bool)1, /*hidden argument*/NULL);
		goto IL_0064;
	}

IL_0053:
	{
		Animator_t69676727 * L_9 = __this->get_anmtrJogador_8();
		Animator_SetBool_m312734517(L_9, _stringLiteral776382294, (bool)0, /*hidden argument*/NULL);
	}

IL_0064:
	{
		bool L_10 = __this->get_vivo_6();
		if (L_10)
		{
			goto IL_0088;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetButtonDown_m717298472(NULL /*static, unused*/, _stringLiteral3645101709, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		SceneManager_LoadScene_m2357316016(NULL /*static, unused*/, _stringLiteral2328218740, /*hidden argument*/NULL);
	}

IL_0088:
	{
		return;
	}
}
// System.Void controlaJogador::FixedUpdate()
extern "C"  void controlaJogador_FixedUpdate_m575219556 (controlaJogador_t774392268 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (controlaJogador_FixedUpdate_m575219556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2469606224  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RaycastHit_t87180320  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Quaternion_t4030073918  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Rigidbody_t4233889191 * L_0 = __this->get_rgJogador_7();
		Rigidbody_t4233889191 * L_1 = __this->get_rgJogador_7();
		Vector3_t2243707580  L_2 = Rigidbody_get_position_m3169298437(L_1, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = __this->get_direcao_3();
		float L_4 = Time_get_deltaTime_m3925508629(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_5 = Vector3_op_Multiply_m2498445460(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_Velocidade_2();
		Vector3_t2243707580  L_7 = Vector3_op_Multiply_m2498445460(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Vector3_t2243707580  L_8 = Vector3_op_Addition_m394909128(NULL /*static, unused*/, L_2, L_7, /*hidden argument*/NULL);
		Rigidbody_MovePosition_m3548412564(L_0, L_8, /*hidden argument*/NULL);
		Camera_t189460977 * L_9 = Camera_get_main_m881971336(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_10 = Input_get_mousePosition_m2069200279(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t2469606224  L_11 = Camera_ScreenPointToRay_m3033403101(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		Ray_t2469606224  L_12 = V_0;
		LayerMask_t3188175821  L_13 = __this->get_mascaraChao_4();
		int32_t L_14 = LayerMask_op_Implicit_m1604355880(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		bool L_15 = Physics_Raycast_m2251823624(NULL /*static, unused*/, L_12, (&V_1), (100.0f), L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00aa;
		}
	}
	{
		Vector3_t2243707580  L_16 = RaycastHit_get_point_m3350410423((&V_1), /*hidden argument*/NULL);
		Transform_t3275118058 * L_17 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_18 = Transform_get_position_m2304215762(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_19 = Vector3_op_Subtraction_m4046047256(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		Transform_t3275118058 * L_20 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_21 = Transform_get_position_m2304215762(L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		float L_22 = (&V_3)->get_y_2();
		(&V_2)->set_y_2(L_22);
		Vector3_t2243707580  L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t4030073918_il2cpp_TypeInfo_var);
		Quaternion_t4030073918  L_24 = Quaternion_LookRotation_m3947405160(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		Rigidbody_t4233889191 * L_25 = __this->get_rgJogador_7();
		Quaternion_t4030073918  L_26 = V_4;
		Rigidbody_MoveRotation_m1493332569(L_25, L_26, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		return;
	}
}
// System.Void geradorInimigo::.ctor()
extern "C"  void geradorInimigo__ctor_m602589229 (geradorInimigo_t4119446484 * __this, const RuntimeMethod* method)
{
	{
		__this->set_tempoGerarZumbi_4((1.0f));
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void geradorInimigo::Start()
extern "C"  void geradorInimigo_Start_m3446051189 (geradorInimigo_t4119446484 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void geradorInimigo::Update()
extern "C"  void geradorInimigo_Update_m832062302 (geradorInimigo_t4119446484 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (geradorInimigo_Update_m832062302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_contarTempo_3();
		float L_1 = Time_get_deltaTime_m3925508629(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_contarTempo_3(((float)((float)L_0+(float)L_1)));
		float L_2 = __this->get_contarTempo_3();
		float L_3 = __this->get_tempoGerarZumbi_4();
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0050;
		}
	}
	{
		GameObject_t1756533147 * L_4 = __this->get_Zumbi_2();
		Transform_t3275118058 * L_5 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Transform_get_position_m2304215762(L_5, /*hidden argument*/NULL);
		Transform_t3275118058 * L_7 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_8 = Transform_get_rotation_m2617026815(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_4, L_6, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_RuntimeMethod_var);
		__this->set_contarTempo_3((0.0f));
	}

IL_0050:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
