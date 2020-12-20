#ifndef EMPOLYEE_H
#define EMPOLYEE_H
#include <string>
using namespace std;

class Empolyee
{
   private:
       string name;
       int number;
       string hireDate;
   public:
   Empolyee(string name, int number, string hireDate);    //Constructor

   //Mutators
   void setName(string name);
   void setNumber (int number);
   void setHireDate (string hireDate);

   //Accessors
   string getName();
   int getNumber();
   string getHireDate();
};

#endif // EMPOLYEE_H
