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

// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t659949779;
// System.Collections.ArrayList
struct ArrayList_t3130705167;
// System.Threading.Timer
struct Timer_t4278488267;
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t3394365166;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t3190385874;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1025653127;
// System.Runtime.Remoting.Contexts.CrossContextChannel
struct CrossContextChannel_t1001269386;
// System.Collections.IList
struct IList_t3153517541;
// System.Collections.Hashtable
struct Hashtable_t2669271111;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t659257187;
// System.Runtime.Remoting.Contexts.IDynamicMessageSink
struct IDynamicMessageSink_t1029750836;
// System.IntPtr[]
struct IntPtrU5BU5D_t1028149952;
// System.Collections.IDictionary
struct IDictionary_t3165178467;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t137523204;
// System.Void
struct Void_t2840465117;
// System.Char[]
struct CharU5BU5D_t1813131194;
// System.Type
struct Type_t;
// System.Threading.Mutex
struct Mutex_t3256461368;
// System.Threading.Thread
struct Thread_t721847461;
// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t3973218493;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t3790491602;
// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct ContextCallbackObject_t1303354678;
// System.DelegateData
struct DelegateData_t3518579387;
// System.String[]
struct StringU5BU5D_t1083483888;
// System.Int32[]
struct Int32U5BU5D_t2713823705;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t2784505342;
// System.IAsyncResult
struct IAsyncResult_t2715088364;
// System.AsyncCallback
struct AsyncCallback_t2703135071;
// System.Collections.Queue
struct Queue_t184100555;
// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct RenewalDelegate_t785328590;




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
#ifndef LEASESINK_T2123659028_H
#define LEASESINK_T2123659028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseSink
struct  LeaseSink_t2123659028  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Lifetime.LeaseSink::_nextSink
	RuntimeObject* ____nextSink_0;

