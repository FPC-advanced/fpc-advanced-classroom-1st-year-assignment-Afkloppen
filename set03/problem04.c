#include <stdio.h>

int input() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

int find_fibo(int n) {
    if (n <= 0) {
        return -1; // Handle invalid input
    } else if (n == 1) {
        return 0; // First Fibonacci number
    } else if (n == 2) {
        return 1; // Second Fibonacci number
    } else {
        int a = 0, b = 1, c;
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

void output(int n, int fibo) {
    if (fibo == -1) {
        printf("Invalid input. Please enter a positive integer greater than 0.\n");
    } else {
        printf("The %dth number in the Fibonacci sequence is: %d\n", n, fibo);
    }
}

int main() {
    int n = input();
    int fibo = find_fibo(n);
    output(n, fibo);
    return 0;
}
