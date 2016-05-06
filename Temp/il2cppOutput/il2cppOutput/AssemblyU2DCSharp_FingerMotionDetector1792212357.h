#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// FingerEventDetector`1/FingerEventHandler<FingerMotionEvent>
struct FingerEventHandler_t2610700241;

#include "AssemblyU2DCSharp_FingerEventDetector_1_gen2239797768.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FingerMotionDetector
struct  FingerMotionDetector_t1792212357  : public FingerEventDetector_1_t2239797768
{
public:
	// System.String FingerMotionDetector::MoveMessageName
	String_t* ___MoveMessageName_10;
	// System.String FingerMotionDetector::StationaryMessageName
	String_t* ___StationaryMessageName_11;
	// System.Boolean FingerMotionDetector::TrackMove
	bool ___TrackMove_12;
	// System.Boolean FingerMotionDetector::TrackStationary
	bool ___TrackStationary_13;
	// FingerEventDetector`1/FingerEventHandler<FingerMotionEvent> FingerMotionDetector::OnFingerMove
	FingerEventHandler_t2610700241 * ___OnFingerMove_14;
	// FingerEventDetector`1/FingerEventHandler<FingerMotionEvent> FingerMotionDetector::OnFingerStationary
	FingerEventHandler_t2610700241 * ___OnFingerStationary_15;

public:
	inline static int32_t get_offset_of_MoveMessageName_10() { return static_cast<int32_t>(offsetof(FingerMotionDetector_t1792212357, ___MoveMessageName_10)); }
	inline String_t* get_MoveMessageName_10() const { return ___MoveMessageName_10; }
	inline String_t** get_address_of_MoveMessageName_10() { return &___MoveMessageName_10; }
	inline void set_MoveMessageName_10(String_t* value)
	{
		___MoveMessageName_10 = value;
		Il2CppCodeGenWriteBarrier(&___MoveMessageName_10, value);
	}

	inline static int32_t get_offset_of_StationaryMessageName_11() { return static_cast<int32_t>(offsetof(FingerMotionDetector_t1792212357, ___StationaryMessageName_11)); }
	inline String_t* get_StationaryMessageName_11() const { return ___StationaryMessageName_11; }
	inline String_t** get_address_of_StationaryMessageName_11() { return &___StationaryMessageName_11; }
	inline void set_StationaryMessageName_11(String_t* value)
	{
		___StationaryMessageName_11 = value;
		Il2CppCodeGenWriteBarrier(&___StationaryMessageName_11, value);
	}

	inline static int32_t get_offset_of_TrackMove_12() { return static_cast<int32_t>(offsetof(FingerMotionDetector_t1792212357, ___TrackMove_12)); }
	inline bool get_TrackMove_12() const { return ___TrackMove_12; }
	inline bool* get_address_of_TrackMove_12() { return &___TrackMove_12; }
	inline void set_TrackMove_12(bool value)
	{
		___TrackMove_12 = value;
	}

	inline static int32_t get_offset_of_TrackStationary_13() { return static_cast<int32_t>(offsetof(FingerMotionDetector_t1792212357, ___TrackStationary_13)); }
	inline bool get_TrackStationary_13() const { return ___TrackStationary_13; }
	inline bool* get_address_of_TrackStationary_13() { return &___TrackStationary_13; }
	inline void set_TrackStationary_13(bool value)
	{
		___TrackStationary_13 = value;
	}

	inline static int32_t get_offset_of_OnFingerMove_14() { return static_cast<int32_t>(offsetof(FingerMotionDetector_t1792212357, ___OnFingerMove_14)); }
	inline FingerEventHandler_t2610700241 * get_OnFingerMove_14() const { return ___OnFingerMove_14; }
	inline FingerEventHandler_t2610700241 ** get_address_of_OnFingerMove_14() { return &___OnFingerMove_14; }
	inline void set_OnFingerMove_14(FingerEventHandler_t2610700241 * value)
	{
		___OnFingerMove_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerMove_14, value);
	}

	inline static int32_t get_offset_of_OnFingerStationary_15() { return static_cast<int32_t>(offsetof(FingerMotionDetector_t1792212357, ___OnFingerStationary_15)); }
	inline FingerEventHandler_t2610700241 * get_OnFingerStationary_15() const { return ___OnFingerStationary_15; }
	inline FingerEventHandler_t2610700241 ** get_address_of_OnFingerStationary_15() { return &___OnFingerStationary_15; }
	inline void set_OnFingerStationary_15(FingerEventHandler_t2610700241 * value)
	{
		___OnFingerStationary_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerStationary_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
