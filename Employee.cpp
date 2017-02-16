/******************************************************************************
* PROGRAMMED BY  : Jesus Sanchez
* STUDENT ID     : 1024834
* CLASS          : MW: 1:30pm - 2:50pm
* ASSIGNMENT #4  : Enhanced Employees
******************************************************************************/

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

Employee::Employee(const Employee &employee)
		 : name(employee.name), id(employee.id), phone(employee.phone),
		   age(employee.age), gender(employee.gender), jobTitle(employee.jobTitle),
		   salary(employee.salary), hireDate(employee.hireDate)
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

void Employee::SetName(string empName)
{
	name = empName;
}

void Employee::SetID(int empID)
{
	id = empID;
}

void Employee::SetPhone(string empPhone)
{
	phone = empPhone;
}

void Employee::SetAge(int empAge)
{
	age = empAge;
}

void Employee::SetGender(char empGender)
{
	gender = empGender;
}

void Employee::SetTitle(string empTitle)
{
	jobTitle = empTitle;
}

void Employee::SetSalary(string empSalary)
{
	salary = empSalary;
}

void Employee::SetDate(int startMonth, int startDay, int startYear)
{
	hireDate.SetMonth(startMonth);
	hireDate.SetDay(startDay);
	hireDate.SetYear(startYear);
}

/******************************************************************************
 *
 *****************************************************************************/
void Employee::CopyEmployeeByCopy(Employee employee)
{
	name     = employee.name;
	id       = employee.id;
	phone    = employee.phone;
	age      = employee.age;
	gender   = employee.gender;
	jobTitle = employee.jobTitle;
	salary   = employee.salary;
	hireDate = employee.hireDate;
}

void Employee::CopyEmployeeByRef(Employee &employee)
{
	name     = employee.name;
	id       = employee.id;
	phone    = employee.phone;
	age      = employee.age;
	gender   = employee.gender;
	jobTitle = employee.jobTitle;
	salary   = employee.salary;
	hireDate = employee.hireDate;
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
	cout << setw(NAME)   << "----" << setw(ID)    << "-----"
		 << setw(PHONE)  << "-----"        << setw(AGE)   << "---"
		 << setw(GENDER) << "------"              << setw(TITLE) << "---------"
		 << "-" << setw(SALARY) << "-------" << setw(DATE) << "---------" << endl;

	// Outputs the values stored in the data members.
	cout << setw(NAME) << name << setw(ID)     << id     << setw(PHONE) << phone
		 << setw(AGE)  << age  << setw(GENDER) << gender << setw(TITLE) << jobTitle
		 << "$" << setw(SALARY) << salary << setw(DATE);

	// Calls the PrintDate function to print the hire date.
	hireDate.PrintDate();

	cout << right << endl;
}
