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

// PosicionarConRespectoApiso
struct  PosicionarConRespectoApiso_t2429160566  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject PosicionarConRespectoApiso::piso
	GameObject_t4012695102 * ___piso_2;
	// UnityEngine.Vector3 PosicionarConRespectoApiso::posicionPiso
	Vector3_t3525329789  ___posicionPiso_3;

public:
	inline static int32_t get_offset_of_piso_2() { return static_cast<int32_t>(offsetof(PosicionarConRespectoApiso_t2429160566, ___piso_2)); }
	inline GameObject_t4012695102 * get_piso_2() const { return ___piso_2; }
	inline GameObject_t4012695102 ** get_address_of_piso_2() { return &___piso_2; }
	inline void set_piso_2(GameObject_t4012695102 * value)
	{
		___piso_2 = value;
		Il2CppCodeGenWriteBarrier(&___piso_2, value);
	}

	inline static int32_t get_offset_of_posicionPiso_3() { return static_cast<int32_t>(offsetof(PosicionarConRespectoApiso_t2429160566, ___posicionPiso_3)); }
	inline Vector3_t3525329789  get_posicionPiso_3() const { return ___posicionPiso_3; }
	inline Vector3_t3525329789 * get_address_of_posicionPiso_3() { return &___posicionPiso_3; }
	inline void set_posicionPiso_3(Vector3_t3525329789  value)
	{
		___posicionPiso_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
