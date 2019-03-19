#pragma once
#include <string>

namespace Records {   //  namespace Records

	const int kDefaultStartingSalary = 50000;

	class Employee
	{
	public:
		Employee() = default;
		~Employee();
		Employee(const std::string& FirstName,
			const std::string& LastName);
		
		void promote(int raiseAmount = 1000);
		void demote(int demeritAmount = 1000);
		void hire();    // Hires or rehires the employee
		void fire();    // Dismiss the employee
		void display() const;    // Outputs employee info to console

		// getters and setters
		void setFirstName(const std::string& firstName);
		const std::string& getFirstName() const;

		void setLastName(const std::string& lastName);
		const std::string& getLastName() const;

		void setEmployeeNumber(int employeeNumber);
		int getEmployeeNumber() const;

		void setSalary(int newSalary);
		int getSalary() const;

		bool isHired() const;

	private:
		// initialized here instead of the constructor:  by default new employee have no name, an employee number of -1 and default salary.
		std::string mFirstName;
		std::string mLastName;
		int mEmployeeNumber = -1;
		int mSalary = kDefaultStartingSalary;
		bool mHired = false;     // initially not hired
	};

}

