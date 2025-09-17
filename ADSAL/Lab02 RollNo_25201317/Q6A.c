#include <stdio.h>

//6. Linear Search: a) Implement basic linear search (O(n), O(1)).

int main() {
    int ID[] = {101, 203, 305, 404, 502};
    int n = sizeof(ID) / sizeof(ID[0]);
    int searchID, i, found = 0;

    printf("Enter Customer ID to search: ");
    scanf("%d", &searchID);

    for (i = 0; i < n; i++) {
        if (ID[i] == searchID) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Customer ID %d found at index %d", searchID, i);
    } else {
        printf("Customer ID %d not found", searchID);
    }

    return 0;
}
