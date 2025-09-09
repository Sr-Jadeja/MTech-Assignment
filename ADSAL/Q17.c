#include <stdio.h>
int main() {

/* Q17. Fibonacci Series using Recursion 
Problem: Print the first n Fibonacci numbers using recursion.*/
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}
{
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) printf("%d ", fib(i));
}
    return 0;
}
