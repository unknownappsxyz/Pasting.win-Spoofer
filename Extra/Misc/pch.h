#ifndef PCH_H
#define PCH_H
#include <string>
#include <vector>

#include <Windows.h>
#include <winternl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <IPTypes.h>
#include <Iphlpapi.h>
#include <icmpapi.h>
#include <Psapi.h>
#include <Shlwapi.h>
#include <ShlObj.h>
#include <stdarg.h>
#include <strsafe.h>
#include <tchar.h>
#include <time.h>
#include <TlHelp32.h>
#include <Wbemidl.h>
#include <devguid.h>    // Device guids
#include <winioctl.h>	// IOCTL
#include <intrin.h>		// cpuid()
#include <locale.h>		// 64-bit wchar atoi
#include <powrprof.h>	// check_power_modes()
#include <SetupAPI.h>
#include <algorithm>
#include <cctype>

#pragma comment(lib, "wbemuuid.lib")
#pragma comment(lib, "Shlwapi.lib")
#pragma comment(lib, "Mpr.lib")
#pragma comment(lib, "Iphlpapi.lib")
#pragma comment(lib, "Shlwapi.lib")
#pragma comment(lib, "Psapi.lib")
#pragma comment(lib, "wbemuuid.lib")
#pragma comment(lib, "Winmm.lib")
#pragma comment(lib, "setupapi.lib")
#pragma comment(lib, "powrprof.lib")

#include "..\..\Protection\Shared\Common.h"
#include "..\..\Protection\Shared\VersionHelpers.h"
#include "..\..\Protection\Shared\log.h"
#include "..\..\Protection\Shared\Utils.h"
#include "..\..\Protection\Shared\WinStructs.h"
#include "..\..\Protection\Shared\ApiTypeDefs.h"
#include "..\..\Protection\Shared\APIs.h"
#include "..\..\Protection\Shared\winapifamily.h"


#endif //PCH_H