public:
	inline static int32_t get_offset_of__nextSink_0() { return static_cast<int32_t>(offsetof(LeaseSink_t2123659028, ____nextSink_0)); }
	inline RuntimeObject* get__nextSink_0() const { return ____nextSink_0; }
	inline RuntimeObject** get_address_of__nextSink_0() { return &____nextSink_0; }
	inline void set__nextSink_0(RuntimeObject* value)
	{
		____nextSink_0 = value;
		Il2CppCodeGenWriteBarrier((&____nextSink_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASESINK_T2123659028_H
#ifndef LEASEMANAGER_T3973218493_H
#define LEASEMANAGER_T3973218493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseManager
struct  LeaseManager_t3973218493  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.LeaseManager::_objects
	ArrayList_t3130705167 * ____objects_0;
	// System.Threading.Timer System.Runtime.Remoting.Lifetime.LeaseManager::_timer
	Timer_t4278488267 * ____timer_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(LeaseManager_t3973218493, ____objects_0)); }
	inline ArrayList_t3130705167 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t3130705167 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t3130705167 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier((&____objects_0), value);
	}

	inline static int32_t get_offset_of__timer_1() { return static_cast<int32_t>(offsetof(LeaseManager_t3973218493, ____timer_1)); }
	inline Timer_t4278488267 * get__timer_1() const { return ____timer_1; }
	inline Timer_t4278488267 ** get_address_of__timer_1() { return &____timer_1; }
	inline void set__timer_1(Timer_t4278488267 * value)
	{
		____timer_1 = value;
		Il2CppCodeGenWriteBarrier((&____timer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASEMANAGER_T3973218493_H
#ifndef SYNCHRONIZEDSERVERCONTEXTSINK_T2076736654_H
#define SYNCHRONIZEDSERVERCONTEXTSINK_T2076736654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizedServerContextSink
struct  SynchronizedServerContextSink_t2076736654  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_next
	RuntimeObject* ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_att
	SynchronizationAttribute_t3394365166 * ____att_1;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(SynchronizedServerContextSink_t2076736654, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__att_1() { return static_cast<int32_t>(offsetof(SynchronizedServerContextSink_t2076736654, ____att_1)); }
	inline SynchronizationAttribute_t3394365166 * get__att_1() const { return ____att_1; }
	inline SynchronizationAttribute_t3394365166 ** get_address_of__att_1() { return &____att_1; }
	inline void set__att_1(SynchronizationAttribute_t3394365166 * value)
	{
		____att_1 = value;
		Il2CppCodeGenWriteBarrier((&____att_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDSERVERCONTEXTSINK_T2076736654_H
#ifndef SYNCHRONIZEDCLIENTCONTEXTSINK_T1314715271_H
#define SYNCHRONIZEDCLIENTCONTEXTSINK_T1314715271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizedClientContextSink
struct  SynchronizedClientContextSink_t1314715271  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::_next
	RuntimeObject* ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::_att
	SynchronizationAttribute_t3394365166 * ____att_1;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(SynchronizedClientContextSink_t1314715271, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__att_1() { return static_cast<int32_t>(offsetof(SynchronizedClientContextSink_t1314715271, ____att_1)); }
	inline SynchronizationAttribute_t3394365166 * get__att_1() const { return ____att_1; }
	inline SynchronizationAttribute_t3394365166 ** get_address_of__att_1() { return &____att_1; }
	inline void set__att_1(SynchronizationAttribute_t3394365166 * value)
	{
		____att_1 = value;
		Il2CppCodeGenWriteBarrier((&____att_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDCLIENTCONTEXTSINK_T1314715271_H
#ifndef ACTIVATIONSERVICES_T1991368049_H
#define ACTIVATIONSERVICES_T1991368049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ActivationServices
struct  ActivationServices_t1991368049  : public RuntimeObject
{
public:

public:
};

struct ActivationServices_t1991368049_StaticFields
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::_constructionActivator
	RuntimeObject* ____constructionActivator_0;

public:
	inline static int32_t get_offset_of__constructionActivator_0() { return static_cast<int32_t>(offsetof(ActivationServices_t1991368049_StaticFields, ____constructionActivator_0)); }
	inline RuntimeObject* get__constructionActivator_0() const { return ____constructionActivator_0; }
	inline RuntimeObject** get_address_of__constructionActivator_0() { return &____constructionActivator_0; }
	inline void set__constructionActivator_0(RuntimeObject* value)
	{
		____constructionActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&____constructionActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONSERVICES_T1991368049_H
#ifndef APPDOMAINLEVELACTIVATOR_T2112508160_H
#define APPDOMAINLEVELACTIVATOR_T2112508160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.AppDomainLevelActivator
struct  AppDomainLevelActivator_t2112508160  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Activation.AppDomainLevelActivator::_activationUrl
	String_t* ____activationUrl_0;
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.AppDomainLevelActivator::_next
	RuntimeObject* ____next_1;

public:
	inline static int32_t get_offset_of__activationUrl_0() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t2112508160, ____activationUrl_0)); }
	inline String_t* get__activationUrl_0() const { return ____activationUrl_0; }
	inline String_t** get_address_of__activationUrl_0() { return &____activationUrl_0; }
	inline void set__activationUrl_0(String_t* value)
	{
		____activationUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&____activationUrl_0), value);
	}

	inline static int32_t get_offset_of__next_1() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t2112508160, ____next_1)); }
	inline RuntimeObject* get__next_1() const { return ____next_1; }
	inline RuntimeObject** get_address_of__next_1() { return &____next_1; }
	inline void set__next_1(RuntimeObject* value)
	{
		____next_1 = value;
		Il2CppCodeGenWriteBarrier((&____next_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINLEVELACTIVATOR_T2112508160_H
#ifndef CONSTRUCTIONLEVELACTIVATOR_T446753773_H
#define CONSTRUCTIONLEVELACTIVATOR_T446753773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
struct  ConstructionLevelActivator_t446753773  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONLEVELACTIVATOR_T446753773_H
#ifndef CONTEXTLEVELACTIVATOR_T2452121683_H
#define CONTEXTLEVELACTIVATOR_T2452121683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ContextLevelActivator
struct  ContextLevelActivator_t2452121683  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ContextLevelActivator::m_NextActivator
	RuntimeObject* ___m_NextActivator_0;

public:
	inline static int32_t get_offset_of_m_NextActivator_0() { return static_cast<int32_t>(offsetof(ContextLevelActivator_t2452121683, ___m_NextActivator_0)); }
	inline RuntimeObject* get_m_NextActivator_0() const { return ___m_NextActivator_0; }
	inline RuntimeObject** get_address_of_m_NextActivator_0() { return &___m_NextActivator_0; }
	inline void set_m_NextActivator_0(RuntimeObject* value)
	{
		___m_NextActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_NextActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTLEVELACTIVATOR_T2452121683_H
#ifndef CROSSCONTEXTCHANNEL_T1001269386_H
#define CROSSCONTEXTCHANNEL_T1001269386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextChannel
struct  CrossContextChannel_t1001269386  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTCHANNEL_T1001269386_H
#ifndef CHANNELINFO_T1103200072_H
#define CHANNELINFO_T1103200072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ChannelInfo
struct  ChannelInfo_t1103200072  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.ChannelInfo::channelData
	ObjectU5BU5D_t1025653127* ___channelData_0;

public:
	inline static int32_t get_offset_of_channelData_0() { return static_cast<int32_t>(offsetof(ChannelInfo_t1103200072, ___channelData_0)); }
	inline ObjectU5BU5D_t1025653127* get_channelData_0() const { return ___channelData_0; }
	inline ObjectU5BU5D_t1025653127** get_address_of_channelData_0() { return &___channelData_0; }
	inline void set_channelData_0(ObjectU5BU5D_t1025653127* value)
	{
		___channelData_0 = value;
		Il2CppCodeGenWriteBarrier((&___channelData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELINFO_T1103200072_H
#ifndef CHANNELSERVICES_T2053425220_H
#define CHANNELSERVICES_T2053425220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ChannelServices
struct  ChannelServices_t2053425220  : public RuntimeObject
{
public:

public:
};

struct ChannelServices_t2053425220_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::registeredChannels
	ArrayList_t3130705167 * ___registeredChannels_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::delayedClientChannels
	ArrayList_t3130705167 * ___delayedClientChannels_1;
	// System.Runtime.Remoting.Contexts.CrossContextChannel System.Runtime.Remoting.Channels.ChannelServices::_crossContextSink
	CrossContextChannel_t1001269386 * ____crossContextSink_2;
	// System.String System.Runtime.Remoting.Channels.ChannelServices::CrossContextUrl
	String_t* ___CrossContextUrl_3;
	// System.Collections.IList System.Runtime.Remoting.Channels.ChannelServices::oldStartModeTypes
	RuntimeObject* ___oldStartModeTypes_4;

public:
	inline static int32_t get_offset_of_registeredChannels_0() { return static_cast<int32_t>(offsetof(ChannelServices_t2053425220_StaticFields, ___registeredChannels_0)); }
	inline ArrayList_t3130705167 * get_registeredChannels_0() const { return ___registeredChannels_0; }
	inline ArrayList_t3130705167 ** get_address_of_registeredChannels_0() { return &___registeredChannels_0; }
	inline void set_registeredChannels_0(ArrayList_t3130705167 * value)
	{
		___registeredChannels_0 = value;
		Il2CppCodeGenWriteBarrier((&___registeredChannels_0), value);
	}

	inline static int32_t get_offset_of_delayedClientChannels_1() { return static_cast<int32_t>(offsetof(ChannelServices_t2053425220_StaticFields, ___delayedClientChannels_1)); }
	inline ArrayList_t3130705167 * get_delayedClientChannels_1() const { return ___delayedClientChannels_1; }
	inline ArrayList_t3130705167 ** get_address_of_delayedClientChannels_1() { return &___delayedClientChannels_1; }
	inline void set_delayedClientChannels_1(ArrayList_t3130705167 * value)
	{
		___delayedClientChannels_1 = value;
		Il2CppCodeGenWriteBarrier((&___delayedClientChannels_1), value);
	}

	inline static int32_t get_offset_of__crossContextSink_2() { return static_cast<int32_t>(offsetof(ChannelServices_t2053425220_StaticFields, ____crossContextSink_2)); }
	inline CrossContextChannel_t1001269386 * get__crossContextSink_2() const { return ____crossContextSink_2; }
	inline CrossContextChannel_t1001269386 ** get_address_of__crossContextSink_2() { return &____crossContextSink_2; }
	inline void set__crossContextSink_2(CrossContextChannel_t1001269386 * value)
	{
		____crossContextSink_2 = value;
		Il2CppCodeGenWriteBarrier((&____crossContextSink_2), value);
	}

	inline static int32_t get_offset_of_CrossContextUrl_3() { return static_cast<int32_t>(offsetof(ChannelServices_t2053425220_StaticFields, ___CrossContextUrl_3)); }
	inline String_t* get_CrossContextUrl_3() const { return ___CrossContextUrl_3; }
	inline String_t** get_address_of_CrossContextUrl_3() { return &___CrossContextUrl_3; }
	inline void set_CrossContextUrl_3(String_t* value)
	{
		___CrossContextUrl_3 = value;
		Il2CppCodeGenWriteBarrier((&___CrossContextUrl_3), value);
	}

	inline static int32_t get_offset_of_oldStartModeTypes_4() { return static_cast<int32_t>(offsetof(ChannelServices_t2053425220_StaticFields, ___oldStartModeTypes_4)); }
	inline RuntimeObject* get_oldStartModeTypes_4() const { return ___oldStartModeTypes_4; }
	inline RuntimeObject** get_address_of_oldStartModeTypes_4() { return &___oldStartModeTypes_4; }
	inline void set_oldStartModeTypes_4(RuntimeObject* value)
	{
		___oldStartModeTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&___oldStartModeTypes_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELSERVICES_T2053425220_H
#ifndef CROSSAPPDOMAINDATA_T2572049770_H
#define CROSSAPPDOMAINDATA_T2572049770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainData
struct  CrossAppDomainData_t2572049770  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainData::_ContextID
	RuntimeObject * ____ContextID_0;
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::_DomainID
	int32_t ____DomainID_1;
	// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::_processGuid
	String_t* ____processGuid_2;

public:
	inline static int32_t get_offset_of__ContextID_0() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t2572049770, ____ContextID_0)); }
	inline RuntimeObject * get__ContextID_0() const { return ____ContextID_0; }
	inline RuntimeObject ** get_address_of__ContextID_0() { return &____ContextID_0; }
	inline void set__ContextID_0(RuntimeObject * value)
	{
		____ContextID_0 = value;
		Il2CppCodeGenWriteBarrier((&____ContextID_0), value);
	}

	inline static int32_t get_offset_of__DomainID_1() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t2572049770, ____DomainID_1)); }
	inline int32_t get__DomainID_1() const { return ____DomainID_1; }
	inline int32_t* get_address_of__DomainID_1() { return &____DomainID_1; }
	inline void set__DomainID_1(int32_t value)
	{
		____DomainID_1 = value;
	}

	inline static int32_t get_offset_of__processGuid_2() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t2572049770, ____processGuid_2)); }
	inline String_t* get__processGuid_2() const { return ____processGuid_2; }
	inline String_t** get_address_of__processGuid_2() { return &____processGuid_2; }
	inline void set__processGuid_2(String_t* value)
	{
		____processGuid_2 = value;
		Il2CppCodeGenWriteBarrier((&____processGuid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINDATA_T2572049770_H
#ifndef CROSSAPPDOMAINCHANNEL_T1984050988_H
#define CROSSAPPDOMAINCHANNEL_T1984050988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainChannel
struct  CrossAppDomainChannel_t1984050988  : public RuntimeObject
{
public:

public:
};

struct CrossAppDomainChannel_t1984050988_StaticFields
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::s_lock
	RuntimeObject * ___s_lock_0;

public:
	inline static int32_t get_offset_of_s_lock_0() { return static_cast<int32_t>(offsetof(CrossAppDomainChannel_t1984050988_StaticFields, ___s_lock_0)); }
	inline RuntimeObject * get_s_lock_0() const { return ___s_lock_0; }
	inline RuntimeObject ** get_address_of_s_lock_0() { return &___s_lock_0; }
	inline void set_s_lock_0(RuntimeObject * value)
	{
		___s_lock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINCHANNEL_T1984050988_H
#ifndef CROSSAPPDOMAINSINK_T3838644471_H
#define CROSSAPPDOMAINSINK_T3838644471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct  CrossAppDomainSink_t3838644471  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::_domainID
	int32_t ____domainID_2;

public:
	inline static int32_t get_offset_of__domainID_2() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t3838644471, ____domainID_2)); }
	inline int32_t get__domainID_2() const { return ____domainID_2; }
	inline int32_t* get_address_of__domainID_2() { return &____domainID_2; }
	inline void set__domainID_2(int32_t value)
	{
		____domainID_2 = value;
	}
};

struct CrossAppDomainSink_t3838644471_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.CrossAppDomainSink::s_sinks
	Hashtable_t2669271111 * ___s_sinks_0;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Channels.CrossAppDomainSink::processMessageMethod
	MethodInfo_t * ___processMessageMethod_1;

public:
	inline static int32_t get_offset_of_s_sinks_0() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t3838644471_StaticFields, ___s_sinks_0)); }
	inline Hashtable_t2669271111 * get_s_sinks_0() const { return ___s_sinks_0; }
	inline Hashtable_t2669271111 ** get_address_of_s_sinks_0() { return &___s_sinks_0; }
	inline void set_s_sinks_0(Hashtable_t2669271111 * value)
	{
		___s_sinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_sinks_0), value);
	}

	inline static int32_t get_offset_of_processMessageMethod_1() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t3838644471_StaticFields, ___processMessageMethod_1)); }
	inline MethodInfo_t * get_processMessageMethod_1() const { return ___processMessageMethod_1; }
	inline MethodInfo_t ** get_address_of_processMessageMethod_1() { return &___processMessageMethod_1; }
	inline void set_processMessageMethod_1(MethodInfo_t * value)
	{
		___processMessageMethod_1 = value;
		Il2CppCodeGenWriteBarrier((&___processMessageMethod_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINSINK_T3838644471_H
#ifndef SINKPROVIDERDATA_T2181819397_H
#define SINKPROVIDERDATA_T2181819397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.SinkProviderData
struct  SinkProviderData_t2181819397  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Channels.SinkProviderData::sinkName
	String_t* ___sinkName_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.SinkProviderData::children
	ArrayList_t3130705167 * ___children_1;
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.SinkProviderData::properties
	Hashtable_t2669271111 * ___properties_2;

public:
	inline static int32_t get_offset_of_sinkName_0() { return static_cast<int32_t>(offsetof(SinkProviderData_t2181819397, ___sinkName_0)); }
	inline String_t* get_sinkName_0() const { return ___sinkName_0; }
	inline String_t** get_address_of_sinkName_0() { return &___sinkName_0; }
	inline void set_sinkName_0(String_t* value)
	{
		___sinkName_0 = value;
		Il2CppCodeGenWriteBarrier((&___sinkName_0), value);
	}

	inline static int32_t get_offset_of_children_1() { return static_cast<int32_t>(offsetof(SinkProviderData_t2181819397, ___children_1)); }
	inline ArrayList_t3130705167 * get_children_1() const { return ___children_1; }
	inline ArrayList_t3130705167 ** get_address_of_children_1() { return &___children_1; }
	inline void set_children_1(ArrayList_t3130705167 * value)
	{
		___children_1 = value;
		Il2CppCodeGenWriteBarrier((&___children_1), value);
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(SinkProviderData_t2181819397, ___properties_2)); }
	inline Hashtable_t2669271111 * get_properties_2() const { return ___properties_2; }
	inline Hashtable_t2669271111 ** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(Hashtable_t2669271111 * value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((&___properties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINKPROVIDERDATA_T2181819397_H
#ifndef MARSHAL_T3388789887_H
#define MARSHAL_T3388789887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.Marshal
struct  Marshal_t3388789887  : public RuntimeObject
{
public:

public:
};

struct Marshal_t3388789887_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_t3388789887_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t3388789887_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHAL_T3388789887_H
#ifndef DYNAMICPROPERTYCOLLECTION_T3790491602_H
#define DYNAMICPROPERTYCOLLECTION_T3790491602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct  DynamicPropertyCollection_t3790491602  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.DynamicPropertyCollection::_properties
	ArrayList_t3130705167 * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(DynamicPropertyCollection_t3790491602, ____properties_0)); }
	inline ArrayList_t3130705167 * get__properties_0() const { return ____properties_0; }
	inline ArrayList_t3130705167 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(ArrayList_t3130705167 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICPROPERTYCOLLECTION_T3790491602_H
#ifndef DYNAMICPROPERTYREG_T4136681404_H
#define DYNAMICPROPERTYREG_T4136681404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
struct  DynamicPropertyReg_t4136681404  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Contexts.IDynamicProperty System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Property
	RuntimeObject* ___Property_0;
	// System.Runtime.Remoting.Contexts.IDynamicMessageSink System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Sink
	RuntimeObject* ___Sink_1;

public:
	inline static int32_t get_offset_of_Property_0() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t4136681404, ___Property_0)); }
	inline RuntimeObject* get_Property_0() const { return ___Property_0; }
	inline RuntimeObject** get_address_of_Property_0() { return &___Property_0; }
	inline void set_Property_0(RuntimeObject* value)
	{
		___Property_0 = value;
		Il2CppCodeGenWriteBarrier((&___Property_0), value);
	}

	inline static int32_t get_offset_of_Sink_1() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t4136681404, ___Sink_1)); }
	inline RuntimeObject* get_Sink_1() const { return ___Sink_1; }
	inline RuntimeObject** get_address_of_Sink_1() { return &___Sink_1; }
	inline void set_Sink_1(RuntimeObject* value)
	{
		___Sink_1 = value;
		Il2CppCodeGenWriteBarrier((&___Sink_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICPROPERTYREG_T4136681404_H
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
#ifndef ISVOLATILE_T1372785367_H
#define ISVOLATILE_T1372785367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsVolatile
struct  IsVolatile_t1372785367  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISVOLATILE_T1372785367_H
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
#ifndef CRITICALFINALIZEROBJECT_T2888244520_H
#define CRITICALFINALIZEROBJECT_T2888244520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t2888244520  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T2888244520_H
#ifndef MARSHALBYREFOBJECT_T2782560948_H
#define MARSHALBYREFOBJECT_T2782560948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2782560948  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t137523204 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2782560948, ____identity_0)); }
	inline ServerIdentity_t137523204 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t137523204 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t137523204 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2782560948_H
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
#ifndef ERRORWRAPPER_T1181002447_H
#define ERRORWRAPPER_T1181002447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t1181002447  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::errorCode
	int32_t ___errorCode_0;

public:
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t1181002447, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORWRAPPER_T1181002447_H
#ifndef ACTIVATIONARGUMENTS_T880834609_H
#define ACTIVATIONARGUMENTS_T880834609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t880834609  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONARGUMENTS_T880834609_H
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
#ifndef CONTEXTATTRIBUTE_T1278511000_H
#define CONTEXTATTRIBUTE_T1278511000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextAttribute
struct  ContextAttribute_t1278511000  : public Attribute_t3365476432
{
public:
	// System.String System.Runtime.Remoting.Contexts.ContextAttribute::AttributeName
	String_t* ___AttributeName_0;

public:
	inline static int32_t get_offset_of_AttributeName_0() { return static_cast<int32_t>(offsetof(ContextAttribute_t1278511000, ___AttributeName_0)); }
	inline String_t* get_AttributeName_0() const { return ___AttributeName_0; }
	inline String_t** get_address_of_AttributeName_0() { return &___AttributeName_0; }
	inline void set_AttributeName_0(String_t* value)
	{
		___AttributeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___AttributeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTATTRIBUTE_T1278511000_H
#ifndef TIMESPAN_T1272913678_H
#define TIMESPAN_T1272913678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t1272913678 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t1272913678, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t1272913678_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t1272913678  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t1272913678  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t1272913678  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t1272913678_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t1272913678  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t1272913678 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t1272913678  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t1272913678_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t1272913678  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t1272913678 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t1272913678  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t1272913678_StaticFields, ___Zero_2)); }
	inline TimeSpan_t1272913678  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t1272913678 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t1272913678  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1272913678_H
#ifndef STRINGFREEZINGATTRIBUTE_T3642358170_H
#define STRINGFREEZINGATTRIBUTE_T3642358170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t3642358170  : public Attribute_t3365476432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFREEZINGATTRIBUTE_T3642358170_H
#ifndef CONTEXTBOUNDOBJECT_T1921698976_H
#define CONTEXTBOUNDOBJECT_T1921698976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextBoundObject
struct  ContextBoundObject_t1921698976  : public MarshalByRefObject_t2782560948
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTBOUNDOBJECT_T1921698976_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	UIntPtr_t  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline UIntPtr_t  get_Zero_0() const { return ___Zero_0; }
	inline UIntPtr_t * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(UIntPtr_t  value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef REMOTEACTIVATOR_T1057560253_H
#define REMOTEACTIVATOR_T1057560253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.RemoteActivator
struct  RemoteActivator_t1057560253  : public MarshalByRefObject_t2782560948
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTEACTIVATOR_T1057560253_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T3446900438_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T3446900438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t3446900438  : public Attribute_t3365476432
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::relax
	int32_t ___relax_0;

public:
	inline static int32_t get_offset_of_relax_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t3446900438, ___relax_0)); }
	inline int32_t get_relax_0() const { return ___relax_0; }
	inline int32_t* get_address_of_relax_0() { return &___relax_0; }
	inline void set_relax_0(int32_t value)
	{
		___relax_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T3446900438_H
#ifndef SYSTEMEXCEPTION_T3254668302_H
#define SYSTEMEXCEPTION_T3254668302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3254668302  : public Exception_t1703355491
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3254668302_H
#ifndef TYPELIBVERSIONATTRIBUTE_T1009830594_H
#define TYPELIBVERSIONATTRIBUTE_T1009830594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibVersionAttribute
struct  TypeLibVersionAttribute_t1009830594  : public Attribute_t3365476432
{
public:
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::major
	int32_t ___major_0;
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::minor
	int32_t ___minor_1;

public:
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t1009830594, ___major_0)); }
	inline int32_t get_major_0() const { return ___major_0; }
	inline int32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(int32_t value)
	{
		___major_0 = value;
	}

	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t1009830594, ___minor_1)); }
	inline int32_t get_minor_1() const { return ___minor_1; }
	inline int32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(int32_t value)
	{
		___minor_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBVERSIONATTRIBUTE_T1009830594_H
#ifndef TYPELIBIMPORTCLASSATTRIBUTE_T3012984513_H
#define TYPELIBIMPORTCLASSATTRIBUTE_T3012984513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibImportClassAttribute
struct  TypeLibImportClassAttribute_t3012984513  : public Attribute_t3365476432
{
public:
	// System.String System.Runtime.InteropServices.TypeLibImportClassAttribute::_importClass
	String_t* ____importClass_0;

public:
	inline static int32_t get_offset_of__importClass_0() { return static_cast<int32_t>(offsetof(TypeLibImportClassAttribute_t3012984513, ____importClass_0)); }
	inline String_t* get__importClass_0() const { return ____importClass_0; }
	inline String_t** get_address_of__importClass_0() { return &____importClass_0; }
	inline void set__importClass_0(String_t* value)
	{
		____importClass_0 = value;
		Il2CppCodeGenWriteBarrier((&____importClass_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBIMPORTCLASSATTRIBUTE_T3012984513_H
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
#ifndef PRESERVESIGATTRIBUTE_T1093493112_H
#define PRESERVESIGATTRIBUTE_T1093493112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PreserveSigAttribute
struct  PreserveSigAttribute_t1093493112  : public Attribute_t3365476432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVESIGATTRIBUTE_T1093493112_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T2766022255_H
#define COMDEFAULTINTERFACEATTRIBUTE_T2766022255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t2766022255  : public Attribute_t3365476432
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_type
	Type_t * ____type_0;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t2766022255, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMDEFAULTINTERFACEATTRIBUTE_T2766022255_H
#ifndef DISPIDATTRIBUTE_T29474397_H
#define DISPIDATTRIBUTE_T29474397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t29474397  : public Attribute_t3365476432
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t29474397, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPIDATTRIBUTE_T29474397_H
#ifndef GCHANDLE_T567803298_H
#define GCHANDLE_T567803298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t567803298 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t567803298, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T567803298_H
#ifndef LEASESTATE_T541959023_H
#define LEASESTATE_T541959023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseState
struct  LeaseState_t541959023 
{
public:
	// System.Int32 System.Runtime.Remoting.Lifetime.LeaseState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LeaseState_t541959023, ___value___1)); }
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
#endif // LEASESTATE_T541959023_H
#ifndef SYNCHRONIZATIONATTRIBUTE_T3394365166_H
#define SYNCHRONIZATIONATTRIBUTE_T3394365166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct  SynchronizationAttribute_t3394365166  : public ContextAttribute_t1278511000
{
public:
	// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::_bReEntrant
	bool ____bReEntrant_1;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_flavor
	int32_t ____flavor_2;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_lockCount
	int32_t ____lockCount_3;
	// System.Threading.Mutex System.Runtime.Remoting.Contexts.SynchronizationAttribute::_mutex
	Mutex_t3256461368 * ____mutex_4;
	// System.Threading.Thread System.Runtime.Remoting.Contexts.SynchronizationAttribute::_ownerThread
	Thread_t721847461 * ____ownerThread_5;

public:
	inline static int32_t get_offset_of__bReEntrant_1() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3394365166, ____bReEntrant_1)); }
	inline bool get__bReEntrant_1() const { return ____bReEntrant_1; }
	inline bool* get_address_of__bReEntrant_1() { return &____bReEntrant_1; }
	inline void set__bReEntrant_1(bool value)
	{
		____bReEntrant_1 = value;
	}

	inline static int32_t get_offset_of__flavor_2() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3394365166, ____flavor_2)); }
	inline int32_t get__flavor_2() const { return ____flavor_2; }
	inline int32_t* get_address_of__flavor_2() { return &____flavor_2; }
	inline void set__flavor_2(int32_t value)
	{
		____flavor_2 = value;
	}

	inline static int32_t get_offset_of__lockCount_3() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3394365166, ____lockCount_3)); }
	inline int32_t get__lockCount_3() const { return ____lockCount_3; }
	inline int32_t* get_address_of__lockCount_3() { return &____lockCount_3; }
	inline void set__lockCount_3(int32_t value)
	{
		____lockCount_3 = value;
	}

	inline static int32_t get_offset_of__mutex_4() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3394365166, ____mutex_4)); }
	inline Mutex_t3256461368 * get__mutex_4() const { return ____mutex_4; }
	inline Mutex_t3256461368 ** get_address_of__mutex_4() { return &____mutex_4; }
	inline void set__mutex_4(Mutex_t3256461368 * value)
	{
		____mutex_4 = value;
		Il2CppCodeGenWriteBarrier((&____mutex_4), value);
	}

	inline static int32_t get_offset_of__ownerThread_5() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3394365166, ____ownerThread_5)); }
	inline Thread_t721847461 * get__ownerThread_5() const { return ____ownerThread_5; }
	inline Thread_t721847461 ** get_address_of__ownerThread_5() { return &____ownerThread_5; }
	inline void set__ownerThread_5(Thread_t721847461 * value)
	{
		____ownerThread_5 = value;
		Il2CppCodeGenWriteBarrier((&____ownerThread_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONATTRIBUTE_T3394365166_H
#ifndef LIFETIMESERVICES_T1522989981_H
#define LIFETIMESERVICES_T1522989981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LifetimeServices
struct  LifetimeServices_t1522989981  : public RuntimeObject
{
public:

public:
};

struct LifetimeServices_t1522989981_StaticFields
{
public:
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManagerPollTime
	TimeSpan_t1272913678  ____leaseManagerPollTime_0;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseTime
	TimeSpan_t1272913678  ____leaseTime_1;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_renewOnCallTime
	TimeSpan_t1272913678  ____renewOnCallTime_2;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_sponsorshipTimeout
	TimeSpan_t1272913678  ____sponsorshipTimeout_3;
	// System.Runtime.Remoting.Lifetime.LeaseManager System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManager
	LeaseManager_t3973218493 * ____leaseManager_4;

public:
	inline static int32_t get_offset_of__leaseManagerPollTime_0() { return static_cast<int32_t>(offsetof(LifetimeServices_t1522989981_StaticFields, ____leaseManagerPollTime_0)); }
	inline TimeSpan_t1272913678  get__leaseManagerPollTime_0() const { return ____leaseManagerPollTime_0; }
	inline TimeSpan_t1272913678 * get_address_of__leaseManagerPollTime_0() { return &____leaseManagerPollTime_0; }
	inline void set__leaseManagerPollTime_0(TimeSpan_t1272913678  value)
	{
		____leaseManagerPollTime_0 = value;
	}

	inline static int32_t get_offset_of__leaseTime_1() { return static_cast<int32_t>(offsetof(LifetimeServices_t1522989981_StaticFields, ____leaseTime_1)); }
	inline TimeSpan_t1272913678  get__leaseTime_1() const { return ____leaseTime_1; }
	inline TimeSpan_t1272913678 * get_address_of__leaseTime_1() { return &____leaseTime_1; }
	inline void set__leaseTime_1(TimeSpan_t1272913678  value)
	{
		____leaseTime_1 = value;
	}

	inline static int32_t get_offset_of__renewOnCallTime_2() { return static_cast<int32_t>(offsetof(LifetimeServices_t1522989981_StaticFields, ____renewOnCallTime_2)); }
	inline TimeSpan_t1272913678  get__renewOnCallTime_2() const { return ____renewOnCallTime_2; }
	inline TimeSpan_t1272913678 * get_address_of__renewOnCallTime_2() { return &____renewOnCallTime_2; }
	inline void set__renewOnCallTime_2(TimeSpan_t1272913678  value)
	{
		____renewOnCallTime_2 = value;
	}

	inline static int32_t get_offset_of__sponsorshipTimeout_3() { return static_cast<int32_t>(offsetof(LifetimeServices_t1522989981_StaticFields, ____sponsorshipTimeout_3)); }
	inline TimeSpan_t1272913678  get__sponsorshipTimeout_3() const { return ____sponsorshipTimeout_3; }
	inline TimeSpan_t1272913678 * get_address_of__sponsorshipTimeout_3() { return &____sponsorshipTimeout_3; }
	inline void set__sponsorshipTimeout_3(TimeSpan_t1272913678  value)
	{
		____sponsorshipTimeout_3 = value;
	}

	inline static int32_t get_offset_of__leaseManager_4() { return static_cast<int32_t>(offsetof(LifetimeServices_t1522989981_StaticFields, ____leaseManager_4)); }
	inline LeaseManager_t3973218493 * get__leaseManager_4() const { return ____leaseManager_4; }
	inline LeaseManager_t3973218493 ** get_address_of__leaseManager_4() { return &____leaseManager_4; }
	inline void set__leaseManager_4(LeaseManager_t3973218493 * value)
	{
		____leaseManager_4 = value;
		Il2CppCodeGenWriteBarrier((&____leaseManager_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIFETIMESERVICES_T1522989981_H
#ifndef URLATTRIBUTE_T1142163626_H
#define URLATTRIBUTE_T1142163626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.UrlAttribute
struct  UrlAttribute_t1142163626  : public ContextAttribute_t1278511000
{
public:
	// System.String System.Runtime.Remoting.Activation.UrlAttribute::url
	String_t* ___url_1;

public:
	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(UrlAttribute_t1142163626, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier((&___url_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLATTRIBUTE_T1142163626_H
#ifndef CONTEXT_T3192096302_H
#define CONTEXT_T3192096302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.Context
struct  Context_t3192096302  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Contexts.Context::domain_id
	int32_t ___domain_id_0;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::context_id
	int32_t ___context_id_1;
	// System.UIntPtr System.Runtime.Remoting.Contexts.Context::static_data
	UIntPtr_t  ___static_data_2;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::server_context_sink_chain
	RuntimeObject* ___server_context_sink_chain_4;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::client_context_sink_chain
	RuntimeObject* ___client_context_sink_chain_5;
	// System.Object[] System.Runtime.Remoting.Contexts.Context::datastore
	ObjectU5BU5D_t1025653127* ___datastore_6;
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.Context::context_properties
	ArrayList_t3130705167 * ___context_properties_7;
	// System.Boolean System.Runtime.Remoting.Contexts.Context::frozen
	bool ___frozen_8;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::context_dynamic_properties
	DynamicPropertyCollection_t3790491602 * ___context_dynamic_properties_12;
	// System.Runtime.Remoting.Contexts.ContextCallbackObject System.Runtime.Remoting.Contexts.Context::callback_object
	ContextCallbackObject_t1303354678 * ___callback_object_13;

public:
	inline static int32_t get_offset_of_domain_id_0() { return static_cast<int32_t>(offsetof(Context_t3192096302, ___domain_id_0)); }
	inline int32_t get_domain_id_0() const { return ___domain_id_0; }
	inline int32_t* get_address_of_domain_id_0() { return &___domain_id_0; }
	inline void set_domain_id_0(int32_t value)
	{
		___domain_id_0 = value;
	}

	inline static int32_t get_offset_of_context_id_1() { return static_cast<int32_t>(offsetof(Context_t3192096302, ___context_id_1)); }
	inline int32_t get_context_id_1() const { return ___context_id_1; }
	inline int32_t* get_address_of_context_id_1() { return &___context_id_1; }
	inline void set_context_id_1(int32_t value)
	{
		___context_id_1 = value;
	}

	inline static int32_t get_offset_of_static_data_2() { return static_cast<int32_t>(offsetof(Context_t3192096302, ___static_data_2)); }
	inline UIntPtr_t  get_static_data_2() const { return ___static_data_2; }
	inline UIntPtr_t * get_address_of_static_data_2() { return &___static_data_2; }
	inline void set_static_data_2(UIntPtr_t  value)
	{
		___static_data_2 = value;
	}

	inline static int32_t get_offset_of_server_context_sink_chain_4() { return static_cast<int32_t>(offsetof(Context_t3192096302, ___server_context_sink_chain_4)); }
	inline RuntimeObject* get_server_context_sink_chain_4() const { return ___server_context_sink_chain_4; }
	inline RuntimeObject** get_address_of_server_context_sink_chain_4() { return &___server_context_sink_chain_4; }
	inline void set_server_context_sink_chain_4(RuntimeObject* value)
	{
		___server_context_sink_chain_4 = value;
		Il2CppCodeGenWriteBarrier((&___server_context_sink_chain_4), value);
	}

	inline static int32_t get_offset_of_client_context_sink_chain_5() { return static_cast<int32_t>(offsetof(Context_t3192096302, ___client_context_sink_chain_5)); }
	inline RuntimeObject* get_client_context_sink_chain_5() const { return ___client_context_sink_chain_5; }
	inline RuntimeObject** get_address_of_client_context_sink_chain_5() { return &___client_context_sink_chain_5; }
	inline void set_client_context_sink_chain_5(RuntimeObject* value)
	{
		___client_context_sink_chain_5 = value;
		Il2CppCodeGenWriteBarrier((&___client_context_sink_chain_5), value);
	}

	inline static int32_t get_offset_of_datastore_6() { return static_cast<int32_t>(offsetof(Context_t3192096302, ___datastore_6)); }
	inline ObjectU5BU5D_t1025653127* get_datastore_6() const { return ___datastore_6; }
	inline ObjectU5BU5D_t1025653127** get_address_of_datastore_6() { return &___datastore_6; }
	inline void set_datastore_6(ObjectU5BU5D_t1025653127* value)
	{
		___datastore_6 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_6), value);
	}

	inline static int32_t get_offset_of_context_properties_7() { return static_cast<int32_t>(offsetof(Context_t3192096302, ___context_properties_7)); }
	inline ArrayList_t3130705167 * get_context_properties_7() const { return ___context_properties_7; }
	inline ArrayList_t3130705167 ** get_address_of_context_properties_7() { return &___context_properties_7; }
	inline void set_context_properties_7(ArrayList_t3130705167 * value)
	{
		___context_properties_7 = value;
		Il2CppCodeGenWriteBarrier((&___context_properties_7), value);
	}

	inline static int32_t get_offset_of_frozen_8() { return static_cast<int32_t>(offsetof(Context_t3192096302, ___frozen_8)); }
	inline bool get_frozen_8() const { return ___frozen_8; }
	inline bool* get_address_of_frozen_8() { return &___frozen_8; }
	inline void set_frozen_8(bool value)
	{
		___frozen_8 = value;
	}

	inline static int32_t get_offset_of_context_dynamic_properties_12() { return static_cast<int32_t>(offsetof(Context_t3192096302, ___context_dynamic_properties_12)); }
	inline DynamicPropertyCollection_t3790491602 * get_context_dynamic_properties_12() const { return ___context_dynamic_properties_12; }
	inline DynamicPropertyCollection_t3790491602 ** get_address_of_context_dynamic_properties_12() { return &___context_dynamic_properties_12; }
	inline void set_context_dynamic_properties_12(DynamicPropertyCollection_t3790491602 * value)
	{
		___context_dynamic_properties_12 = value;
		Il2CppCodeGenWriteBarrier((&___context_dynamic_properties_12), value);
	}

	inline static int32_t get_offset_of_callback_object_13() { return static_cast<int32_t>(offsetof(Context_t3192096302, ___callback_object_13)); }
	inline ContextCallbackObject_t1303354678 * get_callback_object_13() const { return ___callback_object_13; }
	inline ContextCallbackObject_t1303354678 ** get_address_of_callback_object_13() { return &___callback_object_13; }
	inline void set_callback_object_13(ContextCallbackObject_t1303354678 * value)
	{
		___callback_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___callback_object_13), value);
	}
};

struct Context_t3192096302_StaticFields
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::default_server_context_sink
	RuntimeObject* ___default_server_context_sink_3;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::global_count
	int32_t ___global_count_9;
	// System.Collections.Hashtable System.Runtime.Remoting.Contexts.Context::namedSlots
	Hashtable_t2669271111 * ___namedSlots_10;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::global_dynamic_properties
	DynamicPropertyCollection_t3790491602 * ___global_dynamic_properties_11;

public:
	inline static int32_t get_offset_of_default_server_context_sink_3() { return static_cast<int32_t>(offsetof(Context_t3192096302_StaticFields, ___default_server_context_sink_3)); }
	inline RuntimeObject* get_default_server_context_sink_3() const { return ___default_server_context_sink_3; }
	inline RuntimeObject** get_address_of_default_server_context_sink_3() { return &___default_server_context_sink_3; }
	inline void set_default_server_context_sink_3(RuntimeObject* value)
	{
		___default_server_context_sink_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_server_context_sink_3), value);
	}

	inline static int32_t get_offset_of_global_count_9() { return static_cast<int32_t>(offsetof(Context_t3192096302_StaticFields, ___global_count_9)); }
	inline int32_t get_global_count_9() const { return ___global_count_9; }
	inline int32_t* get_address_of_global_count_9() { return &___global_count_9; }
	inline void set_global_count_9(int32_t value)
	{
		___global_count_9 = value;
	}

	inline static int32_t get_offset_of_namedSlots_10() { return static_cast<int32_t>(offsetof(Context_t3192096302_StaticFields, ___namedSlots_10)); }
	inline Hashtable_t2669271111 * get_namedSlots_10() const { return ___namedSlots_10; }
	inline Hashtable_t2669271111 ** get_address_of_namedSlots_10() { return &___namedSlots_10; }
	inline void set_namedSlots_10(Hashtable_t2669271111 * value)
	{
		___namedSlots_10 = value;
		Il2CppCodeGenWriteBarrier((&___namedSlots_10), value);
	}

	inline static int32_t get_offset_of_global_dynamic_properties_11() { return static_cast<int32_t>(offsetof(Context_t3192096302_StaticFields, ___global_dynamic_properties_11)); }
	inline DynamicPropertyCollection_t3790491602 * get_global_dynamic_properties_11() const { return ___global_dynamic_properties_11; }
	inline DynamicPropertyCollection_t3790491602 ** get_address_of_global_dynamic_properties_11() { return &___global_dynamic_properties_11; }
	inline void set_global_dynamic_properties_11(DynamicPropertyCollection_t3790491602 * value)
	{
		___global_dynamic_properties_11 = value;
		Il2CppCodeGenWriteBarrier((&___global_dynamic_properties_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXT_T3192096302_H
#ifndef LOADHINT_T2719876036_H
#define LOADHINT_T2719876036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t2719876036 
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadHint_t2719876036, ___value___1)); }
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
#endif // LOADHINT_T2719876036_H
#ifndef CER_T3207740340_H
#define CER_T3207740340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Cer
struct  Cer_t3207740340 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Cer::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Cer_t3207740340, ___value___1)); }
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
#endif // CER_T3207740340_H
#ifndef CONSISTENCY_T1381271428_H
#define CONSISTENCY_T1381271428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Consistency
struct  Consistency_t1381271428 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Consistency::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Consistency_t1381271428, ___value___1)); }
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
#endif // CONSISTENCY_T1381271428_H
#ifndef CALLINGCONVENTION_T3017747759_H
#define CALLINGCONVENTION_T3017747759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t3017747759 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t3017747759, ___value___1)); }
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
#endif // CALLINGCONVENTION_T3017747759_H
#ifndef CHARSET_T500922399_H
#define CHARSET_T500922399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t500922399 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t500922399, ___value___1)); }
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
#endif // CHARSET_T500922399_H
#ifndef CONTEXTCALLBACKOBJECT_T1303354678_H
#define CONTEXTCALLBACKOBJECT_T1303354678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct  ContextCallbackObject_t1303354678  : public ContextBoundObject_t1921698976
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTCALLBACKOBJECT_T1303354678_H
#ifndef COMINTERFACETYPE_T2978074612_H
#define COMINTERFACETYPE_T2978074612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
struct  ComInterfaceType_t2978074612 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComInterfaceType_t2978074612, ___value___1)); }
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
#endif // COMINTERFACETYPE_T2978074612_H
#ifndef EXTERNALEXCEPTION_T3182995369_H
#define EXTERNALEXCEPTION_T3182995369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t3182995369  : public SystemException_t3254668302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T3182995369_H
#ifndef CLASSINTERFACETYPE_T1341168242_H
#define CLASSINTERFACETYPE_T1341168242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t1341168242 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t1341168242, ___value___1)); }
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
#endif // CLASSINTERFACETYPE_T1341168242_H
#ifndef MARSHALDIRECTIVEEXCEPTION_T1889524568_H
#define MARSHALDIRECTIVEEXCEPTION_T1889524568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalDirectiveException
struct  MarshalDirectiveException_t1889524568  : public SystemException_t3254668302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIVEEXCEPTION_T1889524568_H
#ifndef SAFEHANDLE_T3771917671_H
#define SAFEHANDLE_T3771917671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t3771917671  : public CriticalFinalizerObject_t2888244520
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	IntPtr_t ___handle_0;
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::invalid_handle_value
	IntPtr_t ___invalid_handle_value_1;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::refcount
	int32_t ___refcount_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::owns_handle
	bool ___owns_handle_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t3771917671, ___handle_0)); }
	inline IntPtr_t get_handle_0() const { return ___handle_0; }
	inline IntPtr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(IntPtr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_invalid_handle_value_1() { return static_cast<int32_t>(offsetof(SafeHandle_t3771917671, ___invalid_handle_value_1)); }
	inline IntPtr_t get_invalid_handle_value_1() const { return ___invalid_handle_value_1; }
	inline IntPtr_t* get_address_of_invalid_handle_value_1() { return &___invalid_handle_value_1; }
	inline void set_invalid_handle_value_1(IntPtr_t value)
	{
		___invalid_handle_value_1 = value;
	}

	inline static int32_t get_offset_of_refcount_2() { return static_cast<int32_t>(offsetof(SafeHandle_t3771917671, ___refcount_2)); }
	inline int32_t get_refcount_2() const { return ___refcount_2; }
	inline int32_t* get_address_of_refcount_2() { return &___refcount_2; }
	inline void set_refcount_2(int32_t value)
	{
		___refcount_2 = value;
	}

	inline static int32_t get_offset_of_owns_handle_3() { return static_cast<int32_t>(offsetof(SafeHandle_t3771917671, ___owns_handle_3)); }
	inline bool get_owns_handle_3() const { return ___owns_handle_3; }
	inline bool* get_address_of_owns_handle_3() { return &___owns_handle_3; }
	inline void set_owns_handle_3(bool value)
	{
		___owns_handle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T3771917671_H
#ifndef UNMANAGEDTYPE_T3406064204_H
#define UNMANAGEDTYPE_T3406064204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t3406064204 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t3406064204, ___value___1)); }
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
#endif // UNMANAGEDTYPE_T3406064204_H
#ifndef DATETIMEKIND_T1858299083_H
#define DATETIMEKIND_T1858299083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t1858299083 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t1858299083, ___value___1)); }
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
#endif // DATETIMEKIND_T1858299083_H
#ifndef GCHANDLETYPE_T2405074060_H
#define GCHANDLETYPE_T2405074060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t2405074060 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t2405074060, ___value___1)); }
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
#endif // GCHANDLETYPE_T2405074060_H
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
#ifndef INTERFACETYPEATTRIBUTE_T2465331113_H
#define INTERFACETYPEATTRIBUTE_T2465331113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t2465331113  : public Attribute_t3365476432
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::intType
	int32_t ___intType_0;

public:
	inline static int32_t get_offset_of_intType_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t2465331113, ___intType_0)); }
	inline int32_t get_intType_0() const { return ___intType_0; }
	inline int32_t* get_address_of_intType_0() { return &___intType_0; }
	inline void set_intType_0(int32_t value)
	{
		___intType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERFACETYPEATTRIBUTE_T2465331113_H
#ifndef CLASSINTERFACEATTRIBUTE_T2535296310_H
#define CLASSINTERFACEATTRIBUTE_T2535296310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t2535296310  : public Attribute_t3365476432
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::ciType
	int32_t ___ciType_0;

public:
	inline static int32_t get_offset_of_ciType_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t2535296310, ___ciType_0)); }
	inline int32_t get_ciType_0() const { return ___ciType_0; }
	inline int32_t* get_address_of_ciType_0() { return &___ciType_0; }
	inline void set_ciType_0(int32_t value)
	{
		___ciType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACEATTRIBUTE_T2535296310_H
#ifndef COMEXCEPTION_T1644150653_H
#define COMEXCEPTION_T1644150653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
struct  COMException_t1644150653  : public ExternalException_t3182995369
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEXCEPTION_T1644150653_H
#ifndef RELIABILITYCONTRACTATTRIBUTE_T3132986041_H
#define RELIABILITYCONTRACTATTRIBUTE_T3132986041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
struct  ReliabilityContractAttribute_t3132986041  : public Attribute_t3365476432
{
public:
	// System.Runtime.ConstrainedExecution.Consistency System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::consistency
	int32_t ___consistency_0;
	// System.Runtime.ConstrainedExecution.Cer System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::cer
	int32_t ___cer_1;

public:
	inline static int32_t get_offset_of_consistency_0() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t3132986041, ___consistency_0)); }
	inline int32_t get_consistency_0() const { return ___consistency_0; }
	inline int32_t* get_address_of_consistency_0() { return &___consistency_0; }
	inline void set_consistency_0(int32_t value)
	{
		___consistency_0 = value;
	}

	inline static int32_t get_offset_of_cer_1() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t3132986041, ___cer_1)); }
	inline int32_t get_cer_1() const { return ___cer_1; }
	inline int32_t* get_address_of_cer_1() { return &___cer_1; }
	inline void set_cer_1(int32_t value)
	{
		___cer_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELIABILITYCONTRACTATTRIBUTE_T3132986041_H
#ifndef UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T644651355_H
#define UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T644651355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct  UnmanagedFunctionPointerAttribute_t644651355  : public Attribute_t3365476432
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::call_conv
	int32_t ___call_conv_0;

public:
	inline static int32_t get_offset_of_call_conv_0() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t644651355, ___call_conv_0)); }
	inline int32_t get_call_conv_0() const { return ___call_conv_0; }
	inline int32_t* get_address_of_call_conv_0() { return &___call_conv_0; }
	inline void set_call_conv_0(int32_t value)
	{
		___call_conv_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T644651355_H
#ifndef DATETIME_T2533828827_H
#define DATETIME_T2533828827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t2533828827 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t1272913678  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t2533828827, ___ticks_0)); }
	inline TimeSpan_t1272913678  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t1272913678 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t1272913678  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t2533828827, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t2533828827_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t2533828827  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t2533828827  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1083483888* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1083483888* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1083483888* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1083483888* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1083483888* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1083483888* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1083483888* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t2713823705* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t2713823705* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t2533828827_StaticFields, ___MaxValue_2)); }
	inline DateTime_t2533828827  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t2533828827 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t2533828827  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t2533828827_StaticFields, ___MinValue_3)); }
	inline DateTime_t2533828827  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t2533828827 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t2533828827  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t2533828827_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1083483888* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1083483888** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1083483888* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t2533828827_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1083483888* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1083483888** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1083483888* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t2533828827_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1083483888* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1083483888** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1083483888* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t2533828827_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1083483888* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1083483888** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1083483888* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t2533828827_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1083483888* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1083483888** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1083483888* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t2533828827_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1083483888* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1083483888** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1083483888* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t2533828827_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1083483888* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1083483888** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1083483888* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t2533828827_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t2713823705* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t2713823705** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t2713823705* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t2533828827_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t2713823705* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t2713823705** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t2713823705* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t2533828827_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t2533828827_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T2533828827_H
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
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T2250747698_H
#define DEFAULTDEPENDENCYATTRIBUTE_T2250747698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t2250747698  : public Attribute_t3365476432
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::hint
	int32_t ___hint_0;

