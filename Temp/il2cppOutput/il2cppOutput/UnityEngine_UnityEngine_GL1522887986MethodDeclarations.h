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
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void UnityEngine.GL::Vertex(UnityEngine.Vector3)
extern "C"  void GL_Vertex_m1061829497 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_Vertex(UnityEngine.Vector3&)
extern "C"  void GL_INTERNAL_CALL_Vertex_m1736463730 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Color(UnityEngine.Color)
extern "C"  void GL_Color_m501875645 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_Color(UnityEngine.Color&)
extern "C"  void GL_INTERNAL_CALL_Color_m644590096 (Il2CppObject * __this /* static, unused */, Color_t1588175760 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C"  void GL_Begin_m3089952800 (Il2CppObject * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::End()
extern "C"  void GL_End_m2013837889 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadProjectionMatrix(UnityEngine.Matrix4x4)
extern "C"  void GL_LoadProjectionMatrix_m1743857864 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_LoadProjectionMatrix(UnityEngine.Matrix4x4&)
extern "C"  void GL_INTERNAL_CALL_LoadProjectionMatrix_m747189251 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::MultMatrix(UnityEngine.Matrix4x4)
extern "C"  void GL_MultMatrix_m1618741133 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_MultMatrix(UnityEngine.Matrix4x4&)
extern "C"  void GL_INTERNAL_CALL_MultMatrix_m1564496030 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PushMatrix()
extern "C"  void GL_PushMatrix_m626765559 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PopMatrix()
extern "C"  void GL_PopMatrix_m3073322328 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.GL::GetGPUProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  Matrix4x4_t277289660  GL_GetGPUProjectionMatrix_m1961192416 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660  ___proj, bool ___renderIntoTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_GetGPUProjectionMatrix(UnityEngine.Matrix4x4&,System.Boolean,UnityEngine.Matrix4x4&)
extern "C"  void GL_INTERNAL_CALL_GetGPUProjectionMatrix_m767958606 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660 * ___proj, bool ___renderIntoTexture, Matrix4x4_t277289660 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::IssuePluginEvent(System.IntPtr,System.Int32)
extern "C"  void GL_IssuePluginEvent_m573896589 (Il2CppObject * __this /* static, unused */, IntPtr_t ___callback, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::IssuePluginEventInternal(System.IntPtr,System.Int32)
extern "C"  void GL_IssuePluginEventInternal_m4039085034 (Il2CppObject * __this /* static, unused */, IntPtr_t ___callback, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
