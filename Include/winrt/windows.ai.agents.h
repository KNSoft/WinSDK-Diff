
#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __windows2Eai2Eagents_h__
#define __windows2Eai2Eagents_h__
#ifndef __windows2Eai2Eagents_p_h__
#define __windows2Eai2Eagents_p_h__


#pragma once

//
// Deprecated attribute support
//

#pragma push_macro("DEPRECATED")
#undef DEPRECATED

#if !defined(DISABLE_WINRT_DEPRECATION)
#if defined(__cplusplus)
#if __cplusplus >= 201402
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#elif defined(_MSC_VER)
#if _MSC_VER >= 1900
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#else
#define DEPRECATED(x) __declspec(deprecated(x))
#define DEPRECATEDENUMERATOR(x)
#endif // _MSC_VER >= 1900
#else // Not Standard C++ or MSVC, ignore the construct.
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  // C++ deprecation
#else // C - disable deprecation
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif
#else // Deprecation is disabled
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  /* DEPRECATED */

// Disable Deprecation for this header, MIDL verifies that cross-type access is acceptable
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#else
#pragma warning(push)
#pragma warning(disable: 4996)
#endif

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "always"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION)
#define WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x130000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.ApplicationModel.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CAI_CAgents_CIAgentContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentContext_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                interface IAgentContext;
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CAgents_CIAgentContext ABI::Windows::AI::Agents::IAgentContext

#endif // ____x_ABI_CWindows_CAI_CAgents_CIAgentContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                interface IAgentContextStatics;
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics ABI::Windows::AI::Agents::IAgentContextStatics

#endif // ____x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CIAgentInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                interface IAgentInfo;
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CAgents_CIAgentInfo ABI::Windows::AI::Agents::IAgentInfo

#endif // ____x_ABI_CWindows_CAI_CAgents_CIAgentInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                interface IAgentResourcesStatics;
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics ABI::Windows::AI::Agents::IAgentResourcesStatics

#endif // ____x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class Package;
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackage;
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackage ABI::Windows::ApplicationModel::IPackage

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Uri;
        } /* Foundation */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IUriRuntimeClass;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIUriRuntimeClass ABI::Windows::Foundation::IUriRuntimeClass

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                typedef enum AgentAuthorizationResponse : int AgentAuthorizationResponse;
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                class AgentContext;
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

