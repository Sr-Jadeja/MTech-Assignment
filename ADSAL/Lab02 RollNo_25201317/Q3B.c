#include <stdio.h>
#include <string.h>

//3. Reverse a String: b) Reverse by creating a new array (O(n), O(n)).

int main() {

    char str[100], rev[100];
    int i, n;

    printf("Enter username: ");
    scanf("%s", str);

    n = strlen(str);

    for (i = 0; i < n; i++) {
        rev[i] = str[n - i - 1];
    }
    rev[n] = '\0';

    printf("Reversed username = %s", rev);

    return 0;
}
