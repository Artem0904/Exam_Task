#pragma once
#include "Employee.h"
#include "Date.h"
#include "Lib.h"
#include "Person.h"
class HourlyPaidWorker :
    public Employee
{
private:
    int rate;
    int workingHours;
public:
    HourlyPaidWorker(const string& name, const string& surname, const string& byFatherName, const int& age, int workExperience, const Date& dateOfEmployment, const int& rate, const int& workingHours);
    HourlyPaidWorker(const Person& person, int workExperience, const Date& dateOfEmployment, const int& rate, const int& workingHours);
    HourlyPaidWorker(const Employee& employee, const int& rate, const int& workingHours);

    void setRate(const int& rate);
    void setHours(const int& workingHours);

    int getRate() const;
    int getHours() const;

    int calculateSalary() const override;
    void show() const override;
};

