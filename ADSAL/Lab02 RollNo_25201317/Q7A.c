#include <stdio.h>

//7. Print First n Natural Numbers: a) Using a simple for loop (O(n), O(1)).

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("First %d natural numbers:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
