#include <jni.h>
#include <android/log.h>

#define MOHA_LOG_TAG "MOHA-Android"

extern "C" JNIEXPORT jstring JNICALL
Java_com_moha_europeanassault_MainActivity_nativeRuntimeStatus(
    JNIEnv *env, jclass) {
    __android_log_print(
        ANDROID_LOG_INFO, MOHA_LOG_TAG,
        "JNI bridge loaded; game runtime is not linked yet.");

    return env->NewStringUTF(
        "Biblioteca nativa ARM64: carregada\n"
        "Ponte JNI: operacional\n"
        "Motor do jogo: ainda não integrado\n"
        "Próxima etapa: integrar o runtime Xbox e o código recompilado"
    );
}

extern "C"
__attribute__((visibility("default")))
int moha_android_probe() {
    return 64;
}
