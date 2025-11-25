// 3. Delete the first occurrence of a given value from a doubly linked list.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node* head = NULL;

struct Node* createNode(int v) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = v;
    n->prev = n->next = NULL;
    return n;
}

void insertEnd(int v) {
    struct Node* n = createNode(v);
    if (!head) { head = n; return; }
    struct Node* t = head;
    while (t->next) t = t->next;
    t->next = n;
    n->prev = t;
}

void deleteValue(int value) {
    struct Node* t = head;

    while (t && t->data != value)
        t = t->next;

    if (!t) {
        printf("Value %d not found\n", value);
        return;
    }

    if (t->prev) t->prev->next = t->next;
    else head = t->next;

    if (t->next) t->next->prev = t->prev;

    free(t);
}

void display() {
    struct Node* t = head;
    printf("List: ");
    while (t) { printf("%d <-> ", t->data); t = t->next; }
    printf("NULL\n");
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(20);

    printf("Before deletion:\n");
    display();

    deleteValue(20);

    printf("After deleting first 20:\n");
    display();

    return 0;
}