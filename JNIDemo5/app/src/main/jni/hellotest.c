/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jni_jnidemo5_JNINative */

#ifndef _Included_com_jni_jnidemo5_JNINative
#define _Included_com_jni_jnidemo5_JNINative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_jni_jnidemo5_JNINative
 * Method:    getString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jni_jnidemo5_JNINative_getString
  (JNIEnv *env, jclass jobject){
 return (*env)->NewStringUTF(env,"hello world from c!!!");
  }
#ifdef __cplusplus
}
#endif
#endif
