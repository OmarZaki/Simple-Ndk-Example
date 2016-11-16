//
// Created by OMAR on 11/16/2016.
//
#include "com_example_omar_ndkexample_MainActivity"


JNIEXPORT jstring JNICALL Java_com_example_omar_ndkexample_MainActivity_getStringFromNative(JNIEnv * env, jobject object){
return (*env)->NewStringUTF(env, "with great power , comes great responsibility ");
}
