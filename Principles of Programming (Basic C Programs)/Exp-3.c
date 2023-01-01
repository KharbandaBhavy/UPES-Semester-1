// Experiment-3
// Code by Bhavy Kharbanda
// Sap Id: 500082531

// 1. Given positive number ‘n’, generate all the Armstrong numbers between 1 and n.[Hint: A 3- digit number (Ex. 153) is an Armstrong number if the sum of cube of each digit (1^3+5^3+3^3) is equal to 153]
// 2. Multiply two given numbers without using the arithmetic binary multiplication operator, using for loop.
// 3. Find the sum of digits of a number using while loop.
// 4. Given value of ‘n’, find the sum of the series 1+ 1/2 + 1/3 + 1/4 + 1/5 + …+ 1/n.
// 5. Print the given pattern using nested for loop.
// 11111
// 22222
// 33333
// 44444
// 55555

// Program-1:
#include <math.h>
#include <stdio.h>
int main()
{
    int input, num, count = 1, rem, sum;
    printf("\n Enter a number");
    scanf("%d", &input);
    while (count <= input)
    {
        num = count;
        sum = 0;
        while (num)
        {
            rem = num % 10;
            sum = sum + pow(rem, 3);
            num = num / 10;
        }
        if (count == sum)
        {
            printf("\n %d is an Armstrong Number\n", count);
        }
        count++;
    }
    return 0;
}

// Program-2:
#include <stdio.h>
int main()
{
    int x, y, result = 0;
    Printf("\n Enter two numbers to be multiplied");
    Scanf("% d % d", &x, &y);
    for (int i = 0; i < y; i++)
    {
        result = result + x;
    }
    Printf("\n Multiplied result is = % d", result);
    return 0;
}

// Program-3:
#include <stdio.h>
int main()
{
    int n, m, sum = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    printf("Sum is=%d", sum);
    return 0;
}

// Program-4:
#include <stdio.h>
int main()
{
    int n;
    double i, sum = 0;
    printf("\n Enter n for sum of series 1+ 1/2 + 1/3 + 1/4 + 1/5 + …+ 1/n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + 1 / i;
    }
    Printf("\n Sum of series is = %lf", sum);
    return 0;
}

// Program-5:
#include <stdio.h>
int main()
{
    int i, j;
    printf("\n the given pattern is: \n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
