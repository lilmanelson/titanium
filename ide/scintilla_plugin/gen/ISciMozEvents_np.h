/*
 * WARNING this file was generated by Appcelerator's idl2npapi
 */
 
#ifndef _ISCIMOZEVENTS_NP_H
#define _ISCIMOZEVENTS_NP_H

#include <npapi.h>
#include <npruntime.h>
#include <npfunctions.h>
#include <string>

static void ISciMozEvents_pluginInvalidate(NPObject *obj);
static bool ISciMozEvents_pluginHasProperty(NPObject *obj, NPIdentifier name);
static bool ISciMozEvents_pluginHasMethod(NPObject *obj, NPIdentifier name);
static bool ISciMozEvents_pluginGetProperty(NPObject *obj, NPIdentifier name, NPVariant *variant);
static bool ISciMozEvents_pluginSetProperty(NPObject *obj, NPIdentifier name, const NPVariant *variant);
static bool ISciMozEvents_pluginInvoke(NPObject *obj, NPIdentifier name, const NPVariant *args, uint32_t argCount, NPVariant *result);
static bool ISciMozEvents_pluginInvokeDefault(NPObject *obj, const NPVariant *args, uint32_t argCount, NPVariant *result);
static NPObject* ISciMozEvents_pluginAllocate(NPP npp, NPClass *theClass);
static void ISciMozEvents_pluginDeallocate(NPObject *obj);
static bool ISciMozEvents_pluginRemoveProperty (NPObject *npobj, NPIdentifier name);
static bool ISciMozEvents_pluginEnumerate (NPObject *npobj, NPIdentifier **value, uint32_t *count);

static NPClass ISciMozEvents_pluginClass = {
NP_CLASS_STRUCT_VERSION,
ISciMozEvents_pluginAllocate,
ISciMozEvents_pluginDeallocate,
ISciMozEvents_pluginInvalidate,
ISciMozEvents_pluginHasMethod,
ISciMozEvents_pluginInvoke,
ISciMozEvents_pluginInvokeDefault,
ISciMozEvents_pluginHasProperty,
ISciMozEvents_pluginGetProperty,
ISciMozEvents_pluginSetProperty,
ISciMozEvents_pluginRemoveProperty
};

enum {
	_ISciMozEvents_NumberOfProperties
};

static NPIdentifier _ISciMozEvents_pluginPropertyIdentifiers[_ISciMozEvents_NumberOfProperties];
static const NPUTF8 *_ISciMozEvents_pluginPropertyIdentifierNames[_ISciMozEvents_NumberOfProperties] = {
};

enum {
	_ISciMozEvents_onCharAdded,
	_ISciMozEvents_onSavePointReached,
	_ISciMozEvents_onSavePointLeft,
	_ISciMozEvents_onDoubleClick,
	_ISciMozEvents_onUpdateUI,
	_ISciMozEvents_onModified,
	_ISciMozEvents_onMarginClick,
	_ISciMozEvents_onPosChanged,
	_ISciMozEvents_onZoom,
	_ISciMozEvents_onHotSpotDoubleClick,
	_ISciMozEvents_onDwellStart,
	_ISciMozEvents_onDwellEnd,
	_ISciMozEvents_NumberOfMethods
};

static NPIdentifier _ISciMozEvents_pluginMethodIdentifiers[_ISciMozEvents_NumberOfMethods];
static const NPUTF8 *_ISciMozEvents_pluginMethodIdentifierNames[_ISciMozEvents_NumberOfMethods] = {
	"onCharAdded",
	"onSavePointReached",
	"onSavePointLeft",
	"onDoubleClick",
	"onUpdateUI",
	"onModified",
	"onMarginClick",
	"onPosChanged",
	"onZoom",
	"onHotSpotDoubleClick",
	"onDwellStart",
	"onDwellEnd"
};

#endif