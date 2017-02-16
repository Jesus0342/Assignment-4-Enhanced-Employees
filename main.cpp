/******************************************************************************
* AUTHOR        : Jesus Sanchez
* STUDENT ID    : 1024834
* ASSIGNMENT #4 : Employee - Inheritance
* CLASS         : CS1C
* SECTION       : MW: 1:30pm
* DUE DATE      : 02/22/2017
* ****************************************************************************/

#include "SoftwareTester.h"

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

void PrintHeader(string labName, char labType, int labNum);

int main()
{
	PrintHeader("Enhanced Employees", 'A', 4);

	SoftwareTester tester1("Joe Calculus", 64879, "945-555-1234", 22, 'M',
			   	   	   	   "Junior Tester", "40,000", 7, 31, 2016,
						   "1234 Main Avenue", "Laguna Niguel", "CA", 92677);
	SoftwareTester tester2("Mary Algebra", 76309, "312-555-5555", 19, 'F',
						   "Senior Tester", "70,000", 5, 8, 2015,
						   "3333 Marguerite Pkwy", "Mission Viejo", "CA", 92646);
	SoftwareTester tester3("Jo Trig", 10192, "712-703-1234", 34, 'F', "Intern",
						   "12,000", 12, 25, 2016, "9876 Elm Street",
						   "San Clemente", "CA", 92672);

	SoftwareTester tester4;

	cout << "Here is a SoftwareTester object calling the default constructor:\n";
	tester4.PrintSoftwareTester();

	tester4.SetAddress("1234 Maple Street");
	tester4.SetCity("Los Angeles");
	tester4.SetState("CA");
	tester4.SetZip(54321);

	cout << "Here is the object after changing the derived data members:\n";
	tester4.PrintSoftwareTester();

	tester4.SetAge(19);
	tester4.SetCity("Laguna Hills");

	cout << "Here is the object after changing the age and city:\n";
	tester4.PrintSoftwareTester();

	SoftwareTester joeCalculus = tester1;

	joeCalculus.PrintSoftwareTester();

	SoftwareTester maryAlgebra;

	maryAlgebra.CopyTesterByCopy(tester2);
	maryAlgebra.PrintSoftwareTester();

	SoftwareTester joTrig;

	joTrig.CopyTesterByRef(tester3);
	joTrig.PrintSoftwareTester();

	return 0;
}

/******************************************************************************
 * PrintHeader
 * ----------------------------------------------------------------------------
 * This function prints the project header.
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
