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
 * This program uses a SoftwareTester class that is derived from an Employee
 * class to demonstrate object instantiation using a copy constructor and a
 * deep copy function. First, four SoftwareTester objects are declared with the
 * first three holding the information of the three Software Testers. The fourth
 * tester is used to show the set functions. Then, three more SoftwareTester
 * objects are declared. The first uses the initialization construct to call
 * the copy constructor and the next two call the deep copy functions that
 * return by copy and by reference. After each object is instantiated, the
 * print function is called to display the Software Tester's information.
 * ----------------------------------------------------------------------------
 * INPUT:
 *    There is no input.
 *
 * OUTPUT:
 *    tester4     - Software Tester object used to test class functions.
 *    joeCalculus - Software Tester object holding Joe Calculus' information.
 *    maryAlgebra - Software Tester object holding Mary Algebra's information.
 *    joTrig      - Software Tester object holding Jo Trig's information.
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

	// Prints the object with the default values.
	cout << "SoftwareTester object calling the default constructor:\n";
	tester4.PrintSoftwareTester();

	// Sets all of the derived class data members to new values.
	tester4.SetAddress("1234 Maple Street");
	tester4.SetCity("Los Angeles");
	tester4.SetState("CA");
	tester4.SetZip(54321);

	// Prints the object with the new class data member values.
	cout << "Object after changing the derived data members:\n";
	tester4.PrintSoftwareTester();

	// Sets the age and city of the object to new values.
	tester4.SetAge(19);
	tester4.SetCity("Laguna Hills");

	// Prints the object with the new age and city values.
	cout << "Object after changing the age and city:\n";
	tester4.PrintSoftwareTester();

	// Instantiates an object using the initialization construct to call the
	// copy constructor.
	cout << "Object instantiated using the initialization construct:\n";
	SoftwareTester joeCalculus = tester1;

	// Prints the object with all of the copied information.
	joeCalculus.PrintSoftwareTester();

	// Instantiates an object, calls the deep copy by copy function, and prints
	// the values stored in the object.
	SoftwareTester maryAlgebra;
	maryAlgebra.CopyTesterByCopy(tester2);
	maryAlgebra.PrintSoftwareTester();

	// Instantiates an object, calls the deep copy by reference function, and
	// prints the values stored in the object.
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
