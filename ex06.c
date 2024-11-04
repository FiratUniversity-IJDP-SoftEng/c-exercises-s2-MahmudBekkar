#include <stdio.h>
int main() {
    for (int x = 100; x >= 50; x--) {
        if (x % 3 == 0) {
            printf("%i\n", x);
        }
    }
    return 0;
}

