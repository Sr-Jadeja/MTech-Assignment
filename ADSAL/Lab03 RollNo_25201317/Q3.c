/*Q3) Write a function to rotate an array of n elements to the right by k positions. For example,
for array [1, 2, 3, 4, 5] and k = 2, the rotated array should be [4, 5, 1, 2, 3]. Try to do in O(n)
time complexity*/


#include<stdio.h>

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter rotation value: ");
    scanf("%d", &k);

    k=k%n;

    int ans[n];
    for (int i=0; i<k; i++){
        ans[i]=arr[n-k+i];
    }
    for (int i=0; i<n-k; i++){
        ans[i+k]=arr[i];
    }


    printf("Array elements after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", ans[i]);
    }    

    return 0;
}