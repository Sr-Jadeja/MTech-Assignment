#include <stdio.h>
int main() {

/*Q6. Factorial of a Number*/
{
    int n, i;
    int f = 1;  

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else {
        for (i = 1; i <= n; i++) {
            f *= i;
        }
    printf("Factorial of %d is %d\n", n, f);
    }
}

    return 0;
}
