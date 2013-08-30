/*
    This file is part of the Wrapper open source project.
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
    the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
    Boston, MA 02111-1307, USA.
*/

#ifndef JSCInt32Array_h
#define JSCInt32Array_h

#include <string>
#include "../../TypedArray.h"
#include "DOM/Node.hpp"
#include <JavaScriptCore/JavaScriptCore.h>
#include "uscxml/plugins/datamodel/ecmascript/JavaScriptCore/JSCDOM.h"

namespace Arabica {
namespace DOM {

class JSCInt32Array {
public:
	struct JSCInt32ArrayPrivate {
		JSCDOM* dom;
		uscxml::Int32Array* nativeObj;
	};

	JSC_DESTRUCTOR(JSCInt32ArrayPrivate);

	static JSValueRef getCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);
	static JSValueRef setCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);
	static JSValueRef subarrayCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);

	static JSValueRef lengthAttrGetter(JSContextRef ctx, JSObjectRef thisObj, JSStringRef propertyName, JSValueRef* exception);
	static JSValueRef BYTES_PER_ELEMENTConstGetter(JSContextRef ctx, JSObjectRef thisObj, JSStringRef propertyName, JSValueRef* exception);


	static JSStaticValue staticValues[];
	static JSStaticFunction staticFunctions[];

	static JSClassRef Tmpl;
	static JSClassRef getTmpl() {
		if (Tmpl == NULL) {
			JSClassDefinition classDef = kJSClassDefinitionEmpty;
			classDef.staticValues = staticValues;
			classDef.staticFunctions = staticFunctions;
			classDef.finalize = jsDestructor;

			Tmpl = JSClassCreate(&classDef);
			JSClassRetain(Tmpl);
		}
		return Tmpl;
	}


};

}
}

#endif // JSCInt32Array_h
