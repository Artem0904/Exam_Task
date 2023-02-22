#include "FullTimeWorker.h"

FullTimeWorker::FullTimeWorker(const string& name, const string& surname, const string& byFatherName, const int& age, int workExperience, const Date& dateOfEmployment)
	:Employee(name, surname, byFatherName, age, workExperience, dateOfEmployment)
{
}

FullTimeWorker::FullTimeWorker(const Person& person, int workExperience, const Date& dateOfEmployment)
	:Employee(person, workExperience, dateOfEmployment)
{
}

FullTimeWorker::FullTimeWorker(const Employee& employee)
	:Employee(employee.getName(), employee.getSurname(), employee.getByFatherName(), employee.getAge(), employee.getWorkEx(), employee.getDateOfEmployment())
{
}

void FullTimeWorker::show() const
{
	cout << "\nFull-time worker: " << endl;
	Employee::show();
	cout << "Salary: " << calculateSalary() << endl;
}

int FullTimeWorker::calculateSalary() const
{
	return getWorkEx() * minSalary;
}
