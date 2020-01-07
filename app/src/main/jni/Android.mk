LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := whhjni

LOCAL_SRC_FILES := whhjni.c
LOCAL_LDLIBS += -llog

include $(BUILD_SHARED_LIBRARY)

