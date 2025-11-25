// 6. Merge two queues containing sorted integers into one sorted queue.

#include <stdio.h>

#define MAXQ 20

int Q1[MAXQ], Q2[MAXQ], Q3[MAXQ];
int f1=0,r1=-1, f2=0,r2=-1, f3=0,r3=-1;

void enqueue(int Q[], int *r, int v) {
    Q[++(*r)] = v;
}

int dequeue(int Q[], int *f, int r) {
    return Q[(*f)++];
}

void mergeQueues() {
    while (f1<=r1 && f2<=r2) {
        if (Q1[f1] < Q2[f2])
            enqueue(Q3, &r3, dequeue(Q1, &f1, r1));
        else
            enqueue(Q3, &r3, dequeue(Q2, &f2, r2));
    }

    while (f1<=r1)
        enqueue(Q3, &r3, dequeue(Q1, &f1, r1));

    while (f2<=r2)
        enqueue(Q3, &r3, dequeue(Q2, &f2, r2));
}

int main() {
    enqueue(Q1,&r1,10); enqueue(Q1,&r1,20); enqueue(Q1,&r1,40);
    enqueue(Q2,&r2,5); enqueue(Q2,&r2,15); enqueue(Q2,&r2,35);

    mergeQueues();

    printf("Merged Queue: ");
    for (int i = f3; i <= r3; i++) printf("%d ", Q3[i]);
    printf("\n");

    return 0;
}