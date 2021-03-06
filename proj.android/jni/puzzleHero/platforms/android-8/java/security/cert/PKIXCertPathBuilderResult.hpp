/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.cert.PKIXCertPathBuilderResult
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_PKIXCERTPATHBUILDERRESULT_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_PKIXCERTPATHBUILDERRESULT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace security { class PublicKey; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertPath; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertPathBuilderResult; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class TrustAnchor; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class PolicyNode; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class PKIXCertPathValidatorResult; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertPathValidatorResult; } } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/PublicKey.hpp>
#include <java/security/cert/CertPath.hpp>
#include <java/security/cert/CertPathBuilderResult.hpp>
#include <java/security/cert/CertPathValidatorResult.hpp>
#include <java/security/cert/PKIXCertPathValidatorResult.hpp>
#include <java/security/cert/PolicyNode.hpp>
#include <java/security/cert/TrustAnchor.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class PKIXCertPathBuilderResult;
	class PKIXCertPathBuilderResult
		: public object<PKIXCertPathBuilderResult>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit PKIXCertPathBuilderResult(jobject jobj)
		: object<PKIXCertPathBuilderResult>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::security::cert::CertPathBuilderResult>() const;
		operator local_ref<java::security::cert::PKIXCertPathValidatorResult>() const;
		operator local_ref<java::security::cert::CertPathValidatorResult>() const;


		PKIXCertPathBuilderResult(local_ref< java::security::cert::CertPath > const&, local_ref< java::security::cert::TrustAnchor > const&, local_ref< java::security::cert::PolicyNode > const&, local_ref< java::security::PublicKey > const&);
		local_ref< java::security::cert::CertPath > getCertPath();
		local_ref< java::lang::String > toString();
	}; //class PKIXCertPathBuilderResult

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_PKIXCERTPATHBUILDERRESULT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_PKIXCERTPATHBUILDERRESULT_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_PKIXCERTPATHBUILDERRESULT_HPP_IMPL

namespace j2cpp {



java::security::cert::PKIXCertPathBuilderResult::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::cert::PKIXCertPathBuilderResult::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::security::cert::PKIXCertPathBuilderResult::operator local_ref<java::security::cert::CertPathBuilderResult>() const
{
	return local_ref<java::security::cert::CertPathBuilderResult>(get_jobject());
}

java::security::cert::PKIXCertPathBuilderResult::operator local_ref<java::security::cert::PKIXCertPathValidatorResult>() const
{
	return local_ref<java::security::cert::PKIXCertPathValidatorResult>(get_jobject());
}

java::security::cert::PKIXCertPathBuilderResult::operator local_ref<java::security::cert::CertPathValidatorResult>() const
{
	return local_ref<java::security::cert::CertPathValidatorResult>(get_jobject());
}


java::security::cert::PKIXCertPathBuilderResult::PKIXCertPathBuilderResult(local_ref< java::security::cert::CertPath > const &a0, local_ref< java::security::cert::TrustAnchor > const &a1, local_ref< java::security::cert::PolicyNode > const &a2, local_ref< java::security::PublicKey > const &a3)
: object<java::security::cert::PKIXCertPathBuilderResult>(
	call_new_object<
		java::security::cert::PKIXCertPathBuilderResult::J2CPP_CLASS_NAME,
		java::security::cert::PKIXCertPathBuilderResult::J2CPP_METHOD_NAME(0),
		java::security::cert::PKIXCertPathBuilderResult::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3)
)
{
}


local_ref< java::security::cert::CertPath > java::security::cert::PKIXCertPathBuilderResult::getCertPath()
{
	return call_method<
		java::security::cert::PKIXCertPathBuilderResult::J2CPP_CLASS_NAME,
		java::security::cert::PKIXCertPathBuilderResult::J2CPP_METHOD_NAME(1),
		java::security::cert::PKIXCertPathBuilderResult::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::security::cert::CertPath >
	>(get_jobject());
}

local_ref< java::lang::String > java::security::cert::PKIXCertPathBuilderResult::toString()
{
	return call_method<
		java::security::cert::PKIXCertPathBuilderResult::J2CPP_CLASS_NAME,
		java::security::cert::PKIXCertPathBuilderResult::J2CPP_METHOD_NAME(2),
		java::security::cert::PKIXCertPathBuilderResult::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::cert::PKIXCertPathBuilderResult,"java/security/cert/PKIXCertPathBuilderResult")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXCertPathBuilderResult,0,"<init>","(Ljava/security/cert/CertPath;Ljava/security/cert/TrustAnchor;Ljava/security/cert/PolicyNode;Ljava/security/PublicKey;)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXCertPathBuilderResult,1,"getCertPath","()Ljava/security/cert/CertPath;")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXCertPathBuilderResult,2,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_PKIXCERTPATHBUILDERRESULT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
