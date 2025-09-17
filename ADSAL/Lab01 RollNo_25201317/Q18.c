#include <stdio.h>
int main() {

/* Q18. GCD (Greatest Common Divisor) using Recursion 
Scenario: A system needs to simplify fractions, so GCD of two numbers is required.*/
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD = %d\n", gcd(a, b));
}

    return 0;
}
