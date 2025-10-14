/*10. Remove duplicate elements from a sorted linked list so that each element appears only once.*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Remove duplicates from a sorted linked list
void removeDuplicates(struct Node* head) {
    struct Node* current = head;

    while (current != NULL && current->next != NULL) {
        if (current->data == current->next->data) {
            struct Node* temp = current->next;
            current->next = current->next->next; // skip duplicate
            free(temp);
        } else {
            current = current->next; // move forward
        }
    }
}

// Main function
int main() {
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(20);
    head->next->next->next = createNode(30);
    head->next->next->next->next = createNode(30);
    head->next->next->next->next->next = createNode(30);
    head->next->next->next->next->next->next = createNode(40);

    printf("Original List:\n");
    displayList(head);

    removeDuplicates(head);

    printf("\nList after removing duplicates:\n");
    displayList(head);

    return 0;
}
