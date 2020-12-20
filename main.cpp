//Program creates a production worker object from the employee class
//Then stores and prints on the console the employee's information
#include <iostream>
#include "ProductionWorker.h"
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    //Creates a ProductionWorker object.
    ProductionWorker employee("John Jones", 123, "01/01/2006", "Night", 2, 18.00);

    //Displays the values stored in the object.
    cout << "Name: " << employee.getName() << endl;
    cout << "Employee Number: " << employee.getNumber() << endl;
    cout << "Hire Date: " << employee.getHireDate() << endl;
    cout << "Shift: " << employee.getShift() << endl;
    cout << "Shift Number: " << employee.getShiftNumber() << endl;
    cout << "Hourly Pay Rate: " << setprecision(2) << fixed
         << employee.getHourlyPayRate() << endl;
}
