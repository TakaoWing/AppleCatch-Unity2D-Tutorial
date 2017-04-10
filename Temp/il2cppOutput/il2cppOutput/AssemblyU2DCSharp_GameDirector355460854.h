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

// GameDirector
struct  GameDirector_t355460854  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GameDirector::timerText
	GameObject_t1756533147 * ___timerText_2;
	// UnityEngine.GameObject GameDirector::pointText
	GameObject_t1756533147 * ___pointText_3;
	// System.Single GameDirector::time
	float ___time_4;
	// System.Int32 GameDirector::point
	int32_t ___point_5;
	// UnityEngine.GameObject GameDirector::generator
	GameObject_t1756533147 * ___generator_6;

public:
	inline static int32_t get_offset_of_timerText_2() { return static_cast<int32_t>(offsetof(GameDirector_t355460854, ___timerText_2)); }
	inline GameObject_t1756533147 * get_timerText_2() const { return ___timerText_2; }
	inline GameObject_t1756533147 ** get_address_of_timerText_2() { return &___timerText_2; }
	inline void set_timerText_2(GameObject_t1756533147 * value)
	{
		___timerText_2 = value;
		Il2CppCodeGenWriteBarrier(&___timerText_2, value);
	}

	inline static int32_t get_offset_of_pointText_3() { return static_cast<int32_t>(offsetof(GameDirector_t355460854, ___pointText_3)); }
	inline GameObject_t1756533147 * get_pointText_3() const { return ___pointText_3; }
	inline GameObject_t1756533147 ** get_address_of_pointText_3() { return &___pointText_3; }
	inline void set_pointText_3(GameObject_t1756533147 * value)
	{
		___pointText_3 = value;
		Il2CppCodeGenWriteBarrier(&___pointText_3, value);
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(GameDirector_t355460854, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_point_5() { return static_cast<int32_t>(offsetof(GameDirector_t355460854, ___point_5)); }
	inline int32_t get_point_5() const { return ___point_5; }
	inline int32_t* get_address_of_point_5() { return &___point_5; }
	inline void set_point_5(int32_t value)
	{
		___point_5 = value;
	}

	inline static int32_t get_offset_of_generator_6() { return static_cast<int32_t>(offsetof(GameDirector_t355460854, ___generator_6)); }
	inline GameObject_t1756533147 * get_generator_6() const { return ___generator_6; }
	inline GameObject_t1756533147 ** get_address_of_generator_6() { return &___generator_6; }
	inline void set_generator_6(GameObject_t1756533147 * value)
	{
		___generator_6 = value;
		Il2CppCodeGenWriteBarrier(&___generator_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
