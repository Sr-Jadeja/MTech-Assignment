#include <stdio.h>
int main() {

/* Q10. Count Digits in a Number */
{
    int num, ans = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    if (temp == 0) ans = 1;
    while (temp != 0) {
        temp /= 10;
        ans++;
    }
    printf("Number of digits = %d\n", ans);
}

    return 0;
}
