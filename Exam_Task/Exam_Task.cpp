#include "FullTimeWorker.h"
#include "HourlyPaidWorker.h"
#include "Lib.h"
#include "Person.h"
#include "Employee.h"

int main()
{
	Person p{ "Victor", "Victorski", "Victorovich", 15 };
	p.show();
	
	Employee empl{ "Ivan", "Ivanov", "Ivanovich", 20, 15, {15, 9, 2013}, "Team lead"};

	HourlyPaidWorker workerH{ empl, 500, 160 };
	workerH.show();

	FullTimeWorker workerF{ "Olga", "Boyko", "Vasylivna", 25, 3, {22, 10, 2022}, "Designer"};
	workerF.show();
}