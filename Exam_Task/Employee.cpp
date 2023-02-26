#include "Employee.h"

Employee::Employee(const string& name, const string& surname, const string& byFatherName, const int& age, int workExperience, const Date& dateOfEmployment, const string& assign)
	:Person(name, surname, byFatherName, age), workExperience(workExperience), dateOfEmployment(dateOfEmployment), id(++counter)
{
	setAssign(assign);
}

Employee::Employee(const Person& person, int workExperience, const Date& dateOfEmployment, const string& assign)
	:Person(person.getName(), person.getSurname(), person.getByFatherName(), person.getAge()), workExperience(workExperience), dateOfEmployment(dateOfEmployment), id(++counter)
{
	setAssign(assign);
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

string Employee::getAssign() const
{
	return assign;
}


void Employee::setAssign(const string& assign)
{
	this->assign = assign;
}

void Employee::show() const
{
	Person::show();
	cout << "Assign: " << getAssign() << endl;
	cout << "Id   : #" << getId() << endl;
	cout << "Work experience     : " << getWorkEx() << endl;
	cout << "Date of employment : ";
	dateOfEmployment.printDate();
	cout << "Salary: " << calculateSalary() << endl;
}

int Employee::calculateSalary() const
{
	return 0;
}

int Employee::counter = 0;
