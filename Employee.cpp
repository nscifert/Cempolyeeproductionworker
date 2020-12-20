#include "Employee.h"
#include <string>

//Constructor
Employee::Employee(string n, int num, string hDate)
{
   name = n;
   number = num;
   hireDate = hDate;
}

//Mutators

void Employee::setName(string n)
{
    name = n;
}

void Employee::setNumber(int num)
{
    number = num;
}

void Employee::setHireDate(string hDate)
{
    hireDate = hDate;
}

string Employee::getName()
{
    return name;
}

int Employee::getNumber()
{
    return number;
}

string Employee::getHireDate()
{
    return hireDate;
}
