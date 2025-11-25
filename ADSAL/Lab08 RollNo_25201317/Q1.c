// 1. Implement selection sort on an array of integers and print the array
//    after each iteration to show sorting progress.

#include <stdio.h>

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[minIdx]) minIdx = j;

        int temp = a[i];
        a[i] = a[minIdx];
        a[minIdx] = temp;

        printf("After iteration %d: ", i + 1);
        printArray(a, n);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    printf("Original array: ");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}