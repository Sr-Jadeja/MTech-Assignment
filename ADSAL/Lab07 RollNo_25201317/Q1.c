// 1. Implement a stack using an array and perform push, pop, display,
//    and check stack overflow/underflow conditions.

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stackA[MAX];
int topA = -1;

int isFull() { return topA == MAX - 1; }
int isEmpty() { return topA == -1; }

void pushA(int x) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push %d\n", x);
        return;
    }
    stackA[++topA] = x;
    printf("Pushed %d\n", x);
}

int popA() {
    if (isEmpty()) {
        printf("Stack Underflow! Cannot pop\n");
        return -1;
    }
    int v = stackA[topA--];
    printf("Popped %d\n", v);
    return v;
}

void displayA() {
    if (isEmpty()) { printf("Stack empty\n"); return; }
    printf("Stack (top -> bottom): ");
    for (int i = topA; i >= 0; --i) printf("%d ", stackA[i]);
    printf("\n");
}

int main() {
    pushA(10); pushA(20); pushA(30); pushA(40); pushA(50);
    pushA(60); 
    displayA();
    popA(); popA(); popA(); popA(); popA();
    popA(); 
    return 0;
}
