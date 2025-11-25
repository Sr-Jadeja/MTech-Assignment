// Q2. Write a function to insert a new node at a specific position in a doubly linked list.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node* head = NULL;

struct Node* createNode(int value) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = value;
    n->prev = n->next = NULL;
    return n;
}

void insertAtPosition(int value, int pos) {
    struct Node* newNode = createNode(value);

    if (pos == 1) {
        newNode->next = head;
        if (head != NULL)
            head->prev = newNode;
        head = newNode;
        return;
    }

    struct Node* temp = head;
    int i = 1;

    while (temp != NULL && i < pos - 1) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        printf("Position out of range\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}

void display() {
    struct Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    insertAtPosition(10, 1);  // 10
    insertAtPosition(20, 2);  // 10 20
    insertAtPosition(30, 3);  // 10 20 30
    insertAtPosition(15, 2);  // 10 15 20 30
    insertAtPosition(5, 1);   // 5 10 15 20 30

    display();
    return 0;
}