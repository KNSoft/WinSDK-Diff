/*++

Copyright (c) 2025  Microsoft Corporation

Module Name:

    sprsubsystem.h

Abstract:

    This header defines the standard IOCTL interface to a SPR subsystem device.

Environment:

    NT Kernel Model Driver only.

--*/

#if !defined(_SPRSUBSYSTEM_)
#define _SPRSUBSYSTEM_

#if _MSC_VER > 1000
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif

//
// {AC24B5E2-DAE9-4595-9CCB-AC79E3A0A3F8}
//

DEFINE_GUID(
    GUID_SPR_PLATFORM_SUBSYSTEM,
    0xAC24B5E2, 0xDAE9, 0x4595, 0x9C, 0xCB, 0xAC, 0x79, 0xE3, 0xA0, 0xA3, 0xF8);

//
// IOCTL codes.
//

#define IOCTL_QUERY_SUBSYSTEM_INFORMATION          CTL_CODE(FILE_DEVICE_UNKNOWN, 0x400, METHOD_BUFFERED, FILE_READ_ACCESS)
#define IOCTL_QUERY_SUBSYSTEM_BLOCKER_INFORMATION  CTL_CODE(FILE_DEVICE_UNKNOWN, 0x401, METHOD_BUFFERED, FILE_READ_ACCESS)
#define IOCTL_START_SUBSYSTEM_BLOCKER_ACCOUNTING   CTL_CODE(FILE_DEVICE_UNKNOWN, 0x402, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_STOP_SUBSYSTEM_BLOCKER_ACCOUNTING    CTL_CODE(FILE_DEVICE_UNKNOWN, 0x403, METHOD_BUFFERED, FILE_WRITE_ACCESS)

#define SPR_SUBSYSTEM_DDI_VERSION_1 1
#define SPR_SUBSYSTEM_DDI_VERSION_CURRENT SPR_SUBSYSTEM_DDI_VERSION_1
#define SPR_SUBSYSTEM_STRING_LENGTH_MAX 64
#define SPR_SUBSYSTEM_MAX_BLOCKER_COUNT 128
#define SPR_SUBSYSTEM_ROOT_PARENT_ID ULONG_MAX

typedef enum _SPR_SUBSYSTEM_SESSION_TYPE {
	SprSubsystemSessionTypeScreenOff = 0,
	SprSubsystemSessionTypeModernSleep, 
    SprSubsystemSessionTypeActive,
	SprSubsystemSessionTypeMax 
} SPR_SUBSYSTEM_SESSION_TYPE, *PSPR_SUBSYSTEM_SESSION_TYPE;

typedef enum _SPR_SUBSYSTEM_UNIT_TYPE {
	SprSubsystemUnitTypeUnknown = 0,
	SprSubsystemUnitTypeMicroSeconds,
	SprSubsystemUnitTypeMax
} SPR_SUBSYSTEM_UNIT_TYPE, *PSPR_SUBSYSTEM_UNIT_TYPE;

typedef struct _SPR_SUBSYSTEM_BLOCKER_ACCOUNTING_V1 {

	//
	// Contains driver provided hints to the consumer about this blocker for
	// this session.
	//

	ULONG64 Flags;

	//
	// Contains the accumulated active time in <SubsystemUnitType>
	// for this blocker.
	//

	ULONG64 ActiveTime;

} SPR_SUBSYSTEM_BLOCKER_ACCOUNTING_V1, *PSPR_SUBSYSTEM_BLOCKER_ACCOUNTING_V1;

typedef struct _IOCTL_QUERY_SUBSYSTEM_INFORMATION_INPUT {

    //
	// Contains a value of the highest supported version of this API by the OS.
	//

    ULONG MaxOsSupportedSubsystemVersion;

} IOCTL_QUERY_SUBSYSTEM_INFORMATION_INPUT, *PIOCTL_QUERY_SUBSYSTEM_INFORMATION_INPUT;

