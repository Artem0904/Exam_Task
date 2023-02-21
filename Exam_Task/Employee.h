#pragma once
#include"Lib.h"
#include"Person.h"
#include"Date.h"
class Employee :
    public Person
{
public:
    Employee(const string& name, const string& surname, const string& byFatherName, const int& age, int workExperience, const Date& dateOfEmployment);
    Employee(const Person& person, int workExperience, const Date& dateOfEmployment);
    
    int getId() const;
    int getWorkEx() const;
    Date getDateOfEmployment() const;

    void show() const;
    
private:
    int id;
    int workExperience; //стаж
    Date dateOfEmployment; //дата прийому на роботу
    static int counter;

};

