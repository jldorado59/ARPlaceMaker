#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ObjectManager
struct ObjectManager_t2442977102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScenePersistence
struct  ScenePersistence_t2589492883  : public MonoBehaviour_t3012272455
{
public:
	// ObjectManager ScenePersistence::Manager
	ObjectManager_t2442977102 * ___Manager_2;

public:
	inline static int32_t get_offset_of_Manager_2() { return static_cast<int32_t>(offsetof(ScenePersistence_t2589492883, ___Manager_2)); }
	inline ObjectManager_t2442977102 * get_Manager_2() const { return ___Manager_2; }
	inline ObjectManager_t2442977102 ** get_address_of_Manager_2() { return &___Manager_2; }
	inline void set_Manager_2(ObjectManager_t2442977102 * value)
	{
		___Manager_2 = value;
		Il2CppCodeGenWriteBarrier(&___Manager_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
