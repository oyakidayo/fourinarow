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

// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.Component
struct Component_t_867674284_0;
// System.Type
struct Type_t;
// UnityEngine.Component[]
struct ComponentU5BU5D_t_611328586_0;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SendMessageOptions_53436984.h"

// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C"  Component_t_867674284_0 * GameObject_GetComponent_m1004814461_0 (GameObject_t_184308134_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type,System.Boolean)
extern "C"  Component_t_867674284_0 * GameObject_GetComponentInChildren_m1490154500_0 (GameObject_t_184308134_0 * __this, Type_t * ___type, bool ___includeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
extern "C"  Component_t_867674284_0 * GameObject_GetComponentInParent_m434474382_0 (GameObject_t_184308134_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponents(System.Type)
extern "C"  ComponentU5BU5D_t_611328586_0* GameObject_GetComponents_m1126578334_0 (GameObject_t_184308134_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponentsInChildren(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t_611328586_0* GameObject_GetComponentsInChildren_m305836803_0 (GameObject_t_184308134_0 * __this, Type_t * ___type, bool ___includeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponentsInParent(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t_611328586_0* GameObject_GetComponentsInParent_m521317102_0 (GameObject_t_184308134_0 * __this, Type_t * ___type, bool ___includeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C"  Array_t * GameObject_GetComponentsInternal_m181453881_0 (GameObject_t_184308134_0 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
extern "C"  String_t* GameObject_get_tag_m211612200_0 (GameObject_t_184308134_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_tag(System.String)
extern "C"  void GameObject_set_tag_m859036203_0 (GameObject_t_184308134_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void GameObject_SendMessage_m423373689_0 (GameObject_t_184308134_0 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
