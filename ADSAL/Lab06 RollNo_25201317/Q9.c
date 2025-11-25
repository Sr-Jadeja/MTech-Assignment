// 9. Check whether a linked list is circular or not.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int isCircular(struct Node* head) {
    if (!head) return 0;

    struct Node* t = head->next;

    while (t && t != head)
        t = t->next;

    return (t == head);
}

int main() {
    struct Node* a = (struct Node*)malloc(sizeof(struct Node));
    struct Node* b = (struct Node*)malloc(sizeof(struct Node));
    struct Node* c = (struct Node*)malloc(sizeof(struct Node));

    a->next = b;
    b->next = c;
    c->next = a;   // Circular

    printf("Is list circular? %s\n", isCircular(a) ? "YES" : "NO");

    return 0;
}