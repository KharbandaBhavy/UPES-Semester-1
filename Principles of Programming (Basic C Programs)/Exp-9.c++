// Experiment-9
// Code by Bhavy Kharbanda
// Sap Id: 500082531

// Design, develop, and execute a program in C++ based on the following requirements: An EMPLOYEE class is to contain the following data members and member functions.

// Program-1:
#include <stdio.h>
#include <iostream>
class Employee
{
private:
    int Empno;
    char Empname[20];
    float Basicsalary;
    float Allowance;
    float Tax;
    float Netsalary;

public:
    void getData();
    int calcNetSalary();
    void dispData();
};
void Employee::getData()
{
    printf("\n Enter name of emplyee:");
    scanf("%s", &Empname);
    printf("\n Enter number of employee:");
    scanf("%d", &Empno);
    printf("\n Enter Basicsalary of employee:");
    scanf("%f", &Basicsalary);
}

int Employee::calcNetSalary()
{
    Allowance = 1.23 * Basicsalary;
    Tax = 0.3 * Basicsalary;
    Netsalary = Basicsalary + Allowance - Tax;
}

void Employee::dispData()
{
    printf("\n Number of employee is: %d", Empno);
    printf("\n Name of employee is: %s", Empname);
    printf("\n Net salary of employee: %f", Netsalary);
}
int main()
{
    Employee E1;
    E1.getData();
    E1.calcNetSalary();
    E1.dispData();
    return 0;
}
