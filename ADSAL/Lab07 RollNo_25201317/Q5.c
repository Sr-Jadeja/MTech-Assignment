// 5. Implement a queue using an array and perform enqueue, dequeue, and display
//    operations with overflow and underflow checks.

#include <stdio.h>
#include <stdlib.h>

#define QMAX 5

int q[QMAX];
int front = -1, rear = -1;

int isQFull() { return rear == QMAX - 1; }
int isQEmpty() { return front == -1 || front > rear; }

void enqueue(int x) {
    if (isQFull()) { printf("Queue Overflow! Cannot enqueue %d\n", x); return; }
    if (front == -1) front = 0;
    q[++rear] = x;
    printf("Enqueued %d\n", x);
}
int dequeue() {
    if (isQEmpty()) { printf("Queue Underflow! Cannot dequeue\n"); return -1; }
    int v = q[front++];
    if (front > rear) front = rear = -1;
    printf("Dequeued %d\n", v);
    return v;
}
void displayQ() {
    if (isQEmpty()) { printf("Queue empty\n"); return; }
    printf("Queue (front -> rear): ");
    for (int i = front; i <= rear; ++i) printf("%d ", q[i]);
    printf("\n");
}

int main() {
    enqueue(1); enqueue(2); enqueue(3); enqueue(4); enqueue(5);
    enqueue(6); // overflow
    displayQ();
    dequeue(); dequeue();
    displayQ();
    dequeue(); dequeue(); dequeue();
    dequeue(); // underflow
    return 0;
}