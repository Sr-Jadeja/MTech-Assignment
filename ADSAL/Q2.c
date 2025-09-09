#include <stdio.h>
int main() {

/*Q2. Swap Two Numbers
Scenario: A cashier mistakenly enters two values in reverse. Write a program to swap them. */
{
    int a, b, t;
    printf("Write the mistakenly enter first number: ");
    scanf("%d", &a);
    printf("Write the mistakenly enter first number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    t = a;
    a = b;
    b = t;

    printf("After swapping:  a = %d, b = %d\n", a, b);
}
    return 0;
}
