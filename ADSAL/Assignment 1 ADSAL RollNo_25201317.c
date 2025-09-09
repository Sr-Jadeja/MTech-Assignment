#include <stdio.h>
int main() {

//Q1. Print "Hello, World!"
{
    printf("Hello, World!\n");
}
  

/*Q2. Swap Two Numbers
Scenario: A cashier mistakenly enters two values in reverse. Write a program to swap them. */
{
    int a, b, t;
    printf("Write the mistakenly enter first number: ");
    scanf("%d", &a);
    printf("Write the mistakenly enter first number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    t = a;
    a = b;
    b = t;

    printf("After swapping:  a = %d, b = %d\n", a, b);
}


/*Q3. Check Even or Odd
Scenario: A billing machine checks if a customer’s token number is even or odd.*/
{
    int num;
    printf("Enter token number: ");

    scanf("%d", &num);

        if (num % 2 == 0) {
        printf("Token number %d is EVEN.\n", num);
        } 
        else {
        printf("Token number %d is ODD.\n", num);
        }
}


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


/*Q6. Factorial of a Number*/
{
    int n, i;
    int f = 1;  

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else {
        for (i = 1; i <= n; i++) {
            f *= i;
        }
    printf("Factorial of %d is %d\n", n, f);
    }
}


/*Q7. Fibonacci Series (first n terms)*/
{
    int n, i;
    int t1 = 0, t2 = 1, nxt;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", t1);
        nxt = t1 + t2;
        t1 = t2;
        t2 = nxt;
}


/*Q8. Reverse a Number*/
{
    int num, rev = 0, rmd;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rmd = num % 10;                 // get last digit
        rev = rev * 10 + rmd; // build reversed number
        num = num / 10;                       // remove last digit
    }

    printf("Reversed number = %d\n", rev);
}


/*Q9. Palindrome Number Check
Scenario: ATM checks if PIN entered forward = reverse.*/
{
    int num, original, rev = 0, rmd;

    printf("Enter a PIN number: ");
    scanf("%d", &num);

    original = num; 

    while (num != 0) {
        rmd = num % 10;
        rev = rev * 10 + rmd;
        num = num / 10;
    }

    if (original == rev)
        printf("PIN number %d is a Palindrome number.\n", original);
    else
        printf("PIN number %d is NOT a Palindrome number.\n", original);
}


/* Q10. Count Digits in a Number */
{
    int num, ans = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    if (temp == 0) ans = 1;
    while (temp != 0) {
        temp /= 10;
        ans++;
    }
    printf("Number of digits = %d\n", ans);
}


/* Q11. Sum of Digits */
{
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("Sum of digits = %d\n", sum);
}


/* Q12. Check Prime Number */
{
    int n, i, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) flag = 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag) printf("%d is Prime\n", n);
    else printf("%d is Not Prime\n", n);
}


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


/* Q14. String – Count Vowels */
{
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            count++;
    }
    printf("Number of vowels = %d\n", count);
}


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


/* Q16. Factorial using Recursion 
Problem: Write a recursive function to calculate the factorial of a given number.*/
int fact(int n) 
{
    if (n == 0 || n == 1) return 1;
    else return n * fact(n - 1);
}
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d\n", n, fact(n));
}

/* Q17. Fibonacci Series using Recursion 
Problem: Print the first n Fibonacci numbers using recursion.*/
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}
{
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) printf("%d ", fib(i));
}


/* Q18. GCD (Greatest Common Divisor) using Recursion 
Scenario: A system needs to simplify fractions, so GCD of two numbers is required.*/
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD = %d\n", gcd(a, b));
}


/* Q19. Sum of Digits using Recursion 
Problem: Find the sum of digits of a number using recursion.*/
int sumDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits = %d\n", sumDigits(n));
}


/* Q20. Recursive Binary Search 
Scenario: A library system searches for a book ID in a sorted array of IDs. Implement binary
search using recursion.*/
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == key) return mid;
    else if (key < arr[mid]) return binarySearch(arr, low, mid - 1, key);
    else return binarySearch(arr, mid + 1, high, key);
}
{
    int n, i, key;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1) printf("Element found at index %d\n", result);
    else printf("Element not found\n");
}


    return 0;
}
}