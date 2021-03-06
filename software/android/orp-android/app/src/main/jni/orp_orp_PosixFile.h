/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class orp_orp_PosixFile */

#ifndef _Included_orp_orp_PosixFile
#define _Included_orp_orp_PosixFile
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     orp_orp_PosixFile
 * Method:    internal_open
 * Signature: (ZLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_orp_orp_PosixFile_internal_1open
  (JNIEnv *, jobject, jboolean, jstring);

/*
 * Class:     orp_orp_PosixFile
 * Method:    internal_close
 * Signature: (ZI)Z
 */
JNIEXPORT jboolean JNICALL Java_orp_orp_PosixFile_internal_1close
  (JNIEnv *, jobject, jboolean, jint);

/*
 * Class:     orp_orp_PosixFile
 * Method:    internal_write
 * Signature: (ZI[B)I
 */
JNIEXPORT jint JNICALL Java_orp_orp_PosixFile_internal_1write
  (JNIEnv *, jobject, jboolean, jint, jbyteArray);

/*
 * Class:     orp_orp_PosixFile
 * Method:    internal_readFull
 * Signature: (ZI[B)I
 */
JNIEXPORT jint JNICALL Java_orp_orp_PosixFile_internal_1readFull
  (JNIEnv *, jobject, jboolean, jint, jbyteArray);

/*
 * Class:     orp_orp_PosixFile
 * Method:    getErrno
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_orp_orp_PosixFile_getErrno
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
