#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<PointCloudGestureTemplate>
struct List_1_t8544375;
// PointCloudRegognizer/GestureNormalizer
struct GestureNormalizer_t1827976462;
// System.Collections.Generic.List`1<PointCloudRegognizer/NormalizedTemplate>
struct List_1_t351283626;
// System.Boolean[]
struct BooleanU5BU5D_t3804927312;
// PointCloudGesture
struct PointCloudGesture_t1959506660;
// PointCloudRegognizer/NormalizedTemplate
struct NormalizedTemplate_t3849291953;

#include "AssemblyU2DCSharp_DiscreteGestureRecognizer_1_gen1420501158.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointCloudRegognizer
struct  PointCloudRegognizer_t615038373  : public DiscreteGestureRecognizer_1_t1420501158
{
public:
	// System.Single PointCloudRegognizer::MinDistanceBetweenSamples
	float ___MinDistanceBetweenSamples_20;
	// System.Single PointCloudRegognizer::MaxMatchDistance
	float ___MaxMatchDistance_21;
	// System.Collections.Generic.List`1<PointCloudGestureTemplate> PointCloudRegognizer::Templates
	List_1_t8544375 * ___Templates_22;
	// PointCloudRegognizer/GestureNormalizer PointCloudRegognizer::normalizer
	GestureNormalizer_t1827976462 * ___normalizer_23;
	// System.Collections.Generic.List`1<PointCloudRegognizer/NormalizedTemplate> PointCloudRegognizer::normalizedTemplates
	List_1_t351283626 * ___normalizedTemplates_24;
	// PointCloudGesture PointCloudRegognizer::debugLastGesture
	PointCloudGesture_t1959506660 * ___debugLastGesture_26;
	// PointCloudRegognizer/NormalizedTemplate PointCloudRegognizer::debugLastMatchedTemplate
	NormalizedTemplate_t3849291953 * ___debugLastMatchedTemplate_27;

public:
	inline static int32_t get_offset_of_MinDistanceBetweenSamples_20() { return static_cast<int32_t>(offsetof(PointCloudRegognizer_t615038373, ___MinDistanceBetweenSamples_20)); }
	inline float get_MinDistanceBetweenSamples_20() const { return ___MinDistanceBetweenSamples_20; }
	inline float* get_address_of_MinDistanceBetweenSamples_20() { return &___MinDistanceBetweenSamples_20; }
	inline void set_MinDistanceBetweenSamples_20(float value)
	{
		___MinDistanceBetweenSamples_20 = value;
	}

	inline static int32_t get_offset_of_MaxMatchDistance_21() { return static_cast<int32_t>(offsetof(PointCloudRegognizer_t615038373, ___MaxMatchDistance_21)); }
	inline float get_MaxMatchDistance_21() const { return ___MaxMatchDistance_21; }
	inline float* get_address_of_MaxMatchDistance_21() { return &___MaxMatchDistance_21; }
	inline void set_MaxMatchDistance_21(float value)
	{
		___MaxMatchDistance_21 = value;
	}

	inline static int32_t get_offset_of_Templates_22() { return static_cast<int32_t>(offsetof(PointCloudRegognizer_t615038373, ___Templates_22)); }
	inline List_1_t8544375 * get_Templates_22() const { return ___Templates_22; }
	inline List_1_t8544375 ** get_address_of_Templates_22() { return &___Templates_22; }
	inline void set_Templates_22(List_1_t8544375 * value)
	{
		___Templates_22 = value;
		Il2CppCodeGenWriteBarrier(&___Templates_22, value);
	}

	inline static int32_t get_offset_of_normalizer_23() { return static_cast<int32_t>(offsetof(PointCloudRegognizer_t615038373, ___normalizer_23)); }
	inline GestureNormalizer_t1827976462 * get_normalizer_23() const { return ___normalizer_23; }
	inline GestureNormalizer_t1827976462 ** get_address_of_normalizer_23() { return &___normalizer_23; }
	inline void set_normalizer_23(GestureNormalizer_t1827976462 * value)
	{
		___normalizer_23 = value;
		Il2CppCodeGenWriteBarrier(&___normalizer_23, value);
	}

	inline static int32_t get_offset_of_normalizedTemplates_24() { return static_cast<int32_t>(offsetof(PointCloudRegognizer_t615038373, ___normalizedTemplates_24)); }
	inline List_1_t351283626 * get_normalizedTemplates_24() const { return ___normalizedTemplates_24; }
	inline List_1_t351283626 ** get_address_of_normalizedTemplates_24() { return &___normalizedTemplates_24; }
	inline void set_normalizedTemplates_24(List_1_t351283626 * value)
	{
		___normalizedTemplates_24 = value;
		Il2CppCodeGenWriteBarrier(&___normalizedTemplates_24, value);
	}

	inline static int32_t get_offset_of_debugLastGesture_26() { return static_cast<int32_t>(offsetof(PointCloudRegognizer_t615038373, ___debugLastGesture_26)); }
	inline PointCloudGesture_t1959506660 * get_debugLastGesture_26() const { return ___debugLastGesture_26; }
	inline PointCloudGesture_t1959506660 ** get_address_of_debugLastGesture_26() { return &___debugLastGesture_26; }
	inline void set_debugLastGesture_26(PointCloudGesture_t1959506660 * value)
	{
		___debugLastGesture_26 = value;
		Il2CppCodeGenWriteBarrier(&___debugLastGesture_26, value);
	}

	inline static int32_t get_offset_of_debugLastMatchedTemplate_27() { return static_cast<int32_t>(offsetof(PointCloudRegognizer_t615038373, ___debugLastMatchedTemplate_27)); }
	inline NormalizedTemplate_t3849291953 * get_debugLastMatchedTemplate_27() const { return ___debugLastMatchedTemplate_27; }
	inline NormalizedTemplate_t3849291953 ** get_address_of_debugLastMatchedTemplate_27() { return &___debugLastMatchedTemplate_27; }
	inline void set_debugLastMatchedTemplate_27(NormalizedTemplate_t3849291953 * value)
	{
		___debugLastMatchedTemplate_27 = value;
		Il2CppCodeGenWriteBarrier(&___debugLastMatchedTemplate_27, value);
	}
};

struct PointCloudRegognizer_t615038373_StaticFields
{
public:
	// System.Boolean[] PointCloudRegognizer::matched
	BooleanU5BU5D_t3804927312* ___matched_25;

public:
	inline static int32_t get_offset_of_matched_25() { return static_cast<int32_t>(offsetof(PointCloudRegognizer_t615038373_StaticFields, ___matched_25)); }
	inline BooleanU5BU5D_t3804927312* get_matched_25() const { return ___matched_25; }
	inline BooleanU5BU5D_t3804927312** get_address_of_matched_25() { return &___matched_25; }
	inline void set_matched_25(BooleanU5BU5D_t3804927312* value)
	{
		___matched_25 = value;
		Il2CppCodeGenWriteBarrier(&___matched_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
