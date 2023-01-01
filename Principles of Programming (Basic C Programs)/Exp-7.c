// Experiment-7
// Code by Bhavy Kharbanda
// Sap Id: 500082531

// 1.	Design a structure ‘product’ to store the details of the product purchased like product name, price per unit, number of quantities purchased, and amount spent. Get the name, price per unit, and number of quantities purchased. Calculate the amount spent on the product and then display all the details of the procured product using structure pointers.
// 2.	Add two complex numbers by passing structure to a function as argument.
// 3.	Design a structure ‘student_record’ to store the students’ details like name, SAP ID, enrolment number, date of birth. The element date of birth is defined using another structure ‘date’ to store date details like day, month, year. Get data of ‘n’ students and then print the entered values.
// [Hint: Use concept of Nested structures and array of structures]

// Program-1:
#include <stdio.h>
struct product
{
    char name[40];
    float price;
    int quantity;
    float spent;
};

void main()
{
    struct product p1;
    printf("\n Enter the details of the product");
    printf("\n Enter name of product");
    fgets(p1.name, 40, stdin);
    printf("\n Enter price per unit of the product");
    scanf("%f", &p1.price);
    printf("\n Enter number of quantity purchased");
    scanf("%d", &p1.quantity);
    p1.spent = p1.quantity * p1.price;
    printf("\n Details of product are");
    printf("\n Name is %s", p1.name);
    printf("\n price per unit is %f", p1.price);
    printf("\n Quantity purchased %d", p1.quantity);
    printf("\n Money spent %f \n", p1.spent);
}

// Program-2:
#include <stdio.h>

struct Complex
{
    float real;
    float image;
};
struct Complex Add(struct Complex c1, struct Complex c2)
{
    struct Complex c;
    c.real = c1.real + c2.real;
    c.image = c1.image + c2.image;
    return c;
};

void main()
{
    struct Complex c1, c2, c;
    printf("\n Enter the Complex numbers:");
    printf("\n Enter the First number:");
    scanf("%f %f", &c1.real, &c1.image);
    printf("\n Enter the second number:");
    scanf("%f %f", &c2.real, &c2.image);
    c = Add(c1, c2);
    printf("\n Sum of two complex numbers is: %f %fi \n", c.real, c.image);
}

// Program-3:
#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
struct student_record
{
    char name[50];
    int en_no;
    long int sapid;
    struct date birth;
};
void main()
{
    struct student_record stu[100];
    int i, n;
    printf(" \n Enter number of students:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\n Enter details of student %d :", i);
        printf("\n Enter name: ");
        scanf("%s", &stu[i].name);
        printf("\n Enter enrolment number:");
        scanf("%d", &stu[i].en_no);
        printf("\n Enter sap id:");
        scanf("%ld", &stu[i].sapid);
        printf("\n Enter date of birth (dd-mm-yyyy) format:");
         scanf("%d %d %d",&stu[i].birth.day, &stu[i].birth.month, &stu[i].birth.year);
    }
    for (i = 1; i <= n; i++)
    {
         printf("\n Details of student %d are:", i);
         printf("\n Name of student: %s", stu[i].name);
         printf("\n Enrollment number: %d", stu[i].en_no);
         printf("\n Sap id of student: %ld", stu[i].sapid);
         printf("\n Date of birth of student:");
         printf("%d%d%d", stu[i].birth.day, stu[i].birth.month, stu[i].birth.year);
         printf("\n");
    }
}
