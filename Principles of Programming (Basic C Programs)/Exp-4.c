// Experiment-4
// Code by Bhavy Kharbanda
// Sap Id: 500082531

// 1.	Function main() gets a number and calls the following three functions:
// a.) “void armstrong(int)”checks if the given number is an Armstrong number or not.
// b.) “void coprime(int) reverses the given number and checks if the given number and reversed number are coprime.
// c.) “int factorial(int) computes the factorial of the given number using recursion and returns to main().

// 2. Function main() gets two numbers from the user and calls three functions in the given order:
// a.) “int triangle_area(int base, int height)” returns the area of the right-angled triangle to main().
// b.) “void swap(int *, int*)” swaps the two numbers using bitwise operator and displays them.
// c.) “float* remainder (int a, int b)” returns the remainder of a/b to main().

// Program-1:
#include <stdio.h>
#include <math.h>
int armstrong(int n) // FUNCTION 1
{
    int flag, num, m, result = 0;
    num = n;
    while (num)
    {
        m = num % 10;
        result = result + pow(m, 3);
        num = num / 10;
    }
    if (result == n)
        flag = 1;
    else
        flag = 0;
    return flag;
}
void coprime(int k) // FUNCTION 2
{
    int number, rev, remainder, hcf;
    number = k;
    while (k != 0)
    {
        remainder = k % 10;
        rev = rev * 10 + remainder;
        k = k / 10;
    }
    for (int i = 1; i <= number && i <= rev; ++i)
    {
        if (number % i == 0 && rev % i == 0)
            hcf = i;
    }
    if (hcf == 1)
        printf("\n Given number and its reverse are coprimes \n");
    else
        printf("\n Given number and its reverse are not coprimes \n");
}

int factorial(int n) // FUNCTION 3
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}
int main()
{
    int n, flag, k, p;
    printf("\n Enter a number to be checked");
    scanf("%d", &n);
    flag = armstrong(n);
    if (flag == 1)
        printf("\n Armstrong number\n");
    else
        printf("\n Not an Armstrong number \n");

    printf("\n Enter a number to check whether it is coprime with its reverse");
    scanf("%d", &k);
    coprime(k);

    printf("\n Enter a number to get its factorial");
    scanf("%d", &p);
    int result = factorial(p);
    printf("\n Factorial is = %d", result);
    return 0;
}

// Program-2:
#include <stdio.h>
#include <math.h>
int triangle_area(int base, int height) // FUNCTION 1
{
    int area = 0;
    area = 0.5 * base * height;
    return area;
}
void swap(int *a, int *b) // FUNCTION 2
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

float *rmainder(int a, int b) // FUNCTION 3
{
    float rem = a % b;
    float *t = &rem;
    return t;
}
int main()
{
    int base, height, result = 0;
    printf("\n Enter base and height for area of triangle");
    scanf("%d %d", &base, &height);
    result = triangle_area(base, height);
    printf("\n Area of Triangle = %d \n", result);

    int num1, num2;
    printf("\n Enter two numbers to be swapped");
    scanf("%d %d", &num1, &num2);
    printf("\n Numbers before swapping num1=%d and num2=%d", num1, num2);
    swap(&num1, &num2);
    printf("\n Numbers after swapping num1=%d and num2=%d\n ", num1, num2);
    int a, b;
    printf("\n Enter two numbers");
    scanf("%d  %d", &a, &b);
    printf("\n Remainder of a/b is = %.2f \n", *rmainder(a, b));
    return 0;
}
