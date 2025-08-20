
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
#ifndef __windows2Eai2Eagents2Emcp_h__
#define __windows2Eai2Eagents2Emcp_h__
#ifndef __windows2Eai2Eagents2Emcp_p_h__
#define __windows2Eai2Eagents2Emcp_p_h__


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
#include "Windows.AI.Agents.h"
#include "Windows.UI.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    interface IMcpHttpConnectionResult;
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult ABI::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult

#endif // ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    interface IMcpNamedPipeConnectionResult;
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult ABI::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionResult

#endif // ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    interface IMcpNamedPipeConnectionServer;
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer ABI::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionServer

#endif // ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    interface IMcpServerRegistry;
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry ABI::Windows::AI::Agents::Mcp::IMcpServerRegistry

#endif // ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    interface IMcpServerRegistryStatics;
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics ABI::Windows::AI::Agents::Mcp::IMcpServerRegistryStatics

#endif // ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    interface IMcpSseConnectionServer;
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer ABI::Windows::AI::Agents::Mcp::IMcpSseConnectionServer

#endif // ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    interface IMcpStdioConnectionInfo;
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo ABI::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo

#endif // ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                class AgentContext;
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

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

namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                class AgentInfo;
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

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

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                class ValueSet;
            } /* Collections */
        } /* Foundation */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                interface IPropertySet;
            } /* Collections */
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet ABI::Windows::Foundation::Collections::IPropertySet

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IClosable;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIClosable ABI::Windows::Foundation::IClosable

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__

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
        namespace UI {
            typedef struct WindowId WindowId;
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    class McpHttpConnectionResult;
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    class McpNamedPipeConnectionResult;
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    class McpServerRegistry;
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    class McpStdioConnectionInfo;
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

/*
 *
 * Interface Windows.AI.Agents.Mcp.IMcpHttpConnectionResult
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.Mcp.McpHttpConnectionResult
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_Mcp_IMcpHttpConnectionResult[] = L"Windows.AI.Agents.Mcp.IMcpHttpConnectionResult";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    MIDL_INTERFACE("d2c3755f-6d3c-5e90-84dd-3e0973049606")
                    IMcpHttpConnectionResult : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_Uri(
                            ABI::Windows::Foundation::IUriRuntimeClass** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Uri(
                            ABI::Windows::Foundation::IUriRuntimeClass* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Headers(
                            ABI::Windows::Foundation::Collections::IPropertySet** value
                            ) = 0;
                    };

                    MIDL_CONST_ID IID& IID_IMcpHttpConnectionResult = __uuidof(IMcpHttpConnectionResult);
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.Mcp.IMcpNamedPipeConnectionResult
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.Mcp.McpNamedPipeConnectionResult
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_Mcp_IMcpNamedPipeConnectionResult[] = L"Windows.AI.Agents.Mcp.IMcpNamedPipeConnectionResult";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    MIDL_INTERFACE("8a2aef6f-b4dc-5180-a3e1-47b63dbbb70a")
                    IMcpNamedPipeConnectionResult : public IInspectable
                    {
                    public:
                    };

                    MIDL_CONST_ID IID& IID_IMcpNamedPipeConnectionResult = __uuidof(IMcpNamedPipeConnectionResult);
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.Mcp.IMcpNamedPipeConnectionServer
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_Mcp_IMcpNamedPipeConnectionServer[] = L"Windows.AI.Agents.Mcp.IMcpNamedPipeConnectionServer";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    MIDL_INTERFACE("52f204a5-2ad1-5430-96c9-ea7e090be839")
                    IMcpNamedPipeConnectionServer : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Connect(
                            ABI::Windows::AI::Agents::IAgentContext* hostContext,
                            HSTRING pipeName,
                            ABI::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionResult* connectionResult,
                            ABI::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionResult** result
                            ) = 0;
                    };

                    MIDL_CONST_ID IID& IID_IMcpNamedPipeConnectionServer = __uuidof(IMcpNamedPipeConnectionServer);
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.Mcp.IMcpServerRegistry
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.Mcp.McpServerRegistry
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_Mcp_IMcpServerRegistry[] = L"Windows.AI.Agents.Mcp.IMcpServerRegistry";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    MIDL_INTERFACE("150f795b-3f93-4493-abc7-48a04fd2d7b6")
                    IMcpServerRegistry : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetAgentInfos(
                            UINT32* resultLength,
                            ABI::Windows::AI::Agents::IAgentInfo*** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetMcpConnectionInfo(
                            GUID agentId,
                            ABI::Windows::UI::WindowId ownerWindowId,
                            ABI::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo** result
                            ) = 0;
                    };

                    MIDL_CONST_ID IID& IID_IMcpServerRegistry = __uuidof(IMcpServerRegistry);
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.Mcp.IMcpServerRegistryStatics
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.Mcp.McpServerRegistry
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_Mcp_IMcpServerRegistryStatics[] = L"Windows.AI.Agents.Mcp.IMcpServerRegistryStatics";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    MIDL_INTERFACE("4acf7fed-d300-55bc-9dde-9f433cdc903d")
                    IMcpServerRegistryStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetDefault(
                            ABI::Windows::AI::Agents::Mcp::IMcpServerRegistry** result
                            ) = 0;
                    };

                    MIDL_CONST_ID IID& IID_IMcpServerRegistryStatics = __uuidof(IMcpServerRegistryStatics);
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.Mcp.IMcpSseConnectionServer
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_Mcp_IMcpSseConnectionServer[] = L"Windows.AI.Agents.Mcp.IMcpSseConnectionServer";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    MIDL_INTERFACE("6c558671-1b20-5b6b-920d-b8afc2509771")
                    IMcpSseConnectionServer : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Connect(
                            ABI::Windows::AI::Agents::IAgentContext* hostContext,
                            ABI::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult* connectionResult,
                            ABI::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult** result
                            ) = 0;
                    };

                    MIDL_CONST_ID IID& IID_IMcpSseConnectionServer = __uuidof(IMcpSseConnectionServer);
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.Mcp.IMcpStdioConnectionInfo
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.Mcp.McpStdioConnectionInfo
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_Mcp_IMcpStdioConnectionInfo[] = L"Windows.AI.Agents.Mcp.IMcpStdioConnectionInfo";
namespace ABI {
    namespace Windows {
        namespace AI {
            namespace Agents {
                namespace Mcp {
                    MIDL_INTERFACE("93d9827b-32a2-5b89-ba8a-05bd2093598e")
                    IMcpStdioConnectionInfo : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_Command(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCommandArguments(
                            UINT32* resultLength,
                            HSTRING** result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE get_Info(
                            ABI::Windows::AI::Agents::IAgentInfo** value
                            ) = 0;
                    };

                    MIDL_CONST_ID IID& IID_IMcpStdioConnectionInfo = __uuidof(IMcpStdioConnectionInfo);
                } /* Mcp */
            } /* Agents */
        } /* AI */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.Agents.Mcp.McpHttpConnectionResult
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Windows.AI.Agents.Mcp.IMcpHttpConnectionResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_Agents_Mcp_McpHttpConnectionResult_DEFINED
#define RUNTIMECLASS_Windows_AI_Agents_Mcp_McpHttpConnectionResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_Agents_Mcp_McpHttpConnectionResult[] = L"Windows.AI.Agents.Mcp.McpHttpConnectionResult";
#endif
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.Agents.Mcp.McpNamedPipeConnectionResult
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Windows.AI.Agents.Mcp.IMcpNamedPipeConnectionResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_Agents_Mcp_McpNamedPipeConnectionResult_DEFINED
#define RUNTIMECLASS_Windows_AI_Agents_Mcp_McpNamedPipeConnectionResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_Agents_Mcp_McpNamedPipeConnectionResult[] = L"Windows.AI.Agents.Mcp.McpNamedPipeConnectionResult";
#endif
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.Agents.Mcp.McpServerRegistry
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.AI.Agents.Mcp.IMcpServerRegistryStatics interface starting with version 1.0 of the Windows.AI.Agents.AgentsContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.AI.Agents.Mcp.IMcpServerRegistry ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_Agents_Mcp_McpServerRegistry_DEFINED
#define RUNTIMECLASS_Windows_AI_Agents_Mcp_McpServerRegistry_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_Agents_Mcp_McpServerRegistry[] = L"Windows.AI.Agents.Mcp.McpServerRegistry";
#endif
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.Agents.Mcp.McpStdioConnectionInfo
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Windows.AI.Agents.Mcp.IMcpStdioConnectionInfo ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_Agents_Mcp_McpStdioConnectionInfo_DEFINED
#define RUNTIMECLASS_Windows_AI_Agents_Mcp_McpStdioConnectionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_Agents_Mcp_McpStdioConnectionInfo[] = L"Windows.AI.Agents.Mcp.McpStdioConnectionInfo";
#endif
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult;

