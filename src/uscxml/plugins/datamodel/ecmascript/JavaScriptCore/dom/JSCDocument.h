/**
 *  @file
 *  @author     This file has been generated by generate-bindings.pl. DO NOT MODIFY!
 *  @copyright  Simplified BSD
 *
 *  @cond
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the FreeBSD license as published by the FreeBSD
 *  project.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 *  You should have received a copy of the FreeBSD license along with this
 *  program. If not, see <http://www.opensource.org/licenses/bsd-license>.
 *  @endcond
 */

#ifndef JSCDocument_h
#define JSCDocument_h

#include <string>
#include "DOM/Node.hpp"
#include "JSCNode.h"
#include <JavaScriptCore/JavaScriptCore.h>
#include "uscxml/plugins/datamodel/ecmascript/JavaScriptCore/JSCDOM.h"

namespace Arabica {
namespace DOM {

class JSCDocument {
public:
	struct JSCDocumentPrivate {
		JSCDOM* dom;
		Arabica::DOM::Document<std::string>* nativeObj;
	};

	JSC_DESTRUCTOR(JSCDocumentPrivate);

	static JSValueRef createElementCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);
	static JSValueRef createDocumentFragmentCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);
	static JSValueRef createTextNodeCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);
	static JSValueRef createCommentCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);
	static JSValueRef createCDATASectionCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);
	static JSValueRef createProcessingInstructionCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);
	static JSValueRef createAttributeCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);
	static JSValueRef createEntityReferenceCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);
	static JSValueRef getElementsByTagNameCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);
	static JSValueRef importNodeCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);
	static JSValueRef createElementNSCustomCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);
	static JSValueRef createAttributeNSCustomCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);
	static JSValueRef getElementsByTagNameNSCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);
	static JSValueRef getElementByIdCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);
	static JSValueRef evaluateCustomCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObj, size_t argumentCount, const JSValueRef* arguments, JSValueRef* exception);

	static JSValueRef doctypeAttrGetter(JSContextRef ctx, JSObjectRef thisObj, JSStringRef propertyName, JSValueRef* exception);
	static JSValueRef implementationAttrGetter(JSContextRef ctx, JSObjectRef thisObj, JSStringRef propertyName, JSValueRef* exception);
	static JSValueRef documentElementAttrGetter(JSContextRef ctx, JSObjectRef thisObj, JSStringRef propertyName, JSValueRef* exception);
	static JSValueRef localStorageCustomAttrGetter(JSContextRef ctx, JSObjectRef thisObj, JSStringRef propertyName, JSValueRef* exception);


	static JSStaticValue staticValues[];
	static JSStaticFunction staticFunctions[];

	static JSClassRef Tmpl;
	static JSClassRef getTmpl() {
		if (Tmpl == NULL) {
			JSClassDefinition classDef = kJSClassDefinitionEmpty;
			classDef.staticValues = staticValues;
			classDef.staticFunctions = staticFunctions;
			classDef.finalize = jsDestructor;
			classDef.className = "Document";
			classDef.parentClass = JSCNode::getTmpl();

			Tmpl = JSClassCreate(&classDef);
			JSClassRetain(Tmpl);
		}
		return Tmpl;
	}


};

}
}

#endif // JSCDocument_h
