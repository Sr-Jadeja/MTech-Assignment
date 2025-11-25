// 7. Hybrid sorting: divide array into chunks, selection sort each chunk,
//    then merge chunks using merge logic (queue-based).

#include <stdio.h>

void selectionSort(int a[], int l, int r) {
    for (int i = l; i < r; i++) {
        int minIdx = i;
        for (int j = i+1; j <= r; j++)
            if (a[j] < a[minIdx]) minIdx = j;

        int temp = a[i];
        a[i] = a[minIdx];
        a[minIdx] = temp;
    }
}

void merge(int a[], int mid, int r) {
    int temp[100];
    int i=0, p1=0, p2=mid+1;
    while (p1<=mid && p2<=r)
        temp[i++] = (a[p1]<a[p2]) ? a[p1++] : a[p2++];
    while (p1<=mid) temp[i++] = a[p1++];
    while (p2<=r) temp[i++] = a[p2++];
    for (int j=0;j<i;j++) a[j] = temp[j];
}

int main() {
    int a[] = {50,20,10,80,40,30,70,60};
    int n = 8;
    int chunk = n/2;

    selectionSort(a, 0, chunk-1);
    selectionSort(a, chunk, n-1);

    printf("After sorting each chunk:\n");
    for (int i=0;i<n;i++) printf("%d ",a[i]); printf("\n");

    merge(a, chunk-1, n-1);

    printf("Final merged sorted array:\n");
    for (int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}