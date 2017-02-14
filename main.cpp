/******************************************************************************
* AUTHOR        : Jesus Sanchez
* STUDENT ID    : 1024834
* ASSIGNMENT #4 : Employee - Inheritance
* CLASS         : CS1C
* SECTION       : MW: 1:30pm
* DUE DATE      : 02/22/2017
* ****************************************************************************/

#include "Employee.h"

/******************************************************************************
 * ENHANCED EMPLOYEES
 * ----------------------------------------------------------------------------
 * This program
 * ----------------------------------------------------------------------------
 * INPUT:
 *    There is no input.
 *
 * OUTPUT:
 *
 *****************************************************************************/

/******************************************************************************
 * PrintHeader
 *    This function prints the project header.
 *****************************************************************************/
void PrintHeader(string labName, char labType, int labNum);

int main()
{
	Employee employee;
	Employee barrackObama("Barack Obama", 12346, "310-555-5555", 51,
						  'M', "Comedian", "70,123", 5, 8, 2015);

	PrintHeader("Enhanced Employees", 'A', 4);

	cout << "Employee object calling the default constructor:\n";
	employee.PrintEmployee();

	cout << "Employee object calling the non-default constructor:\n";
	barrackObama.PrintEmployee();

	// Calls the mutator functions of the Employee class to set all data
	// members of the first Employee object to new values.
	employee.SetName("Hillary Clinton");
	employee.SetID(77777);
	employee.SetPhone("203-555-6789");
	employee.SetAge(58);
	employee.SetGender('F');
	employee.SetTitle("News Reporter");
	employee.SetSalary("500,500");
	employee.SetDate(3, 1, 2005);

	cout << "First Employee object after changing the data members:\n";
	employee.PrintEmployee();

	return 0;
}

/******************************************************************************
 * PrintHeader
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 *     labName - Lab Name has to be preciously defined
 *     labType -  Lab Type has to be preciously defined
 *     labNum  - Lab Number has to be preciously defined
 *
 * POST-CONDITIONS:
 *     This function will print the class heading.
 *****************************************************************************/
void PrintHeader(string labName, char labType, int labNum)
{
	cout << left;
	cout << "************************************************\n";
	cout << "* PROGRAMMED BY  : Jesus Sanchez";
	cout << "\n* " << setw(15) << "STUDENT ID" << ": 1024834" ;
	cout << "\n* " << setw(15) << "CLASS" << ": MW: 1:30pm - 2:50pm";
	cout << "\n* ";

	if(toupper(labType) == 'L')
	{
		cout << "LAB #" << setw(9);
	}
	else
	{
		cout << "ASSIGNMENT #" << setw(2);
	}

	cout << labNum << " : " << labName;
	cout << "\n************************************************\n\n";
	cout << right;
}
