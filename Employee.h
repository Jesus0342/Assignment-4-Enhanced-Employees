/******************************************************************************
* AUTHOR        : Jesus Sanchez
* STUDENT ID    : 1024834
* ASSIGNMENT #2 : Employee - Inheritance
* CLASS         : CS1C
* SECTION       : MW: 1:30pm
* DUE DATE      : 02/06/2017
* ****************************************************************************/

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "Date.h"

/******************************************************************************
 * CONSTANTS - USED FOR FORMATING
 * ----------------------------------------------------------------------------
 * All constants set the size of the column that displays the data member of a
 * similar name.
 *****************************************************************************/
const int NAME       = 21;
const int ID         = 6;
const int PHONE      = 13;
const int AGE        = 4;
const int GENDER     = 7;
const int TITLE      = 15;
const int SALARY     = 8;
const int DEPARTMENT = 11;
const int SUPERVISOR = 16;
const int RAISE      = 6;
const int KNOWLEDGE  = 11;
const int EXPERIENCE = 10;

class Employee
{
	public:
		Employee();
		Employee(string empName, int empID,       string empPhone, int empAge,
				 char empGender, string empTitle, string empSalary,
				 int startMonth, int startDay,    int startYear);
		~Employee();
		void SetName(string empName);
		void SetID(int empID);
		void SetPhone(string empPhone);
		void SetAge(int empAge);
		void SetGender(char empGender);
		void SetTitle(string empTitle);
		void SetSalary(string empSalary);
		void SetDate(int startMonth, int startDay, int startYear);
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
