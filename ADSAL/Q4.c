#include <stdio.h>
int main() {

/*Q4. Find Largest of Three Numbers*/
{
    int a;
    printf("Enter number1: ");
    scanf("%d", &a);
    int b;
    printf("Enter number2: ");
    scanf("%d", &b);    
    int c;
    printf("Enter number3: ");
    scanf("%d", &c);
    
    if (a==b && b==c){
        printf("All Three Numbers are equal");
    }
    else if (a>=b && a>=c){
        printf("numner1 %d is Largest of Three Numbers.\n", a);
    }
    else if (b>=a && b>=c){
        printf("numner2 %d is Largest of Three Numbers.\n", b);
    }
    else {
        printf("numner3 %d is Largest of Three Numbers.\n", c);
    }
}

    return 0;
}
