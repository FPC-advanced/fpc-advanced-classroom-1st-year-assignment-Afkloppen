#include <stdio.h>

int input_array_size() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

void init_array(int n, int a[n]) {
    for (int i = 0; i <= n; i++) {
        a[i] = 1; // Initialize all elements to 1
    }
    a[0] = a[1] = 0; // 0 and 1 are not prime
}

void eratosthenes_sieve(int n, int a[n]) {
    for (int i = 2; i * i <= n; i++) {
        if (a[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                a[j] = 0; // Mark multiples of prime 'i' as non-prime
            }
        }
    }
}

void output(int n, int a[n]) {
    printf("Prime numbers between 2 and %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (a[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n = input_array_size();
    int a[n + 1];
    init_array(n, a);
    eratosthenes_sieve(n, a);
    output(n, a);
    return 0;
}
