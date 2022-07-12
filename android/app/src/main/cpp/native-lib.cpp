#include <jni.h>
#include <string>

extern "C" void *floui_main(void *, void *, void *);

extern "C" void floui_handle_events(void *);

extern "C" JNIEXPORT jobject JNICALL
Java_com_example_android_MainActivity_mainView(JNIEnv* env, jobject main_activity, jobject view) {
    return (jobject) floui_main(env, main_activity, view);
}

extern "C" JNIEXPORT void JNICALL
Java_com_example_android_MainActivity_handleEvent(JNIEnv *env, jobject thiz, jobject view) {
    floui_handle_events(view);
}