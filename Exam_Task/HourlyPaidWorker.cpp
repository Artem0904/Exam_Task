#include "HourlyPaidWorker.h"

HourlyPaidWorker::HourlyPaidWorker(const string& name, const string& surname, const string& byFatherName, const int& age, int workExperience, const Date& dateOfEmployment, const int& rate, const int& workingHours)
	:Employee(name, surname, byFatherName, age, workExperience,dateOfEmployment)
{
	setRate(rate);
	setHours(workingHours);
}

HourlyPaidWorker::HourlyPaidWorker(const Person& person, int workExperience, const Date& dateOfEmployment, const int& rate, const int& workingHours)
	:Employee(person, workExperience, dateOfEmployment)
{
	setRate(rate);
	setHours(workingHours);
}

HourlyPaidWorker::HourlyPaidWorker(const Employee& employee, const int& rate, const int& workingHours)
	:Employee(employee.getName(), employee.getSurname(), employee.getByFatherName(), employee.getAge(), employee.getWorkEx(), employee.getDateOfEmployment())
{
	setRate(rate);
	setHours(workingHours);
}

void HourlyPaidWorker::setRate(const int& rate)
{
	if (rate > 0)
		this->rate = rate;
	else
		this->rate = 1;
}

void HourlyPaidWorker::setHours(const int& workingHours)
{
	if (workingHours > 0)
		this->workingHours = workingHours;
	else
		this->workingHours = 1;
}

int HourlyPaidWorker::getRate() const
{
	return rate;
}

int HourlyPaidWorker::getHours() const
{
	return workingHours;
}

int HourlyPaidWorker::calculateSalary() const
{
	return rate*workingHours;
}

void HourlyPaidWorker::show() const
{
	cout << "\nHourly paid worker: " << endl;
	Employee::show();
	cout << "Rate for a hour: " << getRate() << endl;
	cout << "Working hours: " << getHours() << endl;
	cout << "Salary: " << calculateSalary() << endl;
}
