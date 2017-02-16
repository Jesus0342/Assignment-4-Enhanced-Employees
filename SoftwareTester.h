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
private:
	char *address;
	char *city;
	char *state;
	int  zip;

public:
	SoftwareTester();
	SoftwareTester(string empName, int empID,       string empPhone, int empAge,
			   	   char empGender, string empTitle, string empSalary,
				   int startMonth, int startDay,    int startYear,
				   char *address, char *city, char *state, int zip);
	SoftwareTester(const SoftwareTester &softwareTester);
	~SoftwareTester();
	void CopyTester(SoftwareTester softwareTester);
	void PrintSoftwareTester();
};

#endif
