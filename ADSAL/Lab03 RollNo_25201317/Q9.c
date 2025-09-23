/*Q9) Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".*/

#include <stdio.h>
#include <string.h>

int main() {
    int n; 
    printf("Enter number of strings: "); 
    scanf("%d",&n);
    
    char s[n][50];
    for(int i=0;i<n;i++) scanf("%s", s[i]);
    
    char prefix[50]; 
    strcpy(prefix, s[0]);
    for(int i=1;i<n;i++){
        int j=0;
        while(prefix[j] && s[i][j] && prefix[j]==s[i][j]) j++;
        prefix[j]='\0';
    }
    printf("Longest common prefix: %s\n", prefix);
    return 0;
}
