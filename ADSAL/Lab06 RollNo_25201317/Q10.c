// 10. Split a circular linked list into two halves.

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

void display(struct CNode* head) {
    if (!head) return;
    struct CNode* t = head;
    printf("List: ");
    do { printf("%d -> ", t->data); t = t->next; }
    while (t != head);
    printf("(back)\n");
}

void splitCLL(struct CNode** head1, struct CNode** head2) {
    if (!tail) return;

    struct CNode *slow = tail->next, *fast = tail->next;

    while (fast->next != tail->next && fast->next->next != tail->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    *head1 = tail->next;
    *head2 = slow->next;

    slow->next = *head1;
    tail->next = *head2;
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);

    struct CNode *h1 = NULL, *h2 = NULL;

    splitCLL(&h1, &h2);

    printf("First half:\n");
    display(h1);

    printf("Second half:\n");
    display(h2);

    return 0;
}