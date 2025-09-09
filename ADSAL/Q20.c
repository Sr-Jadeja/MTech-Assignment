#include <stdio.h>
int main() {

/* Q20. Recursive Binary Search 
Scenario: A library system searches for a book ID in a sorted array of IDs. Implement binary
search using recursion.*/
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == key) return mid;
    else if (key < arr[mid]) return binarySearch(arr, low, mid - 1, key);
    else return binarySearch(arr, mid + 1, high, key);
}
{
    int n, i, key;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1) printf("Element found at index %d\n", result);
    else printf("Element not found\n");
}


    return 0;
}
