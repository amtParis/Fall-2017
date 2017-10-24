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
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t1159152697;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3522805672;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t2753877109;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t1532274899;
// System.Byte[]
struct ByteU5BU5D_t3830052617;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>
struct List_1_t858730237;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct ConnectionChangeEvent_t3345771492;
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t410719146;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1849862226;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_t1473260158;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t682547774;
// System.IntPtr[]
struct IntPtrU5BU5D_t1028149952;
// System.Collections.IDictionary
struct IDictionary_t3165178467;
// System.Object[]
struct ObjectU5BU5D_t1025653127;
// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Queue_1_t1907016525;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1105136855;
// System.Void
struct Void_t2840465117;
// System.Char[]
struct CharU5BU5D_t1813131194;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t333645977;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t1350055743;
// UnityEngine.GameObject
struct GameObject_t3116970073;
// UnityEngine.Camera
struct Camera_t4025609027;
// UnityEngine.Events.UnityAction
struct UnityAction_t1758141767;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3518579387;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t629119655;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t2562775157;
// System.Type
struct Type_t;
// UnityEngine.ILogHandler
struct ILogHandler_t669855496;
// UnityEngine.IPlayerEditorConnectionNative
struct IPlayerEditorConnectionNative_t2701128528;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_t2682965605;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1549538616;
// System.IAsyncResult
struct IAsyncResult_t2715088364;
// System.AsyncCallback
struct AsyncCallback_t2703135071;

struct Object_t2753877109_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef SETUPCOROUTINE_T2005797758_H
#define SETUPCOROUTINE_T2005797758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SetupCoroutine
struct  SetupCoroutine_t2005797758  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETUPCOROUTINE_T2005797758_H
#ifndef UNITYEVENTBASE_T3761859391_H
#define UNITYEVENTBASE_T3761859391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3761859391  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t1159152697 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3522805672 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3761859391, ___m_Calls_0)); }
	inline InvokableCallList_t1159152697 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t1159152697 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t1159152697 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3761859391, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3522805672 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3522805672 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3522805672 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3761859391, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3761859391, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3761859391_H
#ifndef UNITYSTRING_T2865881885_H
#define UNITYSTRING_T2865881885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityString
struct  UnityString_t2865881885  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSTRING_T2865881885_H
#ifndef BASEINVOKABLECALL_T3031526926_H
#define BASEINVOKABLECALL_T3031526926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t3031526926  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T3031526926_H
#ifndef ARGUMENTCACHE_T629119655_H
#define ARGUMENTCACHE_T629119655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t629119655  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_t2753877109 * ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t629119655, ___m_ObjectArgument_0)); }
	inline Object_t2753877109 * get_m_ObjectArgument_0() const { return ___m_ObjectArgument_0; }
	inline Object_t2753877109 ** get_address_of_m_ObjectArgument_0() { return &___m_ObjectArgument_0; }
	inline void set_m_ObjectArgument_0(Object_t2753877109 * value)
	{
		___m_ObjectArgument_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgument_0), value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(ArgumentCache_t629119655, ___m_ObjectArgumentAssemblyTypeName_1)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_1() const { return ___m_ObjectArgumentAssemblyTypeName_1; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_1() { return &___m_ObjectArgumentAssemblyTypeName_1; }
	inline void set_m_ObjectArgumentAssemblyTypeName_1(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgumentAssemblyTypeName_1), value);
	}

	inline static int32_t get_offset_of_m_IntArgument_2() { return static_cast<int32_t>(offsetof(ArgumentCache_t629119655, ___m_IntArgument_2)); }
	inline int32_t get_m_IntArgument_2() const { return ___m_IntArgument_2; }
	inline int32_t* get_address_of_m_IntArgument_2() { return &___m_IntArgument_2; }
	inline void set_m_IntArgument_2(int32_t value)
	{
		___m_IntArgument_2 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t629119655, ___m_FloatArgument_3)); }
	inline float get_m_FloatArgument_3() const { return ___m_FloatArgument_3; }
	inline float* get_address_of_m_FloatArgument_3() { return &___m_FloatArgument_3; }
	inline void set_m_FloatArgument_3(float value)
	{
		___m_FloatArgument_3 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t629119655, ___m_StringArgument_4)); }
	inline String_t* get_m_StringArgument_4() const { return ___m_StringArgument_4; }
	inline String_t** get_address_of_m_StringArgument_4() { return &___m_StringArgument_4; }
	inline void set_m_StringArgument_4(String_t* value)
	{
		___m_StringArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringArgument_4), value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t629119655, ___m_BoolArgument_5)); }
	inline bool get_m_BoolArgument_5() const { return ___m_BoolArgument_5; }
	inline bool* get_address_of_m_BoolArgument_5() { return &___m_BoolArgument_5; }
	inline void set_m_BoolArgument_5(bool value)
	{
		___m_BoolArgument_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTCACHE_T629119655_H
#ifndef STACKTRACEUTILITY_T3088385283_H
#define STACKTRACEUTILITY_T3088385283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t3088385283  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t3088385283_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t3088385283_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T3088385283_H
#ifndef PLAYABLEBEHAVIOUR_T1162284075_H
#define PLAYABLEBEHAVIOUR_T1162284075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t1162284075  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEBEHAVIOUR_T1162284075_H
#ifndef PERSISTENTCALLGROUP_T3522805672_H
#define PERSISTENTCALLGROUP_T3522805672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCallGroup
struct  PersistentCallGroup_t3522805672  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t1532274899 * ___m_Calls_0;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(PersistentCallGroup_t3522805672, ___m_Calls_0)); }
	inline List_1_t1532274899 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline List_1_t1532274899 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(List_1_t1532274899 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALLGROUP_T3522805672_H
#ifndef MESSAGEEVENTARGS_T2825081682_H
#define MESSAGEEVENTARGS_T2825081682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct  MessageEventArgs_t2825081682  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Networking.PlayerConnection.MessageEventArgs::playerId
	int32_t ___playerId_0;
	// System.Byte[] UnityEngine.Networking.PlayerConnection.MessageEventArgs::data
	ByteU5BU5D_t3830052617* ___data_1;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(MessageEventArgs_t2825081682, ___playerId_0)); }
	inline int32_t get_playerId_0() const { return ___playerId_0; }
	inline int32_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(int32_t value)
	{
		___playerId_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t2825081682, ___data_1)); }
	inline ByteU5BU5D_t3830052617* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t3830052617** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t3830052617* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENTARGS_T2825081682_H
#ifndef PLAYEREDITORCONNECTIONEVENTS_T2682965605_H
#define PLAYEREDITORCONNECTIONEVENTS_T2682965605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct  PlayerEditorConnectionEvents_t2682965605  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers> UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::messageTypeSubscribers
	List_1_t858730237 * ___messageTypeSubscribers_0;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::connectionEvent
	ConnectionChangeEvent_t3345771492 * ___connectionEvent_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::disconnectionEvent
	ConnectionChangeEvent_t3345771492 * ___disconnectionEvent_2;

