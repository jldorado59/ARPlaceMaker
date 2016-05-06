#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FingerClusterManager/Cluster
struct Cluster_t2536745434;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureRecognizer`1/<FindGestureByCluster>c__AnonStorey3<System.Object>
struct  U3CFindGestureByClusterU3Ec__AnonStorey3_t2122826396  : public Il2CppObject
{
public:
	// FingerClusterManager/Cluster GestureRecognizer`1/<FindGestureByCluster>c__AnonStorey3::cluster
	Cluster_t2536745434 * ___cluster_0;

public:
	inline static int32_t get_offset_of_cluster_0() { return static_cast<int32_t>(offsetof(U3CFindGestureByClusterU3Ec__AnonStorey3_t2122826396, ___cluster_0)); }
	inline Cluster_t2536745434 * get_cluster_0() const { return ___cluster_0; }
	inline Cluster_t2536745434 ** get_address_of_cluster_0() { return &___cluster_0; }
	inline void set_cluster_0(Cluster_t2536745434 * value)
	{
		___cluster_0 = value;
		Il2CppCodeGenWriteBarrier(&___cluster_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
