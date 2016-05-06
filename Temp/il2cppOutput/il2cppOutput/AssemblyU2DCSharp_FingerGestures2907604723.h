#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FGInputProvider
struct FGInputProvider_t1238597786;
// FingerClusterManager
struct FingerClusterManager_t3376029756;
// System.Collections.Generic.List`1<GestureRecognizer>
struct List_1_t14867622;
// FingerGestures
struct FingerGestures_t2907604723;
// FingerGestures/Finger[]
struct FingerU5BU5D_t400038964;
// FingerGestures/FingerList
struct FingerList_t978167751;
// FingerGestures/GlobalTouchFilterDelegate
struct GlobalTouchFilterDelegate_t1567385977;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3681339876;
// FingerGestures/SwipeDirection[]
struct SwipeDirectionU5BU5D_t4130009800;
// Gesture/EventHandler
struct EventHandler_t1765379952;
// FingerEventDetector`1/FingerEventHandler<FingerEvent>
struct FingerEventHandler_t3850568487;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerGestures
struct  FingerGestures_t2907604723  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean FingerGestures::makePersistent
	bool ___makePersistent_2;
	// System.Boolean FingerGestures::detectUnityRemote
	bool ___detectUnityRemote_3;
	// FGInputProvider FingerGestures::mouseInputProviderPrefab
	FGInputProvider_t1238597786 * ___mouseInputProviderPrefab_4;
	// FGInputProvider FingerGestures::touchInputProviderPrefab
	FGInputProvider_t1238597786 * ___touchInputProviderPrefab_5;
	// FingerClusterManager FingerGestures::fingerClusterManager
	FingerClusterManager_t3376029756 * ___fingerClusterManager_6;
	// FGInputProvider FingerGestures::inputProvider
	FGInputProvider_t1238597786 * ___inputProvider_7;
	// System.Single FingerGestures::pixelDistanceScale
	float ___pixelDistanceScale_9;
	// System.Boolean FingerGestures::adjustPixelScaleForRetinaDisplay
	bool ___adjustPixelScaleForRetinaDisplay_10;
	// System.Single FingerGestures::retinaPixelScale
	float ___retinaPixelScale_11;
	// FingerGestures/Finger[] FingerGestures::fingers
	FingerU5BU5D_t400038964* ___fingers_13;
	// FingerGestures/FingerList FingerGestures::touches
	FingerList_t978167751 * ___touches_14;
	// FingerGestures/GlobalTouchFilterDelegate FingerGestures::globalTouchFilterFunc
	GlobalTouchFilterDelegate_t1567385977 * ___globalTouchFilterFunc_15;
	// UnityEngine.Transform[] FingerGestures::fingerNodes
	TransformU5BU5D_t3681339876* ___fingerNodes_16;

