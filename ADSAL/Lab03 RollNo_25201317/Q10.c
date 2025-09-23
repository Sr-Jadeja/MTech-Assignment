/*Q10) Given an integer array nums, return true if any value appears at least twice in the array,
and return false if every element is distinct.*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n; 
    printf("Enter size of array: "); 
    scanf("%d",&n);
    
    int nums[n];
    printf("Enter array elements: ");
    for(int i=0;i<n;i++) scanf("%d",&nums[i]);
    
    bool found=false;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(nums[i]==nums[j]) found=true;
    if(found) printf("True\n"); else printf("False\n");
    return 0;
}
