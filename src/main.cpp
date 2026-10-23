#include <android/log.h>

#define MOHA_LOG_TAG "MOHA-Android"

extern "C"
__attribute__((visibility("default")))
int moha_android_probe() {
    __android_log_print(
        ANDROID_LOG_INFO,
        MOHA_LOG_TAG,
        "Biblioteca nativa Android carregada."
    );

    return 64;
}
