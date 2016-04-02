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

// pice_move
struct pice_move_t_1819905798_0;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1621492670.h"
#include "AssemblyU2DCSharp_U3CModuleU3E1742281553.h"
#include "AssemblyU2DCSharp_U3CModuleU3E1742281553MethodDeclarations.h"
#include "AssemblyU2DCSharp_pice_move_1819905798.h"
#include "AssemblyU2DCSharp_pice_move_1819905798MethodDeclarations.h"
#include "mscorlib_System_Void_224166001.h"
#include "UnityEngine_UnityEngine_MonoBehaviour_92453903MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Screen1274772853MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component_867674284MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1584899523MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector2_725341338MethodDeclarations.h"
#include "mscorlib_System_Int321628762099.h"
#include "mscorlib_System_Boolean_19515315.h"
#include "mscorlib_System_Single_766435453.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_Component_867674284.h"
#include "UnityEngine_UnityEngine_Transform1584899523.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Input_383429215MethodDeclarations.h"
#include "mscorlib_System_String_756155572MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug_388328406MethodDeclarations.h"
#include "mscorlib_System_String_756155572.h"
#include "mscorlib_System_Object_887538054.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void pice_move::.ctor()
extern "C"  void pice_move__ctor_m_115991658_0 (pice_move_t_1819905798_0 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967_0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void pice_move::Start()
extern "C"  void pice_move_Start_m_1168853866_0 (pice_move_t_1819905798_0 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector2_t_725341338_0  V_5 = {0};
	{
		V_0 = ((int32_t)750);
		V_1 = ((int32_t)1334);
		V_2 = (bool)1;
		V_3 = ((int32_t)60);
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		bool L_2 = V_2;
		int32_t L_3 = V_3;
		Screen_SetResolution_m1695402355_0(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m1504859443_0(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = ((float)((float)(1024.0f)/(float)(((float)((float)L_4)))));
		float L_5 = V_4;
		if ((!(((float)L_5) > ((float)(1.0f)))))
		{
			goto IL_003b;
		}
	}
	{
		V_4 = (1.0f);
	}

IL_003b:
	{
		int32_t L_6 = Screen_get_width_m_1214634212_0(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = V_4;
		V_0 = (((int32_t)((int32_t)((float)((float)(((float)((float)L_6)))*(float)L_7)))));
		int32_t L_8 = Screen_get_height_m1504859443_0(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = V_4;
		V_1 = (((int32_t)((int32_t)((float)((float)(((float)((float)L_8)))*(float)L_9)))));
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		Screen_SetResolution_m1695402355_0(NULL /*static, unused*/, L_10, L_11, (bool)1, ((int32_t)15), /*hidden argument*/NULL);
		Transform_t1584899523_0 * L_12 = Component_get_transform_m_37826853_0(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t_725341337_0  L_13 = Transform_get_position_m_2083568689_0(L_12, /*hidden argument*/NULL);
		Vector2_t_725341338_0  L_14 = Vector2_op_Implicit_m_211106637_0(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		(&V_5)->___x_0 = (-3.0f);
		Transform_t1584899523_0 * L_15 = Component_get_transform_m_37826853_0(__this, /*hidden argument*/NULL);
		Vector2_t_725341338_0  L_16 = V_5;
		Vector3_t_725341337_0  L_17 = Vector2_op_Implicit_m482286037_0(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_position_m_1183573188_0(L_15, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void pice_move::Update()
extern TypeInfo* Input_t_383429215_0_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t_766435453_0_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Debug_t_388328406_0_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3781_0;
extern "C"  void pice_move_Update_m_1868879305_0 (pice_move_t_1819905798_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t_383429215_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(868);
		Single_t_766435453_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Debug_t_388328406_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(824);
		_stringLiteral3781_0 = il2cpp_codegen_string_literal_from_index(2575);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t_725341338_0  V_0 = {0};
	Vector2_t_725341338_0  V_1 = {0};
	{
		Transform_t1584899523_0 * L_0 = Component_get_transform_m_37826853_0(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t_725341337_0  L_1 = Transform_get_position_m_2083568689_0(L_0, /*hidden argument*/NULL);
		Vector2_t_725341338_0  L_2 = Vector2_op_Implicit_m_211106637_0(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Transform_t1584899523_0 * L_3 = Component_get_transform_m_37826853_0(__this, /*hidden argument*/NULL);
		Vector2_t_725341338_0  L_4 = V_0;
		Vector3_t_725341337_0  L_5 = Vector2_op_Implicit_m482286037_0(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_m_1183573188_0(L_3, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t_383429215_0_il2cpp_TypeInfo_var);
		bool L_6 = Input_GetMouseButtonDown_m2031691843_0(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_007c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t_383429215_0_il2cpp_TypeInfo_var);
		Vector3_t_725341337_0  L_7 = Input_get_mousePosition_m_274734068_0(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t_725341338_0  L_8 = Vector2_op_Implicit_m_211106637_0(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = ((&V_1)->___x_0);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t_766435453_0_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m389863537_0(NULL /*static, unused*/, _stringLiteral3781_0, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t_388328406_0_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628_0(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		float L_13 = ((&V_1)->___x_0);
		(&V_0)->___x_0 = (((float)((float)((int32_t)((int32_t)(((int32_t)((int32_t)((float)((float)L_13/(float)(0.0f))))))-(int32_t)4)))));
		Transform_t1584899523_0 * L_14 = Component_get_transform_m_37826853_0(__this, /*hidden argument*/NULL);
		Vector2_t_725341338_0  L_15 = V_0;
		Vector3_t_725341337_0  L_16 = Vector2_op_Implicit_m482286037_0(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_position_m_1183573188_0(L_14, L_16, /*hidden argument*/NULL);
	}

IL_007c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
