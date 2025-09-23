/*Q6) Define a structure Book with fields title, author, and price. Input details for n books and
then display all books whose price is above a given value.*/


#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    struct Book { char title[50], author[50]; float price; } books[100];
    int n;
    float val;
    printf("Enter number of books: "); scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("Enter title, author, price of Book %d : ", i+1);
        scanf("%s %s %f", books[i].title, books[i].author, &books[i].price);

    }
    printf("Enter price threshold: "); scanf("%f",&val);
    printf("Books above %.2f:\n", val);
    for(int i=0;i<n;i++)
        if(books[i].price > val)
            printf("%s %s %.2f\n", books[i].title, books[i].author, books[i].price);
    return 0;
}
