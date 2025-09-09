#include <stdio.h>
int main() {

/* Q16. Factorial using Recursion 
Problem: Write a recursive function to calculate the factorial of a given number.*/
int fact(int n) 
{
    if (n == 0 || n == 1) return 1;
    else return n * fact(n - 1);
}
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d\n", n, fact(n));
}


    return 0;
}