public:
	inline static int32_t get_offset_of_messageTypeSubscribers_0() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t2682965605, ___messageTypeSubscribers_0)); }
	inline List_1_t858730237 * get_messageTypeSubscribers_0() const { return ___messageTypeSubscribers_0; }
	inline List_1_t858730237 ** get_address_of_messageTypeSubscribers_0() { return &___messageTypeSubscribers_0; }
	inline void set_messageTypeSubscribers_0(List_1_t858730237 * value)
	{
		___messageTypeSubscribers_0 = value;
		Il2CppCodeGenWriteBarrier((&___messageTypeSubscribers_0), value);
	}

	inline static int32_t get_offset_of_connectionEvent_1() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t2682965605, ___connectionEvent_1)); }
	inline ConnectionChangeEvent_t3345771492 * get_connectionEvent_1() const { return ___connectionEvent_1; }
	inline ConnectionChangeEvent_t3345771492 ** get_address_of_connectionEvent_1() { return &___connectionEvent_1; }
	inline void set_connectionEvent_1(ConnectionChangeEvent_t3345771492 * value)
	{
		___connectionEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___connectionEvent_1), value);
	}

	inline static int32_t get_offset_of_disconnectionEvent_2() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t2682965605, ___disconnectionEvent_2)); }
	inline ConnectionChangeEvent_t3345771492 * get_disconnectionEvent_2() const { return ___disconnectionEvent_2; }
	inline ConnectionChangeEvent_t3345771492 ** get_address_of_disconnectionEvent_2() { return &___disconnectionEvent_2; }
	inline void set_disconnectionEvent_2(ConnectionChangeEvent_t3345771492 * value)
	{
		___disconnectionEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disconnectionEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYEREDITORCONNECTIONEVENTS_T2682965605_H
#ifndef SENDMOUSEEVENTS_T3308675684_H
#define SENDMOUSEEVENTS_T3308675684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t3308675684  : public RuntimeObject
{
public:

public:
};

struct SendMouseEvents_t3308675684_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t410719146* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t410719146* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t410719146* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t1849862226* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3308675684_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3308675684_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t410719146* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t410719146** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t410719146* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastHit_1), value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3308675684_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t410719146* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t410719146** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t410719146* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseDownHit_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3308675684_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t410719146* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t410719146** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t410719146* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentHit_3), value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3308675684_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t1849862226* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t1849862226** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t1849862226* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cameras_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T3308675684_H
#ifndef SCRIPTINGUTILS_T4281735158_H
#define SCRIPTINGUTILS_T4281735158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.ScriptingUtils
struct  ScriptingUtils_t4281735158  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTINGUTILS_T4281735158_H
#ifndef MESSAGETYPESUBSCRIBERS_T3207709389_H
#define MESSAGETYPESUBSCRIBERS_T3207709389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct  MessageTypeSubscribers_t3207709389  : public RuntimeObject
{
public:
	// System.String UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::m_messageTypeId
	String_t* ___m_messageTypeId_0;
	// System.Int32 UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::subscriberCount
	int32_t ___subscriberCount_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::messageCallback
	MessageEvent_t1473260158 * ___messageCallback_2;

public:
	inline static int32_t get_offset_of_m_messageTypeId_0() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t3207709389, ___m_messageTypeId_0)); }
	inline String_t* get_m_messageTypeId_0() const { return ___m_messageTypeId_0; }
	inline String_t** get_address_of_m_messageTypeId_0() { return &___m_messageTypeId_0; }
	inline void set_m_messageTypeId_0(String_t* value)
	{
		___m_messageTypeId_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_messageTypeId_0), value);
	}

	inline static int32_t get_offset_of_subscriberCount_1() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t3207709389, ___subscriberCount_1)); }
	inline int32_t get_subscriberCount_1() const { return ___subscriberCount_1; }
	inline int32_t* get_address_of_subscriberCount_1() { return &___subscriberCount_1; }
	inline void set_subscriberCount_1(int32_t value)
	{
		___subscriberCount_1 = value;
	}

	inline static int32_t get_offset_of_messageCallback_2() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t3207709389, ___messageCallback_2)); }
	inline MessageEvent_t1473260158 * get_messageCallback_2() const { return ___messageCallback_2; }
	inline MessageEvent_t1473260158 ** get_address_of_messageCallback_2() { return &___messageCallback_2; }
	inline void set_messageCallback_2(MessageEvent_t1473260158 * value)
	{
		___messageCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___messageCallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGETYPESUBSCRIBERS_T3207709389_H
#ifndef PLAYABLEEXTENSIONS_T3532447705_H
#define PLAYABLEEXTENSIONS_T3532447705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableExtensions
struct  PlayableExtensions_t3532447705  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEEXTENSIONS_T3532447705_H
#ifndef INVOKABLECALLLIST_T1159152697_H
#define INVOKABLECALLLIST_T1159152697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCallList
struct  InvokableCallList_t1159152697  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t682547774 * ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t682547774 * ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t682547774 * ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;

public:
	inline static int32_t get_offset_of_m_PersistentCalls_0() { return static_cast<int32_t>(offsetof(InvokableCallList_t1159152697, ___m_PersistentCalls_0)); }
	inline List_1_t682547774 * get_m_PersistentCalls_0() const { return ___m_PersistentCalls_0; }
	inline List_1_t682547774 ** get_address_of_m_PersistentCalls_0() { return &___m_PersistentCalls_0; }
	inline void set_m_PersistentCalls_0(List_1_t682547774 * value)
	{
		___m_PersistentCalls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_0), value);
	}

	inline static int32_t get_offset_of_m_RuntimeCalls_1() { return static_cast<int32_t>(offsetof(InvokableCallList_t1159152697, ___m_RuntimeCalls_1)); }
	inline List_1_t682547774 * get_m_RuntimeCalls_1() const { return ___m_RuntimeCalls_1; }
	inline List_1_t682547774 ** get_address_of_m_RuntimeCalls_1() { return &___m_RuntimeCalls_1; }
	inline void set_m_RuntimeCalls_1(List_1_t682547774 * value)
	{
		___m_RuntimeCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_RuntimeCalls_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutingCalls_2() { return static_cast<int32_t>(offsetof(InvokableCallList_t1159152697, ___m_ExecutingCalls_2)); }
	inline List_1_t682547774 * get_m_ExecutingCalls_2() const { return ___m_ExecutingCalls_2; }
	inline List_1_t682547774 ** get_address_of_m_ExecutingCalls_2() { return &___m_ExecutingCalls_2; }
	inline void set_m_ExecutingCalls_2(List_1_t682547774 * value)
	{
		___m_ExecutingCalls_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutingCalls_2), value);
	}

	inline static int32_t get_offset_of_m_NeedsUpdate_3() { return static_cast<int32_t>(offsetof(InvokableCallList_t1159152697, ___m_NeedsUpdate_3)); }
	inline bool get_m_NeedsUpdate_3() const { return ___m_NeedsUpdate_3; }
	inline bool* get_address_of_m_NeedsUpdate_3() { return &___m_NeedsUpdate_3; }
	inline void set_m_NeedsUpdate_3(bool value)
	{
		___m_NeedsUpdate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALLLIST_T1159152697_H
#ifndef ATTRIBUTE_T3365476432_H
#define ATTRIBUTE_T3365476432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t3365476432  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T3365476432_H
#ifndef CUSTOMYIELDINSTRUCTION_T493476244_H
#define CUSTOMYIELDINSTRUCTION_T493476244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t493476244  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T493476244_H
#ifndef EXCEPTION_T1703355491_H
#define EXCEPTION_T1703355491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1703355491  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1028149952* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1703355491 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1703355491, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1028149952* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1028149952** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1028149952* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1703355491, ___inner_exception_1)); }
	inline Exception_t1703355491 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1703355491 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1703355491 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1703355491, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1703355491, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1703355491, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1703355491, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1703355491, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1703355491, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1703355491, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1703355491, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1703355491, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1703355491_H
#ifndef SYNCHRONIZATIONCONTEXT_T1136473597_H
#define SYNCHRONIZATIONCONTEXT_T1136473597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t1136473597  : public RuntimeObject
{
public:

public:
};

struct SynchronizationContext_t1136473597_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t1136473597 * ___currentContext_0;

public:
	inline static int32_t get_offset_of_currentContext_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t1136473597_ThreadStaticFields, ___currentContext_0)); }
	inline SynchronizationContext_t1136473597 * get_currentContext_0() const { return ___currentContext_0; }
	inline SynchronizationContext_t1136473597 ** get_address_of_currentContext_0() { return &___currentContext_0; }
	inline void set_currentContext_0(SynchronizationContext_t1136473597 * value)
	{
		___currentContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T1136473597_H
#ifndef VALUETYPE_T1060727741_H
#define VALUETYPE_T1060727741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1060727741  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1060727741_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1060727741_marshaled_com
{
};
#endif // VALUETYPE_T1060727741_H
#ifndef UNITYEVENT_1_T1889159572_H
#define UNITYEVENT_1_T1889159572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t1889159572  : public UnityEventBase_t3761859391
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t1025653127* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t1889159572, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t1025653127* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t1025653127** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t1025653127* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T1889159572_H
#ifndef UNITYEVENT_T216991126_H
#define UNITYEVENT_T216991126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t216991126  : public UnityEventBase_t3761859391
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t1025653127* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t216991126, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t1025653127* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t1025653127** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t1025653127* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T216991126_H
#ifndef UNITYEVENT_1_T815723486_H
#define UNITYEVENT_1_T815723486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct  UnityEvent_1_t815723486  : public UnityEventBase_t3761859391
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t1025653127* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t815723486, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t1025653127* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t1025653127** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t1025653127* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T815723486_H
#ifndef UNITYSYNCHRONIZATIONCONTEXT_T2061936183_H
#define UNITYSYNCHRONIZATIONCONTEXT_T2061936183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext
struct  UnitySynchronizationContext_t2061936183  : public SynchronizationContext_t1136473597
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest> UnityEngine.UnitySynchronizationContext::m_AsyncWorkQueue
	Queue_1_t1907016525 * ___m_AsyncWorkQueue_1;
	// System.Int32 UnityEngine.UnitySynchronizationContext::m_MainThreadID
	int32_t ___m_MainThreadID_2;

public:
	inline static int32_t get_offset_of_m_AsyncWorkQueue_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t2061936183, ___m_AsyncWorkQueue_1)); }
	inline Queue_1_t1907016525 * get_m_AsyncWorkQueue_1() const { return ___m_AsyncWorkQueue_1; }
	inline Queue_1_t1907016525 ** get_address_of_m_AsyncWorkQueue_1() { return &___m_AsyncWorkQueue_1; }
	inline void set_m_AsyncWorkQueue_1(Queue_1_t1907016525 * value)
	{
		___m_AsyncWorkQueue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncWorkQueue_1), value);
	}

	inline static int32_t get_offset_of_m_MainThreadID_2() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t2061936183, ___m_MainThreadID_2)); }
	inline int32_t get_m_MainThreadID_2() const { return ___m_MainThreadID_2; }
	inline int32_t* get_address_of_m_MainThreadID_2() { return &___m_MainThreadID_2; }
	inline void set_m_MainThreadID_2(int32_t value)
	{
		___m_MainThreadID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSYNCHRONIZATIONCONTEXT_T2061936183_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t1105136855 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t1105136855 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t1105136855 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t1105136855 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t1105136855 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t1105136855 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t1105136855 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t1105136855 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef VECTOR2_T3430365452_H
#define VECTOR2_T3430365452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t3430365452 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t3430365452, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t3430365452, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t3430365452_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t3430365452  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t3430365452  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t3430365452  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t3430365452  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t3430365452  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t3430365452  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t3430365452  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t3430365452  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t3430365452_StaticFields, ___zeroVector_2)); }
	inline Vector2_t3430365452  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t3430365452 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t3430365452  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t3430365452_StaticFields, ___oneVector_3)); }
	inline Vector2_t3430365452  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t3430365452 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t3430365452  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t3430365452_StaticFields, ___upVector_4)); }
	inline Vector2_t3430365452  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t3430365452 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t3430365452  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t3430365452_StaticFields, ___downVector_5)); }
	inline Vector2_t3430365452  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t3430365452 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t3430365452  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t3430365452_StaticFields, ___leftVector_6)); }
	inline Vector2_t3430365452  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t3430365452 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t3430365452  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t3430365452_StaticFields, ___rightVector_7)); }
	inline Vector2_t3430365452  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t3430365452 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t3430365452  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t3430365452_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t3430365452  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t3430365452 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t3430365452  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t3430365452_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t3430365452  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t3430365452 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t3430365452  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T3430365452_H
