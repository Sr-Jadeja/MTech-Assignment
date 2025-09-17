#include <stdio.h>
int main() {

/*Q5. Simple Calculator (switch case)*/
{
    char op;
    double a, b, res;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers separated by space: ");
    scanf("%lf %lf", &a, &b);

    switch (op) {
        case '+':
            res = a + b;
            printf("%.2lf + %.2lf = %.2lf\n", a, b, res);
            break;

        case '-':
            res = a - b;
            printf("%.2lf - %.2lf = %.2lf\n", a, b, res);
            break;

        case '*':
            res = a * b;
            printf("%.2lf * %.2lf = %.2lf\n", a, b, res);
            break;

        case '/':
            if (b != 0)
                printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        default:
            printf("Error! Invalid operator.\n");
    }
}
    return 0;
}
