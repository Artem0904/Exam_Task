#include "Employee.h"

Employee::Employee(const string& name, const string& surname, const string& byFatherName, const int& age, int workExperience, const Date& dateOfEmployment)
	:Person(name, surname, byFatherName, age), workExperience(workExperience), dateOfEmployment(dateOfEmployment), id(++counter)
{
}

Employee::Employee(const Person& person, int workExperience, const Date& dateOfEmployment)
	:Person(person.getName(), person.getSurname(), person.getByFatherName(), person.getAge()), workExperience(workExperience), dateOfEmployment(dateOfEmployment), id(++counter)
{
}

int Employee::getId() const
{
	return id;
}

int Employee::getWorkEx() const
{
	return workExperience;
}

Date Employee::getDateOfEmployment() const
{
	return dateOfEmployment;
}

void Employee::show() const
{
	Person::show();
	cout << "Id   : #" << getId() << endl;
	cout << "Work experience     : " << getWorkEx() << endl;
	cout << "Date of employment : ";
	dateOfEmployment.printDate();
}

int Employee::calculateSalary() const
{
	return 0;
}

int Employee::counter = 0;
