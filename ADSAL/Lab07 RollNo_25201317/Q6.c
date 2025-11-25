// 6. Implement a queue using a linked list and perform enqueue, dequeue, and display operations.

#include <stdio.h>
#include <stdlib.h>

struct QNode {
    int data;
    struct QNode* next;
};

struct QNode* qfront = NULL;
struct QNode* qrear = NULL;

void enqueueL(int x) {
    struct QNode* n = (struct QNode*)malloc(sizeof(struct QNode));
    n->data = x; n->next = NULL;
    if (!qrear) { qfront = qrear = n; }
    else { qrear->next = n; qrear = n; }
    printf("Enqueued %d\n", x);
}
int dequeueL() {
    if (!qfront) { printf("Queue Underflow\n"); return -1; }
    struct QNode* t = qfront;
    int v = t->data;
    qfront = qfront->next;
    if (!qfront) qrear = NULL;
    free(t);
    printf("Dequeued %d\n", v);
    return v;
}
void displayLQ() {
    if (!qfront) { printf("Queue empty\n"); return; }
    struct QNode* t = qfront;
    printf("Queue (front -> rear): ");
    while (t) { printf("%d ", t->data); t = t->next; }
    printf("\n");
}

int main() {
    enqueueL(10); enqueueL(20); enqueueL(30);
    displayLQ();
    dequeueL();
    displayLQ();
    dequeueL(); dequeueL(); dequeueL(); // extra dequeue -> underflow
    return 0;
}