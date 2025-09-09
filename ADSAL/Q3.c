#include <stdio.h>
int main() {

/*Q3. Check Even or Odd
Scenario: A billing machine checks if a customer’s token number is even or odd.*/
{
    int num;
    printf("Enter token number: ");

    scanf("%d", &num);

        if (num % 2 == 0) {
        printf("Token number %d is EVEN.\n", num);
        } 
        else {
        printf("Token number %d is ODD.\n", num);
        }
}
    return 0;
}
