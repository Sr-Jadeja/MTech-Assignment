// 2. Implement a stack using a linked list and perform push, pop, peek, and display operations.

#include <stdio.h>
#include <stdlib.h>

struct SNode {
    int data;
    struct SNode* next;
};

struct SNode* top = NULL;

void pushL(int x) {
    struct SNode* n = (struct SNode*)malloc(sizeof(struct SNode));
    n->data = x; n->next = top;
    top = n;
    printf("Pushed %d\n", x);
}

int popL() {
    if (!top) { printf("Stack Underflow\n"); return -1; }
    struct SNode* t = top;
    int v = t->data;
    top = top->next;
    free(t);
    printf("Popped %d\n", v);
    return v;
}

int peekL() {
    if (!top) { printf("Stack empty\n"); return -1; }
    printf("Top is %d\n", top->data);
    return top->data;
}

void displayL() {
    struct SNode* t = top;
    if (!t) { printf("Stack empty\n"); return; }
    printf("Stack (top -> bottom): ");
    while (t) { printf("%d ", t->data); t = t->next; }
    printf("\n");
}

int main() {
    pushL(5); pushL(15); pushL(25);
    displayL();
    peekL();
    popL();
    displayL();
    popL(); popL(); popL();
    return 0;
}