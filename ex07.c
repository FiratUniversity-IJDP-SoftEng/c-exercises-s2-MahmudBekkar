#include <stdio.h>
int main() {
    for (int x = 1; x <= 10; x++) {
        int y1 = x * 5;
        int y2 = 100 - ((x - 1) * 10 + 1);
        int y3 = x;
        printf("%-3d %-3d %-3d\n", y1, y2, y3);
    }
}