public:
	inline static int32_t get_offset_of_makePersistent_2() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723, ___makePersistent_2)); }
	inline bool get_makePersistent_2() const { return ___makePersistent_2; }
	inline bool* get_address_of_makePersistent_2() { return &___makePersistent_2; }
	inline void set_makePersistent_2(bool value)
	{
		___makePersistent_2 = value;
	}

	inline static int32_t get_offset_of_detectUnityRemote_3() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723, ___detectUnityRemote_3)); }
	inline bool get_detectUnityRemote_3() const { return ___detectUnityRemote_3; }
	inline bool* get_address_of_detectUnityRemote_3() { return &___detectUnityRemote_3; }
	inline void set_detectUnityRemote_3(bool value)
	{
		___detectUnityRemote_3 = value;
	}

	inline static int32_t get_offset_of_mouseInputProviderPrefab_4() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723, ___mouseInputProviderPrefab_4)); }
	inline FGInputProvider_t1238597786 * get_mouseInputProviderPrefab_4() const { return ___mouseInputProviderPrefab_4; }
	inline FGInputProvider_t1238597786 ** get_address_of_mouseInputProviderPrefab_4() { return &___mouseInputProviderPrefab_4; }
	inline void set_mouseInputProviderPrefab_4(FGInputProvider_t1238597786 * value)
	{
		___mouseInputProviderPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___mouseInputProviderPrefab_4, value);
	}

	inline static int32_t get_offset_of_touchInputProviderPrefab_5() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723, ___touchInputProviderPrefab_5)); }
	inline FGInputProvider_t1238597786 * get_touchInputProviderPrefab_5() const { return ___touchInputProviderPrefab_5; }
	inline FGInputProvider_t1238597786 ** get_address_of_touchInputProviderPrefab_5() { return &___touchInputProviderPrefab_5; }
	inline void set_touchInputProviderPrefab_5(FGInputProvider_t1238597786 * value)
	{
		___touchInputProviderPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___touchInputProviderPrefab_5, value);
	}

	inline static int32_t get_offset_of_fingerClusterManager_6() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723, ___fingerClusterManager_6)); }
	inline FingerClusterManager_t3376029756 * get_fingerClusterManager_6() const { return ___fingerClusterManager_6; }
	inline FingerClusterManager_t3376029756 ** get_address_of_fingerClusterManager_6() { return &___fingerClusterManager_6; }
	inline void set_fingerClusterManager_6(FingerClusterManager_t3376029756 * value)
	{
		___fingerClusterManager_6 = value;
		Il2CppCodeGenWriteBarrier(&___fingerClusterManager_6, value);
	}

	inline static int32_t get_offset_of_inputProvider_7() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723, ___inputProvider_7)); }
	inline FGInputProvider_t1238597786 * get_inputProvider_7() const { return ___inputProvider_7; }
	inline FGInputProvider_t1238597786 ** get_address_of_inputProvider_7() { return &___inputProvider_7; }
	inline void set_inputProvider_7(FGInputProvider_t1238597786 * value)
	{
		___inputProvider_7 = value;
		Il2CppCodeGenWriteBarrier(&___inputProvider_7, value);
	}

	inline static int32_t get_offset_of_pixelDistanceScale_9() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723, ___pixelDistanceScale_9)); }
	inline float get_pixelDistanceScale_9() const { return ___pixelDistanceScale_9; }
	inline float* get_address_of_pixelDistanceScale_9() { return &___pixelDistanceScale_9; }
	inline void set_pixelDistanceScale_9(float value)
	{
		___pixelDistanceScale_9 = value;
	}

	inline static int32_t get_offset_of_adjustPixelScaleForRetinaDisplay_10() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723, ___adjustPixelScaleForRetinaDisplay_10)); }
	inline bool get_adjustPixelScaleForRetinaDisplay_10() const { return ___adjustPixelScaleForRetinaDisplay_10; }
	inline bool* get_address_of_adjustPixelScaleForRetinaDisplay_10() { return &___adjustPixelScaleForRetinaDisplay_10; }
	inline void set_adjustPixelScaleForRetinaDisplay_10(bool value)
	{
		___adjustPixelScaleForRetinaDisplay_10 = value;
	}

	inline static int32_t get_offset_of_retinaPixelScale_11() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723, ___retinaPixelScale_11)); }
	inline float get_retinaPixelScale_11() const { return ___retinaPixelScale_11; }
	inline float* get_address_of_retinaPixelScale_11() { return &___retinaPixelScale_11; }
	inline void set_retinaPixelScale_11(float value)
	{
		___retinaPixelScale_11 = value;
	}

	inline static int32_t get_offset_of_fingers_13() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723, ___fingers_13)); }
	inline FingerU5BU5D_t400038964* get_fingers_13() const { return ___fingers_13; }
	inline FingerU5BU5D_t400038964** get_address_of_fingers_13() { return &___fingers_13; }
	inline void set_fingers_13(FingerU5BU5D_t400038964* value)
	{
		___fingers_13 = value;
		Il2CppCodeGenWriteBarrier(&___fingers_13, value);
	}

	inline static int32_t get_offset_of_touches_14() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723, ___touches_14)); }
	inline FingerList_t978167751 * get_touches_14() const { return ___touches_14; }
	inline FingerList_t978167751 ** get_address_of_touches_14() { return &___touches_14; }
	inline void set_touches_14(FingerList_t978167751 * value)
	{
		___touches_14 = value;
		Il2CppCodeGenWriteBarrier(&___touches_14, value);
	}

	inline static int32_t get_offset_of_globalTouchFilterFunc_15() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723, ___globalTouchFilterFunc_15)); }
	inline GlobalTouchFilterDelegate_t1567385977 * get_globalTouchFilterFunc_15() const { return ___globalTouchFilterFunc_15; }
	inline GlobalTouchFilterDelegate_t1567385977 ** get_address_of_globalTouchFilterFunc_15() { return &___globalTouchFilterFunc_15; }
	inline void set_globalTouchFilterFunc_15(GlobalTouchFilterDelegate_t1567385977 * value)
	{
		___globalTouchFilterFunc_15 = value;
		Il2CppCodeGenWriteBarrier(&___globalTouchFilterFunc_15, value);
	}

	inline static int32_t get_offset_of_fingerNodes_16() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723, ___fingerNodes_16)); }
	inline TransformU5BU5D_t3681339876* get_fingerNodes_16() const { return ___fingerNodes_16; }
	inline TransformU5BU5D_t3681339876** get_address_of_fingerNodes_16() { return &___fingerNodes_16; }
	inline void set_fingerNodes_16(TransformU5BU5D_t3681339876* value)
	{
		___fingerNodes_16 = value;
		Il2CppCodeGenWriteBarrier(&___fingerNodes_16, value);
	}
};

