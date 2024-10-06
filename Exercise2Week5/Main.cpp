#include <iostream>
#include <conio.h>

#include "Employee.h"
using namespace std;

int main()
{
    int employeeCount;
    cout << "Enter the number of employees: \n";
    cin >> employeeCount;

    Employee* eInfo = new Employee[employeeCount];

    for (int i = 0; i < employeeCount; i++)
    {
        GetEmployeeInfo(i, employeeCount);
    }
    eInfo[employeeCount] = GetEmployeeInfo(i, employeeCount);

    std::cout << "\nPay Report\n----------\n";

    for (int print = 0; print < employeeCount; print++)
    {
        cout << Output(eInfo);
    }

    delete[] eInfo;
    (void)_getch();
    return 0;
}