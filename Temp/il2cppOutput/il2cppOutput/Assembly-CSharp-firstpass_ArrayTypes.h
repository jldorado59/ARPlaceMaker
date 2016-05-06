#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// iTween
struct iTween_t3087282050;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharpU2Dfirstpass_iTween3087282050.h"

#pragma once
// iTween[]
struct iTweenU5BU5D_t2929256503  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) iTween_t3087282050 * m_Items[1];

public:
	inline iTween_t3087282050 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline iTween_t3087282050 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, iTween_t3087282050 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
