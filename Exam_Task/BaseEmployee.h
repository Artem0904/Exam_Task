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


private:
    deque <Employee*> NewBase;

};

