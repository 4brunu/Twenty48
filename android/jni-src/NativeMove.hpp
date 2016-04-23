// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from twenty_forty_eight.djinni

#pragma once

#include "Twenty48/move.hpp"
#include "djinni_support.hpp"

namespace twenty48 {
namespace jni {

class NativeMove final : ::djinni::JniEnum {
public:
  using CppType = ::twenty48::Move;
  using JniType = jobject;

  using Boxed = NativeMove;

  static CppType toCpp(JNIEnv *jniEnv, JniType j) {
    return static_cast<CppType>(
        ::djinni::JniClass<NativeMove>::get().ordinal(jniEnv, j));
  }
  static ::djinni::LocalRef<JniType> fromCpp(JNIEnv *jniEnv, CppType c) {
    return ::djinni::JniClass<NativeMove>::get().create(jniEnv,
                                                        static_cast<jint>(c));
  }

private:
  NativeMove() : JniEnum("com/boloutaredoubeni/twenty48/djinni/Move") {}
  friend ::djinni::JniClass<NativeMove>;
};
}
} // namespace twenty48::jni
