/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSStorageEvent_h
#define JSStorageEvent_h

#if ENABLE(DOM_STORAGE)

#include "JSEvent.h"
#include "StorageEvent.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSStorageEvent : public JSEvent {
public:
    typedef JSEvent Base;
    static JSStorageEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<StorageEvent> impl)
    {
        JSStorageEvent* ptr = new (JSC::allocateCell<JSStorageEvent>(globalObject->globalData().heap)) JSStorageEvent(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    JSStorageEvent(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<StorageEvent>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSStorageEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSStorageEventPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSStorageEventPrototype* ptr = new (JSC::allocateCell<JSStorageEventPrototype>(globalData.heap)) JSStorageEventPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSStorageEventPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsStorageEventPrototypeFunctionInitStorageEvent(JSC::ExecState*);
// Attributes

JSC::JSValue jsStorageEventKey(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsStorageEventOldValue(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsStorageEventNewValue(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsStorageEventUrl(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsStorageEventStorageArea(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsStorageEventConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(DOM_STORAGE)

#endif
