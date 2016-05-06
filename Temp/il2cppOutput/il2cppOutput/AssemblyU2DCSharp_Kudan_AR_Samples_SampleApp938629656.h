#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Kudan.AR.KudanTracker
struct KudanTracker_t2187476953;
// Kudan.AR.TrackingMethodMarkerless
struct TrackingMethodMarkerless_t1068609011;
// ObjectManager
struct ObjectManager_t2442977102;
// ScenePersistence
struct ScenePersistence_t2589492883;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Kudan.AR.Samples.SampleApp
struct  SampleApp_t938629656  : public MonoBehaviour_t3012272455
{
public:
	// Kudan.AR.KudanTracker Kudan.AR.Samples.SampleApp::_kudanTracker
	KudanTracker_t2187476953 * ____kudanTracker_2;
	// Kudan.AR.TrackingMethodMarkerless Kudan.AR.Samples.SampleApp::_markerlessTracking
	TrackingMethodMarkerless_t1068609011 * ____markerlessTracking_3;
	// ObjectManager Kudan.AR.Samples.SampleApp::AdminObjetos
	ObjectManager_t2442977102 * ___AdminObjetos_4;
	// ScenePersistence Kudan.AR.Samples.SampleApp::Persistencia
	ScenePersistence_t2589492883 * ___Persistencia_5;
	// UnityEngine.GameObject Kudan.AR.Samples.SampleApp::caneca
	GameObject_t4012695102 * ___caneca_6;
	// UnityEngine.GameObject Kudan.AR.Samples.SampleApp::banca
	GameObject_t4012695102 * ___banca_7;
	// UnityEngine.GameObject Kudan.AR.Samples.SampleApp::elMarcador
	GameObject_t4012695102 * ___elMarcador_8;

public:
	inline static int32_t get_offset_of__kudanTracker_2() { return static_cast<int32_t>(offsetof(SampleApp_t938629656, ____kudanTracker_2)); }
	inline KudanTracker_t2187476953 * get__kudanTracker_2() const { return ____kudanTracker_2; }
	inline KudanTracker_t2187476953 ** get_address_of__kudanTracker_2() { return &____kudanTracker_2; }
	inline void set__kudanTracker_2(KudanTracker_t2187476953 * value)
	{
		____kudanTracker_2 = value;
		Il2CppCodeGenWriteBarrier(&____kudanTracker_2, value);
	}

	inline static int32_t get_offset_of__markerlessTracking_3() { return static_cast<int32_t>(offsetof(SampleApp_t938629656, ____markerlessTracking_3)); }
	inline TrackingMethodMarkerless_t1068609011 * get__markerlessTracking_3() const { return ____markerlessTracking_3; }
	inline TrackingMethodMarkerless_t1068609011 ** get_address_of__markerlessTracking_3() { return &____markerlessTracking_3; }
	inline void set__markerlessTracking_3(TrackingMethodMarkerless_t1068609011 * value)
	{
		____markerlessTracking_3 = value;
		Il2CppCodeGenWriteBarrier(&____markerlessTracking_3, value);
	}

	inline static int32_t get_offset_of_AdminObjetos_4() { return static_cast<int32_t>(offsetof(SampleApp_t938629656, ___AdminObjetos_4)); }
	inline ObjectManager_t2442977102 * get_AdminObjetos_4() const { return ___AdminObjetos_4; }
	inline ObjectManager_t2442977102 ** get_address_of_AdminObjetos_4() { return &___AdminObjetos_4; }
	inline void set_AdminObjetos_4(ObjectManager_t2442977102 * value)
	{
		___AdminObjetos_4 = value;
		Il2CppCodeGenWriteBarrier(&___AdminObjetos_4, value);
	}

	inline static int32_t get_offset_of_Persistencia_5() { return static_cast<int32_t>(offsetof(SampleApp_t938629656, ___Persistencia_5)); }
	inline ScenePersistence_t2589492883 * get_Persistencia_5() const { return ___Persistencia_5; }
	inline ScenePersistence_t2589492883 ** get_address_of_Persistencia_5() { return &___Persistencia_5; }
	inline void set_Persistencia_5(ScenePersistence_t2589492883 * value)
	{
		___Persistencia_5 = value;
		Il2CppCodeGenWriteBarrier(&___Persistencia_5, value);
	}

	inline static int32_t get_offset_of_caneca_6() { return static_cast<int32_t>(offsetof(SampleApp_t938629656, ___caneca_6)); }
	inline GameObject_t4012695102 * get_caneca_6() const { return ___caneca_6; }
	inline GameObject_t4012695102 ** get_address_of_caneca_6() { return &___caneca_6; }
	inline void set_caneca_6(GameObject_t4012695102 * value)
	{
		___caneca_6 = value;
		Il2CppCodeGenWriteBarrier(&___caneca_6, value);
	}

	inline static int32_t get_offset_of_banca_7() { return static_cast<int32_t>(offsetof(SampleApp_t938629656, ___banca_7)); }
	inline GameObject_t4012695102 * get_banca_7() const { return ___banca_7; }
	inline GameObject_t4012695102 ** get_address_of_banca_7() { return &___banca_7; }
	inline void set_banca_7(GameObject_t4012695102 * value)
	{
		___banca_7 = value;
		Il2CppCodeGenWriteBarrier(&___banca_7, value);
	}

	inline static int32_t get_offset_of_elMarcador_8() { return static_cast<int32_t>(offsetof(SampleApp_t938629656, ___elMarcador_8)); }
	inline GameObject_t4012695102 * get_elMarcador_8() const { return ___elMarcador_8; }
	inline GameObject_t4012695102 ** get_address_of_elMarcador_8() { return &___elMarcador_8; }
	inline void set_elMarcador_8(GameObject_t4012695102 * value)
	{
		___elMarcador_8 = value;
		Il2CppCodeGenWriteBarrier(&___elMarcador_8, value);
	}
};

struct SampleApp_t938629656_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Kudan.AR.Samples.SampleApp::<>f__switch$map0
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map0_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_9() { return static_cast<int32_t>(offsetof(SampleApp_t938629656_StaticFields, ___U3CU3Ef__switchU24map0_9)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map0_9() const { return ___U3CU3Ef__switchU24map0_9; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map0_9() { return &___U3CU3Ef__switchU24map0_9; }
	inline void set_U3CU3Ef__switchU24map0_9(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
