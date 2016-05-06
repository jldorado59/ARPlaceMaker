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

// ScreenRaycaster
struct ScreenRaycaster_t4188861866;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"

// System.Void ScreenRaycaster::.ctor()
extern "C"  void ScreenRaycaster__ctor_m2080608513 (ScreenRaycaster_t4188861866 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenRaycaster::Start()
extern "C"  void ScreenRaycaster_Start_m1027746305 (ScreenRaycaster_t4188861866 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ScreenRaycaster::Raycast(UnityEngine.Vector2,UnityEngine.RaycastHit&)
extern "C"  bool ScreenRaycaster_Raycast_m905160741 (ScreenRaycaster_t4188861866 * __this, Vector2_t3525329788  ___screenPos, RaycastHit_t46221527 * ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ScreenRaycaster::Raycast(UnityEngine.Camera,UnityEngine.Vector2,UnityEngine.RaycastHit&)
extern "C"  bool ScreenRaycaster_Raycast_m1931693051 (ScreenRaycaster_t4188861866 * __this, Camera_t3533968274 * ___cam, Vector2_t3525329788  ___screenPos, RaycastHit_t46221527 * ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
