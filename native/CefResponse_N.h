/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_cef_network_CefResponse_N */

#ifndef _Included_org_cef_network_CefResponse_N
#define _Included_org_cef_network_CefResponse_N
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_cef_network_CefResponse_N
 * Method:    N_CefResponse_CTOR
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefResponse_1N_N_1CefResponse_1CTOR(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefResponse_N
 * Method:    N_IsReadOnly
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL
Java_org_cef_network_CefResponse_1N_N_1IsReadOnly(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefResponse_N
 * Method:    N_GetError
 * Signature: ()Lorg/cef/handler/CefLoadHandler$ErrorCode;
 */
JNIEXPORT jobject JNICALL
Java_org_cef_network_CefResponse_1N_N_1GetError(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefResponse_N
 * Method:    N_SetError
 * Signature: (Lorg/cef/handler/CefLoadHandler$ErrorCode;)V
 */
JNIEXPORT void JNICALL Java_org_cef_network_CefResponse_1N_N_1SetError(JNIEnv*,
                                                                       jobject,
                                                                       jobject);

/*
 * Class:     org_cef_network_CefResponse_N
 * Method:    N_GetStatus
 * Signature: ()I
 */
JNIEXPORT jint JNICALL
Java_org_cef_network_CefResponse_1N_N_1GetStatus(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefResponse_N
 * Method:    N_SetStatus
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_cef_network_CefResponse_1N_N_1SetStatus(JNIEnv*,
                                                                        jobject,
                                                                        jint);

/*
 * Class:     org_cef_network_CefResponse_N
 * Method:    N_GetStatusText
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_cef_network_CefResponse_1N_N_1GetStatusText(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefResponse_N
 * Method:    N_SetStatusText
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefResponse_1N_N_1SetStatusText(JNIEnv*, jobject, jstring);

/*
 * Class:     org_cef_network_CefResponse_N
 * Method:    N_GetMimeType
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_cef_network_CefResponse_1N_N_1GetMimeType(JNIEnv*, jobject);

/*
 * Class:     org_cef_network_CefResponse_N
 * Method:    N_SetMimeType
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefResponse_1N_N_1SetMimeType(JNIEnv*, jobject, jstring);

/*
 * Class:     org_cef_network_CefResponse_N
 * Method:    N_GetHeader
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_cef_network_CefResponse_1N_N_1GetHeader(JNIEnv*, jobject, jstring);

/*
 * Class:     org_cef_network_CefResponse_N
 * Method:    N_GetHeaderMap
 * Signature: (Ljava/util/Map;)V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefResponse_1N_N_1GetHeaderMap(JNIEnv*, jobject, jobject);

/*
 * Class:     org_cef_network_CefResponse_N
 * Method:    N_SetHeaderMap
 * Signature: (Ljava/util/Map;)V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefResponse_1N_N_1SetHeaderMap(JNIEnv*, jobject, jobject);

/*
 * Class:     org_cef_network_CefResponse_N
 * Method:    N_CefResponse_DTOR
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_org_cef_network_CefResponse_1N_N_1CefResponse_1DTOR(JNIEnv*, jobject);

#ifdef __cplusplus
}
#endif
#endif
