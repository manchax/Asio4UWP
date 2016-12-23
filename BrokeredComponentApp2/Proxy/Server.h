

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Mon Jan 18 21:14:07 2038
 */
/* Compiler settings for C:\Users\manue\AppData\Local\Temp\Server.idl-3d4ca72d:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0620 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Server_h__
#define __Server_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_Server_CIBrokeredComponent1Class_FWD_DEFINED__
#define ____x_Server_CIBrokeredComponent1Class_FWD_DEFINED__
typedef interface __x_Server_CIBrokeredComponent1Class __x_Server_CIBrokeredComponent1Class;

#ifdef __cplusplus
namespace Server {
    interface IBrokeredComponent1Class;
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_Server_CIBrokeredComponent1Class_FWD_DEFINED__ */


#ifndef ____x_Server_CIHostProcessManagerClass_FWD_DEFINED__
#define ____x_Server_CIHostProcessManagerClass_FWD_DEFINED__
typedef interface __x_Server_CIHostProcessManagerClass __x_Server_CIHostProcessManagerClass;

#ifdef __cplusplus
namespace Server {
    interface IHostProcessManagerClass;
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_Server_CIHostProcessManagerClass_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Server_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)



#ifdef __cplusplus
namespace Server {
class BrokeredComponent1;
} /*Server*/
#endif
#ifdef __cplusplus
namespace Server {
class HostProcessManager;
} /*Server*/
#endif
#if !defined(____x_Server_CIBrokeredComponent1Class_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Server_IBrokeredComponent1Class[] = L"Server.IBrokeredComponent1Class";
#endif /* !defined(____x_Server_CIBrokeredComponent1Class_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Server_0000_0000 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_Server_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Server_0000_0000_v0_0_s_ifspec;

#ifndef ____x_Server_CIBrokeredComponent1Class_INTERFACE_DEFINED__
#define ____x_Server_CIBrokeredComponent1Class_INTERFACE_DEFINED__

/* interface __x_Server_CIBrokeredComponent1Class */
/* [uuid][object] */ 



