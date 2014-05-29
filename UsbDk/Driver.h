/**********************************************************************
* Copyright (c) 2013-2014  Red Hat, Inc.
*
* Developed by Daynix Computing LTD.
*
* Authors:
*     Dmitry Fleytman <dmitry@daynix.com>
*     Pavel Gurvich <pavel@daynix.com>
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
**********************************************************************/

extern "C"
{
    #include <ntddk.h>
    #include <wdf.h>
    #include <usb.h>
    #include <wdfusb.h>
}

#include "trace.h"

//
// WDFDRIVER Events
//

extern "C"
DRIVER_INITIALIZE DriverEntry;

EVT_WDF_DRIVER_UNLOAD DriverUnload;
EVT_WDF_DRIVER_DEVICE_ADD UsbDkEvtDeviceAdd;
EVT_WDF_OBJECT_CONTEXT_CLEANUP UsbDkEvtDriverContextCleanup;
