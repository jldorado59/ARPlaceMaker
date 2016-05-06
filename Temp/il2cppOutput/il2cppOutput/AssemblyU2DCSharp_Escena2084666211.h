#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Objeto[]
struct ObjetoU5BU5D_t3715225300;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Escena
struct  Escena_t2084666211  : public Il2CppObject
{
public:
	// Objeto[] Escena::Objetos
	ObjetoU5BU5D_t3715225300* ___Objetos_0;

public:
	inline static int32_t get_offset_of_Objetos_0() { return static_cast<int32_t>(offsetof(Escena_t2084666211, ___Objetos_0)); }
	inline ObjetoU5BU5D_t3715225300* get_Objetos_0() const { return ___Objetos_0; }
	inline ObjetoU5BU5D_t3715225300** get_address_of_Objetos_0() { return &___Objetos_0; }
	inline void set_Objetos_0(ObjetoU5BU5D_t3715225300* value)
	{
		___Objetos_0 = value;
		Il2CppCodeGenWriteBarrier(&___Objetos_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
