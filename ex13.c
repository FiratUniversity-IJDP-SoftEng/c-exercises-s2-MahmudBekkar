
#include <stdio.h>

unsigned long long recursiveFactorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * recursiveFactorial(n - 1);
    }
}

unsigned long long iterativeFactorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;

    printf("Enter a number (less than 50): ");
    scanf("%d", &number);


    if (number < 0 || number >= 50) {
        printf("Please enter a number between 0 and 49.\n");
        return 1;
    }
