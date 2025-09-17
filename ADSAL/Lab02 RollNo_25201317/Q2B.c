#include <stdio.h>

//2. Find Maximum Element in an Array: b) Can you find it by first sorting the array and taking the last element?

int main() {

    int sales[] = {20, 25, 30, 35, 31, 32, 29};
    int n = sizeof(sales) / sizeof(sales[0]); 
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1; j++) {
            if (sales[j] > sales[j + 1]) {
                temp = sales[j];
                sales[j] = sales[j + 1];
                sales[j + 1] = temp;
            }
        }
    }

    printf("Maximum temparature of week= %d", sales[n-1]);

    return 0;
}
