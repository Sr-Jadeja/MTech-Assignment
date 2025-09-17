#include <stdio.h>

//9. Swap Two Numbers Without Temporary Variable: a) Using arithmetic (a = a + b; b = a - b; a = a - b).

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap using arithmetic
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
