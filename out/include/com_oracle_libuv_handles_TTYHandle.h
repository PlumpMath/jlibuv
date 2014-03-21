/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_oracle_libuv_handles_TTYHandle */

#ifndef _Included_com_oracle_libuv_handles_TTYHandle
#define _Included_com_oracle_libuv_handles_TTYHandle
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_oracle_libuv_handles_TTYHandle
 * Method:    _static_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_oracle_libuv_handles_TTYHandle__1static_1initialize
  (JNIEnv *, jclass);

/*
 * Class:     com_oracle_libuv_handles_TTYHandle
 * Method:    _new
 * Signature: (JIZ)J
 */
JNIEXPORT jlong JNICALL Java_com_oracle_libuv_handles_TTYHandle__1new
  (JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     com_oracle_libuv_handles_TTYHandle
 * Method:    _set_mode
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_oracle_libuv_handles_TTYHandle__1set_1mode
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_oracle_libuv_handles_TTYHandle
 * Method:    _reset_mode
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_oracle_libuv_handles_TTYHandle__1reset_1mode
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_oracle_libuv_handles_TTYHandle
 * Method:    _get_window_size
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL Java_com_oracle_libuv_handles_TTYHandle__1get_1window_1size
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_oracle_libuv_handles_TTYHandle
 * Method:    _is_tty
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_oracle_libuv_handles_TTYHandle__1is_1tty
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_oracle_libuv_handles_TTYHandle
 * Method:    _guess_handle_type
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_oracle_libuv_handles_TTYHandle__1guess_1handle_1type
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
