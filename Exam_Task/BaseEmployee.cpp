#include "BaseEmployee.h"
#include "Lib.h"



void BaseEmployee::addNewEmployee(Employee* newEmpl)
{
	NewBase.push_back(newEmpl);
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
	}
}

