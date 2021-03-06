/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.DOMErrorHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_DOMERRORHANDLER_HPP_DECL
#define J2CPP_ORG_W3C_DOM_DOMERRORHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class DOMError; } } } }


#include <java/lang/Object.hpp>
#include <org/w3c/dom/DOMError.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class DOMErrorHandler;
	class DOMErrorHandler
		: public object<DOMErrorHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit DOMErrorHandler(jobject jobj)
		: object<DOMErrorHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean handleError(local_ref< org::w3c::dom::DOMError >  const&);
	}; //class DOMErrorHandler

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_DOMERRORHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_DOMERRORHANDLER_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_DOMERRORHANDLER_HPP_IMPL

namespace j2cpp {



org::w3c::dom::DOMErrorHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean org::w3c::dom::DOMErrorHandler::handleError(local_ref< org::w3c::dom::DOMError > const &a0)
{
	return call_method<
		org::w3c::dom::DOMErrorHandler::J2CPP_CLASS_NAME,
		org::w3c::dom::DOMErrorHandler::J2CPP_METHOD_NAME(0),
		org::w3c::dom::DOMErrorHandler::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::w3c::dom::DOMErrorHandler,"org/w3c/dom/DOMErrorHandler")
J2CPP_DEFINE_METHOD(org::w3c::dom::DOMErrorHandler,0,"handleError","(Lorg/w3c/dom/DOMError;)Z")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_DOMERRORHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
