#include <stdio.h>

int main() {
    int x = 0;
    int y = 0;
    int w;
    printf("Enter numbers (-1 to stop): ");
    while (1) {
        scanf("%d", &w);
        if (w == -1) {
            break;
        }
        y += w;
        x++;
    }
    if (x > 0) {
        double average = (double)y / x;
        printf("Count: %d\n", x);
        printf("Sum: %d\n", y);
        printf("Average: %.2f\n", average);
    } else {
        printf("No numbers were entered.\n");
    }

}

