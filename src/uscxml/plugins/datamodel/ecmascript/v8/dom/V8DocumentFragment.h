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

#ifndef V8DocumentFragment_h
#define V8DocumentFragment_h

#include <string>
#include "DOM/Node.hpp"
#include "V8Node.h"
#include "string"
#include "uscxml/plugins/datamodel/ecmascript/v8/dom/V8DOM.h"
#include <v8.h>

namespace Arabica {
namespace DOM {

class V8DocumentFragment {
public:
    struct V8DocumentFragmentPrivate {
      V8DOM* dom;
      Arabica::DOM::DocumentFragment<std::string>* nativeObj;
    };

    V8_DESTRUCTOR(V8DocumentFragmentPrivate);
    static bool hasInstance(v8::Handle<v8::Value>);



    static v8::Persistent<v8::FunctionTemplate> Tmpl;
    static v8::Handle<v8::FunctionTemplate> getTmpl() {
        if (Tmpl.IsEmpty()) {
            v8::Handle<v8::FunctionTemplate> tmpl = v8::FunctionTemplate::New();
            tmpl->SetClassName(v8::String::New("DocumentFragment"));
            tmpl->ReadOnlyPrototype();

            v8::Local<v8::ObjectTemplate> instance = tmpl->InstanceTemplate();
            v8::Local<v8::ObjectTemplate> prototype = tmpl->PrototypeTemplate();
            (void)prototype; // surpress unused warnings
            
            instance->SetInternalFieldCount(1);




            tmpl->Inherit(V8Node::getTmpl());
            Tmpl = v8::Persistent<v8::FunctionTemplate>::New(tmpl);
        }
        return Tmpl;
    }


};

}
}

#endif // V8DocumentFragment_h
