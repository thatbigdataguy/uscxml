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

#ifndef V8ArrayBuffer_h
#define V8ArrayBuffer_h

#include <string>
#include "../../TypedArray.h"
#include "DOM/Node.hpp"
#include "string"
#include "uscxml/plugins/datamodel/ecmascript/v8/V8DOM.h"
#include <v8.h>

namespace Arabica {
namespace DOM {

class V8ArrayBuffer {
public:
	struct V8ArrayBufferPrivate {
		V8DOM* dom;
		uscxml::ArrayBuffer* nativeObj;
	};

	V8_DESTRUCTOR(V8ArrayBufferPrivate);
	static bool hasInstance(v8::Handle<v8::Value>);

	static v8::Handle<v8::Value> sliceCallback(const v8::Arguments&);
	static v8::Handle<v8::Value> isViewCallback(const v8::Arguments&);

	static v8::Handle<v8::Value> byteLengthAttrGetter(v8::Local<v8::String> property, const v8::AccessorInfo& info);

	static v8::Persistent<v8::FunctionTemplate> Tmpl;
	static v8::Handle<v8::FunctionTemplate> getTmpl() {
		if (Tmpl.IsEmpty()) {
			v8::Handle<v8::FunctionTemplate> tmpl = v8::FunctionTemplate::New();
			tmpl->SetClassName(v8::String::New("ArrayBuffer"));
			tmpl->ReadOnlyPrototype();

			v8::Local<v8::ObjectTemplate> instance = tmpl->InstanceTemplate();
			v8::Local<v8::ObjectTemplate> prototype = tmpl->PrototypeTemplate();
			(void)prototype; // surpress unused warnings

			instance->SetInternalFieldCount(1);

			instance->SetAccessor(v8::String::NewSymbol("byteLength"), V8ArrayBuffer::byteLengthAttrGetter, 0,
			                      v8::External::New(0), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None));

			prototype->Set(v8::String::NewSymbol("slice"),
			               v8::FunctionTemplate::New(V8ArrayBuffer::sliceCallback, v8::Undefined()), static_cast<v8::PropertyAttribute>(v8::DontDelete));
			prototype->Set(v8::String::NewSymbol("isView"),
			               v8::FunctionTemplate::New(V8ArrayBuffer::isViewCallback, v8::Undefined()), static_cast<v8::PropertyAttribute>(v8::DontDelete));


			Tmpl = v8::Persistent<v8::FunctionTemplate>::New(tmpl);
		}
		return Tmpl;
	}


};

}
}

#endif // V8ArrayBuffer_h
