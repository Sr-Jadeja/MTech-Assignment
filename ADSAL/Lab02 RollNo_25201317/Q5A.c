#include <stdio.h>

//5 Factorial of a Number: a) Iterative method (O(n), O(1)).

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d is %llu\n", n, fact);

    return 0;
}