#endif // ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult;

#endif // ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer;

#endif // ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry;

#endif // ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics;

#endif // ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer;

#endif // ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo;

#endif // ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CAI_CAgents_CIAgentContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentContext_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CAgents_CIAgentContext __x_ABI_CWindows_CAI_CAgents_CIAgentContext;

#endif // ____x_ABI_CWindows_CAI_CAgents_CIAgentContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CAI_CAgents_CIAgentInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CAI_CAgents_CIAgentInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CAI_CAgents_CIAgentInfo __x_ABI_CWindows_CAI_CAgents_CIAgentInfo;

#endif // ____x_ABI_CWindows_CAI_CAgents_CIAgentInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CUI_CWindowId __x_ABI_CWindows_CUI_CWindowId;

/*
 *
 * Interface Windows.AI.Agents.Mcp.IMcpHttpConnectionResult
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.Mcp.McpHttpConnectionResult
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_Mcp_IMcpHttpConnectionResult[] = L"Windows.AI.Agents.Mcp.IMcpHttpConnectionResult";
typedef struct __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResultVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Uri)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult* This,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass** value);
    HRESULT (STDMETHODCALLTYPE* put_Uri)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult* This,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* value);
    HRESULT (STDMETHODCALLTYPE* get_Headers)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult* This,
        __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet** value);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResultVtbl;

interface __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResultVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_get_Uri(This, value) \
    ((This)->lpVtbl->get_Uri(This, value))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_put_Uri(This, value) \
    ((This)->lpVtbl->put_Uri(This, value))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_get_Headers(This, value) \
    ((This)->lpVtbl->get_Headers(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.Mcp.IMcpNamedPipeConnectionResult
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.Mcp.McpNamedPipeConnectionResult
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_Mcp_IMcpNamedPipeConnectionResult[] = L"Windows.AI.Agents.Mcp.IMcpNamedPipeConnectionResult";
typedef struct __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResultVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult* This,
        TrustLevel* trustLevel);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResultVtbl;

interface __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResultVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.Mcp.IMcpNamedPipeConnectionServer
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_Mcp_IMcpNamedPipeConnectionServer[] = L"Windows.AI.Agents.Mcp.IMcpNamedPipeConnectionServer";
typedef struct __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServerVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Connect)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer* This,
        __x_ABI_CWindows_CAI_CAgents_CIAgentContext* hostContext,
        HSTRING pipeName,
        __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult* connectionResult,
        __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionResult** result);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServerVtbl;

interface __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServerVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_Connect(This, hostContext, pipeName, connectionResult, result) \
    ((This)->lpVtbl->Connect(This, hostContext, pipeName, connectionResult, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpNamedPipeConnectionServer_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.Mcp.IMcpServerRegistry
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.Mcp.McpServerRegistry
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_Mcp_IMcpServerRegistry[] = L"Windows.AI.Agents.Mcp.IMcpServerRegistry";
typedef struct __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetAgentInfos)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry* This,
        UINT32* resultLength,
        __x_ABI_CWindows_CAI_CAgents_CIAgentInfo*** result);
    HRESULT (STDMETHODCALLTYPE* GetMcpConnectionInfo)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry* This,
        GUID agentId,
        struct __x_ABI_CWindows_CUI_CWindowId ownerWindowId,
        __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo** result);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryVtbl;

interface __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_GetAgentInfos(This, resultLength, result) \
    ((This)->lpVtbl->GetAgentInfos(This, resultLength, result))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_GetMcpConnectionInfo(This, agentId, ownerWindowId, result) \
    ((This)->lpVtbl->GetMcpConnectionInfo(This, agentId, ownerWindowId, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.Mcp.IMcpServerRegistryStatics
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.Mcp.McpServerRegistry
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_Mcp_IMcpServerRegistryStatics[] = L"Windows.AI.Agents.Mcp.IMcpServerRegistryStatics";
typedef struct __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetDefault)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics* This,
        __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistry** result);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStaticsVtbl;

interface __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_GetDefault(This, result) \
    ((This)->lpVtbl->GetDefault(This, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpServerRegistryStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.Mcp.IMcpSseConnectionServer
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_Mcp_IMcpSseConnectionServer[] = L"Windows.AI.Agents.Mcp.IMcpSseConnectionServer";
typedef struct __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServerVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Connect)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer* This,
        __x_ABI_CWindows_CAI_CAgents_CIAgentContext* hostContext,
        __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult* connectionResult,
        __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpHttpConnectionResult** result);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServerVtbl;

interface __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServerVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_Connect(This, hostContext, connectionResult, result) \
    ((This)->lpVtbl->Connect(This, hostContext, connectionResult, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpSseConnectionServer_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.AI.Agents.Mcp.IMcpStdioConnectionInfo
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.AI.Agents.Mcp.McpStdioConnectionInfo
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_AI_Agents_Mcp_IMcpStdioConnectionInfo[] = L"Windows.AI.Agents.Mcp.IMcpStdioConnectionInfo";
typedef struct __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Command)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* GetCommandArguments)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo* This,
        UINT32* resultLength,
        HSTRING** result);
    HRESULT (STDMETHODCALLTYPE* get_Info)(__x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo* This,
        __x_ABI_CWindows_CAI_CAgents_CIAgentInfo** value);

    END_INTERFACE
} __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfoVtbl;

interface __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_get_Command(This, value) \
    ((This)->lpVtbl->get_Command(This, value))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_GetCommandArguments(This, resultLength, result) \
    ((This)->lpVtbl->GetCommandArguments(This, resultLength, result))

#define __x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_get_Info(This, value) \
    ((This)->lpVtbl->get_Info(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo;
#endif /* !defined(____x_ABI_CWindows_CAI_CAgents_CMcp_CIMcpStdioConnectionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.Agents.Mcp.McpHttpConnectionResult
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Windows.AI.Agents.Mcp.IMcpHttpConnectionResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_Agents_Mcp_McpHttpConnectionResult_DEFINED
#define RUNTIMECLASS_Windows_AI_Agents_Mcp_McpHttpConnectionResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_Agents_Mcp_McpHttpConnectionResult[] = L"Windows.AI.Agents.Mcp.McpHttpConnectionResult";
#endif
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.Agents.Mcp.McpNamedPipeConnectionResult
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Windows.AI.Agents.Mcp.IMcpNamedPipeConnectionResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_Agents_Mcp_McpNamedPipeConnectionResult_DEFINED
#define RUNTIMECLASS_Windows_AI_Agents_Mcp_McpNamedPipeConnectionResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_Agents_Mcp_McpNamedPipeConnectionResult[] = L"Windows.AI.Agents.Mcp.McpNamedPipeConnectionResult";
#endif
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.Agents.Mcp.McpServerRegistry
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.AI.Agents.Mcp.IMcpServerRegistryStatics interface starting with version 1.0 of the Windows.AI.Agents.AgentsContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.AI.Agents.Mcp.IMcpServerRegistry ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_Agents_Mcp_McpServerRegistry_DEFINED
#define RUNTIMECLASS_Windows_AI_Agents_Mcp_McpServerRegistry_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_Agents_Mcp_McpServerRegistry[] = L"Windows.AI.Agents.Mcp.McpServerRegistry";
#endif
#endif // WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.AI.Agents.Mcp.McpStdioConnectionInfo
 *
 * Introduced to Windows.AI.Agents.AgentsContract in version 1.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Windows.AI.Agents.Mcp.IMcpStdioConnectionInfo ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_AI_AGENTS_AGENTSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_AI_Agents_Mcp_McpStdioConnectionInfo_DEFINED
#define RUNTIMECLASS_Windows_AI_Agents_Mcp_McpStdioConnectionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_AI_Agents_Mcp_McpStdioConnectionInfo[] = L"Windows.AI.Agents.Mcp.McpStdioConnectionInfo";
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
#endif // __windows2Eai2Eagents2Emcp_p_h__

#endif // __windows2Eai2Eagents2Emcp_h__
