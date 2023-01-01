// Experiment-2
// Code by Bhavy Kharbanda
// Sap Id: 500082531

// 1. Find the biggest of 3 numbers.
// 2. Check whether a given year is leap year or not.
// 3. Find the roots of a quadratic equation.
// 4. Check if a given character is a vowel or consonant using Switch-Case statement.

// Program-1:
#include <stdio.h>
int main()
{
    int A, B, C;
    printf("Enter three numbers: ");
    scanf("%d  %d  %d", &A, &B, &C);

    if (A > B)
    {
        if (A > C)
            printf("%d is the largest number.", A);
        else
            printf("%d is the largest number.", C);
    }
    else
    {
        if (B > C)
            printf("%d is the largest number.", B);
        else
            printf("%d is the largest number.", C);
    }
    return 0;
}

// Program-2:
#include <stdio.h>
int main()
{
    int year;
    printf ("\n Enter year : "); 
    scanf ("%d ", &year); 
    if (year%100==0) 
    {
            if (year % 400 == 0)
                printf("Leap year\n");
            else
                printf("Not leap\n");
    }
    else 
    {
            if (year % 4 == 0)
                printf("Leap year\n");
            else
                printf("Not leap\n"); 
    } 
    return 0;
}

// Program-3:
#include<stdio.h>
#include<math.h>
int main()
{
        int a,b,c,d;
        float x1,x2;
        printf("\n Format of quadratic equation:");
        printf("\n a*x*x+b*x+c");
        printf("\n Enter a, b, c");
        scanf("%d %d %d",&a,&b,&c);
        d=(b*b)-(4*a*c);
        if(d<0)
                printf("\n Roots are imaginary\n");
        else if(d==0)
        {
                x1=-b/(2*a);
                x2=x1;
                printf("\n Both roots are equal");
                printf("\n Roots are = %f\n" ,x1);
        }
        else
        {
                x1=(-b+sqrt(d))/(2*a);
                x2=(-b-sqrt(d))/(2*a);
                printf("\n Root 1 is = %f",x1);
                printf("\n Root 2 is = %f\n",x2);
        }
        return 0;
}

// Program-4:
#include <stdio.h>
int main()
{
    char ch;
    printf("\n Enter any alphabet: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a': 
            printf("Entered character is a Vowel");
            break;
        case 'e': 
            printf("Entered character is a Vowel ");
            break;
        case 'i': 
            printf("Entered character is a Vowel ");
            break;
        case 'o': 
            printf("Entered character is a Vowel ");
            break;
        case 'u': 
            printf("Entered character is a Vowel ");
            break;
        case 'A': 
            printf("Entered character is a Vowel ");
            break;
        case 'E': 
            printf("Entered character is a Vowel ");
            break;
        case 'I': 
            printf("Entered character is a Vowel ");
            break;
        case 'O': 
            printf("Entered character is a Vowel ");
            break;
        case 'U': 
            printf("Entered character is a Vowel ");
            break;
        default: 
            printf("Consonant");
    }
    return 0;
}

