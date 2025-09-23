//1)Write a program to find the second largest element in an integer array without sorting the 
//  array. Consider the array may contain duplicate values.

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("No second largest element (all elements may be equal).\n");
    } else {
        printf("Second largest element: %d\n", second);
    }

    return 0;
}
