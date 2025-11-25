// 6. Circular singly linked list with insert at beginning, end, and display.

#include <stdio.h>
#include <stdlib.h>

struct CNode {
    int data;
    struct CNode* next;
};

struct CNode* tail = NULL;

struct CNode* create(int v) {
    struct CNode* n = (struct CNode*)malloc(sizeof(struct CNode));
    n->data = v; n->next = NULL;
    return n;
}

void insertBeg(int v) {
    struct CNode* n = create(v);

    if (!tail) {
        tail = n;
        tail->next = tail;
    } else {
        n->next = tail->next;
        tail->next = n;
    }
}

void insertEnd(int v) {
    struct CNode* n = create(v);

    if (!tail) {
        tail = n;
        tail->next = tail;
    } else {
        n->next = tail->next;
        tail->next = n;
        tail = n;
    }
}

void display() {
    if (!tail) { printf("Empty\n"); return; }

    struct CNode* t = tail->next;
    printf("Circular List: ");
    do {
        printf("%d -> ", t->data);
        t = t->next;
    } while (t != tail->next);
    printf("(back)\n");
}

int main() {
    insertBeg(20);
    insertEnd(30);
    insertBeg(10);

    display();

    return 0;
}
