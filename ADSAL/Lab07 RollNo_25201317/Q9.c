// 9. Implement a double-ended queue (deque) using a circular array with insert and delete
//    operations at both ends.

#include <stdio.h>
#include <stdlib.h>

#define DMAX 5

int deq[DMAX];
int dfront = -1, drear = -1;

int isDFull() { return (dfront == (drear + 1) % DMAX); }
int isDEmpty() { return dfront == -1; }

void insertFront(int x) {
    if (isDFull()) { printf("Deque full! Cannot insert %d at front\n", x); return; }
    if (isDEmpty()) { dfront = drear = 0; deq[dfront] = x; }
    else {
        dfront = (dfront - 1 + DMAX) % DMAX;
        deq[dfront] = x;
    }
    printf("Inserted %d at front\n", x);
}

void insertRear(int x) {
    if (isDFull()) { printf("Deque full! Cannot insert %d at rear\n", x); return; }
    if (isDEmpty()) { dfront = drear = 0; deq[drear] = x; }
    else {
        drear = (drear + 1) % DMAX;
        deq[drear] = x;
    }
    printf("Inserted %d at rear\n", x);
}

int deleteFront() {
    if (isDEmpty()) { printf("Deque empty! Cannot delete front\n"); return -1; }
    int v = deq[dfront];
    if (dfront == drear) dfront = drear = -1;
    else dfront = (dfront + 1) % DMAX;
    printf("Deleted %d from front\n", v);
    return v;
}

int deleteRear() {
    if (isDEmpty()) { printf("Deque empty! Cannot delete rear\n"); return -1; }
    int v = deq[drear];
    if (dfront == drear) dfront = drear = -1;
    else drear = (drear - 1 + DMAX) % DMAX;
    printf("Deleted %d from rear\n", v);
    return v;
}

void displayD() {
    if (isDEmpty()) { printf("Deque empty\n"); return; }
    printf("Deque: ");
    int i = dfront;
    while (1) {
        printf("%d ", deq[i]);
        if (i == drear) break;
        i = (i + 1) % DMAX;
    }
    printf("\n");
}

int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);
    displayD();
    deleteRear();
    displayD();
    insertRear(25); insertRear(30); insertFront(1); // may fill and wrap
    displayD();
    insertRear(99); // should be full or overflow depending on state
    deleteFront(); deleteFront(); deleteFront(); deleteFront(); deleteFront(); // clear
    displayD();
    return 0;
}