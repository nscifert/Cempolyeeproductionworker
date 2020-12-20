#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"
#include <string>
using namespace std;

class ProductionWorker: public Empolyee
{
private:
    string shift;
    int shiftNumber;
    double hourlyPayRate;
public:
    //Constructor
    ProductionWorker(string name, int number, string hireDate,
                     string s, int shNumber, double hPR) : Empolyee(
                     name, number, hireDate)
{
    shift = s;
    shiftNumber = shNumber;
    hourlyPayRate = hPR;
}

    //Mutators
    void setShift(string);
    void setShiftNumber(int);
    void setHourlyPayRate(double);

    //Accessors
    string getShift();
    int getShiftNumber();
    double getHourlyPayRate();
};

#endif // PRODUCTIONWORKER_H
