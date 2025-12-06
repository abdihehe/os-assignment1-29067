#include "../kernel/types.h"
#include "user.h"

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("Iteration %d\n", i);
        sleep(10);  // Sleep to simulate periodic yield
    }
    exit(0);
}