struct FingerGestures_t2907604723_StaticFields
{
public:
	// System.Collections.Generic.List`1<GestureRecognizer> FingerGestures::gestureRecognizers
	List_1_t14867622 * ___gestureRecognizers_8;
	// FingerGestures FingerGestures::instance
	FingerGestures_t2907604723 * ___instance_12;
	// FingerGestures/SwipeDirection[] FingerGestures::AngleToDirectionMap
	SwipeDirectionU5BU5D_t4130009800* ___AngleToDirectionMap_17;
	// Gesture/EventHandler FingerGestures::OnGestureEvent
	EventHandler_t1765379952 * ___OnGestureEvent_18;
	// FingerEventDetector`1/FingerEventHandler<FingerEvent> FingerGestures::OnFingerEvent
	FingerEventHandler_t3850568487 * ___OnFingerEvent_19;

public:
	inline static int32_t get_offset_of_gestureRecognizers_8() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723_StaticFields, ___gestureRecognizers_8)); }
	inline List_1_t14867622 * get_gestureRecognizers_8() const { return ___gestureRecognizers_8; }
	inline List_1_t14867622 ** get_address_of_gestureRecognizers_8() { return &___gestureRecognizers_8; }
	inline void set_gestureRecognizers_8(List_1_t14867622 * value)
	{
		___gestureRecognizers_8 = value;
		Il2CppCodeGenWriteBarrier(&___gestureRecognizers_8, value);
	}

	inline static int32_t get_offset_of_instance_12() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723_StaticFields, ___instance_12)); }
	inline FingerGestures_t2907604723 * get_instance_12() const { return ___instance_12; }
	inline FingerGestures_t2907604723 ** get_address_of_instance_12() { return &___instance_12; }
	inline void set_instance_12(FingerGestures_t2907604723 * value)
	{
		___instance_12 = value;
		Il2CppCodeGenWriteBarrier(&___instance_12, value);
	}

	inline static int32_t get_offset_of_AngleToDirectionMap_17() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723_StaticFields, ___AngleToDirectionMap_17)); }
	inline SwipeDirectionU5BU5D_t4130009800* get_AngleToDirectionMap_17() const { return ___AngleToDirectionMap_17; }
	inline SwipeDirectionU5BU5D_t4130009800** get_address_of_AngleToDirectionMap_17() { return &___AngleToDirectionMap_17; }
	inline void set_AngleToDirectionMap_17(SwipeDirectionU5BU5D_t4130009800* value)
	{
		___AngleToDirectionMap_17 = value;
		Il2CppCodeGenWriteBarrier(&___AngleToDirectionMap_17, value);
	}

	inline static int32_t get_offset_of_OnGestureEvent_18() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723_StaticFields, ___OnGestureEvent_18)); }
	inline EventHandler_t1765379952 * get_OnGestureEvent_18() const { return ___OnGestureEvent_18; }
	inline EventHandler_t1765379952 ** get_address_of_OnGestureEvent_18() { return &___OnGestureEvent_18; }
	inline void set_OnGestureEvent_18(EventHandler_t1765379952 * value)
	{
		___OnGestureEvent_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnGestureEvent_18, value);
	}

	inline static int32_t get_offset_of_OnFingerEvent_19() { return static_cast<int32_t>(offsetof(FingerGestures_t2907604723_StaticFields, ___OnFingerEvent_19)); }
	inline FingerEventHandler_t3850568487 * get_OnFingerEvent_19() const { return ___OnFingerEvent_19; }
	inline FingerEventHandler_t3850568487 ** get_address_of_OnFingerEvent_19() { return &___OnFingerEvent_19; }
	inline void set_OnFingerEvent_19(FingerEventHandler_t3850568487 * value)
	{
		___OnFingerEvent_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerEvent_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
