#include <cs50.h>
#include <stdio.h>

int main(void) {
    int x;
    do {
        x = get_int("Enter number less than 50: ");
    }while (x < 0 || x >= 50);

    long long m = 1;

    for (int y = 1; y <= x; y++) {
        m *= y;
    }
    printf("%d! = %lld\n", x, m);
}

