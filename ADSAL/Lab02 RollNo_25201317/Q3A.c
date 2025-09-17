#include <stdio.h>
#include <string.h> 

//3. Reverse a String: a) Reverse in-place using two-pointer technique (O(n), O(1)).

int main() {

    char str[100];   
    int l = 0, r, temp;

    printf("Enter username: ");
    scanf("%s", str);

    r = strlen(str) - 1; 

    while (l < r) {
        temp = str[l];
        str[l] = str[r];
        str[r] = temp;

        l++;
        r--;
    }

    printf("Reversed username = %s", str);

    return 0;
}
