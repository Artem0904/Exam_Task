#pragma once
#include "Employee.h"
#include <deque>
class BaseEmployee
{
public:
    BaseEmployee() = default;
    void addNewEmployee(Employee * newEmpl);
    void addNewEmployee();
    void deleteEmployee(int counter);
    void sortBase();
    //void findEmployee(string surName);
    void showEmployes();
    void changeAssign(int id, const string& newAssign);
  
    int getSize() const;

private:
    deque <Employee*> NewBase;
    const int MAX_AGE = 60;
    const int MIN_AGE = 18;
    const int MAX_DAY_MONTH = 31;
    const int MAX_MONTH = 12;
};

