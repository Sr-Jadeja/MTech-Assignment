// 8. Delete a node with a specific value from a circular linked list.

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
    if (!tail) { tail = n; tail->next = tail; return; }
    n->next = tail->next;
    tail->next = n;
    tail = n;
}

void deleteValue(int value) {
    if (!tail) return;

    struct CNode *prev = tail, *curr = tail->next;

    do {
        if (curr->data == value) {
            if (curr == prev) { // only one node
                tail = NULL;
            } else {
                prev->next = curr->next;
                if (curr == tail)
                    tail = prev;
            }
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->next;
    } while (curr != tail->next);
}

void display() {
    if (!tail) { printf("Empty\n"); return; }
    struct CNode* t = tail->next;
    printf("List: ");
    do { printf("%d -> ", t->data); t = t->next; }
    while (t != tail->next);
    printf("(back)\n");
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    printf("Before deletion:\n");
    display();

    deleteValue(20);

    printf("After deleting 20:\n");
    display();

    return 0;
}