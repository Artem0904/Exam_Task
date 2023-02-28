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
	cout << "Enter the name: " << endl;
	string name, surName, byFatherName, assign;
	int age = 0, workExperience = 0, day = 0, month = 0, year = 0;
	cin >> name;
	cout << "Enter the Surname: " << endl;
	cin >> surName;
	cout << "Enter the byFatherName: " << endl;
	cin >> byFatherName;
	cout << "Enter the age: " << endl;
	do
	{
	cin >> age;
	if (age < 18 || age>60)
	{
		cout << "Invalide age. Try again. " << endl;
	}
	} while (age<18||age>60);
	cout << "Enter the work experience: " << endl;
	cin >> workExperience;
	cout << "Enter the day: " << endl;
	do
	{
	cin >> day;
	if (day < 1 || day>31)
	{
		cout << "Invalide day. Try again. " << endl;
	}
	} while (day<1||day>31);
	cout << "Enter the month:" << endl;
	do
	{
	cin >> month;
	if (month < 1 || month>12)
	{
		cout << "Invalide month. Try again. " << endl;
	}

	} while (month<1||month>12);
	cout << "Enter the year:" << endl;
	cin >> year;
	Date date{ day,month,year };
	cout << "Enter the assign: " << endl;
	cin >> assign;
	cout << "What kind of emloyee: \n" << "1. Full time worker\n2. Huorly paid worker" << endl;
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
		cout << "Enter the rate: " << endl;
		cin >> rate;
		int workingHours = 0;
		cout << "Enter the working hours: " << endl;
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

