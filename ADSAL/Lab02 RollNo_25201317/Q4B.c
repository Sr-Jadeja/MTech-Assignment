#include <stdio.h>

//4. Check Even or Odd: b) Using bitwise AND (n & 1) (O (1)).
int main() {

    //4b) Using bitwise AND (n & 1) (O (1)).
    int numbers[] = {23, 46, 67, 123, 50};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int i;

    for (i = 0; i < n; i++) {
        if (numbers[i] & 1) {  
            printf("%d is Odd\n", numbers[i]);
        } else {
            printf("%d is Even\n", numbers[i]);
        }
    }

    return 0;
}
