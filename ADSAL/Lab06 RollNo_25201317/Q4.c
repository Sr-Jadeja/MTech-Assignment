// 4. Reverse a doubly linked list in place.

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

void reverseDLL() {
    struct Node *curr = head, *temp = NULL;

    while (curr) {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;  
    }

    if (temp)
        head = temp->prev;
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

    printf("Before reverse:\n");
    display();

    reverseDLL();

    printf("After reverse:\n");
    display();

    return 0;
}