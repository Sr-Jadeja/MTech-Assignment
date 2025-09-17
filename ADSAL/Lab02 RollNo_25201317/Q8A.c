#include <stdio.h>
#include <string.h>

//8. Count Vowels in a String: a) Traverse string and check each character (O(n), O(1)).

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }

    printf("Number of vowels = %d\n", count);
    return 0;
}
