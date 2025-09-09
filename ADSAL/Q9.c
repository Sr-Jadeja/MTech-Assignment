#include <stdio.h>
int main() {

/*Q9. Palindrome Number Check
Scenario: ATM checks if PIN entered forward = reverse.*/
{
    int num, original, rev = 0, rmd;

    printf("Enter a PIN number: ");
    scanf("%d", &num);

    original = num; 

    while (num != 0) {
        rmd = num % 10;
        rev = rev * 10 + rmd;
        num = num / 10;
    }

    if (original == rev)
        printf("PIN number %d is a Palindrome number.\n", original);
    else
        printf("PIN number %d is NOT a Palindrome number.\n", original);
}

    return 0;
}
