#include "BaseEmployee.h"
#include"FullTimeWorker.h"
#include"HourlyPaidWorker.h"
#include "Lib.h"



void BaseEmployee::addNewEmployee(Employee* newEmpl)
{
	NewBase.push_back(newEmpl);
}

void BaseEmployee::addNewEmployee()
{
	cout << "Enter the name: ";
	string name, surName, byFatherName, assign;
	int age = 0, workExperience = 0, day = 0, month = 0, year = 0;
	cin >> name;
	cout << "Enter the Surname: ";
	cin >> surName;
	cout << "Enter the byFatherName: ";
	cin >> byFatherName;
	cout << "Enter the age: ";
	do
	{
		cin >> age;
		if (age < MIN_AGE || age > MAX_AGE)
		{
			cout << "Invalide age. Try again : ";
		}
	} while (age < MIN_AGE || age > MAX_AGE);
	cout << "Enter the work experience : " ;
	cin >> workExperience;
	cout << "_____ Enter a date of employement _____\n";
	cout << "Enter the day: ";
	do
	{
		cin >> day;
		if (day <= 0 || day > MAX_DAY_MONTH)
		{
			cout << "Invalide day. Try again : ";
		}
	} while (day <= 0 || day > MAX_DAY_MONTH);
	cout << "Enter the month : ";
	do
	{
		cin >> month;
		if (month <= 0 || month > MAX_MONTH)
		{
			cout << "Invalide month. Try again : ";
		}
	} while (month<= 0 || month > MAX_MONTH);
	cout << "Enter the year : ";
	cin >> year;
	Date date{ day,month,year };

	cout << "Enter the assign : " ;
	cin >> assign;

	cout << "What kind of emloyee: \n" << "1. Full time worker\n2. Huorly paid worker ... ";
	int choose = 0;
	cin >> choose;
	if (choose==1)
	{
		FullTimeWorker* tmp = new FullTimeWorker{ name,surName,byFatherName,age,workExperience,date,assign };
		NewBase.push_back(tmp);
	}
	else
	{
		int rate = 0;
		cout << "Enter the rate : " ;
		cin >> rate;
		int workingHours = 0;
		cout << "Enter the working hours : ";
		cin >> workingHours;
		HourlyPaidWorker* tmp = new HourlyPaidWorker{ name,surName,byFatherName,age,workExperience,date,assign, rate,workingHours };
		NewBase.push_back(tmp);
	}

}

void BaseEmployee::deleteEmployee(int index)
{
	NewBase.erase(NewBase.begin() + index);
}

void BaseEmployee::sortBase()
{
	sort(NewBase.begin(), NewBase.end(), [](Employee* el1, Employee* el2) {return el1->getSurname() < el2->getSurname(); });
}

//void BaseEmployee::findEmployee(string surName)
//{
//	auto it = find_if(NewBase.begin(), NewBase.end(), [&surName](Employee* el) {return el->getSurname() == surName; });
//	
//}

void BaseEmployee::showEmployes()
{
	for (auto& b : NewBase)
	{
		b->show();
		cout << endl;
	}
}

void BaseEmployee::changeAssign(int id, const string& newAssign)
{
	for (auto& i : NewBase)
	{
		if (i->getId() == id && !empty(newAssign))
		{
			i->setAssign(newAssign);
		}
	}
}

