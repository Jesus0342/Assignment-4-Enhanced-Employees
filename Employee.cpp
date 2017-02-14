/******************************************************************************
* AUTHOR        : Jesus Sanchez
* STUDENT ID    : 1024834
* ASSIGNMENT #2 : Employee - Inheritance
* CLASS         : CS1C
* SECTION       : MW: 1:30pm
* DUE DATE      : 02/06/2017
* ****************************************************************************/

#include "Employee.h"

/******************************************************************************
 * Employee
 * ----------------------------------------------------------------------------
 * Default constructor. Assigns 0 or an empty string to all data members and
 * calls  the Date class default constructor.
 *****************************************************************************/
Employee::Employee() : name(""), id(0), phone(""), age(0), gender(' '),
					   jobTitle(""), salary(""), hireDate()
{
}

/******************************************************************************
 * Employee
 * ----------------------------------------------------------------------------
 * Non-default constructor. Assigns values declared at object instantiation to
 * all data members and calls the Date class non-default constructor.
 *****************************************************************************/
Employee::Employee(string empName, int empID,       string empPhone, int empAge,
				   char empGender, string empTitle, string empSalary,
				   int startMonth, int startDay,    int startYear)
		: name(empName), id(empID), phone(empPhone), age(empAge), gender(empGender),
		  jobTitle(empTitle), salary(empSalary),
		  hireDate(startMonth, startDay, startYear)
{
}

/******************************************************************************
 * ~Employee
 * ----------------------------------------------------------------------------
 * Class destructor. Does nothing.
 *****************************************************************************/
Employee::~Employee()
{
}

/******************************************************************************
 * SetName
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in name to the value passed in
 * from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   empName - Employee's new Name must be previously defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in name.
 *****************************************************************************/
void Employee::SetName(string empName)
{
	name = empName;
}

/******************************************************************************
 * SetID
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in id to the value passed in
 * from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   empID - Employee's new ID must be previously defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in id.
 *****************************************************************************/
void Employee::SetID(int empID)
{
	id = empID;
}

/******************************************************************************
 * SetPhone
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in phone to the value passed in
 * from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   empPhone - Employee's new Phone Number must be previously defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in phone.
 *****************************************************************************/
void Employee::SetPhone(string empPhone)
{
	phone = empPhone;
}

/******************************************************************************
 * SetAge
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in age to the value passed in
 * from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   empAge - Employee's new Age must be previously defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in age.
 *****************************************************************************/
void Employee::SetAge(int empAge)
{
	age = empAge;
}

/******************************************************************************
 * SetGender
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in gender to the value passed in
 * from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   empGender - Employee's new Gender must be previously defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in gender.
 *****************************************************************************/
void Employee::SetGender(char empGender)
{
	gender = empGender;
}

/******************************************************************************
 * SetTitle
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in jobTitle to the value passed
 * in from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   empTitle - Employee's new Job Title must be previously defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in jobTitle.
 *****************************************************************************/
void Employee::SetTitle(string empTitle)
{
	jobTitle = empTitle;
}

/******************************************************************************
 * SetSalary
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in salary to the value passed in
 * from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   empSalary - Employee's new Salary must be previously defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in salary.
 *****************************************************************************/
void Employee::SetSalary(string empSalary)
{
	salary = empSalary;
}

/******************************************************************************
 * SetDate
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the values stored in hire date by having the Date
 * class object call each of the date class mutator functions.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   startMonth - Month of date must be previously defined.
 * 	   startDay   - Day of date must be previously defined.
 * 	   startYear  - Year of date must be previously defined.
 *
 * POST-CONDITIONS:
 *     This function will change the date stored in hireDate.
 *****************************************************************************/
void Employee::SetDate(int startMonth, int startDay, int startYear)
{
	hireDate.SetMonth(startMonth);
	hireDate.SetDay(startDay);
	hireDate.SetYear(startYear);
}

/******************************************************************************
 * PrintEmployee
 * ----------------------------------------------------------------------------
 * This function prints an Employee object's information in columns using the
 * values stored in the data members.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   There are no pre-conditions.
 *
 * POST-CONDITIONS:
 *     This function will print an employee's information.
 *****************************************************************************/
void Employee::PrintEmployee()const
{
	// Outputs the headings for each of the columns.
	cout << left
		 <<	setw(NAME)   << "Name"   << setw(ID)    << "ID #"
		 << setw(PHONE)  << "Phone"  << setw(AGE)   << "Age"
		 << setw(GENDER) << "Gender" << setw(TITLE) << "Job Title" << " "
		 << setw(SALARY) << "Salary" << setw(DATE)  << "Hire Date"  << endl;

	// Outputs the line denoting the size of each of the columns.
	cout << setw(NAME)   << "-------------------" << setw(ID)    << "-----"
		 << setw(PHONE)  << "------------"        << setw(AGE)   << "---"
		 << setw(GENDER) << "------"              << setw(TITLE) << "--------------"
		 << "-" << setw(SALARY) << "-------" << setw(DATE) << "----------" << endl;

	// Outputs the values stored in the data members.
	cout << setw(NAME) << name << setw(ID)     << id     << setw(PHONE) << phone
		 << setw(AGE)  << age  << setw(GENDER) << gender << setw(TITLE) << jobTitle
		 << "$" << setw(SALARY) << salary << setw(DATE);

	// Calls the PrintDate function to print the hire date.
	hireDate.PrintDate();

	cout << right << endl;
}