public:
	inline static int32_t get_offset_of_hint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t2250747698, ___hint_0)); }
	inline int32_t get_hint_0() const { return ___hint_0; }
	inline int32_t* get_address_of_hint_0() { return &___hint_0; }
	inline void set_hint_0(int32_t value)
	{
		___hint_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDEPENDENCYATTRIBUTE_T2250747698_H
#ifndef RENEWALDELEGATE_T785328590_H
#define RENEWALDELEGATE_T785328590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct  RenewalDelegate_t785328590  : public MulticastDelegate_t2957534111
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENEWALDELEGATE_T785328590_H
#ifndef LEASE_T968525426_H
#define LEASE_T968525426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.Lease
struct  Lease_t968525426  : public MarshalByRefObject_t2782560948
{
public:
	// System.DateTime System.Runtime.Remoting.Lifetime.Lease::_leaseExpireTime
	DateTime_t2533828827  ____leaseExpireTime_1;
	// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::_currentState
	int32_t ____currentState_2;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_initialLeaseTime
	TimeSpan_t1272913678  ____initialLeaseTime_3;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_renewOnCallTime
	TimeSpan_t1272913678  ____renewOnCallTime_4;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::_sponsorshipTimeout
	TimeSpan_t1272913678  ____sponsorshipTimeout_5;
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.Lease::_sponsors
	ArrayList_t3130705167 * ____sponsors_6;
	// System.Collections.Queue System.Runtime.Remoting.Lifetime.Lease::_renewingSponsors
	Queue_t184100555 * ____renewingSponsors_7;
	// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate System.Runtime.Remoting.Lifetime.Lease::_renewalDelegate
	RenewalDelegate_t785328590 * ____renewalDelegate_8;

public:
	inline static int32_t get_offset_of__leaseExpireTime_1() { return static_cast<int32_t>(offsetof(Lease_t968525426, ____leaseExpireTime_1)); }
	inline DateTime_t2533828827  get__leaseExpireTime_1() const { return ____leaseExpireTime_1; }
	inline DateTime_t2533828827 * get_address_of__leaseExpireTime_1() { return &____leaseExpireTime_1; }
	inline void set__leaseExpireTime_1(DateTime_t2533828827  value)
	{
		____leaseExpireTime_1 = value;
	}

	inline static int32_t get_offset_of__currentState_2() { return static_cast<int32_t>(offsetof(Lease_t968525426, ____currentState_2)); }
	inline int32_t get__currentState_2() const { return ____currentState_2; }
	inline int32_t* get_address_of__currentState_2() { return &____currentState_2; }
	inline void set__currentState_2(int32_t value)
	{
		____currentState_2 = value;
	}

	inline static int32_t get_offset_of__initialLeaseTime_3() { return static_cast<int32_t>(offsetof(Lease_t968525426, ____initialLeaseTime_3)); }
	inline TimeSpan_t1272913678  get__initialLeaseTime_3() const { return ____initialLeaseTime_3; }
	inline TimeSpan_t1272913678 * get_address_of__initialLeaseTime_3() { return &____initialLeaseTime_3; }
	inline void set__initialLeaseTime_3(TimeSpan_t1272913678  value)
	{
		____initialLeaseTime_3 = value;
	}

	inline static int32_t get_offset_of__renewOnCallTime_4() { return static_cast<int32_t>(offsetof(Lease_t968525426, ____renewOnCallTime_4)); }
	inline TimeSpan_t1272913678  get__renewOnCallTime_4() const { return ____renewOnCallTime_4; }
	inline TimeSpan_t1272913678 * get_address_of__renewOnCallTime_4() { return &____renewOnCallTime_4; }
	inline void set__renewOnCallTime_4(TimeSpan_t1272913678  value)
	{
		____renewOnCallTime_4 = value;
	}

	inline static int32_t get_offset_of__sponsorshipTimeout_5() { return static_cast<int32_t>(offsetof(Lease_t968525426, ____sponsorshipTimeout_5)); }
	inline TimeSpan_t1272913678  get__sponsorshipTimeout_5() const { return ____sponsorshipTimeout_5; }
	inline TimeSpan_t1272913678 * get_address_of__sponsorshipTimeout_5() { return &____sponsorshipTimeout_5; }
	inline void set__sponsorshipTimeout_5(TimeSpan_t1272913678  value)
	{
		____sponsorshipTimeout_5 = value;
	}

	inline static int32_t get_offset_of__sponsors_6() { return static_cast<int32_t>(offsetof(Lease_t968525426, ____sponsors_6)); }
	inline ArrayList_t3130705167 * get__sponsors_6() const { return ____sponsors_6; }
	inline ArrayList_t3130705167 ** get_address_of__sponsors_6() { return &____sponsors_6; }
	inline void set__sponsors_6(ArrayList_t3130705167 * value)
	{
		____sponsors_6 = value;
		Il2CppCodeGenWriteBarrier((&____sponsors_6), value);
	}

	inline static int32_t get_offset_of__renewingSponsors_7() { return static_cast<int32_t>(offsetof(Lease_t968525426, ____renewingSponsors_7)); }
	inline Queue_t184100555 * get__renewingSponsors_7() const { return ____renewingSponsors_7; }
	inline Queue_t184100555 ** get_address_of__renewingSponsors_7() { return &____renewingSponsors_7; }
	inline void set__renewingSponsors_7(Queue_t184100555 * value)
	{
		____renewingSponsors_7 = value;
		Il2CppCodeGenWriteBarrier((&____renewingSponsors_7), value);
	}

	inline static int32_t get_offset_of__renewalDelegate_8() { return static_cast<int32_t>(offsetof(Lease_t968525426, ____renewalDelegate_8)); }
	inline RenewalDelegate_t785328590 * get__renewalDelegate_8() const { return ____renewalDelegate_8; }
	inline RenewalDelegate_t785328590 ** get_address_of__renewalDelegate_8() { return &____renewalDelegate_8; }
	inline void set__renewalDelegate_8(RenewalDelegate_t785328590 * value)
	{
		____renewalDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&____renewalDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASE_T968525426_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize400 = { sizeof (CompilationRelaxationsAttribute_t3446900438), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable400[1] = 
{
	CompilationRelaxationsAttribute_t3446900438::get_offset_of_relax_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize401 = { sizeof (DefaultDependencyAttribute_t2250747698), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable401[1] = 
{
	DefaultDependencyAttribute_t2250747698::get_offset_of_hint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize402 = { sizeof (IsVolatile_t1372785367), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize403 = { sizeof (LoadHint_t2719876036)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable403[4] = 
{
	LoadHint_t2719876036::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize404 = { sizeof (StringFreezingAttribute_t3642358170), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize405 = { sizeof (Cer_t3207740340)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable405[4] = 
{
	Cer_t3207740340::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize406 = { sizeof (Consistency_t1381271428)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable406[5] = 
{
	Consistency_t1381271428::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize407 = { sizeof (CriticalFinalizerObject_t2888244520), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize408 = { sizeof (ReliabilityContractAttribute_t3132986041), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable408[2] = 
{
	ReliabilityContractAttribute_t3132986041::get_offset_of_consistency_0(),
	ReliabilityContractAttribute_t3132986041::get_offset_of_cer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize409 = { sizeof (ActivationArguments_t880834609), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize410 = { sizeof (COMException_t1644150653), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize411 = { sizeof (CallingConvention_t3017747759)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable411[6] = 
{
	CallingConvention_t3017747759::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize412 = { sizeof (CharSet_t500922399)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable412[5] = 
{
	CharSet_t500922399::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize413 = { sizeof (ClassInterfaceAttribute_t2535296310), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable413[1] = 
{
	ClassInterfaceAttribute_t2535296310::get_offset_of_ciType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize414 = { sizeof (ClassInterfaceType_t1341168242)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable414[4] = 
{
	ClassInterfaceType_t1341168242::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize415 = { sizeof (ComDefaultInterfaceAttribute_t2766022255), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable415[1] = 
{
	ComDefaultInterfaceAttribute_t2766022255::get_offset_of__type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize416 = { sizeof (ComInterfaceType_t2978074612)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable416[4] = 
{
	ComInterfaceType_t2978074612::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize417 = { sizeof (DispIdAttribute_t29474397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable417[1] = 
{
	DispIdAttribute_t29474397::get_offset_of_id_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize418 = { sizeof (ErrorWrapper_t1181002447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable418[1] = 
{
	ErrorWrapper_t1181002447::get_offset_of_errorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize419 = { sizeof (ExternalException_t3182995369), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize420 = { sizeof (GCHandle_t567803298)+ sizeof (RuntimeObject), sizeof(GCHandle_t567803298 ), 0, 0 };
extern const int32_t g_FieldOffsetTable420[1] = 
{
	GCHandle_t567803298::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize421 = { sizeof (GCHandleType_t2405074060)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable421[5] = 
{
	GCHandleType_t2405074060::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize422 = { sizeof (InterfaceTypeAttribute_t2465331113), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable422[1] = 
{
	InterfaceTypeAttribute_t2465331113::get_offset_of_intType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize423 = { sizeof (Marshal_t3388789887), -1, sizeof(Marshal_t3388789887_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable423[2] = 
{
	Marshal_t3388789887_StaticFields::get_offset_of_SystemMaxDBCSCharSize_0(),
	Marshal_t3388789887_StaticFields::get_offset_of_SystemDefaultCharSize_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize424 = { sizeof (MarshalDirectiveException_t1889524568), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable424[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize425 = { sizeof (PreserveSigAttribute_t1093493112), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize426 = { sizeof (SafeHandle_t3771917671), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable426[4] = 
{
	SafeHandle_t3771917671::get_offset_of_handle_0(),
	SafeHandle_t3771917671::get_offset_of_invalid_handle_value_1(),
	SafeHandle_t3771917671::get_offset_of_refcount_2(),
	SafeHandle_t3771917671::get_offset_of_owns_handle_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize427 = { sizeof (TypeLibImportClassAttribute_t3012984513), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable427[1] = 
{
	TypeLibImportClassAttribute_t3012984513::get_offset_of__importClass_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize428 = { sizeof (TypeLibVersionAttribute_t1009830594), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable428[2] = 
{
	TypeLibVersionAttribute_t1009830594::get_offset_of_major_0(),
	TypeLibVersionAttribute_t1009830594::get_offset_of_minor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize429 = { sizeof (UnmanagedFunctionPointerAttribute_t644651355), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable429[1] = 
{
	UnmanagedFunctionPointerAttribute_t644651355::get_offset_of_call_conv_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize430 = { sizeof (UnmanagedType_t3406064204)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable430[36] = 
{
	UnmanagedType_t3406064204::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize431 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize432 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize433 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize434 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize435 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize436 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize437 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize438 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize439 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize440 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize441 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize442 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize443 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize444 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize445 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize446 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize447 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize448 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize449 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize450 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize451 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize452 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize453 = { sizeof (ActivationServices_t1991368049), -1, sizeof(ActivationServices_t1991368049_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable453[1] = 
{
	ActivationServices_t1991368049_StaticFields::get_offset_of__constructionActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize454 = { sizeof (AppDomainLevelActivator_t2112508160), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable454[2] = 
{
	AppDomainLevelActivator_t2112508160::get_offset_of__activationUrl_0(),
	AppDomainLevelActivator_t2112508160::get_offset_of__next_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize455 = { sizeof (ConstructionLevelActivator_t446753773), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize456 = { sizeof (ContextLevelActivator_t2452121683), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable456[1] = 
{
	ContextLevelActivator_t2452121683::get_offset_of_m_NextActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize457 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize458 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize459 = { sizeof (RemoteActivator_t1057560253), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize460 = { sizeof (UrlAttribute_t1142163626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable460[1] = 
{
	UrlAttribute_t1142163626::get_offset_of_url_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize461 = { sizeof (ChannelInfo_t1103200072), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable461[1] = 
{
	ChannelInfo_t1103200072::get_offset_of_channelData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize462 = { sizeof (ChannelServices_t2053425220), -1, sizeof(ChannelServices_t2053425220_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable462[5] = 
{
	ChannelServices_t2053425220_StaticFields::get_offset_of_registeredChannels_0(),
	ChannelServices_t2053425220_StaticFields::get_offset_of_delayedClientChannels_1(),
	ChannelServices_t2053425220_StaticFields::get_offset_of__crossContextSink_2(),
	ChannelServices_t2053425220_StaticFields::get_offset_of_CrossContextUrl_3(),
	ChannelServices_t2053425220_StaticFields::get_offset_of_oldStartModeTypes_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize463 = { sizeof (CrossAppDomainData_t2572049770), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable463[3] = 
{
	CrossAppDomainData_t2572049770::get_offset_of__ContextID_0(),
	CrossAppDomainData_t2572049770::get_offset_of__DomainID_1(),
	CrossAppDomainData_t2572049770::get_offset_of__processGuid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize464 = { sizeof (CrossAppDomainChannel_t1984050988), -1, sizeof(CrossAppDomainChannel_t1984050988_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable464[1] = 
{
	CrossAppDomainChannel_t1984050988_StaticFields::get_offset_of_s_lock_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize465 = { sizeof (CrossAppDomainSink_t3838644471), -1, sizeof(CrossAppDomainSink_t3838644471_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable465[3] = 
{
	CrossAppDomainSink_t3838644471_StaticFields::get_offset_of_s_sinks_0(),
	CrossAppDomainSink_t3838644471_StaticFields::get_offset_of_processMessageMethod_1(),
	CrossAppDomainSink_t3838644471::get_offset_of__domainID_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize466 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize467 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize468 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize469 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize470 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize471 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize472 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize473 = { sizeof (SinkProviderData_t2181819397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable473[3] = 
{
	SinkProviderData_t2181819397::get_offset_of_sinkName_0(),
	SinkProviderData_t2181819397::get_offset_of_children_1(),
	SinkProviderData_t2181819397::get_offset_of_properties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize474 = { sizeof (Context_t3192096302), -1, sizeof(Context_t3192096302_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable474[14] = 
{
	Context_t3192096302::get_offset_of_domain_id_0(),
	Context_t3192096302::get_offset_of_context_id_1(),
	Context_t3192096302::get_offset_of_static_data_2(),
	Context_t3192096302_StaticFields::get_offset_of_default_server_context_sink_3(),
	Context_t3192096302::get_offset_of_server_context_sink_chain_4(),
	Context_t3192096302::get_offset_of_client_context_sink_chain_5(),
	Context_t3192096302::get_offset_of_datastore_6(),
	Context_t3192096302::get_offset_of_context_properties_7(),
	Context_t3192096302::get_offset_of_frozen_8(),
	Context_t3192096302_StaticFields::get_offset_of_global_count_9(),
	Context_t3192096302_StaticFields::get_offset_of_namedSlots_10(),
	Context_t3192096302_StaticFields::get_offset_of_global_dynamic_properties_11(),
	Context_t3192096302::get_offset_of_context_dynamic_properties_12(),
	Context_t3192096302::get_offset_of_callback_object_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize475 = { sizeof (DynamicPropertyCollection_t3790491602), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable475[1] = 
{
	DynamicPropertyCollection_t3790491602::get_offset_of__properties_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize476 = { sizeof (DynamicPropertyReg_t4136681404), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable476[2] = 
{
	DynamicPropertyReg_t4136681404::get_offset_of_Property_0(),
	DynamicPropertyReg_t4136681404::get_offset_of_Sink_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize477 = { sizeof (ContextCallbackObject_t1303354678), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize478 = { sizeof (ContextAttribute_t1278511000), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable478[1] = 
{
	ContextAttribute_t1278511000::get_offset_of_AttributeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize479 = { sizeof (CrossContextChannel_t1001269386), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize480 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize481 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize482 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize483 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize484 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize485 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize486 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize487 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize488 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize489 = { sizeof (SynchronizationAttribute_t3394365166), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable489[5] = 
{
	SynchronizationAttribute_t3394365166::get_offset_of__bReEntrant_1(),
	SynchronizationAttribute_t3394365166::get_offset_of__flavor_2(),
	SynchronizationAttribute_t3394365166::get_offset_of__lockCount_3(),
	SynchronizationAttribute_t3394365166::get_offset_of__mutex_4(),
	SynchronizationAttribute_t3394365166::get_offset_of__ownerThread_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize490 = { sizeof (SynchronizedClientContextSink_t1314715271), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable490[2] = 
{
	SynchronizedClientContextSink_t1314715271::get_offset_of__next_0(),
	SynchronizedClientContextSink_t1314715271::get_offset_of__att_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize491 = { sizeof (SynchronizedServerContextSink_t2076736654), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable491[2] = 
{
	SynchronizedServerContextSink_t2076736654::get_offset_of__next_0(),
	SynchronizedServerContextSink_t2076736654::get_offset_of__att_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize492 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize493 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize494 = { sizeof (Lease_t968525426), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable494[8] = 
{
	Lease_t968525426::get_offset_of__leaseExpireTime_1(),
	Lease_t968525426::get_offset_of__currentState_2(),
	Lease_t968525426::get_offset_of__initialLeaseTime_3(),
	Lease_t968525426::get_offset_of__renewOnCallTime_4(),
	Lease_t968525426::get_offset_of__sponsorshipTimeout_5(),
	Lease_t968525426::get_offset_of__sponsors_6(),
	Lease_t968525426::get_offset_of__renewingSponsors_7(),
	Lease_t968525426::get_offset_of__renewalDelegate_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize495 = { sizeof (RenewalDelegate_t785328590), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize496 = { sizeof (LeaseManager_t3973218493), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable496[2] = 
{
	LeaseManager_t3973218493::get_offset_of__objects_0(),
	LeaseManager_t3973218493::get_offset_of__timer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize497 = { sizeof (LeaseSink_t2123659028), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable497[1] = 
{
	LeaseSink_t2123659028::get_offset_of__nextSink_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize498 = { sizeof (LeaseState_t541959023)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable498[6] = 
{
	LeaseState_t541959023::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize499 = { sizeof (LifetimeServices_t1522989981), -1, sizeof(LifetimeServices_t1522989981_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable499[5] = 
{
	LifetimeServices_t1522989981_StaticFields::get_offset_of__leaseManagerPollTime_0(),
	LifetimeServices_t1522989981_StaticFields::get_offset_of__leaseTime_1(),
	LifetimeServices_t1522989981_StaticFields::get_offset_of__renewOnCallTime_2(),
	LifetimeServices_t1522989981_StaticFields::get_offset_of__sponsorshipTimeout_3(),
	LifetimeServices_t1522989981_StaticFields::get_offset_of__leaseManager_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
