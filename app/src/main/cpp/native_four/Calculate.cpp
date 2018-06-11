//
// Created by admin on 2018/6/11.
//

#include "me_study_nativedemo_Calculate.h"


JNIEXPORT jint JNICALL
Java_me_study_nativedemo_Calculate_add(JNIEnv *env, jobject jobj, jint numOne, jint numTwo) {

    jint result = 0;
    result = (int) (numOne + numTwo);
    return result;
}


/*
 * Class:     me_study_nativedemo_Calculate
 * Method:    minus
 * Signature: (FF)F
 */
JNIEXPORT jfloat JNICALL
Java_me_study_nativedemo_Calculate_minus(JNIEnv *env, jobject jobj, jfloat numOne, jfloat numTwo) {

    jfloat result = 0;
    result = (float) (numOne - numTwo);
    return result;
}


/*
 * Class:     me_study_nativedemo_Calculate
 * Method:    multiple
 * Signature: (DD)D
 */
JNIEXPORT jdouble JNICALL
Java_me_study_nativedemo_Calculate_multiple(JNIEnv *env, jobject jobj, jdouble numOne,
                                            jdouble numTwo) {
    double a = numOne;
    double b = numTwo;
    jdouble result = a + b;
    return result;
}


/*
 * Class:     me_study_nativedemo_Calculate
 * Method:    divide
 * Signature: (DD)D
 */
JNIEXPORT jdouble JNICALL
Java_me_study_nativedemo_Calculate_divide(JNIEnv *env, jobject jobj, jdouble numOne,
                                          jdouble numTwo) {
    double a = numOne;
    double b = numTwo;
    jdouble result = 0;
    result = a / b;
    return result;
}












