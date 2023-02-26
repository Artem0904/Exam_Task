#include "FullTimeWorker.h"

FullTimeWorker::FullTimeWorker(const string& name, const string& surname, const string& byFatherName, const int& age, int workExperience, const Date& dateOfEmployment, const string& assign)
	:Employee(name, surname, byFatherName, age, workExperience, dateOfEmployment, assign)
{
}

FullTimeWorker::FullTimeWorker(const Person& person, int workExperience, const Date& dateOfEmployment, const string& assign)
	:Employee(person, workExperience, dateOfEmployment, assign)
{
}

FullTimeWorker::FullTimeWorker(const Employee& employee)
	:Employee(employee.getName(), employee.getSurname(), employee.getByFatherName(), employee.getAge(), employee.getWorkEx(), employee.getDateOfEmployment(), employee.getAssign())
{
}

void FullTimeWorker::show() const
{
	cout << "\nFull-time worker: " << endl;
	Employee::show();
}

int FullTimeWorker::calculateSalary() const
{
	return getWorkEx() * minSalary;
}
