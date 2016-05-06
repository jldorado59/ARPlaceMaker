#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CrearObjetos
struct  CrearObjetos_t584067555  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject CrearObjetos::laEscena
	GameObject_t4012695102 * ___laEscena_2;
	// UnityEngine.GameObject CrearObjetos::piso
	GameObject_t4012695102 * ___piso_3;

public:
	inline static int32_t get_offset_of_laEscena_2() { return static_cast<int32_t>(offsetof(CrearObjetos_t584067555, ___laEscena_2)); }
	inline GameObject_t4012695102 * get_laEscena_2() const { return ___laEscena_2; }
	inline GameObject_t4012695102 ** get_address_of_laEscena_2() { return &___laEscena_2; }
	inline void set_laEscena_2(GameObject_t4012695102 * value)
	{
		___laEscena_2 = value;
		Il2CppCodeGenWriteBarrier(&___laEscena_2, value);
	}

	inline static int32_t get_offset_of_piso_3() { return static_cast<int32_t>(offsetof(CrearObjetos_t584067555, ___piso_3)); }
	inline GameObject_t4012695102 * get_piso_3() const { return ___piso_3; }
	inline GameObject_t4012695102 ** get_address_of_piso_3() { return &___piso_3; }
	inline void set_piso_3(GameObject_t4012695102 * value)
	{
		___piso_3 = value;
		Il2CppCodeGenWriteBarrier(&___piso_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
