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
}

SoftwareTester::SoftwareTester
				(string name, int id, string phone, int age, char gender,
				 string title, string salary, int month, int day, int year,
				 char *address, char *city, char *state, int zip)
			   : Employee(name, id, phone, age, gender, title, salary, month, day,
				 year)
{
	this->address = new char[strlen(address) + 1];
	strcpy(this->address, address);

	this->city = new char[strlen(city) + 1];
	strcpy(this->city, city);

	this->state = new char[strlen(state) + 1];
	strcpy(this->state, state);

	this->zip = zip;
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
