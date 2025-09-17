#include <stdio.h>

//1. Sum of Elements in an Array: b) Write a recursive version of the same program.
int sum(int arr[], int n) {
    if (n == 0) {
        return 0;  
    }
    return arr[n - 1] + sum(arr, n - 1);  
}

int main() {
    int sales[] = {20, 30, 55, 16};
    int n = sizeof(sales) / sizeof(sales[0]);

    int total = sum(sales, n);

    printf("Total sales = %d", total);

    return 0;
}
