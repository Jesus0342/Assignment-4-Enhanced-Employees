/******************************************************************************
* PROGRAMMED BY  : Jesus Sanchez
* STUDENT ID     : 1024834
* CLASS          : MW: 1:30pm - 2:50pm
* ASSIGNMENT #4  : Enhanced Employees
******************************************************************************/

#include "SoftwareTester.h"

SoftwareTester::SoftwareTester()
			  : Employee(), address(NULL), city(NULL), state(NULL), zip(0)
{
	cout << "Default constructor called." << endl;
}

SoftwareTester::SoftwareTester
				(string empName, int empID, string empPhone, int empAge,
				 char empGender, string empTitle, string empSalary, int startMonth,
				 int startDay,    int startYear, char *address, char *city,
				 char *state, int zip)
			   : Employee(empName, empID, empPhone, empAge, empGender, empTitle,
					  	 empSalary, startMonth, startDay, startYear)
{
	this->address = new char[strlen(address) + 1];
	strcpy(this->address, address);

	this->city = new char[strlen(city) + 1];
	strcpy(this->city, city);

	this->state = new char[strlen(state) + 1];
	strcpy(this->state, state);

	this->zip = zip;

	cout << "Constructor called." << endl;
}

SoftwareTester::SoftwareTester(const SoftwareTester &softwareTester)
			  : Employee(softwareTester)
{
	address = new char[strlen(softwareTester.address) + 1];
	strcpy(address, softwareTester.address);

	city = new char[strlen(softwareTester.city) + 1];
	strcpy(city, softwareTester.city);

	state = new char[strlen(softwareTester.state) + 1];
	strcpy(state, softwareTester.state);

	zip = softwareTester.zip;

	cout << "Copy constructor called." << endl;
}

SoftwareTester::~SoftwareTester()
{
	delete [] address;
	delete [] city;
	delete [] state;

	cout << "Destructor called." << endl;
}

void SoftwareTester::CopyTester(SoftwareTester softwareTester)
{
	CopyEmployee(softwareTester);

	delete [] address;

	address = new char[strlen(softwareTester.address) + 1];
		strcpy(address, softwareTester.address);

	delete [] city;

	city = new char[strlen(softwareTester.city) + 1];
	strcpy(city, softwareTester.city);

	delete [] state;

	state = new char[strlen(softwareTester.state) + 1];
	strcpy(state, softwareTester.state);

	zip = softwareTester.zip;

	cout << "Copy function called." << endl;
}

void SoftwareTester::PrintSoftwareTester()
{
	PrintEmployee();

	cout << left
		 <<	setw(NAME)  << " "     << setw(ADDRESS) << "Address"  << setw(CITY) << "City"
		 << setw(STATE) << "State" << setw(ZIP)     << "Zip Code" << endl;

	// Outputs the line denoting the size of each of the columns.
	cout << setw(NAME) << " " << setw(ADDRESS) << "-------" << setw(CITY) << "----"
		 << setw(STATE) << "-----" << setw(ZIP) << "--------" << endl;

	// Outputs the values stored in the data members.
	cout << setw(NAME) << " " << setw(ADDRESS) << address << setw(CITY) << city
		 << setw(STATE) << state << setw(ZIP) << zip << endl << endl;
}
