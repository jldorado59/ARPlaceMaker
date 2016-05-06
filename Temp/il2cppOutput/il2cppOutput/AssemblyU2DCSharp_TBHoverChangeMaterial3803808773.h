#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBHoverChangeMaterial
struct  TBHoverChangeMaterial_t3803808773  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Material TBHoverChangeMaterial::hoverMaterial
	Material_t1886596500 * ___hoverMaterial_2;
	// UnityEngine.Material TBHoverChangeMaterial::normalMaterial
	Material_t1886596500 * ___normalMaterial_3;

public:
	inline static int32_t get_offset_of_hoverMaterial_2() { return static_cast<int32_t>(offsetof(TBHoverChangeMaterial_t3803808773, ___hoverMaterial_2)); }
	inline Material_t1886596500 * get_hoverMaterial_2() const { return ___hoverMaterial_2; }
	inline Material_t1886596500 ** get_address_of_hoverMaterial_2() { return &___hoverMaterial_2; }
	inline void set_hoverMaterial_2(Material_t1886596500 * value)
	{
		___hoverMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___hoverMaterial_2, value);
	}

	inline static int32_t get_offset_of_normalMaterial_3() { return static_cast<int32_t>(offsetof(TBHoverChangeMaterial_t3803808773, ___normalMaterial_3)); }
	inline Material_t1886596500 * get_normalMaterial_3() const { return ___normalMaterial_3; }
	inline Material_t1886596500 ** get_address_of_normalMaterial_3() { return &___normalMaterial_3; }
	inline void set_normalMaterial_3(Material_t1886596500 * value)
	{
		___normalMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___normalMaterial_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
