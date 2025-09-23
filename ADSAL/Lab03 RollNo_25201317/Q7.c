/*Q7) Define a structure Date with fields day, month, and year. Write a program to input two dates
and determine which date is earlier.*/

#include <stdio.h>

int main() {
    struct Date { int day, month, year; } d1, d2;
    printf("Enter date1 (dd mm yyyy): "); scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
    printf("Enter date2 (dd mm yyyy): "); scanf("%d %d %d",&d2.day,&d2.month,&d2.year);
    if(d1.year<d2.year || (d1.year==d2.year && d1.month<d2.month) || 
       (d1.year==d2.year && d1.month==d2.month && d1.day<d2.day))
        printf("Date1 is earlier\n");
    else
        printf("Date2 is earlier\n");
    return 0;
}
