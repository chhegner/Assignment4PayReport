#pragma once

#include <iostream>
#include <conio.h>

struct Employee {
    int ID;
    std::string FirstName;
    std::string LastName;
    float HoursWorked;
    float HourlyRate;
};

Employee *GetEmployeeInfo(int i, int employeeCount)
{
    Employee *eInfo = new Employee;
    std::cout << "Enter the ID for Employee " << i + 1 << ": ";
    std::cin >> eInfo->ID;
    std::cout << "Enter the First Name for Employee " << i + 1 << ": ";
    std::cin >> eInfo->FirstName;
    std::cout << "Enter the Last Name for Employee " << i + 1 << ": ";
    std::cin >> eInfo->LastName;
    std::cout << "Enter the Hours Worked for Employee " << i + 1 << ": ";
    std::cin >> eInfo->HoursWorked;
    std::cout << "Enter the Hourly Rate for Employee " << i + 1 << ": ";
    std::cin >> eInfo->HourlyRate;

    eInfo[employeeCount] = *GetEmployeeInfo(i, employeeCount);
    return eInfo;
}

std::string Output(Employee *eInfo)
{
    std::cout << eInfo->ID << ". " << eInfo->FirstName << " " << eInfo->LastName << ": " << (eInfo->HoursWorked * eInfo->HourlyRate);
    return 0;
}