#ifndef VECTOR4_T1977496035_H
#define VECTOR4_T1977496035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t1977496035 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t1977496035, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t1977496035, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t1977496035, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t1977496035, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t1977496035_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t1977496035  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t1977496035  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t1977496035  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t1977496035  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t1977496035_StaticFields, ___zeroVector_5)); }
	inline Vector4_t1977496035  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t1977496035 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t1977496035  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t1977496035_StaticFields, ___oneVector_6)); }
	inline Vector4_t1977496035  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t1977496035 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t1977496035  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t1977496035_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t1977496035  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t1977496035 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t1977496035  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t1977496035_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t1977496035  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t1977496035 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t1977496035  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T1977496035_H
#ifndef VOID_T2840465117_H
#define VOID_T2840465117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2840465117 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2840465117_H
#ifndef WAITFORSECONDSREALTIME_T2014038672_H
#define WAITFORSECONDSREALTIME_T2014038672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t2014038672  : public CustomYieldInstruction_t493476244
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::waitTime
	float ___waitTime_0;

public:
	inline static int32_t get_offset_of_waitTime_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t2014038672, ___waitTime_0)); }
	inline float get_waitTime_0() const { return ___waitTime_0; }
	inline float* get_address_of_waitTime_0() { return &___waitTime_0; }
	inline void set_waitTime_0(float value)
	{
		___waitTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORSECONDSREALTIME_T2014038672_H
#ifndef READONLYATTRIBUTE_T3593605500_H
#define READONLYATTRIBUTE_T3593605500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadOnlyAttribute
struct  ReadOnlyAttribute_t3593605500  : public Attribute_t3365476432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T3593605500_H
#ifndef READWRITEATTRIBUTE_T4282546379_H
#define READWRITEATTRIBUTE_T4282546379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadWriteAttribute
struct  ReadWriteAttribute_t4282546379  : public Attribute_t3365476432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READWRITEATTRIBUTE_T4282546379_H
#ifndef WRITEONLYATTRIBUTE_T447152178_H
#define WRITEONLYATTRIBUTE_T447152178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.WriteOnlyAttribute
struct  WriteOnlyAttribute_t447152178  : public Attribute_t3365476432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEONLYATTRIBUTE_T447152178_H
#ifndef DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1045342055_H
#define DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1045342055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.DeallocateOnJobCompletionAttribute
struct  DeallocateOnJobCompletionAttribute_t1045342055  : public Attribute_t3365476432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1045342055_H
#ifndef NATIVECONTAINERATTRIBUTE_T542100557_H
#define NATIVECONTAINERATTRIBUTE_T542100557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerAttribute
struct  NativeContainerAttribute_t542100557  : public Attribute_t3365476432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERATTRIBUTE_T542100557_H
#ifndef NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T2866576845_H
#define NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T2866576845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsAtomicWriteAttribute
struct  NativeContainerSupportsAtomicWriteAttribute_t2866576845  : public Attribute_t3365476432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T2866576845_H
#ifndef NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T977258540_H
#define NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T977258540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsMinMaxWriteRestrictionAttribute
struct  NativeContainerSupportsMinMaxWriteRestrictionAttribute_t977258540  : public Attribute_t3365476432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T977258540_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef DEFAULTVALUEATTRIBUTE_T3371626080_H
#define DEFAULTVALUEATTRIBUTE_T3371626080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.DefaultValueAttribute
struct  DefaultValueAttribute_t3371626080  : public Attribute_t3365476432
{
public:
	// System.Object UnityEngine.Internal.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t3371626080, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T3371626080_H
#ifndef EXCLUDEFROMDOCSATTRIBUTE_T1233570812_H
#define EXCLUDEFROMDOCSATTRIBUTE_T1233570812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.ExcludeFromDocsAttribute
struct  ExcludeFromDocsAttribute_t1233570812  : public Attribute_t3365476432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMDOCSATTRIBUTE_T1233570812_H
#ifndef VECTOR3_T2316381144_H
#define VECTOR3_T2316381144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2316381144 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2316381144, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2316381144, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2316381144, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2316381144_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2316381144  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2316381144  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2316381144  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2316381144  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2316381144  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2316381144  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2316381144  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2316381144  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2316381144  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2316381144  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2316381144_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2316381144  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2316381144 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2316381144  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2316381144_StaticFields, ___oneVector_5)); }
	inline Vector3_t2316381144  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2316381144 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2316381144  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2316381144_StaticFields, ___upVector_6)); }
	inline Vector3_t2316381144  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2316381144 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2316381144  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2316381144_StaticFields, ___downVector_7)); }
	inline Vector3_t2316381144  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2316381144 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2316381144  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2316381144_StaticFields, ___leftVector_8)); }
	inline Vector3_t2316381144  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2316381144 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2316381144  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2316381144_StaticFields, ___rightVector_9)); }
	inline Vector3_t2316381144  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2316381144 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2316381144  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2316381144_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2316381144  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2316381144 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2316381144  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2316381144_StaticFields, ___backVector_11)); }
	inline Vector3_t2316381144  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2316381144 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2316381144  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2316381144_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2316381144  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2316381144 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2316381144  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2316381144_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2316381144  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2316381144 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2316381144  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2316381144_H
#ifndef SINGLE_T2259966861_H
#define SINGLE_T2259966861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2259966861 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2259966861, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2259966861_H
#ifndef THREADANDSERIALIZATIONSAFEATTRIBUTE_T1315143510_H
#define THREADANDSERIALIZATIONSAFEATTRIBUTE_T1315143510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ThreadAndSerializationSafeAttribute
struct  ThreadAndSerializationSafeAttribute_t1315143510  : public Attribute_t3365476432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADANDSERIALIZATIONSAFEATTRIBUTE_T1315143510_H
#ifndef ENUM_T3462073187_H
#define ENUM_T3462073187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3462073187  : public ValueType_t1060727741
{
public:

public:
};

