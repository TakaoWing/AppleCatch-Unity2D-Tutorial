#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BasketContller
struct  BasketContller_t646571637  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip BasketContller::appleSE
	AudioClip_t1932558630 * ___appleSE_2;
	// UnityEngine.AudioClip BasketContller::bombSE
	AudioClip_t1932558630 * ___bombSE_3;
	// UnityEngine.AudioSource BasketContller::aud
	AudioSource_t1135106623 * ___aud_4;
	// UnityEngine.GameObject BasketContller::director
	GameObject_t1756533147 * ___director_5;

public:
	inline static int32_t get_offset_of_appleSE_2() { return static_cast<int32_t>(offsetof(BasketContller_t646571637, ___appleSE_2)); }
	inline AudioClip_t1932558630 * get_appleSE_2() const { return ___appleSE_2; }
	inline AudioClip_t1932558630 ** get_address_of_appleSE_2() { return &___appleSE_2; }
	inline void set_appleSE_2(AudioClip_t1932558630 * value)
	{
		___appleSE_2 = value;
		Il2CppCodeGenWriteBarrier(&___appleSE_2, value);
	}

	inline static int32_t get_offset_of_bombSE_3() { return static_cast<int32_t>(offsetof(BasketContller_t646571637, ___bombSE_3)); }
	inline AudioClip_t1932558630 * get_bombSE_3() const { return ___bombSE_3; }
	inline AudioClip_t1932558630 ** get_address_of_bombSE_3() { return &___bombSE_3; }
	inline void set_bombSE_3(AudioClip_t1932558630 * value)
	{
		___bombSE_3 = value;
		Il2CppCodeGenWriteBarrier(&___bombSE_3, value);
	}

	inline static int32_t get_offset_of_aud_4() { return static_cast<int32_t>(offsetof(BasketContller_t646571637, ___aud_4)); }
	inline AudioSource_t1135106623 * get_aud_4() const { return ___aud_4; }
	inline AudioSource_t1135106623 ** get_address_of_aud_4() { return &___aud_4; }
	inline void set_aud_4(AudioSource_t1135106623 * value)
	{
		___aud_4 = value;
		Il2CppCodeGenWriteBarrier(&___aud_4, value);
	}

	inline static int32_t get_offset_of_director_5() { return static_cast<int32_t>(offsetof(BasketContller_t646571637, ___director_5)); }
	inline GameObject_t1756533147 * get_director_5() const { return ___director_5; }
	inline GameObject_t1756533147 ** get_address_of_director_5() { return &___director_5; }
	inline void set_director_5(GameObject_t1756533147 * value)
	{
		___director_5 = value;
		Il2CppCodeGenWriteBarrier(&___director_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
