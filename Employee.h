/******************************************************************************
* PROGRAMMED BY  : Jesus Sanchez
* STUDENT ID     : 1024834
* CLASS          : MW: 1:30pm - 2:50pm
* ASSIGNMENT #4  : Enhanced Employees
******************************************************************************/


#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "Date.h"

class Employee
{
	public:
		Employee();
		Employee(string empName, int empID,       string empPhone, int empAge,
				 char empGender, string empTitle, string empSalary,
				 int startMonth, int startDay,    int startYear);
		Employee(const Employee &employee);
		~Employee();
		void SetName(string empName);
		void SetID(int empID);
		void SetPhone(string empPhone);
		void SetAge(int empAge);
		void SetGender(char empGender);
		void SetTitle(string empTitle);
		void SetSalary(string empSalary);
		void SetDate(int startMonth, int startDay, int startYear);
		void CopyEmployee(Employee employee);
		void PrintEmployee()const;

	private:
		string name;
		int    id;
		string phone;
		int    age;
		char   gender;
		string jobTitle;
		string salary;
		Date   hireDate;
};

#endif
