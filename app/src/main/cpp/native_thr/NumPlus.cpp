//
// Created by admin on 2018/4/3.
//

#include "me_study_nativedemo_NumPlus.h"

JNIEXPORT jint JNICALL
Java_me_study_nativedemo_NumPlus_getSum(JNIEnv *env, jclass claz, jint a, jint b) {
    jint result = 0;
    result = (int) (a + b);
    return result;
}

