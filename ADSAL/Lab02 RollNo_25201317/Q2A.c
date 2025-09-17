#include <stdio.h>

//2. Find Maximum Element in an Array: a) Find maximum element using a simple linear scan (O(n)).

int main() {

    int n, i, max = 0;

    int sales[]={20,25,30,35,31,32,29};

    n=sizeof(sales) / sizeof(sales[0]);

    for (i = 0; i < n; i++) {
        if (sales[i]>max){
            max=sales[i];
        }
    }

    printf("Maximum temparature of week= %d", max);

    return 0;
}
