// Experiment-5
// Code by Bhavy Kharbanda
// Sap Id: 500082531

// 1.	Find sum of all array elements using recursion.
// 2.	 Create an array ‘a1’ with ‘n’ elements. Insert an element in ith position of ‘a1’ and also delete an element from jth position of ‘a1’.
// 3.	 Convert uppercase string to lowercase using for loop.

// Program-1:
#include <stdio.h>
int sum(int arr[], int N)
{
    int sum = 0;
    for (int j = 0; j < N; j++)
        sum = sum + arr[j];
    return sum;
}

int main()
{
    int arr[50], N, sumarray;
    printf("\n Enter size of array (max 50)");
    scanf("%d", &N);
    printf("\n Enter elements of array");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    sumarray = sum(arr, N);
    printf("\n Sum of array = %d \n", sumarray);
    return 0;
}

// Program-2:
#include <stdio.h>
int main()
{
    int a1[20], size, i, position, value, pos2;
    printf("\n Enter size of array");
    scanf("%d", &size);
    printf("\n Enter Elements of array");
    for (i = 0; i < size; i++)
        scanf("%d", &a1[i]);
    printf("\n Enter the location where the element is inserted");
    scanf("%d", &position);
    printf("\n Enter the value to be inserted");
    scanf("%d", &value);
    for (i = size - 1; i >= position - 1; i--)
        a1[i + 1] = a1[i];
    a1[position - 1] = value;
    printf("\n Resultant array is \n");
    for (i = 0; i <= size; i++)
        printf("%d ", a1[i]);
    printf("\n");

    printf("\n Enter location of element to be deleted");
    scanf("%d", &pos2);
    for (i = pos2 - 1; i < size; i++)
        a1[i] = a1[i + 1];
    printf("\n Resultant array is:");
    for (i = 0; i < size; i++)
        printf("\n %d", a1[i]);
    printf("\n");
    return 0;
}

// Program-3:
#include <stdio.h>
int main()
{
    char str[100];
    printf("\n Enter a string in Uppercase Alphabets:");
    fgets(str, 100, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("\n String in Lowercase Alphabets is: %s \n", str);
    return 0;
}
