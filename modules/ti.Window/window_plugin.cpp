/**
 * Appcelerator Titanium - licensed under the Apache Public License 2
 * see LICENSE in the root folder for details on the license.
 * Copyright (c) 2008 Appcelerator, Inc. All Rights Reserved.
 */


#ifdef OS_WIN32
// A little disorganization; header include order is very sensitive in win32,
// and the build breaks if this below the other OS_ defines
#include "win32/win32_user_window.h"

#endif

#include "window_plugin.h"
#include <iostream>

#ifdef OS_LINUX
#include "linux/window_plugin_linux.h"
#endif

#ifdef OS_OSX
#include "osx/preinclude.h"
#include <WebKit/WebKit.h>
#include "osx/windowing_plugin_osx.h"
#include "osx/ti_app.h"
#endif

using namespace ti;

KROLL_MODULE(WindowPlugin)

void WindowPlugin::Initialize()
{
	std::cout << "Initializing ti.Window..." << std::endl;

#ifdef OS_OSX
	OSXInitialize();
#endif

	this->runtime = new kroll::StaticBoundObject();
	this->host->GetGlobalObject()->SetObject("tiRuntime", this->runtime);

	AppConfig *config = AppConfig::Instance();
	WindowConfig *main_window_config = config->GetMainWindow();

	std::cout << "Have config and main_window_config " << std::endl;

#if defined(OS_LINUX)
	GtkUserWindow* window = new GtkUserWindow(this->host, main_window_config);
#elif defined(OS_OSX)
	TiOSXUserWindow* window = new TiOSXUserWindow(this->host, main_window_config);
#elif defined(OS_WIN32)
	Win32UserWindow* window = new Win32UserWindow(this->host, main_window_config);
#endif

	window->Open();
}

void WindowPlugin::Destroy()
{
	KR_DECREF(this->runtime);
}
