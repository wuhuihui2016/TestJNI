#include <stdio.h>
#include "com_whh_testjni_Jna.h"

#include <android/log.h>

#define LOG_TAG "whh0106JNI"
#define LOGD_ANDROID(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGE_ANDROID(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)


JNIEXPORT jstring JNICALL Java_com_whh_testjni_Jna_getStringFromNDK
        (JNIEnv *env, jobject obj) {
    return (*env)->NewStringUTF(env, "第一行代码");
}

JNIEXPORT jint JNICALL Java_com_whh_testjni_Jna_sum
        (JNIEnv *env, jclass type, jint i, jint j) {
    LOGD_ANDROID("i=%d,j=%d", i, j);
    const jint sum = i + j;
    return sum;
}