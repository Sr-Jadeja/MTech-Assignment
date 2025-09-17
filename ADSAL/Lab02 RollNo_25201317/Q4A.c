#include <stdio.h>

//4. Check Even or Odd: a) Using modulo operator (O(1)).

int main() {

    //4a) Using modulo operator (O(1)).
    int num[] = {23, 46, 67, 123, 50};
    int n = sizeof(num) / sizeof(num[0]);
    int i;

    for (i = 0; i < n; i++) {
        if (num[i] % 2 == 0) {
            printf("%d is Even\n", num[i]);
        } else {
            printf("%d is Odd\n", num[i]);
        }
    }

    return 0;
}