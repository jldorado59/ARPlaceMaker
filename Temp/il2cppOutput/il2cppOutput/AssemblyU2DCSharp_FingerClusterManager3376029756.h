#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<FingerClusterManager/Cluster>
struct List_1_t3333704403;
// FingerGestures/FingerList
struct FingerList_t978167751;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerClusterManager
struct  FingerClusterManager_t3376029756  : public MonoBehaviour_t3012272455
{
public:
	// System.Single FingerClusterManager::ClusterRadius
	float ___ClusterRadius_2;
	// System.Single FingerClusterManager::TimeTolerance
	float ___TimeTolerance_3;
	// System.Int32 FingerClusterManager::lastUpdateFrame
	int32_t ___lastUpdateFrame_4;
	// System.Int32 FingerClusterManager::nextClusterId
	int32_t ___nextClusterId_5;
	// System.Collections.Generic.List`1<FingerClusterManager/Cluster> FingerClusterManager::clusters
	List_1_t3333704403 * ___clusters_6;
	// System.Collections.Generic.List`1<FingerClusterManager/Cluster> FingerClusterManager::clusterPool
	List_1_t3333704403 * ___clusterPool_7;
	// FingerGestures/FingerList FingerClusterManager::fingersAdded
	FingerList_t978167751 * ___fingersAdded_8;
	// FingerGestures/FingerList FingerClusterManager::fingersRemoved
	FingerList_t978167751 * ___fingersRemoved_9;

public:
	inline static int32_t get_offset_of_ClusterRadius_2() { return static_cast<int32_t>(offsetof(FingerClusterManager_t3376029756, ___ClusterRadius_2)); }
	inline float get_ClusterRadius_2() const { return ___ClusterRadius_2; }
	inline float* get_address_of_ClusterRadius_2() { return &___ClusterRadius_2; }
	inline void set_ClusterRadius_2(float value)
	{
		___ClusterRadius_2 = value;
	}

	inline static int32_t get_offset_of_TimeTolerance_3() { return static_cast<int32_t>(offsetof(FingerClusterManager_t3376029756, ___TimeTolerance_3)); }
	inline float get_TimeTolerance_3() const { return ___TimeTolerance_3; }
	inline float* get_address_of_TimeTolerance_3() { return &___TimeTolerance_3; }
	inline void set_TimeTolerance_3(float value)
	{
		___TimeTolerance_3 = value;
	}

	inline static int32_t get_offset_of_lastUpdateFrame_4() { return static_cast<int32_t>(offsetof(FingerClusterManager_t3376029756, ___lastUpdateFrame_4)); }
	inline int32_t get_lastUpdateFrame_4() const { return ___lastUpdateFrame_4; }
	inline int32_t* get_address_of_lastUpdateFrame_4() { return &___lastUpdateFrame_4; }
	inline void set_lastUpdateFrame_4(int32_t value)
	{
		___lastUpdateFrame_4 = value;
	}

	inline static int32_t get_offset_of_nextClusterId_5() { return static_cast<int32_t>(offsetof(FingerClusterManager_t3376029756, ___nextClusterId_5)); }
	inline int32_t get_nextClusterId_5() const { return ___nextClusterId_5; }
	inline int32_t* get_address_of_nextClusterId_5() { return &___nextClusterId_5; }
	inline void set_nextClusterId_5(int32_t value)
	{
		___nextClusterId_5 = value;
	}

	inline static int32_t get_offset_of_clusters_6() { return static_cast<int32_t>(offsetof(FingerClusterManager_t3376029756, ___clusters_6)); }
	inline List_1_t3333704403 * get_clusters_6() const { return ___clusters_6; }
	inline List_1_t3333704403 ** get_address_of_clusters_6() { return &___clusters_6; }
	inline void set_clusters_6(List_1_t3333704403 * value)
	{
		___clusters_6 = value;
		Il2CppCodeGenWriteBarrier(&___clusters_6, value);
	}

	inline static int32_t get_offset_of_clusterPool_7() { return static_cast<int32_t>(offsetof(FingerClusterManager_t3376029756, ___clusterPool_7)); }
	inline List_1_t3333704403 * get_clusterPool_7() const { return ___clusterPool_7; }
	inline List_1_t3333704403 ** get_address_of_clusterPool_7() { return &___clusterPool_7; }
	inline void set_clusterPool_7(List_1_t3333704403 * value)
	{
		___clusterPool_7 = value;
		Il2CppCodeGenWriteBarrier(&___clusterPool_7, value);
	}

	inline static int32_t get_offset_of_fingersAdded_8() { return static_cast<int32_t>(offsetof(FingerClusterManager_t3376029756, ___fingersAdded_8)); }
	inline FingerList_t978167751 * get_fingersAdded_8() const { return ___fingersAdded_8; }
	inline FingerList_t978167751 ** get_address_of_fingersAdded_8() { return &___fingersAdded_8; }
	inline void set_fingersAdded_8(FingerList_t978167751 * value)
	{
		___fingersAdded_8 = value;
		Il2CppCodeGenWriteBarrier(&___fingersAdded_8, value);
	}

	inline static int32_t get_offset_of_fingersRemoved_9() { return static_cast<int32_t>(offsetof(FingerClusterManager_t3376029756, ___fingersRemoved_9)); }
	inline FingerList_t978167751 * get_fingersRemoved_9() const { return ___fingersRemoved_9; }
	inline FingerList_t978167751 ** get_address_of_fingersRemoved_9() { return &___fingersRemoved_9; }
	inline void set_fingersRemoved_9(FingerList_t978167751 * value)
	{
		___fingersRemoved_9 = value;
		Il2CppCodeGenWriteBarrier(&___fingersRemoved_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
