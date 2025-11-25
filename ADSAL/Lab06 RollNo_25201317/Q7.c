// 7. Insert after a given node in circular linked list.

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

void insertEnd(int v) {
    struct CNode* n = create(v);
    if (!tail) {
        tail = n; tail->next = tail;
        return;
    }
    n->next = tail->next;
    tail->next = n;
    tail = n;
}

void insertAfter(int key, int value) {
    if (!tail) return;

    struct CNode* t = tail->next;

    do {
        if (t->data == key) {
            struct CNode* n = create(value);
            n->next = t->next;
            t->next = n;

            if (t == tail)
                tail = n;

            return;
        }
        t = t->next;
    } while (t != tail->next);
}

void display() {
    if (!tail) { printf("Empty\n"); return; }

    struct CNode* t = tail->next;
    printf("List: ");
    do {
        printf("%d -> ", t->data);
        t = t->next;
    } while (t != tail->next);
    printf("(back)\n");
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    printf("Before:\n");
    display();

    insertAfter(20, 25);

    printf("After inserting 25 after 20:\n");
    display();

    return 0;
}