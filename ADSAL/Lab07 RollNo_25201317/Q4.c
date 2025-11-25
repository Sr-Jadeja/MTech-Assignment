// 4. Check balanced parentheses in an expression using a stack (linked list implementation).

#include <stdio.h>
#include <stdlib.h>

struct NodeP {
    char ch;
    struct NodeP* next;
};

struct NodeP* topP = NULL;

void pushP(char c) {
    struct NodeP* n = (struct NodeP*)malloc(sizeof(struct NodeP));
    n->ch = c; n->next = topP; topP = n;
}

char popP() {
    if (!topP) return '\0';
    char c = topP->ch;
    struct NodeP* t = topP; topP = topP->next; free(t);
    return c;
}
int isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}
int isBalanced(const char* expr) {
    topP = NULL;
    for (int i = 0; expr[i]; ++i) {
        char c = expr[i];
        if (c == '(' || c == '{' || c == '[') pushP(c);
        else if (c == ')' || c == '}' || c == ']') {
            char o = popP();
            if (o == '\0' || !isMatching(o, c)) return 0;
        }
    }
    int balanced = (topP == NULL);
    while (topP) popP();
    return balanced;
}

int main() {
    char *ex1 = "{[()]}";
    char *ex2 = "([)]";
    printf("%s -> %s\n", ex1, isBalanced(ex1) ? "Balanced" : "Not Balanced");
    printf("%s -> %s\n", ex2, isBalanced(ex2) ? "Balanced" : "Not Balanced");
    return 0;
}