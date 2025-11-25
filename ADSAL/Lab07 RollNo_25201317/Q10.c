// 10. Using both stack and queue to check whether a given string is a palindrome.
//     We'll use an array stack and an array queue for simplicity.

#include <stdio.h>
#include <string.h>

#define SQSZ 100

char stk[SQSZ];
int stp = -1;
char que[SQSZ];
int qf = 0, qr = -1;

void pushS(char c) { if (stp < SQSZ - 1) stk[++stp] = c; }
char popS() { if (stp == -1) return '\0'; return stk[stp--]; }

void enqueueQ(char c) { if (qr < SQSZ - 1) que[++qr] = c; }
char dequeueQ() { if (qf > qr) return '\0'; return que[qf++]; }

int isPalindrome(const char* s) {
    stp = -1; qf = 0; qr = -1;
    int n = strlen(s);
    // consider only alphanumerics and ignore case
    for (int i = 0; i < n; ++i) {
        char c = s[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
            if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
            pushS(c);
            enqueueQ(c);
        }
    }
    while (qf <= qr) {
        char a = popS();
        char b = dequeueQ();
        if (a != b) return 0;
    }
    return 1;
}

int main() {
    char *s1 = "A man, a plan, a canal: Panama";
    char *s2 = "OpenAI";
    printf("\"%s\" -> %s\n", s1, isPalindrome(s1) ? "Palindrome" : "Not Palindrome");
    printf("\"%s\" -> %s\n", s2, isPalindrome(s2) ? "Palindrome" : "Not Palindrome");
    return 0;
}