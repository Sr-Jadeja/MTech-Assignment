#include <stdio.h>
int main() {
/* Q13. Array – Find Maximum Element */
{
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    int max = arr[0];
    for (i = 1; i < n; i++) if (arr[i] > max) max = arr[i];
    printf("Maximum element = %d\n", max);
}

    return 0;
}
