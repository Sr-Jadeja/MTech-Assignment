#include <stdio.h>
int main() {
/* Q19. Sum of Digits using Recursion 
Problem: Find the sum of digits of a number using recursion.*/
int sumDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits = %d\n", sumDigits(n));
}

    return 0;
}
