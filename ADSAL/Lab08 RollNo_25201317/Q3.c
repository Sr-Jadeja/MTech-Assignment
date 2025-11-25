// 3. Perform partial selection sort — sort only the first k smallest elements.

#include <stdio.h>

void partialSelectionSort(int a[], int n, int k) {
    for (int i = 0; i < k; i++) {
        int minIdx = i;

        for (int j = i + 1; j < n; j++)
            if (a[j] < a[minIdx]) minIdx = j;

        int temp = a[i];
        a[i] = a[minIdx];
        a[minIdx] = temp;

        printf("After selecting %d smallest elements: ", i + 1);
        for (int x = 0; x < n; x++) printf("%d ", a[x]);
        printf("\n");
    }
}

int main() {
    int arr[] = {50, 20, 10, 40, 30};
    int n = 5, k = 3;

    partialSelectionSort(arr, n, k);

    return 0;
}