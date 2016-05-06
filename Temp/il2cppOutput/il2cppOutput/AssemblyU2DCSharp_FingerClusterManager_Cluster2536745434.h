#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FingerGestures/FingerList
struct FingerList_t978167751;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerClusterManager/Cluster
struct  Cluster_t2536745434  : public Il2CppObject
{
public:
	// System.Int32 FingerClusterManager/Cluster::Id
	int32_t ___Id_0;
	// System.Single FingerClusterManager/Cluster::StartTime
	float ___StartTime_1;
	// FingerGestures/FingerList FingerClusterManager/Cluster::Fingers
	FingerList_t978167751 * ___Fingers_2;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(Cluster_t2536745434, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_StartTime_1() { return static_cast<int32_t>(offsetof(Cluster_t2536745434, ___StartTime_1)); }
	inline float get_StartTime_1() const { return ___StartTime_1; }
	inline float* get_address_of_StartTime_1() { return &___StartTime_1; }
	inline void set_StartTime_1(float value)
	{
		___StartTime_1 = value;
	}

	inline static int32_t get_offset_of_Fingers_2() { return static_cast<int32_t>(offsetof(Cluster_t2536745434, ___Fingers_2)); }
	inline FingerList_t978167751 * get_Fingers_2() const { return ___Fingers_2; }
	inline FingerList_t978167751 ** get_address_of_Fingers_2() { return &___Fingers_2; }
	inline void set_Fingers_2(FingerList_t978167751 * value)
	{
		___Fingers_2 = value;
		Il2CppCodeGenWriteBarrier(&___Fingers_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
