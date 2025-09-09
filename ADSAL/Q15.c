#include <stdio.h>
int main() {

/* Q15. Scenario – Electricity Bill Calculation 
Scenario: A company charges electricity bill as:
• For first 100 units: ₹5/unit
• Next 100 units: ₹7/unit
• Above 200 units: ₹10/unit*/
{
    int u;
    float bill = 0;
    printf("Enter units consumed: ");
    scanf("%d", &u);
    if (u <= 100) bill = u * 5;
    else if (u <= 200) bill = 100 * 5 + (u - 100) * 7;
    else bill = 100 * 5 + 100 * 7 + (u - 200) * 10;
    printf("Electricity Bill = ₹%.2f\n", bill);

}

    return 0;
}
