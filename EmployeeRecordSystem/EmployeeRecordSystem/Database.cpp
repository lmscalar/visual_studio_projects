#include "pch.h"
#include <iostream>
#include <stdexcept>
#include "Database.h"

using namespace std;

// The addEmployee() method creates a new Employee object, fill its information, and adds it to the vector.
// The mNextEmployeeNumber data member is incremented after its use so the the next employee will get a new number.


namespace Records {

	Employee& Database::addEmployee(const string& firstName, const string& lastName)
	{
		Employee theEmployee(firstName, lastName);
		theEmployee.setEmployeeNumber(mNextEmployeeNumber++);
		theEmployee.hire();
		mEmployees.push_back(theEmployee);
		return mEmployees[mEmployees.size() - 1];
	}

	// The methods loop over all employees in mEmployess using range-baed for loops,  and checks to see if an Employee is a match
	// for the information passed to the method.   An exception is thrown if no match is found

	Employee& Database::getEmployee(int employeeNumber)
	{
		for (auto& employee : mEmployees) {
			if (employee.getEmployeeNumber() == employeeNumber) {
				return employee;
			}
		}
		throw logic_error("No employee found!");
	}

	Employee& Database::getEmployee(const string& firstName, const string& lastName)
	{
		for (auto& employee : mEmployees) { // check first name and last name
			if (employee.getFirstName() == firstName && employee.getLastName() == lastName) {
				return employee;
			}
		}
		throw logic_error("No employee found!");
	}

	// The display methods all use a similar algorithm.  They loop through all employees and tell each employee to display itself to the cosole
	// if the criterion for display matches.  displayFormer() is similar to dispalyCurrent().

	void Database::displayAll() const
	{
		for (const auto& employee : mEmployees) {
			employee.display();
		}

	}

	void Database::displayCurrent() const {
		for (const auto& employee : mEmployees) {
			if (employee.isHired())
				employee.display();
		}

	}

	void Database::displayFormer() const
	{
		for (const auto& employee : mEmployees) {
			if (!employee.isHired())
				employee.display();
		}
	}




}