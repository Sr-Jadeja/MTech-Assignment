// 7. Implement a circular queue using an array and perform enqueue, dequeue, and display
//    operations demonstrating wrap-around behavior.

#include <stdio.h>
#include <stdlib.h>

#define CQMAX 5

int cq[CQMAX];
int cfront = -1, crear = -1;

int isCQFull() { return (cfront == (crear + 1) % CQMAX); }
int isCQEmpty() { return cfront == -1; }

void enqueueC(int x) {
    if (isCQFull()) { printf("Circular Queue Overflow! Cannot enqueue %d\n", x); return; }
    if (isCQEmpty()) cfront = crear = 0;
    else crear = (crear + 1) % CQMAX;
    cq[crear] = x;
    printf("Enqueued %d\n", x);
}
int dequeueC() {
    if (isCQEmpty()) { printf("Circular Queue Underflow! Cannot dequeue\n"); return -1; }
    int v = cq[cfront];
    if (cfront == crear) cfront = crear = -1;
    else cfront = (cfront + 1) % CQMAX;
    printf("Dequeued %d\n", v);
    return v;
}
void displayC() {
    if (isCQEmpty()) { printf("Circular Queue empty\n"); return; }
    printf("Circular Queue: ");
    int i = cfront;
    while (1) {
        printf("%d ", cq[i]);
        if (i == crear) break;
        i = (i + 1) % CQMAX;
    }
    printf("\n");
}

int main() {
    enqueueC(1); enqueueC(2); enqueueC(3); enqueueC(4);
    displayC();
    dequeueC(); dequeueC();
    displayC();
    enqueueC(5); enqueueC(6); // this will wrap around to front
    displayC();
    enqueueC(7); // should overflow when full
    return 0;
}