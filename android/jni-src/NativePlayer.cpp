// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from twenty_forty_eight.djinni

#include "NativePlayer.hpp" // my header
#include "Marshal.hpp"
#include "NativeMove.hpp"
#include "NativePlayer.hpp"

namespace twenty48 {
namespace jni {

NativePlayer::NativePlayer()
    : ::djinni::JniInterface<::twenty48::Player, NativePlayer>(
          "com/boloutaredoubeni/twenty48/djinni/Player$CppProxy") {}

NativePlayer::~NativePlayer() = default;

CJNIEXPORT void JNICALL
Java_com_boloutaredoubeni_twenty48_djinni_Player_00024CppProxy_nativeDestroy(
    JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef) {
  try {
    DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
    delete reinterpret_cast<::djinni::CppProxyHandle<::twenty48::Player> *>(
        nativeRef);
  }
  JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL
Java_com_boloutaredoubeni_twenty48_djinni_Player_create(JNIEnv *jniEnv,
                                                        jobject /*this*/) {
  try {
    DJINNI_FUNCTION_PROLOGUE0(jniEnv);
    auto r = ::twenty48::Player::Create();
    return ::djinni::release(::twenty48::jni::NativePlayer::fromCpp(jniEnv, r));
  }
  JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL
Java_com_boloutaredoubeni_twenty48_djinni_Player_00024CppProxy_native_1newGame(
    JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef) {
  try {
    DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
    const auto &ref =
        ::djinni::objectFromHandleAddress<::twenty48::Player>(nativeRef);
    ref->NewGame();
  }
  JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jlong JNICALL
Java_com_boloutaredoubeni_twenty48_djinni_Player_00024CppProxy_native_1score(
    JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef) {
  try {
    DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
    const auto &ref =
        ::djinni::objectFromHandleAddress<::twenty48::Player>(nativeRef);
    auto r = ref->Score();
    return ::djinni::release(::djinni::I64::fromCpp(jniEnv, r));
  }
  JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL
Java_com_boloutaredoubeni_twenty48_djinni_Player_00024CppProxy_native_1hasWon(
    JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef) {
  try {
    DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
    const auto &ref =
        ::djinni::objectFromHandleAddress<::twenty48::Player>(nativeRef);
    auto r = ref->HasWon();
    return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
  }
  JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL
Java_com_boloutaredoubeni_twenty48_djinni_Player_00024CppProxy_native_1gameState(
    JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef) {
  try {
    DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
    const auto &ref =
        ::djinni::objectFromHandleAddress<::twenty48::Player>(nativeRef);
    auto r = ref->GameState();
    return ::djinni::release(::djinni::List<::djinni::I16>::fromCpp(jniEnv, r));
  }
  JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL
Java_com_boloutaredoubeni_twenty48_djinni_Player_00024CppProxy_native_1gameOver(
    JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef) {
  try {
    DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
    const auto &ref =
        ::djinni::objectFromHandleAddress<::twenty48::Player>(nativeRef);
    auto r = ref->GameOver();
    return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
  }
  JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL
Java_com_boloutaredoubeni_twenty48_djinni_Player_00024CppProxy_native_1swipe(
    JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef, jobject j_move) {
  try {
    DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
    const auto &ref =
        ::djinni::objectFromHandleAddress<::twenty48::Player>(nativeRef);
    auto r = ref->Swipe(::twenty48::jni::NativeMove::toCpp(jniEnv, j_move));
    return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
  }
  JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jlong JNICALL
Java_com_boloutaredoubeni_twenty48_djinni_Player_00024CppProxy_native_1movesMade(
    JNIEnv *jniEnv, jobject /*this*/, jlong nativeRef) {
  try {
    DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
    const auto &ref =
        ::djinni::objectFromHandleAddress<::twenty48::Player>(nativeRef);
    auto r = ref->MovesMade();
    return ::djinni::release(::djinni::I64::fromCpp(jniEnv, r));
  }
  JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}
}
} // namespace twenty48::jni
