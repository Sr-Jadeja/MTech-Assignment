// 8. Stack-based simulation of merge process (non-recursive).

#include <stdio.h>

#define MAX 100

struct Frame {
    int l, r, stage;
};

int stackTop = -1;
struct Frame stack[MAX];

void push(struct Frame f) { stack[++stackTop] = f; }
struct Frame pop() { return stack[stackTop--]; }

void merge(int a[], int l, int m, int r) {
    int temp[100], i=0, p1=l, p2=m+1;
    while (p1<=m && p2<=r)
        temp[i++] = (a[p1]<a[p2]) ? a[p1++] : a[p2++];
    while (p1<=m) temp[i++] = a[p1++];
    while (p2<=r) temp[i++] = a[p2++];
    for (int z=0; z<i; z++) a[l+z] = temp[z];
}

void mergeSortStack(int a[], int n) {
    push((struct Frame){0, n-1, 0});

    while (stackTop != -1) {
        struct Frame f = pop();

        if (f.l >= f.r) continue;

        int mid = (f.l + f.r)/2;

        if (f.stage == 0) {
            push((struct Frame){f.l, f.r, 1});
            push((struct Frame){mid+1, f.r, 0});
            push((struct Frame){f.l, mid, 0});
        }
        else {
            merge(a, f.l, mid, f.r);
        }
    }
}

int main() {
    int a[] = {40,10,20,50,30};
    int n = 5;

    mergeSortStack(a, n);

    printf("Sorted array: ");
    for (int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}