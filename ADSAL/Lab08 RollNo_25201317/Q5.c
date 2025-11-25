// 5. Merge two sorted linked lists into one sorted list (no extra data structures).

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* create(int v) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = v; n->next = NULL;
    return n;
}

void insertEnd(struct Node** head, int v) {
    struct Node* n = create(v);
    if (!*head) { *head = n; return; }
    struct Node* t = *head;
    while (t->next) t = t->next;
    t->next = n;
}

void print(struct Node* h) {
    while (h) { printf("%d -> ", h->data); h = h->next; }
    printf("NULL\n");
}

struct Node* merge(struct Node* a, struct Node* b) {
    if (!a) return b;
    if (!b) return a;

    if (a->data < b->data) {
        a->next = merge(a->next, b);
        return a;
    } else {
        b->next = merge(a, b->next);
        return b;
    }
}

int main() {
    struct Node *L1=NULL, *L2=NULL;
    insertEnd(&L1, 10); insertEnd(&L1, 20); insertEnd(&L1, 40);
    insertEnd(&L2, 15); insertEnd(&L2, 18); insertEnd(&L2, 30);

    printf("Merged list:\n");
    struct Node* merged = merge(L1, L2);
    print(merged);

    return 0;
}