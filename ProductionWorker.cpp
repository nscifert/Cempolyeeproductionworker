#include "ProductionWorker.h"
#include <string>
#include "Employee.h"
using namespace std;



//Mutators
void ProductionWorker::setShift(string s)
{
    shift = s;
}

void ProductionWorker::setShiftNumber(int shNum)
{
    shiftNumber =  shNum;
}

void ProductionWorker::setHourlyPayRate(double hPR)
{
    hourlyPayRate = hPR;
}

//Accessors
string ProductionWorker::getShift()
{
    return shift;
}

int ProductionWorker::getShiftNumber()
{
    return shiftNumber;
}


double ProductionWorker::getHourlyPayRate()
{
    return hourlyPayRate;
}

