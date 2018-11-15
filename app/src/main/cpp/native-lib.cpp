#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_support_machinelearning_sarc_clientcheck_1in_MainMenu_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
