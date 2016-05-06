#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// FingerClusterManager
struct FingerClusterManager_t3376029756;
// FingerGestures/IFingerList
struct IFingerList_t2944704720;
// System.Collections.Generic.List`1<FingerClusterManager/Cluster>
struct List_1_t3333704403;
// FingerClusterManager/Cluster
struct Cluster_t2536745434;
// FingerGestures/Finger
struct Finger_t2104389513;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FingerGestures_Finger2104389513.h"

// System.Void FingerClusterManager::.ctor()
extern "C"  void FingerClusterManager__ctor_m2122890719 (FingerClusterManager_t3376029756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/IFingerList FingerClusterManager::get_FingersAdded()
extern "C"  Il2CppObject * FingerClusterManager_get_FingersAdded_m2512966733 (FingerClusterManager_t3376029756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/IFingerList FingerClusterManager::get_FingersRemoved()
extern "C"  Il2CppObject * FingerClusterManager_get_FingersRemoved_m1972654253 (FingerClusterManager_t3376029756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FingerClusterManager/Cluster> FingerClusterManager::get_Clusters()
extern "C"  List_1_t3333704403 * FingerClusterManager_get_Clusters_m3950141729 (FingerClusterManager_t3376029756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FingerClusterManager/Cluster> FingerClusterManager::GetClustersPool()
extern "C"  List_1_t3333704403 * FingerClusterManager_GetClustersPool_m1079340366 (FingerClusterManager_t3376029756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerClusterManager::Awake()
extern "C"  void FingerClusterManager_Awake_m2360495938 (FingerClusterManager_t3376029756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerClusterManager::Update()
extern "C"  void FingerClusterManager_Update_m3111964942 (FingerClusterManager_t3376029756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerClusterManager/Cluster FingerClusterManager::FindClusterById(System.Int32)
extern "C"  Cluster_t2536745434 * FingerClusterManager_FindClusterById_m1641108523 (FingerClusterManager_t3376029756 * __this, int32_t ___clusterId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerClusterManager/Cluster FingerClusterManager::NewCluster()
extern "C"  Cluster_t2536745434 * FingerClusterManager_NewCluster_m2942243541 (FingerClusterManager_t3376029756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerClusterManager/Cluster FingerClusterManager::FindExistingCluster(FingerGestures/Finger)
extern "C"  Cluster_t2536745434 * FingerClusterManager_FindExistingCluster_m3357250480 (FingerClusterManager_t3376029756 * __this, Finger_t2104389513 * ___finger, const MethodInfo* method) IL2CPP_METHOD_ATTR;