/* interface Server::IBrokeredComponent1Class */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Server_CIBrokeredComponent1Class;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace Server {
        
        MIDL_INTERFACE("72142F68-1F8F-5EE1-5724-FC0B0F44CDA1")
        IBrokeredComponent1Class : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE GetInstalledDrivers( 
                /* [out] */ UINT32 *__valueSize,
                /* [out][retval][size_is][size_is] */ HSTRING **value) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE OpenDriver( 
                /* [in] */ HSTRING name,
                /* [out][retval] */ boolean *value) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE ShowControlPanel( void) = 0;
            
        };

        extern const __declspec(selectany) IID & IID_IBrokeredComponent1Class = __uuidof(IBrokeredComponent1Class);

        
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_Server_CIBrokeredComponent1ClassVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Server_CIBrokeredComponent1Class * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Server_CIBrokeredComponent1Class * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Server_CIBrokeredComponent1Class * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Server_CIBrokeredComponent1Class * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Server_CIBrokeredComponent1Class * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Server_CIBrokeredComponent1Class * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetInstalledDrivers )( 
            __x_Server_CIBrokeredComponent1Class * This,
            /* [out] */ UINT32 *__valueSize,
            /* [out][retval][size_is][size_is] */ HSTRING **value);
        
        HRESULT ( STDMETHODCALLTYPE *OpenDriver )( 
            __x_Server_CIBrokeredComponent1Class * This,
            /* [in] */ HSTRING name,
            /* [out][retval] */ boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *ShowControlPanel )( 
            __x_Server_CIBrokeredComponent1Class * This);
        
        END_INTERFACE
    } __x_Server_CIBrokeredComponent1ClassVtbl;

    interface __x_Server_CIBrokeredComponent1Class
    {
        CONST_VTBL struct __x_Server_CIBrokeredComponent1ClassVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Server_CIBrokeredComponent1Class_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Server_CIBrokeredComponent1Class_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Server_CIBrokeredComponent1Class_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Server_CIBrokeredComponent1Class_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Server_CIBrokeredComponent1Class_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Server_CIBrokeredComponent1Class_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Server_CIBrokeredComponent1Class_GetInstalledDrivers(This,__valueSize,value)	\
    ( (This)->lpVtbl -> GetInstalledDrivers(This,__valueSize,value) ) 

#define __x_Server_CIBrokeredComponent1Class_OpenDriver(This,name,value)	\
    ( (This)->lpVtbl -> OpenDriver(This,name,value) ) 

#define __x_Server_CIBrokeredComponent1Class_ShowControlPanel(This)	\
    ( (This)->lpVtbl -> ShowControlPanel(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Server_CIBrokeredComponent1Class_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Server_0000_0001 */
/* [local] */ 

#if !defined(____x_Server_CIHostProcessManagerClass_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Server_IHostProcessManagerClass[] = L"Server.IHostProcessManagerClass";
#endif /* !defined(____x_Server_CIHostProcessManagerClass_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Server_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Server_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Server_0000_0001_v0_0_s_ifspec;

#ifndef ____x_Server_CIHostProcessManagerClass_INTERFACE_DEFINED__
#define ____x_Server_CIHostProcessManagerClass_INTERFACE_DEFINED__

/* interface __x_Server_CIHostProcessManagerClass */
/* [uuid][object] */ 



/* interface Server::IHostProcessManagerClass */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Server_CIHostProcessManagerClass;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace Server {
        
        MIDL_INTERFACE("7419718A-B1ED-532A-4166-5C28B8291EAF")
        IHostProcessManagerClass : public IInspectable
        {
        public:
            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProcessId( 
                /* [out][retval] */ INT32 *value) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE KillProcess( void) = 0;
            
        };

        extern const __declspec(selectany) IID & IID_IHostProcessManagerClass = __uuidof(IHostProcessManagerClass);

        
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_Server_CIHostProcessManagerClassVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Server_CIHostProcessManagerClass * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Server_CIHostProcessManagerClass * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Server_CIHostProcessManagerClass * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Server_CIHostProcessManagerClass * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Server_CIHostProcessManagerClass * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Server_CIHostProcessManagerClass * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProcessId )( 
            __x_Server_CIHostProcessManagerClass * This,
            /* [out][retval] */ INT32 *value);
        
        HRESULT ( STDMETHODCALLTYPE *KillProcess )( 
            __x_Server_CIHostProcessManagerClass * This);
        
        END_INTERFACE
    } __x_Server_CIHostProcessManagerClassVtbl;

    interface __x_Server_CIHostProcessManagerClass
    {
        CONST_VTBL struct __x_Server_CIHostProcessManagerClassVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Server_CIHostProcessManagerClass_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Server_CIHostProcessManagerClass_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Server_CIHostProcessManagerClass_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Server_CIHostProcessManagerClass_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Server_CIHostProcessManagerClass_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Server_CIHostProcessManagerClass_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Server_CIHostProcessManagerClass_get_ProcessId(This,value)	\
    ( (This)->lpVtbl -> get_ProcessId(This,value) ) 

#define __x_Server_CIHostProcessManagerClass_KillProcess(This)	\
    ( (This)->lpVtbl -> KillProcess(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Server_CIHostProcessManagerClass_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Server_0000_0002 */
/* [local] */ 

#ifndef RUNTIMECLASS_Server_BrokeredComponent1_DEFINED
#define RUNTIMECLASS_Server_BrokeredComponent1_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Server_BrokeredComponent1[] = L"Server.BrokeredComponent1";
#endif
#ifndef RUNTIMECLASS_Server_HostProcessManager_DEFINED
#define RUNTIMECLASS_Server_HostProcessManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Server_HostProcessManager[] = L"Server.HostProcessManager";
#endif


/* interface __MIDL_itf_Server_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Server_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Server_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     unsigned long *, unsigned long            , HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  unsigned long *, unsigned char *, HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(unsigned long *, unsigned char *, HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     unsigned long *, HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


