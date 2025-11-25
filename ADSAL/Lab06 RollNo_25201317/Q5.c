// 5. Find length and middle node of a doubly linked list.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node* head = NULL;

void insertEnd(int v) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = v; n->prev = n->next = NULL;

    if (!head) { head = n; return; }
    struct Node* t = head;
    while (t->next) t = t->next;
    t->next = n; n->prev = t;
}

int getLength() {
    int c = 0;
    struct Node* t = head;
    while (t) { c++; t = t->next; }
    return c;
}

struct Node* findMiddle() {
    struct Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);

    int len = getLength();
    struct Node* mid = findMiddle();

    printf("Length = %d\n", len);
    printf("Middle node = %d\n", mid->data);

    return 0;
}