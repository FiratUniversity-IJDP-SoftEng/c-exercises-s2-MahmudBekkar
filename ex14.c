#include <stdio.h>


int fibonacci_recursive(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}


void fibonacci_series(int n) {
    printf("Fibonacci series up to position %d: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci_recursive(i));
    }
    printf("\n");
}

int main() {
    int n;


    printf("Enter the position n to find the nth Fibonacci number: ");
    scanf("%d", &n);


    int nth_fib = fibonacci_recursive(n);


    printf("The %dth Fibonacci number is: %d\n", n, nth_fib);
    fibonacci_series(n);

}

