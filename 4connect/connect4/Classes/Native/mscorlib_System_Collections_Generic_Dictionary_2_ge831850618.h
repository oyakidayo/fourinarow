﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1872284309_0;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1854582343_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Boolean[]
struct BooleanU5BU5D_t_1574345617_0;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t_755467276_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t526833679_0;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t291221230_0;

#include "mscorlib_System_Object_887538054.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct  Dictionary_2_t831850618_0  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t1872284309_0* ___table_0;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t1854582343_0* ___linkSlots_1;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t_816028754_0* ___keySlots_2;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	BooleanU5BU5D_t_1574345617_0* ___valueSlots_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_5;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_6;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_7;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	Object_t* ___hcp_8;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t526833679_0 * ___serialization_info_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_10;
};
struct Dictionary_2_t831850618_0_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t291221230_0 * ___U3CU3Ef__amU24cacheB_11;
};
