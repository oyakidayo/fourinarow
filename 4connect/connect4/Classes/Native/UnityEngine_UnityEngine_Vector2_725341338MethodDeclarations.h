#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m1517109030_0 (Vector2_t_725341338_0 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector2::ToString()
extern "C"  String_t* Vector2_ToString_m_435191229_0 (Vector2_t_725341338_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C"  int32_t Vector2_GetHashCode_m128434585_0 (Vector2_t_725341338_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern "C"  bool Vector2_Equals_m_890768447_0 (Vector2_t_725341338_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t_725341338_0  Vector2_op_Implicit_m_211106637_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t_725341337_0  Vector2_op_Implicit_m482286037_0 (Object_t * __this /* static, unused */, Vector2_t_725341338_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
