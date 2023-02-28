#pragma once
#include"Lib.h"
class Person
{
public:
	Person() = default;
  Person(const string& name, const string& surname, const string& byFatherName, const int& age);


	string getName() const;
	string getSurname() const;
	string getByFatherName() const;
	int getAge()const;

	void setName(const string& name);
	void setsurname(const string& surname);
	void setByFatherName(const string& byFatherName);
	void setAge(const int& age);

	void show() const;
	const static int maxAge = 100;
private:
	int age;
	string name;
	string surname;
	string byFatherName;
};