/*
 *
 * Struct Windows.AI.Agents.AgentAuthorizationResponse
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                enum AgentAuthorizationResponse : int
                {
                    AgentAuthorizationResponse_Denied = 0,
                    AgentAuthorizationResponse_Approved = 1,
                };
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.IAgentContext
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.AgentContext
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CIAgentContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_IAgentContext[] = L"Windows.AI.Agents.IAgentContext";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                MIDL_INTERFACE("67812fd9-f5fc-5431-b282-2fc753b0c2cd")
                IAgentContext : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_AppUserModelId(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestResourceAccess(
                        ABI::Windows::Foundation::IUriRuntimeClass* resource,
                        HSTRING description,
                        HSTRING reasonForAsking,
                        ABI::Windows::AI::Agents::AgentAuthorizationResponse* result
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IAgentContext = __uuidof(IAgentContext);
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CIAgentContext;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CIAgentContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.IAgentContextStatics
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.AgentContext
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_IAgentContextStatics[] = L"Windows.AI.Agents.IAgentContextStatics";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                MIDL_INTERFACE("0625abf6-79f6-5116-a14a-91b3967fc214")
                IAgentContextStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetContextForCaller(
                        ABI::Windows::AI::Agents::IAgentContext** result
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IAgentContextStatics = __uuidof(IAgentContextStatics);
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.IAgentInfo
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.AgentInfo
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CIAgentInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_IAgentInfo[] = L"Windows.AI.Agents.IAgentInfo";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                MIDL_INTERFACE("b023d498-59ab-410b-83e7-1ed007ee2f68")
                IAgentInfo : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_Id(
                        GUID* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Name(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Description(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPackage(
                        ABI::Windows::ApplicationModel::IPackage** result
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IAgentInfo = __uuidof(IAgentInfo);
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CIAgentInfo;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CIAgentInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.IAgentResourcesStatics
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.AgentResources
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_IAgentResourcesStatics[] = L"Windows.AI.Agents.IAgentResourcesStatics";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                MIDL_INTERFACE("adedaaf8-3487-50b4-ac42-490083642b05")
                IAgentResourcesStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_FileSystemRead(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_FileSystemWrite(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_FileSystemDelete(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_FileSystemCreate(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_HttpGet(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_HttpPost(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_HttpPut(
                        HSTRING* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_HttpDelete(
                        HSTRING* value
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IAgentResourcesStatics = __uuidof(IAgentResourcesStatics);
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.Agents.AgentContext
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.AI.Agents.IAgentContextStatics interface starting with version 1.0 of the Windows.AI.Agents.AgentsContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.AI.Agents.IAgentContext ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_Agents_AgentContext_DEFINED
#define RUNTIMECLASS_Windows_AI_Agents_AgentContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_Agents_AgentContext[] = L"Windows.AI.Agents.AgentContext";
#endif
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.Agents.AgentInfo
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Windows.AI.Agents.IAgentInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_Agents_AgentInfo_DEFINED
#define RUNTIMECLASS_Windows_AI_Agents_AgentInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_Agents_AgentInfo[] = L"Windows.AI.Agents.AgentInfo";
#endif
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.Agents.AgentResources
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.AI.Agents.IAgentResourcesStatics interface starting with version 1.0 of the Windows.AI.Agents.AgentsContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_Agents_AgentResources_DEFINED
#define RUNTIMECLASS_Windows_AI_Agents_AgentResources_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_Agents_AgentResources[] = L"Windows.AI.Agents.AgentResources";
#endif
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CAI_CAgents_CIAgentContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentContext_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CAgents_CIAgentContext __x_ABI_CWindows_CAI_CAgents_CIAgentContext;

#endif // ____x_ABI_CWindows_CAI_CAgents_CIAgentContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics __x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics;

#endif // ____x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CIAgentInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CAgents_CIAgentInfo __x_ABI_CWindows_CAI_CAgents_CIAgentInfo;

#endif // ____x_ABI_CWindows_CAI_CAgents_CIAgentInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics;

#endif // ____x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage __x_ABI_CWindows_CApplicationModel_CIPackage;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

typedef enum __x_ABI_CWindows_CAI_CAgents_CAgentAuthorizationResponse __x_ABI_CWindows_CAI_CAgents_CAgentAuthorizationResponse;

/*
 *
 * Struct Windows.AI.Agents.AgentAuthorizationResponse
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
enum __x_ABI_CWindows_CAI_CAgents_CAgentAuthorizationResponse
{
    AgentAuthorizationResponse_Denied = 0,
    AgentAuthorizationResponse_Approved = 1,
};
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.IAgentContext
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.AgentContext
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CIAgentContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_IAgentContext[] = L"Windows.AI.Agents.IAgentContext";
typedef struct __x_ABI_CWindows_CAI_CAgents_CIAgentContextVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CAgents_CIAgentContext* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CAgents_CIAgentContext* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CAgents_CIAgentContext* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CAgents_CIAgentContext* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CAgents_CIAgentContext* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CAgents_CIAgentContext* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_AppUserModelId)(__x_ABI_CWindows_CAI_CAgents_CIAgentContext* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* RequestResourceAccess)(__x_ABI_CWindows_CAI_CAgents_CIAgentContext* This,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* resource,
        HSTRING description,
        HSTRING reasonForAsking,
        enum __x_ABI_CWindows_CAI_CAgents_CAgentAuthorizationResponse* result);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CAgents_CIAgentContextVtbl;

interface __x_ABI_CWindows_CAI_CAgents_CIAgentContext
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CAgents_CIAgentContextVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CAgents_CIAgentContext_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentContext_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentContext_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentContext_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentContext_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentContext_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentContext_get_AppUserModelId(This, value) \
    ((This)->lpVtbl->get_AppUserModelId(This, value))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentContext_RequestResourceAccess(This, resource, description, reasonForAsking, result) \
    ((This)->lpVtbl->RequestResourceAccess(This, resource, description, reasonForAsking, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CIAgentContext;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CIAgentContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.IAgentContextStatics
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.AgentContext
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_IAgentContextStatics[] = L"Windows.AI.Agents.IAgentContextStatics";
typedef struct __x_ABI_CWindows_CAI_CAgents_CIAgentContextStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetContextForCaller)(__x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics* This,
        __x_ABI_CWindows_CAI_CAgents_CIAgentContext** result);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CAgents_CIAgentContextStaticsVtbl;

interface __x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CAgents_CIAgentContextStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_GetContextForCaller(This, result) \
    ((This)->lpVtbl->GetContextForCaller(This, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CIAgentContextStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.IAgentInfo
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.AgentInfo
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CIAgentInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_IAgentInfo[] = L"Windows.AI.Agents.IAgentInfo";
typedef struct __x_ABI_CWindows_CAI_CAgents_CIAgentInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CAgents_CIAgentInfo* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CAgents_CIAgentInfo* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CAgents_CIAgentInfo* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CAgents_CIAgentInfo* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CAgents_CIAgentInfo* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CAgents_CIAgentInfo* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Id)(__x_ABI_CWindows_CAI_CAgents_CIAgentInfo* This,
        GUID* value);
    HRESULT (STDMETHODCALLTYPE* get_Name)(__x_ABI_CWindows_CAI_CAgents_CIAgentInfo* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_Description)(__x_ABI_CWindows_CAI_CAgents_CIAgentInfo* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* GetPackage)(__x_ABI_CWindows_CAI_CAgents_CIAgentInfo* This,
        __x_ABI_CWindows_CApplicationModel_CIPackage** result);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CAgents_CIAgentInfoVtbl;

interface __x_ABI_CWindows_CAI_CAgents_CIAgentInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CAgents_CIAgentInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CAgents_CIAgentInfo_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentInfo_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentInfo_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentInfo_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentInfo_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentInfo_get_Id(This, value) \
    ((This)->lpVtbl->get_Id(This, value))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentInfo_get_Name(This, value) \
    ((This)->lpVtbl->get_Name(This, value))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentInfo_get_Description(This, value) \
    ((This)->lpVtbl->get_Description(This, value))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentInfo_GetPackage(This, result) \
    ((This)->lpVtbl->GetPackage(This, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CIAgentInfo;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CIAgentInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.IAgentResourcesStatics
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.AgentResources
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_IAgentResourcesStatics[] = L"Windows.AI.Agents.IAgentResourcesStatics";
typedef struct __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_FileSystemRead)(__x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_FileSystemWrite)(__x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_FileSystemDelete)(__x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_FileSystemCreate)(__x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_HttpGet)(__x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_HttpPost)(__x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_HttpPut)(__x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_HttpDelete)(__x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics* This,
        HSTRING* value);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStaticsVtbl;

interface __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_get_FileSystemRead(This, value) \
    ((This)->lpVtbl->get_FileSystemRead(This, value))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_get_FileSystemWrite(This, value) \
    ((This)->lpVtbl->get_FileSystemWrite(This, value))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_get_FileSystemDelete(This, value) \
    ((This)->lpVtbl->get_FileSystemDelete(This, value))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_get_FileSystemCreate(This, value) \
    ((This)->lpVtbl->get_FileSystemCreate(This, value))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_get_HttpGet(This, value) \
    ((This)->lpVtbl->get_HttpGet(This, value))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_get_HttpPost(This, value) \
    ((This)->lpVtbl->get_HttpPost(This, value))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_get_HttpPut(This, value) \
    ((This)->lpVtbl->get_HttpPut(This, value))

#define __x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_get_HttpDelete(This, value) \
    ((This)->lpVtbl->get_HttpDelete(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CIAgentResourcesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.Agents.AgentContext
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.AI.Agents.IAgentContextStatics interface starting with version 1.0 of the Windows.AI.Agents.AgentsContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.AI.Agents.IAgentContext ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_Agents_AgentContext_DEFINED
#define RUNTIMECLASS_Windows_AI_Agents_AgentContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_Agents_AgentContext[] = L"Windows.AI.Agents.AgentContext";
#endif
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.Agents.AgentInfo
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Windows.AI.Agents.IAgentInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_Agents_AgentInfo_DEFINED
#define RUNTIMECLASS_Windows_AI_Agents_AgentInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_Agents_AgentInfo[] = L"Windows.AI.Agents.AgentInfo";
#endif
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.Agents.AgentResources
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.AI.Agents.IAgentResourcesStatics interface starting with version 1.0 of the Windows.AI.Agents.AgentsContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_Agents_AgentResources_DEFINED
#define RUNTIMECLASS_Windows_AI_Agents_AgentResources_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_Agents_AgentResources[] = L"Windows.AI.Agents.AgentResources";
#endif
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eai2Eagents_p_h__

#endif // __windows2Eai2Eagents_h__