struct Enum_t3462073187_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1813131194* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3462073187_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1813131194* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1813131194** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1813131194* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3462073187_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3462073187_marshaled_com
{
};
#endif // ENUM_T3462073187_H
#ifndef WORKREQUEST_T60502700_H
#define WORKREQUEST_T60502700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t60502700 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t333645977 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t1350055743 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t60502700, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t333645977 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t333645977 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t333645977 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t60502700, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t60502700, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t1350055743 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t1350055743 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t1350055743 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_WaitHandle_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t60502700_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t1350055743 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t60502700_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t1350055743 * ___m_WaitHandle_2;
};
#endif // WORKREQUEST_T60502700_H
#ifndef HITINFO_T392089803_H
#define HITINFO_T392089803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t392089803 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t3116970073 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t4025609027 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t392089803, ___target_0)); }
	inline GameObject_t3116970073 * get_target_0() const { return ___target_0; }
	inline GameObject_t3116970073 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t3116970073 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t392089803, ___camera_1)); }
	inline Camera_t4025609027 * get_camera_1() const { return ___camera_1; }
	inline Camera_t4025609027 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t4025609027 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t392089803_marshaled_pinvoke
{
	GameObject_t3116970073 * ___target_0;
	Camera_t4025609027 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t392089803_marshaled_com
{
	GameObject_t3116970073 * ___target_0;
	Camera_t4025609027 * ___camera_1;
};
#endif // HITINFO_T392089803_H
#ifndef RANGEINT_T686308643_H
#define RANGEINT_T686308643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeInt
struct  RangeInt_t686308643 
{
public:
	// System.Int32 UnityEngine.RangeInt::start
	int32_t ___start_0;
	// System.Int32 UnityEngine.RangeInt::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RangeInt_t686308643, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(RangeInt_t686308643, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEINT_T686308643_H
#ifndef RECT_T265978862_H
#define RECT_T265978862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t265978862 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t265978862, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t265978862, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t265978862, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t265978862, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T265978862_H
#ifndef SELECTIONBASEATTRIBUTE_T2384124228_H
#define SELECTIONBASEATTRIBUTE_T2384124228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SelectionBaseAttribute
struct  SelectionBaseAttribute_t2384124228  : public Attribute_t3365476432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONBASEATTRIBUTE_T2384124228_H
#ifndef SERIALIZEPRIVATEVARIABLES_T1488698693_H
#define SERIALIZEPRIVATEVARIABLES_T1488698693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t1488698693  : public Attribute_t3365476432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T1488698693_H
#ifndef RESOLUTION_T2509990565_H
#define RESOLUTION_T2509990565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resolution
struct  Resolution_t2509990565 
{
public:
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;

public:
	inline static int32_t get_offset_of_m_Width_0() { return static_cast<int32_t>(offsetof(Resolution_t2509990565, ___m_Width_0)); }
	inline int32_t get_m_Width_0() const { return ___m_Width_0; }
	inline int32_t* get_address_of_m_Width_0() { return &___m_Width_0; }
	inline void set_m_Width_0(int32_t value)
	{
		___m_Width_0 = value;
	}

	inline static int32_t get_offset_of_m_Height_1() { return static_cast<int32_t>(offsetof(Resolution_t2509990565, ___m_Height_1)); }
	inline int32_t get_m_Height_1() const { return ___m_Height_1; }
	inline int32_t* get_address_of_m_Height_1() { return &___m_Height_1; }
	inline void set_m_Height_1(int32_t value)
	{
		___m_Height_1 = value;
	}

	inline static int32_t get_offset_of_m_RefreshRate_2() { return static_cast<int32_t>(offsetof(Resolution_t2509990565, ___m_RefreshRate_2)); }
	inline int32_t get_m_RefreshRate_2() const { return ___m_RefreshRate_2; }
	inline int32_t* get_address_of_m_RefreshRate_2() { return &___m_RefreshRate_2; }
	inline void set_m_RefreshRate_2(int32_t value)
	{
		___m_RefreshRate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLUTION_T2509990565_H
#ifndef PREFERBINARYSERIALIZATION_T819656493_H
#define PREFERBINARYSERIALIZATION_T819656493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t819656493  : public Attribute_t3365476432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T819656493_H
#ifndef SERIALIZEFIELD_T2500475649_H
#define SERIALIZEFIELD_T2500475649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t2500475649  : public Attribute_t3365476432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T2500475649_H
#ifndef PROPERTYATTRIBUTE_T2990693090_H
#define PROPERTYATTRIBUTE_T2990693090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t2990693090  : public Attribute_t3365476432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T2990693090_H
#ifndef INVOKABLECALL_T2593518480_H
#define INVOKABLECALL_T2593518480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t2593518480  : public BaseInvokableCall_t3031526926
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t1758141767 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t2593518480, ___Delegate_0)); }
	inline UnityAction_t1758141767 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t1758141767 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t1758141767 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T2593518480_H
#ifndef UNITYEXCEPTION_T1757049572_H
#define UNITYEXCEPTION_T1757049572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t1757049572  : public Exception_t1703355491
{
public:
	// System.String UnityEngine.UnityException::unityStackTrace
	String_t* ___unityStackTrace_12;

public:
	inline static int32_t get_offset_of_unityStackTrace_12() { return static_cast<int32_t>(offsetof(UnityException_t1757049572, ___unityStackTrace_12)); }
	inline String_t* get_unityStackTrace_12() const { return ___unityStackTrace_12; }
	inline String_t** get_address_of_unityStackTrace_12() { return &___unityStackTrace_12; }
	inline void set_unityStackTrace_12(String_t* value)
	{
		___unityStackTrace_12 = value;
		Il2CppCodeGenWriteBarrier((&___unityStackTrace_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T1757049572_H
#ifndef U3CADDANDCREATEU3EC__ANONSTOREY1_T2491980286_H
#define U3CADDANDCREATEU3EC__ANONSTOREY1_T2491980286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<AddAndCreate>c__AnonStorey1
struct  U3CAddAndCreateU3Ec__AnonStorey1_t2491980286  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<AddAndCreate>c__AnonStorey1::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CAddAndCreateU3Ec__AnonStorey1_t2491980286, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CADDANDCREATEU3EC__ANONSTOREY1_T2491980286_H
#ifndef U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T3794016233_H
#define U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T3794016233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0
struct  U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t3794016233  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t3794016233, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T3794016233_H
#ifndef KEYCODE_T3465611554_H
#define KEYCODE_T3465611554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t3465611554 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t3465611554, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T3465611554_H
#ifndef MATHFINTERNAL_T3603525645_H
#define MATHFINTERNAL_T3603525645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t3603525645 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t3603525645__padding[1];
	};

public:
};

struct MathfInternal_t3603525645_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t3603525645_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t3603525645_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t3603525645_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T3603525645_H
#ifndef BUILTINRENDERTEXTURETYPE_T3242415679_H
#define BUILTINRENDERTEXTURETYPE_T3242415679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.BuiltinRenderTextureType
struct  BuiltinRenderTextureType_t3242415679 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t3242415679, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILTINRENDERTEXTURETYPE_T3242415679_H
#ifndef CAMERAEVENT_T1228668782_H
#define CAMERAEVENT_T1228668782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CameraEvent
struct  CameraEvent_t1228668782 
{
public:
	// System.Int32 UnityEngine.Rendering.CameraEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraEvent_t1228668782, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAEVENT_T1228668782_H
#ifndef STENCILOP_T212951183_H
#define STENCILOP_T212951183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.StencilOp
struct  StencilOp_t212951183 
{
public:
	// System.Int32 UnityEngine.Rendering.StencilOp::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StencilOp_t212951183, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STENCILOP_T212951183_H
#ifndef TEXTUREWRAPMODE_T4079201634_H
#define TEXTUREWRAPMODE_T4079201634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t4079201634 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t4079201634, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREWRAPMODE_T4079201634_H
#ifndef COMPAREFUNCTION_T3535608243_H
#define COMPAREFUNCTION_T3535608243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CompareFunction
struct  CompareFunction_t3535608243 
{
public:
	// System.Int32 UnityEngine.Rendering.CompareFunction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompareFunction_t3535608243, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREFUNCTION_T3535608243_H
#ifndef TEXTUREFORMAT_T2407615173_H
#define TEXTUREFORMAT_T2407615173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2407615173 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2407615173, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2407615173_H
#ifndef CONNECTIONCHANGEEVENT_T3345771492_H
#define CONNECTIONCHANGEEVENT_T3345771492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct  ConnectionChangeEvent_t3345771492  : public UnityEvent_1_t1889159572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCHANGEEVENT_T3345771492_H
#ifndef FILTERMODE_T2465727134_H
#define FILTERMODE_T2465727134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FilterMode
struct  FilterMode_t2465727134 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FilterMode_t2465727134, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERMODE_T2465727134_H
#ifndef SCREENORIENTATION_T715371576_H
#define SCREENORIENTATION_T715371576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t715371576 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScreenOrientation_t715371576, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENORIENTATION_T715371576_H
#ifndef DATASTREAMTYPE_T206057717_H
#define DATASTREAMTYPE_T206057717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t206057717 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t206057717, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T206057717_H
#ifndef OBJECT_T2753877109_H
#define OBJECT_T2753877109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t2753877109  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t2753877109, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t2753877109_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t2753877109_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t2753877109_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t2753877109_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T2753877109_H
#ifndef PLAYABLEOUTPUTHANDLE_T3533439687_H
#define PLAYABLEOUTPUTHANDLE_T3533439687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t3533439687 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t3533439687, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t3533439687, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T3533439687_H
#ifndef COLORWRITEMASK_T4046082036_H
#define COLORWRITEMASK_T4046082036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ColorWriteMask
struct  ColorWriteMask_t4046082036 
{
public:
	// System.Int32 UnityEngine.Rendering.ColorWriteMask::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorWriteMask_t4046082036, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORWRITEMASK_T4046082036_H
#ifndef DELEGATE_T2636934618_H
#define DELEGATE_T2636934618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t2636934618  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t3518579387 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t2636934618, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t2636934618, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t2636934618, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t2636934618, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t2636934618, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t2636934618, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t2636934618, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t2636934618, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t2636934618, ___data_8)); }
	inline DelegateData_t3518579387 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3518579387 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3518579387 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T2636934618_H
#ifndef CAMERACLEARFLAGS_T3771540876_H
#define CAMERACLEARFLAGS_T3771540876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t3771540876 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraClearFlags_t3771540876, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACLEARFLAGS_T3771540876_H
#ifndef PLANE_T845710608_H
#define PLANE_T845710608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t845710608 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t2316381144  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t845710608, ___m_Normal_0)); }
	inline Vector3_t2316381144  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t2316381144 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t2316381144  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t845710608, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T845710608_H
#ifndef LOGTYPE_T3580880196_H
#define LOGTYPE_T3580880196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t3580880196 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t3580880196, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T3580880196_H
#ifndef TOOLTIPATTRIBUTE_T1434482359_H
#define TOOLTIPATTRIBUTE_T1434482359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TooltipAttribute
struct  TooltipAttribute_t1434482359  : public PropertyAttribute_t2990693090
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t1434482359, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((&___tooltip_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLTIPATTRIBUTE_T1434482359_H
#ifndef UNITYEVENTCALLSTATE_T4261768356_H
#define UNITYEVENTCALLSTATE_T4261768356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventCallState
struct  UnityEventCallState_t4261768356 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityEventCallState_t4261768356, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTCALLSTATE_T4261768356_H
#ifndef SPACEATTRIBUTE_T3184301190_H
#define SPACEATTRIBUTE_T3184301190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpaceAttribute
struct  SpaceAttribute_t3184301190  : public PropertyAttribute_t2990693090
{
public:
	// System.Single UnityEngine.SpaceAttribute::height
	float ___height_0;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(SpaceAttribute_t3184301190, ___height_0)); }
	inline float get_height_0() const { return ___height_0; }
	inline float* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(float value)
	{
		___height_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACEATTRIBUTE_T3184301190_H
#ifndef HEADERATTRIBUTE_T3163918278_H
#define HEADERATTRIBUTE_T3163918278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HeaderAttribute
struct  HeaderAttribute_t3163918278  : public PropertyAttribute_t2990693090
{
public:
	// System.String UnityEngine.HeaderAttribute::header
	String_t* ___header_0;

public:
	inline static int32_t get_offset_of_header_0() { return static_cast<int32_t>(offsetof(HeaderAttribute_t3163918278, ___header_0)); }
	inline String_t* get_header_0() const { return ___header_0; }
	inline String_t** get_address_of_header_0() { return &___header_0; }
	inline void set_header_0(String_t* value)
	{
		___header_0 = value;
		Il2CppCodeGenWriteBarrier((&___header_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERATTRIBUTE_T3163918278_H
#ifndef PERSISTENTLISTENERMODE_T1712728073_H
#define PERSISTENTLISTENERMODE_T1712728073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentListenerMode
struct  PersistentListenerMode_t1712728073 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t1712728073, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTLISTENERMODE_T1712728073_H
#ifndef FLAGS_T2575303713_H
#define FLAGS_T2575303713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData/Flags
struct  Flags_t2575303713 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData/Flags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Flags_t2575303713, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_T2575303713_H
#ifndef MESSAGEEVENT_T1473260158_H
#define MESSAGEEVENT_T1473260158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct  MessageEvent_t1473260158  : public UnityEvent_1_t815723486
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENT_T1473260158_H
#ifndef RANGEATTRIBUTE_T918722617_H
#define RANGEATTRIBUTE_T918722617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeAttribute
struct  RangeAttribute_t918722617  : public PropertyAttribute_t2990693090
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t918722617, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t918722617, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEATTRIBUTE_T918722617_H
#ifndef TRACKEDREFERENCE_T3819619265_H
#define TRACKEDREFERENCE_T3819619265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t3819619265  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t3819619265, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t3819619265_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t3819619265_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T3819619265_H
#ifndef TEXTAREAATTRIBUTE_T2349284375_H
#define TEXTAREAATTRIBUTE_T2349284375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAreaAttribute
struct  TextAreaAttribute_t2349284375  : public PropertyAttribute_t2990693090
{
public:
	// System.Int32 UnityEngine.TextAreaAttribute::minLines
	int32_t ___minLines_0;
	// System.Int32 UnityEngine.TextAreaAttribute::maxLines
	int32_t ___maxLines_1;

public:
	inline static int32_t get_offset_of_minLines_0() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t2349284375, ___minLines_0)); }
	inline int32_t get_minLines_0() const { return ___minLines_0; }
	inline int32_t* get_address_of_minLines_0() { return &___minLines_0; }
	inline void set_minLines_0(int32_t value)
	{
		___minLines_0 = value;
	}

	inline static int32_t get_offset_of_maxLines_1() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t2349284375, ___maxLines_1)); }
	inline int32_t get_maxLines_1() const { return ___maxLines_1; }
	inline int32_t* get_address_of_maxLines_1() { return &___maxLines_1; }
	inline void set_maxLines_1(int32_t value)
	{
		___maxLines_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTAREAATTRIBUTE_T2349284375_H
#ifndef RAY_T4235680865_H
#define RAY_T4235680865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t4235680865 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t2316381144  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t2316381144  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t4235680865, ___m_Origin_0)); }
	inline Vector3_t2316381144  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t2316381144 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t2316381144  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t4235680865, ___m_Direction_1)); }
	inline Vector3_t2316381144  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t2316381144 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t2316381144  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T4235680865_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T3505115368_H
#define TOUCHSCREENKEYBOARDTYPE_T3505115368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t3505115368 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t3505115368, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARDTYPE_T3505115368_H
#ifndef PERSISTENTCALL_T3881254051_H
#define PERSISTENTCALL_T3881254051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t3881254051  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t2753877109 * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_1;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_2;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t629119655 * ___m_Arguments_3;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(PersistentCall_t3881254051, ___m_Target_0)); }
	inline Object_t2753877109 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t2753877109 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t2753877109 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodName_1() { return static_cast<int32_t>(offsetof(PersistentCall_t3881254051, ___m_MethodName_1)); }
	inline String_t* get_m_MethodName_1() const { return ___m_MethodName_1; }
	inline String_t** get_address_of_m_MethodName_1() { return &___m_MethodName_1; }
	inline void set_m_MethodName_1(String_t* value)
	{
		___m_MethodName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodName_1), value);
	}

	inline static int32_t get_offset_of_m_Mode_2() { return static_cast<int32_t>(offsetof(PersistentCall_t3881254051, ___m_Mode_2)); }
	inline int32_t get_m_Mode_2() const { return ___m_Mode_2; }
	inline int32_t* get_address_of_m_Mode_2() { return &___m_Mode_2; }
	inline void set_m_Mode_2(int32_t value)
	{
		___m_Mode_2 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_3() { return static_cast<int32_t>(offsetof(PersistentCall_t3881254051, ___m_Arguments_3)); }
	inline ArgumentCache_t629119655 * get_m_Arguments_3() const { return ___m_Arguments_3; }
	inline ArgumentCache_t629119655 ** get_address_of_m_Arguments_3() { return &___m_Arguments_3; }
	inline void set_m_Arguments_3(ArgumentCache_t629119655 * value)
	{
		___m_Arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arguments_3), value);
	}

	inline static int32_t get_offset_of_m_CallState_4() { return static_cast<int32_t>(offsetof(PersistentCall_t3881254051, ___m_CallState_4)); }
	inline int32_t get_m_CallState_4() const { return ___m_CallState_4; }
	inline int32_t* get_address_of_m_CallState_4() { return &___m_CallState_4; }
	inline void set_m_CallState_4(int32_t value)
	{
		___m_CallState_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALL_T3881254051_H
#ifndef SCRIPTABLEOBJECT_T4159306544_H
#define SCRIPTABLEOBJECT_T4159306544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4159306544  : public Object_t2753877109
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4159306544_marshaled_pinvoke : public Object_t2753877109_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4159306544_marshaled_com : public Object_t2753877109_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T4159306544_H
#ifndef FRAMEDATA_T1284930133_H
#define FRAMEDATA_T1284930133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData
struct  FrameData_t1284930133 
{
public:
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_4;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_5;

public:
	inline static int32_t get_offset_of_m_FrameID_0() { return static_cast<int32_t>(offsetof(FrameData_t1284930133, ___m_FrameID_0)); }
	inline uint64_t get_m_FrameID_0() const { return ___m_FrameID_0; }
	inline uint64_t* get_address_of_m_FrameID_0() { return &___m_FrameID_0; }
	inline void set_m_FrameID_0(uint64_t value)
	{
		___m_FrameID_0 = value;
	}

	inline static int32_t get_offset_of_m_DeltaTime_1() { return static_cast<int32_t>(offsetof(FrameData_t1284930133, ___m_DeltaTime_1)); }
	inline double get_m_DeltaTime_1() const { return ___m_DeltaTime_1; }
	inline double* get_address_of_m_DeltaTime_1() { return &___m_DeltaTime_1; }
	inline void set_m_DeltaTime_1(double value)
	{
		___m_DeltaTime_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight_2() { return static_cast<int32_t>(offsetof(FrameData_t1284930133, ___m_Weight_2)); }
	inline float get_m_Weight_2() const { return ___m_Weight_2; }
	inline float* get_address_of_m_Weight_2() { return &___m_Weight_2; }
	inline void set_m_Weight_2(float value)
	{
		___m_Weight_2 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveWeight_3() { return static_cast<int32_t>(offsetof(FrameData_t1284930133, ___m_EffectiveWeight_3)); }
	inline float get_m_EffectiveWeight_3() const { return ___m_EffectiveWeight_3; }
	inline float* get_address_of_m_EffectiveWeight_3() { return &___m_EffectiveWeight_3; }
	inline void set_m_EffectiveWeight_3(float value)
	{
		___m_EffectiveWeight_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveSpeed_4() { return static_cast<int32_t>(offsetof(FrameData_t1284930133, ___m_EffectiveSpeed_4)); }
	inline float get_m_EffectiveSpeed_4() const { return ___m_EffectiveSpeed_4; }
	inline float* get_address_of_m_EffectiveSpeed_4() { return &___m_EffectiveSpeed_4; }
	inline void set_m_EffectiveSpeed_4(float value)
	{
		___m_EffectiveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_Flags_5() { return static_cast<int32_t>(offsetof(FrameData_t1284930133, ___m_Flags_5)); }
	inline int32_t get_m_Flags_5() const { return ___m_Flags_5; }
	inline int32_t* get_address_of_m_Flags_5() { return &___m_Flags_5; }
	inline void set_m_Flags_5(int32_t value)
	{
		___m_Flags_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEDATA_T1284930133_H
#ifndef PLAYABLEBINDING_T3888398748_H
#define PLAYABLEBINDING_T3888398748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t3888398748 
{
public:
	union
	{
		struct
		{
			// System.String UnityEngine.Playables.PlayableBinding::<streamName>k__BackingField
			String_t* ___U3CstreamNameU3Ek__BackingField_2;
			// UnityEngine.Playables.DataStreamType UnityEngine.Playables.PlayableBinding::<streamType>k__BackingField
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			// UnityEngine.Object UnityEngine.Playables.PlayableBinding::<sourceObject>k__BackingField
			Object_t2753877109 * ___U3CsourceObjectU3Ek__BackingField_4;
			// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t3888398748__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t3888398748, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t3888398748, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t3888398748, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t2753877109 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t2753877109 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t2753877109 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t3888398748, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t3888398748_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t2562775157* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t3888398748_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t2562775157* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t2562775157** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t2562775157* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t3888398748_StaticFields, ___DefaultDuration_1)); }
	inline double get_DefaultDuration_1() const { return ___DefaultDuration_1; }
	inline double* get_address_of_DefaultDuration_1() { return &___DefaultDuration_1; }
	inline void set_DefaultDuration_1(double value)
	{
		___DefaultDuration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t3888398748_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t2753877109_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t3888398748__padding[1];
	};
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t3888398748_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t2753877109_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t3888398748__padding[1];
	};
};
#endif // PLAYABLEBINDING_T3888398748_H
#ifndef RENDERTARGETIDENTIFIER_T1731373450_H
#define RENDERTARGETIDENTIFIER_T1731373450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.RenderTargetIdentifier
struct  RenderTargetIdentifier_t1731373450 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t1731373450, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_NameID_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t1731373450, ___m_NameID_1)); }
	inline int32_t get_m_NameID_1() const { return ___m_NameID_1; }
	inline int32_t* get_address_of_m_NameID_1() { return &___m_NameID_1; }
	inline void set_m_NameID_1(int32_t value)
	{
		___m_NameID_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t1731373450, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTARGETIDENTIFIER_T1731373450_H
#ifndef SCRIPTPLAYABLEOUTPUT_T2046527778_H
#define SCRIPTPLAYABLEOUTPUT_T2046527778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.ScriptPlayableOutput
struct  ScriptPlayableOutput_t2046527778 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_t3533439687  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayableOutput_t2046527778, ___m_Handle_0)); }
	inline PlayableOutputHandle_t3533439687  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t3533439687 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t3533439687  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPLAYABLEOUTPUT_T2046527778_H
#ifndef MULTICASTDELEGATE_T2957534111_H
#define MULTICASTDELEGATE_T2957534111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2957534111  : public Delegate_t2636934618
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2957534111 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2957534111 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2957534111, ___prev_9)); }
	inline MulticastDelegate_t2957534111 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2957534111 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2957534111 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2957534111, ___kpm_next_10)); }
	inline MulticastDelegate_t2957534111 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2957534111 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2957534111 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2957534111_H
