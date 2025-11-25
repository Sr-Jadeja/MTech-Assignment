// 4. Implement selection sort on a singly linked list using node swaps.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int v) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = v; n->next = NULL;
    return n;
}

void insertEnd(struct Node** head, int v) {
    struct Node* n = createNode(v);
    if (*head == NULL) { *head = n; return; }
    struct Node* t = *head;
    while (t->next) t = t->next;
    t->next = n;
}

void printList(struct Node* head) {
    while (head) { printf("%d -> ", head->data); head = head->next; }
    printf("NULL\n");
}

void selectionSortLL(struct Node* head) {
    int iteration = 1;
    for (struct Node* i = head; i && i->next; i = i->next) {
        struct Node* minNode = i;
        for (struct Node* j = i->next; j; j = j->next)
            if (j->data < minNode->data)
                minNode = j;

        int temp = i->data;
        i->data = minNode->data;
        minNode->data = temp;

        printf("After iteration %d: ", iteration++);
        printList(head);
    }
}

int main() {
    struct Node* head = NULL;

    insertEnd(&head, 40);
    insertEnd(&head, 10);
    insertEnd(&head, 30);
    insertEnd(&head, 20);

    selectionSortLL(head);

    return 0;
}