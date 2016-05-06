#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectManager
struct  ObjectManager_t2442977102  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectManager::misObjectos
	List_1_t514686775 * ___misObjectos_2;
	// UnityEngine.GameObject ObjectManager::BotonBorrar
	GameObject_t4012695102 * ___BotonBorrar_3;
	// UnityEngine.GameObject ObjectManager::miSeleccionado
	GameObject_t4012695102 * ___miSeleccionado_4;

public:
	inline static int32_t get_offset_of_misObjectos_2() { return static_cast<int32_t>(offsetof(ObjectManager_t2442977102, ___misObjectos_2)); }
	inline List_1_t514686775 * get_misObjectos_2() const { return ___misObjectos_2; }
	inline List_1_t514686775 ** get_address_of_misObjectos_2() { return &___misObjectos_2; }
	inline void set_misObjectos_2(List_1_t514686775 * value)
	{
		___misObjectos_2 = value;
		Il2CppCodeGenWriteBarrier(&___misObjectos_2, value);
	}

	inline static int32_t get_offset_of_BotonBorrar_3() { return static_cast<int32_t>(offsetof(ObjectManager_t2442977102, ___BotonBorrar_3)); }
	inline GameObject_t4012695102 * get_BotonBorrar_3() const { return ___BotonBorrar_3; }
	inline GameObject_t4012695102 ** get_address_of_BotonBorrar_3() { return &___BotonBorrar_3; }
	inline void set_BotonBorrar_3(GameObject_t4012695102 * value)
	{
		___BotonBorrar_3 = value;
		Il2CppCodeGenWriteBarrier(&___BotonBorrar_3, value);
	}

	inline static int32_t get_offset_of_miSeleccionado_4() { return static_cast<int32_t>(offsetof(ObjectManager_t2442977102, ___miSeleccionado_4)); }
	inline GameObject_t4012695102 * get_miSeleccionado_4() const { return ___miSeleccionado_4; }
	inline GameObject_t4012695102 ** get_address_of_miSeleccionado_4() { return &___miSeleccionado_4; }
	inline void set_miSeleccionado_4(GameObject_t4012695102 * value)
	{
		___miSeleccionado_4 = value;
		Il2CppCodeGenWriteBarrier(&___miSeleccionado_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
