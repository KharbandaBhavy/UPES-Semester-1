// Experiment-6
// Code by Bhavy Kharbanda
// Sap Id: 500082531

// 1. Find the sum of rows and columns of matrix of given order.
// 2. Count how many even numbers are there in a given integer array. [Hint: Linear Search]
// 3. Store ‘n’ integers in an array in ascending or descending order. Search for a number with binary search technique.

// Program-1:
#include <stdio.h>
int main()
{
    int array[10][10];
    int i, j, m, n, sum = 0;
    printf("\n Enter the number of rows and columns in array");
    scanf("%d %d", &m, &n);
    printf("\n Enter the elements of 2D array");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum += array[i][j];
        }
        printf(" Sum of the %d row is = %d\n", i, sum);
        sum = 0;
    }
    sum = 0;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            sum += array[i][j];
        }
        printf(" Sum of the %d column is = %d\n", j, sum);
        sum = 0;
    }
    return 0;
}

// Program-2:
#include <stdio.h>
int main()
{
    int i, n, count = 0, array[50];
    printf("\n Enter number of elements in array");
    scanf("%d", &n);
    printf("\n Enter the elements of array");
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
            count++;
    }
    printf("\n Number of even integers are : %d\n", count);
    return 0;
}

// Program-3:
#include <stdio.h>
int main()
{
    int i, first, last, mid, n, search, array[50];
    printf("\n Enter number of elements in array");
    scanf("%d", &n);
    printf("\n Enter the elements of array");
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    printf("\n Enter value to find in array");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    mid = (first + last) / 2;
    while (first <= last)
    {
        if (array[mid] < search)
            first = mid + 1;
        else if (array[mid] == search)
        {
            printf("\n Element found at location %d: ", mid + 1);
            break;
        }
        else
            last = mid - 1;
        mid = (first + last) / 2;
    }
    return 0;
}
