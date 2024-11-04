#include <stdio.h>
int main(void) {
    int x = 5;
    for (int y = 0; y < x; y++) {
        for (int m = 0; m < x; m++){

            if (m == y || m == (x - 1 - y)){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

