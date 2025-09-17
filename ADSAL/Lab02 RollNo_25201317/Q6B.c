#include <stdio.h>

//6. Linear Search: b) Optimize by using sentinel method to reduce comparisons (still O(n), but fewer operations).

int main() {
    int ID[] = {101, 203, 305, 404, 502};
    int n = sizeof(ID) / sizeof(ID[0]);
    int searchID, i;

    printf("Enter Customer ID to search: ");
    scanf("%d", &searchID);

    // Store original last element
    int last = ID[n-1];
    // Place sentinel
    ID[n-1] = searchID;

    i = 0;
    while (ID[i] != searchID) {
        i++;
    }

    // Restore last element
    ID[n-1] = last;

    if (i < n-1 || ID[n-1] == searchID) {
        printf("Customer ID %d found at index %d\n", searchID, i);
    } else {
        printf("Customer ID %d not found\n", searchID);
    }

    return 0;
}
