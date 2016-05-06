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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LocationInfo1628589680.h"

// System.Single UnityEngine.LocationInfo::get_latitude()
extern "C"  float LocationInfo_get_latitude_m1803811355 (LocationInfo_t1628589680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.LocationInfo::get_longitude()
extern "C"  float LocationInfo_get_longitude_m3505987842 (LocationInfo_t1628589680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.LocationInfo::get_altitude()
extern "C"  float LocationInfo_get_altitude_m1263330001 (LocationInfo_t1628589680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.LocationInfo::get_horizontalAccuracy()
extern "C"  float LocationInfo_get_horizontalAccuracy_m1838637356 (LocationInfo_t1628589680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.LocationInfo::get_timestamp()
extern "C"  double LocationInfo_get_timestamp_m3580264178 (LocationInfo_t1628589680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct LocationInfo_t1628589680;
struct LocationInfo_t1628589680_marshaled_pinvoke;

extern "C" void LocationInfo_t1628589680_marshal_pinvoke(const LocationInfo_t1628589680& unmarshaled, LocationInfo_t1628589680_marshaled_pinvoke& marshaled);
extern "C" void LocationInfo_t1628589680_marshal_pinvoke_back(const LocationInfo_t1628589680_marshaled_pinvoke& marshaled, LocationInfo_t1628589680& unmarshaled);
extern "C" void LocationInfo_t1628589680_marshal_pinvoke_cleanup(LocationInfo_t1628589680_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct LocationInfo_t1628589680;
struct LocationInfo_t1628589680_marshaled_com;

extern "C" void LocationInfo_t1628589680_marshal_com(const LocationInfo_t1628589680& unmarshaled, LocationInfo_t1628589680_marshaled_com& marshaled);
extern "C" void LocationInfo_t1628589680_marshal_com_back(const LocationInfo_t1628589680_marshaled_com& marshaled, LocationInfo_t1628589680& unmarshaled);
extern "C" void LocationInfo_t1628589680_marshal_com_cleanup(LocationInfo_t1628589680_marshaled_com& marshaled);
