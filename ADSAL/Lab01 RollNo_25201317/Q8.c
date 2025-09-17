#include <stdio.h>
int main() {

/*Q8. Reverse a Number*/
{
    int num, rev = 0, rmd;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rmd = num % 10;                 // get last digit
        rev = rev * 10 + rmd; // build reversed number
        num = num / 10;                       // remove last digit
    }

    printf("Reversed number = %d\n", rev);
}

    return 0;
}
