#include "FullTimeWorker.h"
#include "HourlyPaidWorker.h"
#include "Lib.h"
#include "Person.h"
#include "Employee.h"
#include"BaseEmployee.h"

int main()
{
	//Person p{ "Victor", "Victorski", "Victorovich", 15 };
	////p.show();

	//Employee empl{ "Ivan", "Ivanov", "Ivanovich", 20, 15, {15, 9, 2013}, "Team lead" };

	//HourlyPaidWorker workerH{ empl, 500, 160 };
	////workerH.show();

	//FullTimeWorker workerF{ "Olga", "Boyko", "Vasylivna", 25, 3, {22, 10, 2022}, "Designer" };
	////workerF.show();

	////Ñïðîáà ñòâîðèòè íîâîãî ðîá³òíèêà

	//BaseEmployee base{};
	///*base.addNewEmployee(&workerF);
	//base.addNewEmployee(&workerH);
	//base.addNewEmployee(&empl);
	//base.sortBase();
 // base.showEmployes();
 // 
	//cout << endl;
	//cout << endl;
	//cout << endl;
	///*base.findEmployee("Ivanov");*/
	//base.addNewEmployee();
	//cout << endl;
	//cout << endl;
	//base.addNewEmployee();
	//cout << endl;
	//cout << endl;
	//base.showEmployes();
	//base.deleteEmployee(0);
	//base.showEmployes();

	BaseEmployee base{};
	enum class Actions{	AddNewEmployee = 1, DeleteEmployee, SortBase, ChangeAssign, ShowEmployes
	};
	int tmp = 0;
	int value = 0;

	do {
		cout << "____ MENU ____\n";
		cout << "1. Add new employee\n";
		cout << "2. Delete employee\n";
		cout << "3. Sort Base by surname\n";
		cout << "4. Change Assign\n";
		cout << "5. Show base\n\n";

		string strValue;
		cin >> tmp;
		Actions act = Actions(tmp);

		switch (act)
		{
		case Actions::AddNewEmployee:
			base.addNewEmployee();
			cout << endl;

			break;
		case Actions::DeleteEmployee:

			cout << "Enter number of employee : ";
			do {
				cin >> value;
			} while (value <= 0 || value > base.getSize());

			base.deleteEmployee(value - 1);
			cout << endl;
			break;

		case Actions::SortBase:
			base.sortBase();
			cout << endl;

			break;

		case Actions::ChangeAssign:
			cout << "Enter id for change : ";
			do {
				cin >> value;
			} while (value <= 0 || value > base.getSize());
			cout << "Enter new assign : ";
			cin >> strValue;
			base.changeAssign(value, strValue);
			cout << endl;

			break;

		case Actions::ShowEmployes:
			cout << "____ BASE ____ \n";
			base.showEmployes();
			cout << endl;

			break;
		}
	} while (tmp < 5 || tmp > 0);
	
	
}