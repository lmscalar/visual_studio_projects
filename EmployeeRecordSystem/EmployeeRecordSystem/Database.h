#pragma once
#include <iostream>
#include <vector>
#include "Employee.h"

// The Database class uses the std::vector class from the Standard Library to store Employee objects


namespace Records {
	
	const int kFirstEmployeeNumber = 1000;

	class Database
	{
	public:
		Employee& addEmployee(const std::string& firstName, const std::string& lastName);
		Employee& getEmployee(int employeeNumber);
		Employee& getEmployee(const std::string& firstName, const std::string& lastName);

		// database is the central repository for all employee records, it has methods that output all employees
		//, currently hired employees, and employees who are no longer hired

		void displayAll() const;
		void displayCurrent() const;
		void displayFormer() const;

		//mEmployees contains the Employee objects,  the mNextEmployeeNumber data member keeps track of what employee number is assigned to a new employee
		// it is initialized wiht kFirstEmployeeNumber constant.

	private:
		std::vector<Employee> mEmployees;
		int mNextEmployeeNumber = kFirstEmployeeNumber;
	};

}
