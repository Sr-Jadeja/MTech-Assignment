#include <stdio.h>
//1. Sum of Elements in an Array: a) Write a simple iterative program to compute the sum of elements.

int main() {

    int n, i, sum = 0;

    int sales[]={20,30,55,16};

    n=sizeof(sales) / sizeof(sales[0]);

    for (i = 0; i < n; i++) {
        sum += sales[i];
    }

    printf("Total sales = %d", sum);

    return 0;
}
