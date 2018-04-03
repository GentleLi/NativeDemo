//
// Created by admin on 2018/4/3.
//
#include "me_study_nativedemo_Hello.h"

JNIEXPORT jstring JNICALL Java_me_study_nativedemo_Hello_sayHello(JNIEnv *env, jclass claz) {
    return env->NewStringUTF("say Hello");
}

