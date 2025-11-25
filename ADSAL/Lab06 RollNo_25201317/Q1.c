//1. Implement a doubly linked list with basic operations: insert at beginning, 
//   insert at end, delete a node, and display the list.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node* head = NULL;

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Insert at beginning
void insertAtBeginning(int value) {
    struct Node* newNode = createNode(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// Insert at end
void insertAtEnd(int value) {
    struct Node* newNode = createNode(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Delete a node by value
void deleteNode(int value) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;

    // If first node is to be deleted
    if (temp->data == value) {
        head = temp->next;
        if (head != NULL)
            head->prev = NULL;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != value)
        temp = temp->next;

    if (temp == NULL) {
        printf("Value not found!\n");
        return;
    }

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    free(temp);
}

// Display list
void display() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insertAtBeginning(30);
    insertAtBeginning(20);
    insertAtEnd(40);
    insertAtEnd(50);

    display();

    printf("Deleting 40...\n");
    deleteNode(40);

    display();

    return 0;
}