#include <stdio.h>
#include <string.h>

//10. Check Palindrome Number: a) Convert number to string and check (O(n), O(n)).

int main() {
    char str[100];
    int len, i, isPalindrome = 1;

    printf("Enter a number: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("%s is a palindrome number", str);
    } else {
        printf("%s is not a palindrome number", str);
    }

    return 0;
}
