#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FingerGestures/IFingerList
struct IFingerList_t2944704720;
// ScreenRaycaster
struct ScreenRaycaster_t4188861866;
// FingerClusterManager
struct FingerClusterManager_t3376029756;
// GestureRecognizerDelegate
struct GestureRecognizerDelegate_t2078703698;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_GestureResetMode2954327145.h"
#include "AssemblyU2DCSharp_GestureRecognizer_SelectionType1838415558.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureRecognizer
struct  GestureRecognizer_t3512875949  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 GestureRecognizer::requiredFingerCount
	int32_t ___requiredFingerCount_3;
	// System.Int32 GestureRecognizer::MaxSimultaneousGestures
	int32_t ___MaxSimultaneousGestures_4;
	// GestureResetMode GestureRecognizer::ResetMode
	int32_t ___ResetMode_5;
	// ScreenRaycaster GestureRecognizer::Raycaster
	ScreenRaycaster_t4188861866 * ___Raycaster_6;
	// FingerClusterManager GestureRecognizer::ClusterManager
	FingerClusterManager_t3376029756 * ___ClusterManager_7;
	// GestureRecognizerDelegate GestureRecognizer::Delegate
	GestureRecognizerDelegate_t2078703698 * ___Delegate_8;
	// System.Boolean GestureRecognizer::UseSendMessage
	bool ___UseSendMessage_9;
	// System.String GestureRecognizer::EventMessageName
	String_t* ___EventMessageName_10;
	// UnityEngine.GameObject GestureRecognizer::EventMessageTarget
	GameObject_t4012695102 * ___EventMessageTarget_11;
	// GestureRecognizer/SelectionType GestureRecognizer::SendMessageToSelection
	int32_t ___SendMessageToSelection_12;
	// System.Boolean GestureRecognizer::IsExclusive
	bool ___IsExclusive_13;

