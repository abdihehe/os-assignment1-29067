#include "../kernel/types.h"
#include "user.h"

int main() {
    int i;
    while (1) {
        for (i = 0; i < 1000000; i++) {
            // Do some CPU-bound work
        }
    }
    exit(0);
}
