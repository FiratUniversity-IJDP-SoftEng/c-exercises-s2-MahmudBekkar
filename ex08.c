#include <stdio.h>
#include <cs50.h>
int main(void) {
    int x[10];
    int y= 0;
    float m;

    for (int i = 0; i < 10; i++) {
        x [i] = get_int("%d\n", i + 1);
    }

printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", x[i]);
        y += x[i];
    }
    m = y / 10.0;

    printf("Sum: %d\n", y);
    printf("Average: %.2f\n", m);
}

