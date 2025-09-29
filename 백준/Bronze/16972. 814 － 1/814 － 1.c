#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); 

    int i;
    for (i = 0; i < 814; i++) {
        int a = rand() % 16281 - 8140;
        int b = rand() % 16281 - 8140;
        printf("%d %d\n", a, b);
    }

    return 0;
}