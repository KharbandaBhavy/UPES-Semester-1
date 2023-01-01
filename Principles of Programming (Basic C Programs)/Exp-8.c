// Experiment-8
// Code by Bhavy Kharbanda
// Sap Id: 500082531

// Design a structure ‘subject’ to store the details of the subject like subject name and subject code. Using structure pointer, allocate memory for the structure dynamically so as to obtain details of ‘n’ subjects using for loop.

// Program-1:
#include <stdio.h>
#include <stdlib.h>

struct subject
{
    int code;
    char name[40];
};

void main()
{
    int i, n;
    struct subject *ptr;
    printf("\n Enter the number of records: ");
    scanf(" %d", &n);

    ptr = (struct subject *)malloc(n * sizeof(struct subject));
    if (ptr == NULL)
    {
        printf("\n Memory not available for allocation");
        return;
    }
    printf("\n Enter the details of subjects: ");
    for (i = 0; i < n; i++)
    {
        printf("\n Enter the code: ");
        scanf("%d", &(ptr + i)->code);
        printf("\n Enter the name of subject: ");
        scanf("%s", &(ptr + i)->name);
    }

    printf("\n Details of subjects are: ");

    for (i = 0; i < n; i++)
        printf("\n Code: %d  \n Name: %s", (ptr + i)->code, (ptr + i)->name);
}
