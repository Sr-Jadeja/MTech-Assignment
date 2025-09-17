#include <stdio.h>

//10. Check Palindrome Number: b) Mathematical method: Reverse digits without converting (O (log n), O (1)).

int main() {
    int n, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
