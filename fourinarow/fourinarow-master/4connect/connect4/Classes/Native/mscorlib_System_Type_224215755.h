#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type[]
struct TypeU5BU5D_t_722972841_0;
// System.Reflection.MemberFilter
struct MemberFilter_t_1680393766_0;
// System.Object
struct Object_t;

#include "mscorlib_System_Reflection_MemberInfo_64224368.h"
#include "mscorlib_System_RuntimeTypeHandle_1394772513.h"

// System.Type
struct  Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t_1394772513_0  ____impl_0;
};
struct Type_t_StaticFields{
	// System.Char System.Type::Delimiter
	uint16_t ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t_722972841_0* ___EmptyTypes_2;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t_1680393766_0 * ___FilterAttribute_3;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t_1680393766_0 * ___FilterName_4;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t_1680393766_0 * ___FilterNameIgnoreCase_5;
	// System.Object System.Type::Missing
	Object_t * ___Missing_6;
};