#ifndef LOGGER_T3881863879_H
#define LOGGER_T3881863879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Logger
struct  Logger_t3881863879  : public RuntimeObject
{
public:
	// UnityEngine.ILogHandler UnityEngine.Logger::<logHandler>k__BackingField
	RuntimeObject* ___U3ClogHandlerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Logger::<logEnabled>k__BackingField
	bool ___U3ClogEnabledU3Ek__BackingField_1;
	// UnityEngine.LogType UnityEngine.Logger::<filterLogType>k__BackingField
	int32_t ___U3CfilterLogTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ClogHandlerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Logger_t3881863879, ___U3ClogHandlerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3ClogHandlerU3Ek__BackingField_0() const { return ___U3ClogHandlerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3ClogHandlerU3Ek__BackingField_0() { return &___U3ClogHandlerU3Ek__BackingField_0; }
	inline void set_U3ClogHandlerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3ClogHandlerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClogHandlerU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ClogEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Logger_t3881863879, ___U3ClogEnabledU3Ek__BackingField_1)); }
	inline bool get_U3ClogEnabledU3Ek__BackingField_1() const { return ___U3ClogEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3ClogEnabledU3Ek__BackingField_1() { return &___U3ClogEnabledU3Ek__BackingField_1; }
	inline void set_U3ClogEnabledU3Ek__BackingField_1(bool value)
	{
		___U3ClogEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Logger_t3881863879, ___U3CfilterLogTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CfilterLogTypeU3Ek__BackingField_2() const { return ___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CfilterLogTypeU3Ek__BackingField_2() { return &___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline void set_U3CfilterLogTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CfilterLogTypeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T3881863879_H
#ifndef PLAYERCONNECTION_T1012956057_H
#define PLAYERCONNECTION_T1012956057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct  PlayerConnection_t1012956057  : public ScriptableObject_t4159306544
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents UnityEngine.Networking.PlayerConnection.PlayerConnection::m_PlayerEditorConnectionEvents
	PlayerEditorConnectionEvents_t2682965605 * ___m_PlayerEditorConnectionEvents_3;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Networking.PlayerConnection.PlayerConnection::m_connectedPlayers
	List_1_t1549538616 * ___m_connectedPlayers_4;
	// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection::m_IsInitilized
	bool ___m_IsInitilized_5;

public:
	inline static int32_t get_offset_of_m_PlayerEditorConnectionEvents_3() { return static_cast<int32_t>(offsetof(PlayerConnection_t1012956057, ___m_PlayerEditorConnectionEvents_3)); }
	inline PlayerEditorConnectionEvents_t2682965605 * get_m_PlayerEditorConnectionEvents_3() const { return ___m_PlayerEditorConnectionEvents_3; }
	inline PlayerEditorConnectionEvents_t2682965605 ** get_address_of_m_PlayerEditorConnectionEvents_3() { return &___m_PlayerEditorConnectionEvents_3; }
	inline void set_m_PlayerEditorConnectionEvents_3(PlayerEditorConnectionEvents_t2682965605 * value)
	{
		___m_PlayerEditorConnectionEvents_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerEditorConnectionEvents_3), value);
	}

	inline static int32_t get_offset_of_m_connectedPlayers_4() { return static_cast<int32_t>(offsetof(PlayerConnection_t1012956057, ___m_connectedPlayers_4)); }
	inline List_1_t1549538616 * get_m_connectedPlayers_4() const { return ___m_connectedPlayers_4; }
	inline List_1_t1549538616 ** get_address_of_m_connectedPlayers_4() { return &___m_connectedPlayers_4; }
	inline void set_m_connectedPlayers_4(List_1_t1549538616 * value)
	{
		___m_connectedPlayers_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_connectedPlayers_4), value);
	}

	inline static int32_t get_offset_of_m_IsInitilized_5() { return static_cast<int32_t>(offsetof(PlayerConnection_t1012956057, ___m_IsInitilized_5)); }
	inline bool get_m_IsInitilized_5() const { return ___m_IsInitilized_5; }
	inline bool* get_address_of_m_IsInitilized_5() { return &___m_IsInitilized_5; }
	inline void set_m_IsInitilized_5(bool value)
	{
		___m_IsInitilized_5 = value;
	}
};