typedef struct _IOCTL_QUERY_SUBSYSTEM_INFORMATION_OUTPUT_V1 {

    //
	// Must be set to SPR_SUBSYSTEM_DDI_VERSION_1.
    //

	ULONG SubsystemVersion;

    //
	// Contains the root subsystem name to display in the report. Must be null-terminated.
    //

	WCHAR SubsystemName[SPR_SUBSYSTEM_STRING_LENGTH_MAX];

    //
	// Contains the total number of subsystem blockers that are provided by
	// this component. Must be less than SUBSYSTEM_MAX_BLOCKER_COUNT.
    //

	ULONG SubsystemBlockerCount;

    //
	// Contains a bitmask of what types of sessions this subsystem should be displayed
	// under in the system power report. Each bit corresponds to a value in
	// SPR_SESSION_TYPE.
    //

	ULONG SubsystemSessionTypes;

} IOCTL_QUERY_SUBSYSTEM_INFORMATION_OUTPUT_V1, *PIOCTL_QUERY_SUBSYSTEM_INFORMATION_OUTPUT_V1;

typedef struct _IOCTL_QUERY_SUBSYSTEM_BLOCKER_INFORMATION_INPUT_V1 {
    
    //
	// Contains the blocker ID to query information for.
    // This will be in the range [0, SubsystemBlockerCount)
	//
    
    ULONG SubsystemBlockerId;

} IOCTL_QUERY_SUBSYSTEM_BLOCKER_INFORMATION_INPUT_V1, *PIOCTL_QUERY_SUBSYSTEM_BLOCKER_INFORMATION_INPUT_V1;

typedef struct _IOCTL_QUERY_SUBSYSTEM_BLOCKER_INFORMATION_OUTPUT_V1 {

    //
	// Contains the blocker ID of the parent node of this blocker or
	// SPR_SUBSYSTEM_ROOT_PARENT_ID if this is a root blocker.
	// This must be either less than the blocker ID of this blocker or 
    // SPR_SUBSYSTEM_ROOT_PARENT_ID
    //

	ULONG SubsystemParentBlockerId;

    //
	// Contains the unit type for this blocker. Providing Unknown means that the
	// provided value will be displayed as is in the report.
    //

	SPR_SUBSYSTEM_UNIT_TYPE SubsystemUnitType;

    //
	// Contains the name of this blocker. Must be null-terminated.
    //

	WCHAR SubsystemBlockerName[SPR_SUBSYSTEM_STRING_LENGTH_MAX];

} IOCTL_QUERY_SUBSYSTEM_BLOCKER_INFORMATION_OUTPUT_V1, *PIOCTL_QUERY_SUBSYSTEM_BLOCKER_INFORMATION_OUTPUT_V1;

typedef struct _IOCTL_START_SUBSYSTEM_BLOCKER_ACCOUNTING_INPUT_V1 {
    
    //
	// Contains the session type to start accounting for.
	//

    SPR_SUBSYSTEM_SESSION_TYPE SessionType;

} IOCTL_START_SUBSYSTEM_BLOCKER_ACCOUNTING_INPUT_V1, *PIOCTL_START_SUBSYSTEM_BLOCKER_ACCOUNTING_INPUT_V1;

typedef struct _IOCTL_STOP_SUBSYSTEM_BLOCKER_ACCOUNTING_OUTPUT_V1 {
	SPR_SUBSYSTEM_BLOCKER_ACCOUNTING_V1 BlockerAccountingInformation[ANYSIZE_ARRAY];
} IOCTL_STOP_SUBSYSTEM_BLOCKER_ACCOUNTING_OUTPUT_V1, *PIOCTL_STOP_SUBSYSTEM_BLOCKER_ACCOUNTING_OUTPUT_V1;


#ifdef __cplusplus
}
#endif

#endif // !defined(_SPRSUBSYSTEM_)
