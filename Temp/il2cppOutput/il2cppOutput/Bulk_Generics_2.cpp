#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t3564997545;
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
struct GenericEqualityComparer_1_t2643256348;
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t1709834903;
// System.Collections.Generic.GenericEqualityComparer`1<System.Int32>
struct GenericEqualityComparer_1_t1778411100;
// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
struct GenericEqualityComparer_1_t4063070029;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
struct GenericEqualityComparer_1_t3989826501;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit3564997545.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit3564997545MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Collections_Generic_EqualityCompar4068391882MethodDeclarations.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_DateTime339033936MethodDeclarations.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit2643256348.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit2643256348MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_EqualityCompar3146650685MethodDeclarations.h"
#include "mscorlib_System_DateTimeOffset3712260035.h"
#include "mscorlib_System_DateTimeOffset3712260035MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit1709834903.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit1709834903MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_EqualityCompar2213229240MethodDeclarations.h"
#include "mscorlib_System_Guid2778838590.h"
#include "mscorlib_System_Guid2778838590MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit1778411100.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit1778411100MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_EqualityCompar2281805437MethodDeclarations.h"
#include "mscorlib_System_Int322847414787MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit4063070029.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit4063070029MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_EqualityCompare271497070MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit3989826501.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit3989826501MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_EqualityCompare198253542MethodDeclarations.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_TimeSpan763862892MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C"  void GenericEqualityComparer_1__ctor_m482987092_gshared (GenericEqualityComparer_1_t3564997545 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t4068391882 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		((  void (*) (EqualityComparer_1_t4068391882 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t4068391882 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C"  int32_t GenericEqualityComparer_1_GetHashCode_m2491699487_gshared (GenericEqualityComparer_1_t3564997545 * __this, DateTime_t339033936  ___obj, const MethodInfo* method)
{
	{
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = DateTime_GetHashCode_m2255586565((DateTime_t339033936 *)(&___obj), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C"  bool GenericEqualityComparer_1_Equals_m2462116073_gshared (GenericEqualityComparer_1_t3564997545 * __this, DateTime_t339033936  ___x, DateTime_t339033936  ___y, const MethodInfo* method)
{
	{
		goto IL_0015;
	}
	{
		DateTime_t339033936  L_1 = ___y;
		DateTime_t339033936  L_2 = L_1;
		Il2CppObject * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return (bool)((((Il2CppObject*)(Il2CppObject *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
	}

IL_0015:
	{
		DateTime_t339033936  L_4 = ___y;
		bool L_5 = DateTime_Equals_m1479384337((DateTime_t339033936 *)(&___x), (DateTime_t339033936 )L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::.ctor()
extern "C"  void GenericEqualityComparer_1__ctor_m3772310023_gshared (GenericEqualityComparer_1_t2643256348 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t3146650685 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		((  void (*) (EqualityComparer_1_t3146650685 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t3146650685 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
extern "C"  int32_t GenericEqualityComparer_1_GetHashCode_m789537036_gshared (GenericEqualityComparer_1_t2643256348 * __this, DateTimeOffset_t3712260035  ___obj, const MethodInfo* method)
{
	{
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = DateTimeOffset_GetHashCode_m1972583858((DateTimeOffset_t3712260035 *)(&___obj), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
extern "C"  bool GenericEqualityComparer_1_Equals_m3984360348_gshared (GenericEqualityComparer_1_t2643256348 * __this, DateTimeOffset_t3712260035  ___x, DateTimeOffset_t3712260035  ___y, const MethodInfo* method)
{
	{
		goto IL_0015;
	}
	{
		DateTimeOffset_t3712260035  L_1 = ___y;
		DateTimeOffset_t3712260035  L_2 = L_1;
		Il2CppObject * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return (bool)((((Il2CppObject*)(Il2CppObject *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
	}

IL_0015:
	{
		DateTimeOffset_t3712260035  L_4 = ___y;
		bool L_5 = DateTimeOffset_Equals_m4108087019((DateTimeOffset_t3712260035 *)(&___x), (DateTimeOffset_t3712260035 )L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C"  void GenericEqualityComparer_1__ctor_m717896642_gshared (GenericEqualityComparer_1_t1709834903 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2213229240 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		((  void (*) (EqualityComparer_1_t2213229240 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2213229240 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C"  int32_t GenericEqualityComparer_1_GetHashCode_m3817905137_gshared (GenericEqualityComparer_1_t1709834903 * __this, Guid_t2778838590  ___obj, const MethodInfo* method)
{
	{
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = Guid_GetHashCode_m885349207((Guid_t2778838590 *)(&___obj), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C"  bool GenericEqualityComparer_1_Equals_m3934356055_gshared (GenericEqualityComparer_1_t1709834903 * __this, Guid_t2778838590  ___x, Guid_t2778838590  ___y, const MethodInfo* method)
{
	{
		goto IL_0015;
	}
	{
		Guid_t2778838590  L_1 = ___y;
		Guid_t2778838590  L_2 = L_1;
		Il2CppObject * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return (bool)((((Il2CppObject*)(Il2CppObject *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Guid_t2778838590  L_4 = ___y;
		bool L_5 = Guid_Equals_m2229489973((Guid_t2778838590 *)(&___x), (Guid_t2778838590 )L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::.ctor()
extern "C"  void GenericEqualityComparer_1__ctor_m542716703_gshared (GenericEqualityComparer_1_t1778411100 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2281805437 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		((  void (*) (EqualityComparer_1_t2281805437 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2281805437 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::GetHashCode(T)
extern "C"  int32_t GenericEqualityComparer_1_GetHashCode_m3699244972_gshared (GenericEqualityComparer_1_t1778411100 * __this, int32_t ___obj, const MethodInfo* method)
{
	{
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = Int32_GetHashCode_m3396943446((int32_t*)(&___obj), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Int32>::Equals(T,T)
extern "C"  bool GenericEqualityComparer_1_Equals_m2843749488_gshared (GenericEqualityComparer_1_t1778411100 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	{
		goto IL_0015;
	}
	{
		int32_t L_1 = ___y;
		int32_t L_2 = L_1;
		Il2CppObject * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return (bool)((((Il2CppObject*)(Il2CppObject *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
	}

IL_0015:
	{
		int32_t L_4 = ___y;
		bool L_5 = Int32_Equals_m3849884467((int32_t*)(&___x), (int32_t)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Object>::.ctor()
extern "C"  void GenericEqualityComparer_1__ctor_m1097371640_gshared (GenericEqualityComparer_1_t4063070029 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t271497070 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		((  void (*) (EqualityComparer_1_t271497070 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t271497070 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Object>::GetHashCode(T)
extern "C"  int32_t GenericEqualityComparer_1_GetHashCode_m4022924795_gshared (GenericEqualityComparer_1_t4063070029 * __this, Il2CppObject * ___obj, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Il2CppObject *)(*(&___obj)));
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Il2CppObject *)(*(&___obj)));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Object>::Equals(T,T)
extern "C"  bool GenericEqualityComparer_1_Equals_m2036593421_gshared (GenericEqualityComparer_1_t4063070029 * __this, Il2CppObject * ___x, Il2CppObject * ___y, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___x;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Il2CppObject * L_1 = ___y;
		return (bool)((((Il2CppObject*)(Il2CppObject *)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Il2CppObject * L_2 = ___y;
		NullCheck((Il2CppObject*)(*(&___x)));
		bool L_3 = InterfaceFuncInvoker1< bool, Il2CppObject * >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Il2CppObject*)(*(&___x)), (Il2CppObject *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C"  void GenericEqualityComparer_1__ctor_m1135065456_gshared (GenericEqualityComparer_1_t3989826501 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t198253542 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		((  void (*) (EqualityComparer_1_t198253542 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t198253542 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C"  int32_t GenericEqualityComparer_1_GetHashCode_m1043508355_gshared (GenericEqualityComparer_1_t3989826501 * __this, TimeSpan_t763862892  ___obj, const MethodInfo* method)
{
	{
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = TimeSpan_GetHashCode_m3188156777((TimeSpan_t763862892 *)(&___obj), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C"  bool GenericEqualityComparer_1_Equals_m275441669_gshared (GenericEqualityComparer_1_t3989826501 * __this, TimeSpan_t763862892  ___x, TimeSpan_t763862892  ___y, const MethodInfo* method)
{
	{
		goto IL_0015;
	}
	{
		TimeSpan_t763862892  L_1 = ___y;
		TimeSpan_t763862892  L_2 = L_1;
		Il2CppObject * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return (bool)((((Il2CppObject*)(Il2CppObject *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
	}

IL_0015:
	{
		TimeSpan_t763862892  L_4 = ___y;
		bool L_5 = TimeSpan_Equals_m3271948249((TimeSpan_t763862892 *)(&___x), (TimeSpan_t763862892 )L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
