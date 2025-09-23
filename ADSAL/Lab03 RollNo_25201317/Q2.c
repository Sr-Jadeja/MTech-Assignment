/*Q2) Given an array of integers, write a program to check if there exists a contiguous subarray
whose sum equals a given value S. If it exists, print the starting and ending indices of such
subarray.*/

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

    int s;
    printf("Enter targeted sum: ");
    scanf("%d", &s);

    int found=0;
    for (int i=0; i<n; i++){
        int sum=0;
        for (int j=i; j<n; j++){
            sum+=arr[j];
            if (sum==s){
                printf("Sum is given by index %d to %d \n",i,j);
                found=1;
                break;
            }
        }
    }

    if (!found){
        printf("No subarray with sum %d found.\n", s);
    }

    return 0;
}