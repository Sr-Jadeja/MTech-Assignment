// 8. Implement a priority queue using an array where each element has (data, priority).
//    Dequeue should remove the element with the highest priority (larger number = higher priority).

#include <stdio.h>
#include <stdlib.h>

#define PMAX 10

struct PItem { int data; int pr; };
struct PItem pq[PMAX];
int psz = 0;

void enqueueP(int data, int pr) {
    if (psz == PMAX) { printf("Priority Queue full\n"); return; }
    pq[psz].data = data; pq[psz].pr = pr; psz++;
    printf("Enqueued (data=%d, pr=%d)\n", data, pr);
}

int dequeueP() {
    if (psz == 0) { printf("Priority Queue empty\n"); return -1; }
    // find max priority index (first occurrence)
    int idx = 0;
    for (int i = 1; i < psz; ++i)
        if (pq[i].pr > pq[idx].pr) idx = i;
    int val = pq[idx].data;
    // shift left
    for (int j = idx; j < psz - 1; ++j) pq[j] = pq[j + 1];
    psz--;
    printf("Dequeued data=%d (priority removed)\n", val);
    return val;
}

void displayP() {
    if (psz == 0) { printf("Priority Queue empty\n"); return; }
    printf("PQ (data,priority): ");
    for (int i = 0; i < psz; ++i) printf("(%d,%d) ", pq[i].data, pq[i].pr);
    printf("\n");
}

int main() {
    enqueueP(10, 2); enqueueP(20, 5); enqueueP(30, 1); enqueueP(40, 4);
    displayP();
    dequeueP(); // should remove 20 (pr 5)
    displayP();
    dequeueP(); dequeueP(); dequeueP(); // empty then one more
    dequeueP();
    return 0;
}