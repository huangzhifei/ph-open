/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.media.Ringtone
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_RINGTONE_HPP_DECL
#define J2CPP_ANDROID_MEDIA_RINGTONE_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace media {

	class Ringtone;
	class Ringtone
		: public object<Ringtone>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)

		explicit Ringtone(jobject jobj)
		: object<Ringtone>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void setStreamType(jint);
		jint getStreamType();
		local_ref< java::lang::String > getTitle(local_ref< android::content::Context >  const&);
		void play();
		void stop();
		jboolean isPlaying();
	}; //class Ringtone

} //namespace media
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_RINGTONE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_RINGTONE_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_RINGTONE_HPP_IMPL

namespace j2cpp {



android::media::Ringtone::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void android::media::Ringtone::setStreamType(jint a0)
{
	return call_method<
		android::media::Ringtone::J2CPP_CLASS_NAME,
		android::media::Ringtone::J2CPP_METHOD_NAME(1),
		android::media::Ringtone::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

jint android::media::Ringtone::getStreamType()
{
	return call_method<
		android::media::Ringtone::J2CPP_CLASS_NAME,
		android::media::Ringtone::J2CPP_METHOD_NAME(2),
		android::media::Ringtone::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > android::media::Ringtone::getTitle(local_ref< android::content::Context > const &a0)
{
	return call_method<
		android::media::Ringtone::J2CPP_CLASS_NAME,
		android::media::Ringtone::J2CPP_METHOD_NAME(3),
		android::media::Ringtone::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

void android::media::Ringtone::play()
{
	return call_method<
		android::media::Ringtone::J2CPP_CLASS_NAME,
		android::media::Ringtone::J2CPP_METHOD_NAME(4),
		android::media::Ringtone::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

void android::media::Ringtone::stop()
{
	return call_method<
		android::media::Ringtone::J2CPP_CLASS_NAME,
		android::media::Ringtone::J2CPP_METHOD_NAME(5),
		android::media::Ringtone::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

jboolean android::media::Ringtone::isPlaying()
{
	return call_method<
		android::media::Ringtone::J2CPP_CLASS_NAME,
		android::media::Ringtone::J2CPP_METHOD_NAME(6),
		android::media::Ringtone::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::media::Ringtone,"android/media/Ringtone")
J2CPP_DEFINE_METHOD(android::media::Ringtone,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::media::Ringtone,1,"setStreamType","(I)V")
J2CPP_DEFINE_METHOD(android::media::Ringtone,2,"getStreamType","()I")
J2CPP_DEFINE_METHOD(android::media::Ringtone,3,"getTitle","(Landroid/content/Context;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::media::Ringtone,4,"play","()V")
J2CPP_DEFINE_METHOD(android::media::Ringtone,5,"stop","()V")
J2CPP_DEFINE_METHOD(android::media::Ringtone,6,"isPlaying","()Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_RINGTONE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION