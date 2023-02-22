#pragma once
#include "Employee.h"
#include "Lib.h"
#include "Date.h"
#include "Person.h"
class FullTimeWorker :
    public Employee
{
public:
    const int minSalary = 6500;

    FullTimeWorker(const string& name, const string& surname, const string& byFatherName, const int& age, int workExperience, const Date& dateOfEmployment);
    FullTimeWorker(const Person& person, int workExperience, const Date& dateOfEmployment);
    FullTimeWorker(const Employee& employee);

    void show()const override;
    int calculateSalary() const override;
};

