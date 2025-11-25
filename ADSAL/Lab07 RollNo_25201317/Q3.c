// 3. Write a program to reverse a string using a stack implemented with an array.

#include <stdio.h>
#include <string.h>

#define MAXS 100

char st[MAXS];
int tp = -1;

void push_char(char c) {
    if (tp < MAXS - 1) st[++tp] = c;
}
char pop_char() {
    if (tp == -1) return '\0';
    return st[tp--];
}
void reverseString(char *s) {
    int n = strlen(s);
    tp = -1;
    for (int i = 0; i < n; ++i) push_char(s[i]);
    for (int i = 0; i < n; ++i) s[i] = pop_char();
}

int main() {
    char s[] = "Hello, Stack!";
    printf("Original: %s\n", s);
    reverseString(s);
    printf("Reversed: %s\n", s);
    return 0;
}