public:
	inline static int32_t get_offset_of_requiredFingerCount_3() { return static_cast<int32_t>(offsetof(GestureRecognizer_t3512875949, ___requiredFingerCount_3)); }
	inline int32_t get_requiredFingerCount_3() const { return ___requiredFingerCount_3; }
	inline int32_t* get_address_of_requiredFingerCount_3() { return &___requiredFingerCount_3; }
	inline void set_requiredFingerCount_3(int32_t value)
	{
		___requiredFingerCount_3 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousGestures_4() { return static_cast<int32_t>(offsetof(GestureRecognizer_t3512875949, ___MaxSimultaneousGestures_4)); }
	inline int32_t get_MaxSimultaneousGestures_4() const { return ___MaxSimultaneousGestures_4; }
	inline int32_t* get_address_of_MaxSimultaneousGestures_4() { return &___MaxSimultaneousGestures_4; }
	inline void set_MaxSimultaneousGestures_4(int32_t value)
	{
		___MaxSimultaneousGestures_4 = value;
	}

	inline static int32_t get_offset_of_ResetMode_5() { return static_cast<int32_t>(offsetof(GestureRecognizer_t3512875949, ___ResetMode_5)); }
	inline int32_t get_ResetMode_5() const { return ___ResetMode_5; }
	inline int32_t* get_address_of_ResetMode_5() { return &___ResetMode_5; }
	inline void set_ResetMode_5(int32_t value)
	{
		___ResetMode_5 = value;
	}

	inline static int32_t get_offset_of_Raycaster_6() { return static_cast<int32_t>(offsetof(GestureRecognizer_t3512875949, ___Raycaster_6)); }
	inline ScreenRaycaster_t4188861866 * get_Raycaster_6() const { return ___Raycaster_6; }
	inline ScreenRaycaster_t4188861866 ** get_address_of_Raycaster_6() { return &___Raycaster_6; }
	inline void set_Raycaster_6(ScreenRaycaster_t4188861866 * value)
	{
		___Raycaster_6 = value;
		Il2CppCodeGenWriteBarrier(&___Raycaster_6, value);
	}

	inline static int32_t get_offset_of_ClusterManager_7() { return static_cast<int32_t>(offsetof(GestureRecognizer_t3512875949, ___ClusterManager_7)); }
	inline FingerClusterManager_t3376029756 * get_ClusterManager_7() const { return ___ClusterManager_7; }
	inline FingerClusterManager_t3376029756 ** get_address_of_ClusterManager_7() { return &___ClusterManager_7; }
	inline void set_ClusterManager_7(FingerClusterManager_t3376029756 * value)
	{
		___ClusterManager_7 = value;
		Il2CppCodeGenWriteBarrier(&___ClusterManager_7, value);
	}

	inline static int32_t get_offset_of_Delegate_8() { return static_cast<int32_t>(offsetof(GestureRecognizer_t3512875949, ___Delegate_8)); }
	inline GestureRecognizerDelegate_t2078703698 * get_Delegate_8() const { return ___Delegate_8; }
	inline GestureRecognizerDelegate_t2078703698 ** get_address_of_Delegate_8() { return &___Delegate_8; }
	inline void set_Delegate_8(GestureRecognizerDelegate_t2078703698 * value)
	{
		___Delegate_8 = value;
		Il2CppCodeGenWriteBarrier(&___Delegate_8, value);
	}

	inline static int32_t get_offset_of_UseSendMessage_9() { return static_cast<int32_t>(offsetof(GestureRecognizer_t3512875949, ___UseSendMessage_9)); }
	inline bool get_UseSendMessage_9() const { return ___UseSendMessage_9; }
	inline bool* get_address_of_UseSendMessage_9() { return &___UseSendMessage_9; }
	inline void set_UseSendMessage_9(bool value)
	{
		___UseSendMessage_9 = value;
	}

	inline static int32_t get_offset_of_EventMessageName_10() { return static_cast<int32_t>(offsetof(GestureRecognizer_t3512875949, ___EventMessageName_10)); }
	inline String_t* get_EventMessageName_10() const { return ___EventMessageName_10; }
	inline String_t** get_address_of_EventMessageName_10() { return &___EventMessageName_10; }
	inline void set_EventMessageName_10(String_t* value)
	{
		___EventMessageName_10 = value;
		Il2CppCodeGenWriteBarrier(&___EventMessageName_10, value);
	}

	inline static int32_t get_offset_of_EventMessageTarget_11() { return static_cast<int32_t>(offsetof(GestureRecognizer_t3512875949, ___EventMessageTarget_11)); }
	inline GameObject_t4012695102 * get_EventMessageTarget_11() const { return ___EventMessageTarget_11; }
	inline GameObject_t4012695102 ** get_address_of_EventMessageTarget_11() { return &___EventMessageTarget_11; }
	inline void set_EventMessageTarget_11(GameObject_t4012695102 * value)
	{
		___EventMessageTarget_11 = value;
		Il2CppCodeGenWriteBarrier(&___EventMessageTarget_11, value);
	}

	inline static int32_t get_offset_of_SendMessageToSelection_12() { return static_cast<int32_t>(offsetof(GestureRecognizer_t3512875949, ___SendMessageToSelection_12)); }
	inline int32_t get_SendMessageToSelection_12() const { return ___SendMessageToSelection_12; }
	inline int32_t* get_address_of_SendMessageToSelection_12() { return &___SendMessageToSelection_12; }
	inline void set_SendMessageToSelection_12(int32_t value)
	{
		___SendMessageToSelection_12 = value;
	}

	inline static int32_t get_offset_of_IsExclusive_13() { return static_cast<int32_t>(offsetof(GestureRecognizer_t3512875949, ___IsExclusive_13)); }
	inline bool get_IsExclusive_13() const { return ___IsExclusive_13; }
	inline bool* get_address_of_IsExclusive_13() { return &___IsExclusive_13; }
	inline void set_IsExclusive_13(bool value)
	{
		___IsExclusive_13 = value;
	}
};

struct GestureRecognizer_t3512875949_StaticFields
{
public:
	// FingerGestures/IFingerList GestureRecognizer::EmptyFingerList
	Il2CppObject * ___EmptyFingerList_2;

public:
	inline static int32_t get_offset_of_EmptyFingerList_2() { return static_cast<int32_t>(offsetof(GestureRecognizer_t3512875949_StaticFields, ___EmptyFingerList_2)); }
	inline Il2CppObject * get_EmptyFingerList_2() const { return ___EmptyFingerList_2; }
	inline Il2CppObject ** get_address_of_EmptyFingerList_2() { return &___EmptyFingerList_2; }
	inline void set_EmptyFingerList_2(Il2CppObject * value)
	{
		___EmptyFingerList_2 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyFingerList_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
