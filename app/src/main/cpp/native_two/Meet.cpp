//
// Created by admin on 2018/4/3.
//
#include<iostream>
#include "me_study_nativedemo_Meet.h"

JNIEXPORT jstring JNICALL
Java_me_study_nativedemo_Meet_meeting(JNIEnv *env, jclass claz, jint a, jint b) {

    int rtn = (int) (a + b);

    return env->NewStringUTF("nice to meet you!");
}

