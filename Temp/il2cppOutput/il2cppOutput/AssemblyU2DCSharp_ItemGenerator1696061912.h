#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ItemGenerator
struct  ItemGenerator_t1696061912  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ItemGenerator::applePrefab
	GameObject_t1756533147 * ___applePrefab_2;
	// UnityEngine.GameObject ItemGenerator::bombPrefab
	GameObject_t1756533147 * ___bombPrefab_3;
	// System.Single ItemGenerator::span
	float ___span_4;
	// System.Single ItemGenerator::delta
	float ___delta_5;
	// System.Int32 ItemGenerator::ratio
	int32_t ___ratio_6;
	// System.Single ItemGenerator::speed
	float ___speed_7;

public:
	inline static int32_t get_offset_of_applePrefab_2() { return static_cast<int32_t>(offsetof(ItemGenerator_t1696061912, ___applePrefab_2)); }
	inline GameObject_t1756533147 * get_applePrefab_2() const { return ___applePrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_applePrefab_2() { return &___applePrefab_2; }
	inline void set_applePrefab_2(GameObject_t1756533147 * value)
	{
		___applePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___applePrefab_2, value);
	}

	inline static int32_t get_offset_of_bombPrefab_3() { return static_cast<int32_t>(offsetof(ItemGenerator_t1696061912, ___bombPrefab_3)); }
	inline GameObject_t1756533147 * get_bombPrefab_3() const { return ___bombPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_bombPrefab_3() { return &___bombPrefab_3; }
	inline void set_bombPrefab_3(GameObject_t1756533147 * value)
	{
		___bombPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___bombPrefab_3, value);
	}

	inline static int32_t get_offset_of_span_4() { return static_cast<int32_t>(offsetof(ItemGenerator_t1696061912, ___span_4)); }
	inline float get_span_4() const { return ___span_4; }
	inline float* get_address_of_span_4() { return &___span_4; }
	inline void set_span_4(float value)
	{
		___span_4 = value;
	}

	inline static int32_t get_offset_of_delta_5() { return static_cast<int32_t>(offsetof(ItemGenerator_t1696061912, ___delta_5)); }
	inline float get_delta_5() const { return ___delta_5; }
	inline float* get_address_of_delta_5() { return &___delta_5; }
	inline void set_delta_5(float value)
	{
		___delta_5 = value;
	}

	inline static int32_t get_offset_of_ratio_6() { return static_cast<int32_t>(offsetof(ItemGenerator_t1696061912, ___ratio_6)); }
	inline int32_t get_ratio_6() const { return ___ratio_6; }
	inline int32_t* get_address_of_ratio_6() { return &___ratio_6; }
	inline void set_ratio_6(int32_t value)
	{
		___ratio_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(ItemGenerator_t1696061912, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