struct PlayerConnection_t1012956057_StaticFields
{
public:
	// UnityEngine.IPlayerEditorConnectionNative UnityEngine.Networking.PlayerConnection.PlayerConnection::connectionNative
	RuntimeObject* ___connectionNative_2;
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::s_Instance
	PlayerConnection_t1012956057 * ___s_Instance_6;

public:
	inline static int32_t get_offset_of_connectionNative_2() { return static_cast<int32_t>(offsetof(PlayerConnection_t1012956057_StaticFields, ___connectionNative_2)); }
	inline RuntimeObject* get_connectionNative_2() const { return ___connectionNative_2; }
	inline RuntimeObject** get_address_of_connectionNative_2() { return &___connectionNative_2; }
	inline void set_connectionNative_2(RuntimeObject* value)
	{
		___connectionNative_2 = value;
		Il2CppCodeGenWriteBarrier((&___connectionNative_2), value);
	}

	inline static int32_t get_offset_of_s_Instance_6() { return static_cast<int32_t>(offsetof(PlayerConnection_t1012956057_StaticFields, ___s_Instance_6)); }
	inline PlayerConnection_t1012956057 * get_s_Instance_6() const { return ___s_Instance_6; }
	inline PlayerConnection_t1012956057 ** get_address_of_s_Instance_6() { return &___s_Instance_6; }
	inline void set_s_Instance_6(PlayerConnection_t1012956057 * value)
	{
		___s_Instance_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONNECTION_T1012956057_H
#ifndef PLAYABLEASSET_T3502181837_H
#define PLAYABLEASSET_T3502181837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t3502181837  : public ScriptableObject_t4159306544
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEASSET_T3502181837_H
#ifndef UNITYACTION_T1758141767_H
#define UNITYACTION_T1758141767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t1758141767  : public MulticastDelegate_t2957534111
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T1758141767_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1500 = { sizeof (SetupCoroutine_t2005797758), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1501 = { sizeof (Resolution_t2509990565)+ sizeof (RuntimeObject), sizeof(Resolution_t2509990565 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1501[3] = 
{
	Resolution_t2509990565::get_offset_of_m_Width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Resolution_t2509990565::get_offset_of_m_Height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Resolution_t2509990565::get_offset_of_m_RefreshRate_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1502 = { sizeof (CameraClearFlags_t3771540876)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1502[6] = 
{
	CameraClearFlags_t3771540876::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1503 = { sizeof (ScreenOrientation_t715371576)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1503[8] = 
{
	ScreenOrientation_t715371576::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1504 = { sizeof (FilterMode_t2465727134)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1504[4] = 
{
	FilterMode_t2465727134::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1505 = { sizeof (TextureWrapMode_t4079201634)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1505[5] = 
{
	TextureWrapMode_t4079201634::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1506 = { sizeof (TextureFormat_t2407615173)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1506[54] = 
{
	TextureFormat_t2407615173::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1507 = { sizeof (CompareFunction_t3535608243)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1507[10] = 
{
	CompareFunction_t3535608243::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1508 = { sizeof (ColorWriteMask_t4046082036)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1508[6] = 
{
	ColorWriteMask_t4046082036::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1509 = { sizeof (StencilOp_t212951183)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1509[9] = 
{
	StencilOp_t212951183::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1510 = { sizeof (CameraEvent_t1228668782)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1510[26] = 
{
	CameraEvent_t1228668782::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1511 = { sizeof (BuiltinRenderTextureType_t3242415679)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1511[21] = 
{
	BuiltinRenderTextureType_t3242415679::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1512 = { sizeof (RenderTargetIdentifier_t1731373450)+ sizeof (RuntimeObject), sizeof(RenderTargetIdentifier_t1731373450 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1512[3] = 
{
	RenderTargetIdentifier_t1731373450::get_offset_of_m_Type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTargetIdentifier_t1731373450::get_offset_of_m_NameID_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTargetIdentifier_t1731373450::get_offset_of_m_InstanceID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1513 = { sizeof (KeyCode_t3465611554)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1513[322] = 
{
	KeyCode_t3465611554::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1514 = { sizeof (MathfInternal_t3603525645)+ sizeof (RuntimeObject), sizeof(MathfInternal_t3603525645 ), sizeof(MathfInternal_t3603525645_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1514[3] = 
{
	MathfInternal_t3603525645_StaticFields::get_offset_of_FloatMinNormal_0(),
	MathfInternal_t3603525645_StaticFields::get_offset_of_FloatMinDenormal_1(),
	MathfInternal_t3603525645_StaticFields::get_offset_of_IsFlushToZeroEnabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1515 = { sizeof (ScriptingUtils_t4281735158), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1516 = { sizeof (SendMouseEvents_t3308675684), -1, sizeof(SendMouseEvents_t3308675684_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1516[5] = 
{
	SendMouseEvents_t3308675684_StaticFields::get_offset_of_s_MouseUsed_0(),
	SendMouseEvents_t3308675684_StaticFields::get_offset_of_m_LastHit_1(),
	SendMouseEvents_t3308675684_StaticFields::get_offset_of_m_MouseDownHit_2(),
	SendMouseEvents_t3308675684_StaticFields::get_offset_of_m_CurrentHit_3(),
	SendMouseEvents_t3308675684_StaticFields::get_offset_of_m_Cameras_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1517 = { sizeof (HitInfo_t392089803)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1517[2] = 
{
	HitInfo_t392089803::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitInfo_t392089803::get_offset_of_camera_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1518 = { sizeof (Plane_t845710608)+ sizeof (RuntimeObject), sizeof(Plane_t845710608 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1518[2] = 
{
	Plane_t845710608::get_offset_of_m_Normal_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Plane_t845710608::get_offset_of_m_Distance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1519 = { sizeof (PropertyAttribute_t2990693090), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1520 = { sizeof (TooltipAttribute_t1434482359), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1520[1] = 
{
	TooltipAttribute_t1434482359::get_offset_of_tooltip_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1521 = { sizeof (SpaceAttribute_t3184301190), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1521[1] = 
{
	SpaceAttribute_t3184301190::get_offset_of_height_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1522 = { sizeof (HeaderAttribute_t3163918278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1522[1] = 
{
	HeaderAttribute_t3163918278::get_offset_of_header_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1523 = { sizeof (RangeAttribute_t918722617), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1523[2] = 
{
	RangeAttribute_t918722617::get_offset_of_min_0(),
	RangeAttribute_t918722617::get_offset_of_max_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1524 = { sizeof (TextAreaAttribute_t2349284375), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1524[2] = 
{
	TextAreaAttribute_t2349284375::get_offset_of_minLines_0(),
	TextAreaAttribute_t2349284375::get_offset_of_maxLines_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1525 = { sizeof (RangeInt_t686308643)+ sizeof (RuntimeObject), sizeof(RangeInt_t686308643 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1525[2] = 
{
	RangeInt_t686308643::get_offset_of_start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RangeInt_t686308643::get_offset_of_length_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1526 = { sizeof (Ray_t4235680865)+ sizeof (RuntimeObject), sizeof(Ray_t4235680865 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1526[2] = 
{
	Ray_t4235680865::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray_t4235680865::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1527 = { sizeof (Rect_t265978862)+ sizeof (RuntimeObject), sizeof(Rect_t265978862 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1527[4] = 
{
	Rect_t265978862::get_offset_of_m_XMin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t265978862::get_offset_of_m_YMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t265978862::get_offset_of_m_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t265978862::get_offset_of_m_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1528 = { sizeof (SelectionBaseAttribute_t2384124228), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1529 = { sizeof (SerializePrivateVariables_t1488698693), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1530 = { sizeof (SerializeField_t2500475649), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1531 = { sizeof (PreferBinarySerialization_t819656493), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1532 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1533 = { sizeof (StackTraceUtility_t3088385283), -1, sizeof(StackTraceUtility_t3088385283_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1533[1] = 
{
	StackTraceUtility_t3088385283_StaticFields::get_offset_of_projectFolder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1534 = { sizeof (UnityException_t1757049572), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1534[2] = 
{
	0,
	UnityException_t1757049572::get_offset_of_unityStackTrace_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1535 = { sizeof (TouchScreenKeyboardType_t3505115368)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1535[12] = 
{
	TouchScreenKeyboardType_t3505115368::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1536 = { sizeof (TrackedReference_t3819619265), sizeof(TrackedReference_t3819619265_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1536[1] = 
{
	TrackedReference_t3819619265::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1537 = { sizeof (PersistentListenerMode_t1712728073)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1537[8] = 
{
	PersistentListenerMode_t1712728073::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1538 = { sizeof (ArgumentCache_t629119655), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1538[6] = 
{
	ArgumentCache_t629119655::get_offset_of_m_ObjectArgument_0(),
	ArgumentCache_t629119655::get_offset_of_m_ObjectArgumentAssemblyTypeName_1(),
	ArgumentCache_t629119655::get_offset_of_m_IntArgument_2(),
	ArgumentCache_t629119655::get_offset_of_m_FloatArgument_3(),
	ArgumentCache_t629119655::get_offset_of_m_StringArgument_4(),
	ArgumentCache_t629119655::get_offset_of_m_BoolArgument_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1539 = { sizeof (BaseInvokableCall_t3031526926), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1540 = { sizeof (InvokableCall_t2593518480), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1540[1] = 
{
	InvokableCall_t2593518480::get_offset_of_Delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1541 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1541[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1542 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1542[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1543 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1543[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1544 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1544[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1545 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1545[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1546 = { sizeof (UnityEventCallState_t4261768356)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1546[4] = 
{
	UnityEventCallState_t4261768356::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1547 = { sizeof (PersistentCall_t3881254051), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1547[5] = 
{
	PersistentCall_t3881254051::get_offset_of_m_Target_0(),
	PersistentCall_t3881254051::get_offset_of_m_MethodName_1(),
	PersistentCall_t3881254051::get_offset_of_m_Mode_2(),
	PersistentCall_t3881254051::get_offset_of_m_Arguments_3(),
	PersistentCall_t3881254051::get_offset_of_m_CallState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1548 = { sizeof (PersistentCallGroup_t3522805672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1548[1] = 
{
	PersistentCallGroup_t3522805672::get_offset_of_m_Calls_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1549 = { sizeof (InvokableCallList_t1159152697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1549[4] = 
{
	InvokableCallList_t1159152697::get_offset_of_m_PersistentCalls_0(),
	InvokableCallList_t1159152697::get_offset_of_m_RuntimeCalls_1(),
	InvokableCallList_t1159152697::get_offset_of_m_ExecutingCalls_2(),
	InvokableCallList_t1159152697::get_offset_of_m_NeedsUpdate_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1550 = { sizeof (UnityEventBase_t3761859391), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1550[4] = 
{
	UnityEventBase_t3761859391::get_offset_of_m_Calls_0(),
	UnityEventBase_t3761859391::get_offset_of_m_PersistentCalls_1(),
	UnityEventBase_t3761859391::get_offset_of_m_TypeName_2(),
	UnityEventBase_t3761859391::get_offset_of_m_CallsDirty_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1551 = { sizeof (UnityAction_t1758141767), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1552 = { sizeof (UnityEvent_t216991126), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1552[1] = 
{
	UnityEvent_t216991126::get_offset_of_m_InvokeArray_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1553 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1554 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1554[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1555 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1556 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1556[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1557 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1558 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1558[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1559 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1560 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1560[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1561 = { sizeof (UnityString_t2865881885), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1562 = { sizeof (UnitySynchronizationContext_t2061936183), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1562[2] = 
{
	UnitySynchronizationContext_t2061936183::get_offset_of_m_AsyncWorkQueue_1(),
	UnitySynchronizationContext_t2061936183::get_offset_of_m_MainThreadID_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1563 = { sizeof (WorkRequest_t60502700)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1563[3] = 
{
	WorkRequest_t60502700::get_offset_of_m_DelagateCallback_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WorkRequest_t60502700::get_offset_of_m_DelagateState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WorkRequest_t60502700::get_offset_of_m_WaitHandle_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1564 = { sizeof (Vector2_t3430365452)+ sizeof (RuntimeObject), sizeof(Vector2_t3430365452 ), sizeof(Vector2_t3430365452_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1564[11] = 
{
	Vector2_t3430365452::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t3430365452::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t3430365452_StaticFields::get_offset_of_zeroVector_2(),
	Vector2_t3430365452_StaticFields::get_offset_of_oneVector_3(),
	Vector2_t3430365452_StaticFields::get_offset_of_upVector_4(),
	Vector2_t3430365452_StaticFields::get_offset_of_downVector_5(),
	Vector2_t3430365452_StaticFields::get_offset_of_leftVector_6(),
	Vector2_t3430365452_StaticFields::get_offset_of_rightVector_7(),
	Vector2_t3430365452_StaticFields::get_offset_of_positiveInfinityVector_8(),
	Vector2_t3430365452_StaticFields::get_offset_of_negativeInfinityVector_9(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1565 = { sizeof (Vector4_t1977496035)+ sizeof (RuntimeObject), sizeof(Vector4_t1977496035 ), sizeof(Vector4_t1977496035_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1565[9] = 
{
	0,
	Vector4_t1977496035::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t1977496035::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t1977496035::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t1977496035::get_offset_of_w_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t1977496035_StaticFields::get_offset_of_zeroVector_5(),
	Vector4_t1977496035_StaticFields::get_offset_of_oneVector_6(),
	Vector4_t1977496035_StaticFields::get_offset_of_positiveInfinityVector_7(),
	Vector4_t1977496035_StaticFields::get_offset_of_negativeInfinityVector_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1566 = { sizeof (WaitForSecondsRealtime_t2014038672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1566[1] = 
{
	WaitForSecondsRealtime_t2014038672::get_offset_of_waitTime_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1567 = { sizeof (ThreadAndSerializationSafeAttribute_t1315143510), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1568 = { sizeof (ReadOnlyAttribute_t3593605500), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1569 = { sizeof (ReadWriteAttribute_t4282546379), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1570 = { sizeof (WriteOnlyAttribute_t447152178), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1571 = { sizeof (DeallocateOnJobCompletionAttribute_t1045342055), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1572 = { sizeof (NativeContainerAttribute_t542100557), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1573 = { sizeof (NativeContainerSupportsAtomicWriteAttribute_t2866576845), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1574 = { sizeof (NativeContainerSupportsMinMaxWriteRestrictionAttribute_t977258540), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1575 = { sizeof (FrameData_t1284930133)+ sizeof (RuntimeObject), sizeof(FrameData_t1284930133 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1575[6] = 
{
	FrameData_t1284930133::get_offset_of_m_FrameID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t1284930133::get_offset_of_m_DeltaTime_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t1284930133::get_offset_of_m_Weight_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t1284930133::get_offset_of_m_EffectiveWeight_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t1284930133::get_offset_of_m_EffectiveSpeed_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t1284930133::get_offset_of_m_Flags_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1576 = { sizeof (Flags_t2575303713)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1576[5] = 
{
	Flags_t2575303713::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1577 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1578 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1579 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1580 = { sizeof (PlayableBinding_t3888398748)+ sizeof (RuntimeObject), -1, sizeof(PlayableBinding_t3888398748_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1580[6] = 
{
	PlayableBinding_t3888398748_StaticFields::get_offset_of_None_0(),
	PlayableBinding_t3888398748_StaticFields::get_offset_of_DefaultDuration_1(),
	PlayableBinding_t3888398748::get_offset_of_U3CstreamNameU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t3888398748::get_offset_of_U3CstreamTypeU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t3888398748::get_offset_of_U3CsourceObjectU3Ek__BackingField_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t3888398748::get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1581 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1582 = { sizeof (PlayableAsset_t3502181837), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1583 = { sizeof (PlayableBehaviour_t1162284075), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1584 = { sizeof (PlayableExtensions_t3532447705), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1585 = { sizeof (ScriptPlayableOutput_t2046527778)+ sizeof (RuntimeObject), sizeof(ScriptPlayableOutput_t2046527778 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1585[1] = 
{
	ScriptPlayableOutput_t2046527778::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1586 = { sizeof (DefaultValueAttribute_t3371626080), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1586[1] = 
{
	DefaultValueAttribute_t3371626080::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1587 = { sizeof (ExcludeFromDocsAttribute_t1233570812), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1588 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1589 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1590 = { sizeof (Logger_t3881863879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1590[3] = 
{
	Logger_t3881863879::get_offset_of_U3ClogHandlerU3Ek__BackingField_0(),
	Logger_t3881863879::get_offset_of_U3ClogEnabledU3Ek__BackingField_1(),
	Logger_t3881863879::get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1591 = { sizeof (MessageEventArgs_t2825081682), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1591[2] = 
{
	MessageEventArgs_t2825081682::get_offset_of_playerId_0(),
	MessageEventArgs_t2825081682::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1592 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1593 = { sizeof (PlayerConnection_t1012956057), -1, sizeof(PlayerConnection_t1012956057_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1593[5] = 
{
	PlayerConnection_t1012956057_StaticFields::get_offset_of_connectionNative_2(),
	PlayerConnection_t1012956057::get_offset_of_m_PlayerEditorConnectionEvents_3(),
	PlayerConnection_t1012956057::get_offset_of_m_connectedPlayers_4(),
	PlayerConnection_t1012956057::get_offset_of_m_IsInitilized_5(),
	PlayerConnection_t1012956057_StaticFields::get_offset_of_s_Instance_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1594 = { sizeof (PlayerEditorConnectionEvents_t2682965605), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1594[3] = 
{
	PlayerEditorConnectionEvents_t2682965605::get_offset_of_messageTypeSubscribers_0(),
	PlayerEditorConnectionEvents_t2682965605::get_offset_of_connectionEvent_1(),
	PlayerEditorConnectionEvents_t2682965605::get_offset_of_disconnectionEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1595 = { sizeof (MessageEvent_t1473260158), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1596 = { sizeof (ConnectionChangeEvent_t3345771492), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1597 = { sizeof (MessageTypeSubscribers_t3207709389), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1597[3] = 
{
	MessageTypeSubscribers_t3207709389::get_offset_of_m_messageTypeId_0(),
	MessageTypeSubscribers_t3207709389::get_offset_of_subscriberCount_1(),
	MessageTypeSubscribers_t3207709389::get_offset_of_messageCallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1598 = { sizeof (U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t3794016233), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1598[1] = 
{
	U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t3794016233::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1599 = { sizeof (U3CAddAndCreateU3Ec__AnonStorey1_t2491980286), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1599[1] = 
{
	U3CAddAndCreateU3Ec__AnonStorey1_t2491980286::get_offset_of_messageId_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
