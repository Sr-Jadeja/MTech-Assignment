#include <stdio.h>

//5 Factorial of a Number: b) Recursive method (O(n), O(n) for call stack).

unsigned long long fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    unsigned long long f = fact(n);
    printf("Factorial of %d is %llu", n, f);

    return 0;
}
