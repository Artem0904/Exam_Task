#include "Person.h"

Person::Person(const string& name, const string& surname, const string& byFatherName, const int& age)
{
	setName(name);
	setsurname(surname);
	setByFatherName(byFatherName);
	setAge(age);

}

string Person::getName() const
{
	return name;
}

string Person::getSurname() const
{
	return surname;
}

string Person::getByFatherName() const
{
	return byFatherName;
}

int Person::getAge() const
{
	return age;
}

void Person::setName(const string& name)
{
	if (!empty(name))
		this->name = name;
	else
		cerr << "Error : name is empty!\n";
}

void Person::setsurname(const string& surname)
{
	if (!empty(surname))
		this->surname = surname;
	else
		cerr << "Error : name is empty!\n";
}

void Person::setByFatherName(const string& byFatherName)
{
	if (!empty(byFatherName))
		this->byFatherName = byFatherName;
	else
		cerr << "Error : name is empty!\n";
}

void Person::setAge(const int& age)
{
	if (age >= 0 && age <= maxAge)
		this->age = age;
	else
		cerr << "Error : age >= 0 or age <= maxAge\n";
}

void Person::show() const
{
	cout << name << "  " << surname << "  " << byFatherName << endl;
	cout << "Age  : " << age << endl;
}
