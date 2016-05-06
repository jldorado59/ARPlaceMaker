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
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// restreoPosicion
struct  restreoPosicion_t3933427522  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject restreoPosicion::esteObjeto
	GameObject_t4012695102 * ___esteObjeto_2;
	// UnityEngine.Vector3 restreoPosicion::thePosition
	Vector3_t3525329789  ___thePosition_3;

public:
	inline static int32_t get_offset_of_esteObjeto_2() { return static_cast<int32_t>(offsetof(restreoPosicion_t3933427522, ___esteObjeto_2)); }
	inline GameObject_t4012695102 * get_esteObjeto_2() const { return ___esteObjeto_2; }
	inline GameObject_t4012695102 ** get_address_of_esteObjeto_2() { return &___esteObjeto_2; }
	inline void set_esteObjeto_2(GameObject_t4012695102 * value)
	{
		___esteObjeto_2 = value;
		Il2CppCodeGenWriteBarrier(&___esteObjeto_2, value);
	}

	inline static int32_t get_offset_of_thePosition_3() { return static_cast<int32_t>(offsetof(restreoPosicion_t3933427522, ___thePosition_3)); }
	inline Vector3_t3525329789  get_thePosition_3() const { return ___thePosition_3; }
	inline Vector3_t3525329789 * get_address_of_thePosition_3() { return &___thePosition_3; }
	inline void set_thePosition_3(Vector3_t3525329789  value)
	{
		___thePosition_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
