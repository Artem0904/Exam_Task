

#include "Lib.h"
#include "Person.h"
#include "Employee.h"

int main()
{
	Person p{ "Victor", "Victorski", "Victorovich", 15 };
	p.show();
	cout << endl << endl << endl;
	
	//Employee empl{ "Victor", "Victorski", "Victorovich", 20, 15, {15, 9, 2013} };
	Employee empl{p, 15, {15, 9, 2013} };
	empl.show();
}