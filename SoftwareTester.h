/******************************************************************************
* PROGRAMMED BY  : Jesus Sanchez
* STUDENT ID     : 1024834
* CLASS          : MW: 1:30pm - 2:50pm
* ASSIGNMENT #4  : Enhanced Employees
******************************************************************************/

#ifndef SOFTWARETESTER_H_
#define SOFTWARETESTER_H_

#include "Employee.h"

class SoftwareTester : public Employee
{
public:
	SoftwareTester();
	SoftwareTester(string name, int id, string phone, int age, char gender,
				   string jobTitle, string salary, int month, int day, int year,
				   char *address, char *city, char *state, int zip);
	SoftwareTester(const SoftwareTester &softwareTester);
	~SoftwareTester();
	void SetAddress(char *newAddress);
	void SetCity(char *newCity);
	void SetState(char *newState);
	void SetZip(int newZip);
	char* GetAddress();
	char* GetCity();
	char* GetState();
	int GetZip();
	void CopyTesterByCopy(SoftwareTester softwareTester);
	void CopyTesterByRef(SoftwareTester &softwareTester);
	void PrintSoftwareTester();

private:
	char *address;
	char *city;
	char *state;
	int  zip;
};

#endif
