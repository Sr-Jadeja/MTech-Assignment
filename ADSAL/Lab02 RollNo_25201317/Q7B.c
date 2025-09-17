#include <stdio.h>

//7. Print First n Natural Numbers: b) Using recursion (O(n), O(n)).

void printNumbers(int n) {
    if (n == 0) {
        return;
    }
    printNumbers(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("First %d natural numbers:\n", n);
    printNumbers(n);
    printf("\n");

    return 0;
}
