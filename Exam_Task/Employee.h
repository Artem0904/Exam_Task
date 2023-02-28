#pragma once
#include"Lib.h"
#include"Person.h"
#include"Date.h"
class Employee :
    public Person
{
public:
    Employee(const string& name, const string& surname, const string& byFatherName, const int& age, int workExperience, const Date& dateOfEmployment, const string& assign);
    Employee(const Person& person, int workExperience, const Date& dateOfEmployment, const string& assign);
    
    int getId() const;
    int getWorkEx() const;
    Date getDateOfEmployment() const;
    string getAssign() const;

    void setAssign(const string& assign);
    virtual void show() const;
    virtual int calculateSalary() const;

    string getDateOfEmploymentString() const;

private:
    int id;
    int workExperience; //стаж
    Date dateOfEmployment; //дата прийому на роботу
    static int counter;
    string assign;
};

