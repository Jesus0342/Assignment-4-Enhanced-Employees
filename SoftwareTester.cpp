/******************************************************************************
* PROGRAMMED BY  : Jesus Sanchez
* STUDENT ID     : 1024834
* CLASS          : MW: 1:30pm - 2:50pm
* ASSIGNMENT #4  : Enhanced Employees
******************************************************************************/

#include "SoftwareTester.h"

SoftwareTester::SoftwareTester()
			  : Employee(), address(""), city(""), state(""), zip(0)
{
//	cout << "Default constructor called." << endl;
}

/******************************************************************************
 * SoftwareTester
 * ----------------------------------------------------------------------------
 * Class constructor. Creates a dynamic character array for each of the class
 * pointer data members and uses the strcpy function to assign the value of the
 * character pointer passed in to the pointer data members.
 *****************************************************************************/
SoftwareTester::SoftwareTester(string name, int id, string phone, int age,
							   char gender, string jobTitle, string salary,
							   int month, int day, int year, char *address,
							   char *city, char *state, int zip)
			  : Employee(name, id, phone, age, gender, jobTitle, salary, month, day,
					  	 year)
{
	this->address = new char[strlen(address) + 1];
	strcpy(this->address, address);

	this->city = new char[strlen(city) + 1];
	strcpy(this->city, city);

	this->state = new char[strlen(state) + 1];
	strcpy(this->state, state);

	this->zip = zip;

//	cout << "Constructor called." << endl;
}

/******************************************************************************
 * SoftwareTester
 * ----------------------------------------------------------------------------
 * Class copy constructor that receives a SoftwareTester object. Creates a
 * dynamic character array for each of the class pointer data members and uses
 * the strcpy function to assign the value of the character pointer passed in to
 * the pointer data members.
 *****************************************************************************/
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

//	cout << "Copy constructor called." << endl;
}

SoftwareTester::~SoftwareTester()
{
	delete [] address;
	delete [] city;
	delete [] state;

//	cout << "Destructor called." << endl;
}

void SoftwareTester::SetAddress(char *newAddress)
{
	address = new char[strlen(newAddress) + 1];
	strcpy(address, newAddress);
}

void SoftwareTester::SetCity(char *newCity)
{
	city = new char[strlen(newCity) + 1];
	strcpy(city, newCity);
}

void SoftwareTester::SetState(char *newState)
{
	state = new char[strlen(newState) + 1];
	strcpy(state, newState);
}

void SoftwareTester::SetZip(int newZip)
{
	zip = newZip;
}

char* SoftwareTester::GetAddress()
{
	return address;
}

char* SoftwareTester::GetCity()
{
	return city;
}

char* SoftwareTester::GetState()
{
	return state;
}

int SoftwareTester::GetZip()
{
	return zip;
}

/******************************************************************************
 * CopyTesterByCopy
 * ----------------------------------------------------------------------------
 * This is a deep copy function that receives a SoftwareTester object by copy
 * and assigns all of the values stored in its data members to calling object's
 * data members.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 *     softwareTester - SoftwareTester object is defined.
 *
 * POST-CONDITIONS:
 *     Copies object that was passed in's data members to the calling object.
 *****************************************************************************/
void SoftwareTester::CopyTesterByCopy(SoftwareTester softwareTester)
{
	// Calls the base class copy function to copy the base class data members.
	CopyEmployeeByCopy(softwareTester);

	// Deletes the dynamic c-string that each pointer was pointing to in order to
	// resize the array to account for the string being copied into each data
	// member being larger than the original string.
	delete [] address;
	delete [] city;
	delete [] state;

	address = new char[strlen(softwareTester.address) + 1];
	strcpy(address, softwareTester.address);

	city = new char[strlen(softwareTester.city) + 1];
	strcpy(city, softwareTester.city);

	state = new char[strlen(softwareTester.state) + 1];
	strcpy(state, softwareTester.state);

	zip = softwareTester.zip;

	cout << "The function that returns an object by copy was called." << endl;
}

/******************************************************************************
 * CopyTesterByRef
 * ----------------------------------------------------------------------------
 * This is a deep copy function that receives a SoftwareTester object by
 * reference and assigns all of the values stored in its data members to calling
 * object's data members.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 *     softwareTester - SoftwareTester object is defined.
 *
 * POST-CONDITIONS:
 *     Copies object that was passed in's data members to the calling object.
 *****************************************************************************/
void SoftwareTester::CopyTesterByRef(SoftwareTester &softwareTester)
{
	// Calls the base class copy function to copy the base class data members.
	CopyEmployeeByRef(softwareTester);

	// Deletes the dynamic c-string that each pointer was pointing to in order to
	// resize the array to account for the string being copied into each data
	// member being larger than the original string.
	delete [] address;
	delete [] city;
	delete [] state;

	address = new char[strlen(softwareTester.address) + 1];
	strcpy(address, softwareTester.address);

	city = new char[strlen(softwareTester.city) + 1];
	strcpy(city, softwareTester.city);

	state = new char[strlen(softwareTester.state) + 1];
	strcpy(state, softwareTester.state);

	zip = softwareTester.zip;

	cout << "The function that returns an object by reference was called." << endl;
}

/******************************************************************************
 * PrintSoftwareTester
 * ----------------------------------------------------------------------------
 * This function prints a SoftwareTester object's information in columns using
 * the values stored in the data members.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   There are no pre-conditions.
 *
 * POST-CONDITIONS:
 *     This function will print a Software Tester's information.
 *****************************************************************************/
void SoftwareTester::PrintSoftwareTester()
{
	// Calls the base class print function to output the base class data members.
	PrintEmployee();

	// Outputs the headings for each of the columns.
	cout << left
		 <<	setw(NAME)  << " " << setw(ADDRESS) << "Address" << setw(CITY)
		 << "City" << setw(STATE) << "State" << setw(ZIP) << "Zip Code" << endl;

	// Outputs the line denoting the size of each of the columns.
	cout << setw(NAME) << " " << setw(ADDRESS) << "-------" << setw(CITY) << "----"
		 << setw(STATE) << "-----" << setw(ZIP) << "--------" << endl;

	// Outputs the values stored in the data members.
	cout << setw(NAME) << " " << setw(ADDRESS) << address << setw(CITY) << city
		 << setw(STATE) << state << setw(ZIP) << zip << endl << endl;
}
