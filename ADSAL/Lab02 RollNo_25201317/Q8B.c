#include <stdio.h>
#include <string.h>

//8. Count Vowels in a String: b) Use a lookup table (array of 256 size) to speed up vowel checking (O(n), O(1) but extra space).

int main() {
    char str[100];
    int lookup[256] = {0};
    int i, count = 0;

    // Mark vowels in lookup table
    lookup['a'] = lookup['e'] = lookup['i'] = lookup['o'] = lookup['u'] = 1;
    lookup['A'] = lookup['E'] = lookup['I'] = lookup['O'] = lookup['U'] = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (lookup[(unsigned char)str[i]]) {
            count++;
        }
    }

    printf("Number of vowels = %d\n", count);
    return 0;
}
