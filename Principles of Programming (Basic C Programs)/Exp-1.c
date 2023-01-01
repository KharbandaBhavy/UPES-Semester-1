// Experiment-1
// Code by Bhavy Kharbanda
// Sap Id: 500082531

// Problem Statements:
// 1. Given 2 numbers. Calculate sum, difference, multiplication and division.
// 2. Given two numbers. Demonstrate the swapping of the values (i) using a third variable (ii)
// without using a third variable
// 3. Convert temperature from Celsius to Fahrenheit and Kelvin.
// 4. Print the given days in years-week-days format. E.g. 373 days = 1 year, 1 week, 1 day

// Program-1:
#include <stdio.h>
int main()
{
    int x, y;
    int sum, difference, product, division;
    printf("ENTER TWO NUMBERS: \n");
    scanf("%d  %d", &x, &y);
    sum = x + y;
    difference = x - y;
    product = x * y;
    division = x / y;

    printf("\n SUM OF NUMBERS=%d", sum);
    printf("\n DIFFERENCE OF NUMBERS=%d", difference);
    printf("\n PRODUCT OF NUMBERS=%d", product);
    printf("\n DIVISION OF NUMBERS=%d", division);
    return 0;
}

// Program-2:
#include <stdio.h>
int main()
{
    int a, b, temp;
    Printf("\n Output 2");
    Printf("\n Enter the two numbers to be swapped");
    Scanf("%d \n %d", &a, &b);
    Printf("\n  Numbers before swapping\n ");
    Printf("a=%d \n b=%d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\n Numbers after swapping");
    Printf("a=%d \n b=%d \n", a, b);
    return 0;
}

// Program-3:
#include <stdio.h>
int main()
{
    int a, b;
    Printf("\n Output 3");
    Printf("\n Enter the two numbers to be swapped");
    Scanf("% d \n % d", &a, &b);
    Printf("\n Numbers before swapping\n ");
    Printf("a = % d \n b = % d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n Numbers after swapping");
    Printf("a = % d \n b = % d \n", a, b);
    return 0;
}

// Program-4:
#include <stdio.h>
void main()
{
    double celsius, fahrenheit, kelvin;
    printf("\n Enter the Temparature in Celsius : ");
    scanf("%lf", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273;
    printf("\n Temperature in Fahrenheit : %lf", fahrenheit);
    printf("\n Temperature in kelvin :  %lf", kelvin);
    return 0;
}

// Program-5:
#include <stdio.h>
int main()
{
    int years, weeks, days = 0;
    printf("\n Enter number of days to be converted");
    scanf("\n % d", &days);
    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));
    printf("\n Years: %d", years);
    printf("\n Weeks: % d", weeks);
    printf("\n Days: % d", days);
    return 0;
}
