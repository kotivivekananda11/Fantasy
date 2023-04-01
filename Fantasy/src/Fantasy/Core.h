#pragma once

#ifdef FT_PLATFORM_WINDOWS
	#ifdef FT_BUILD_DLL
		#define FANTASY_API __declspec(dllexport)
	#else
		#define FANTASY_API __declspec(dllimport)
	#endif
#else
	#error Fantasy only supports Windows!
#endif