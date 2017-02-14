/******************************************************************************
* AUTHOR        : Jesus Sanchez
* STUDENT ID    : 1024834
* ASSIGNMENT #2 : Employee - Inheritance
* CLASS         : CS1C
* SECTION       : MW: 1:30pm
* DUE DATE      : 02/06/2017
* ****************************************************************************/

#include "Date.h"

/******************************************************************************
 * Date
 * ----------------------------------------------------------------------------
 * Default constructor. Assigns 0 to all data members.
 *****************************************************************************/
Date::Date() : month(0), day(0), year(0)
{
}

/******************************************************************************
 * Date
 * ----------------------------------------------------------------------------
 * Non-default constructor. Assigns values declared at object instantiation to
 * all data members.
 *****************************************************************************/
Date::Date(int startMonth, int startDay, int startYear)
    : month(startMonth), day(startDay), year(startYear)
{
}

/******************************************************************************
 * ~Date
 * ----------------------------------------------------------------------------
 * Class destructor. Does nothing.
 *****************************************************************************/
Date::~Date()
{
}

/******************************************************************************
 * SetMonth
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in month to the value passed in
 * from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   startMonth - Month of date must be previously defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in month.
 *****************************************************************************/
void Date::SetMonth(int startMonth)
{
	month = startMonth;
}

/******************************************************************************
 * SetDay
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in day to the value passed in
 * from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   startDay - Day of date must be previously defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in day.
 *****************************************************************************/
void Date::SetDay(int startDay)
{
	day = startDay;
}

/******************************************************************************
 * SetYear
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in year to the value passed in
 * from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   startYear - Year of date must be previously defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in year.
 *****************************************************************************/
void Date::SetYear(int startYear)
{
	year = startYear;
}

/******************************************************************************
 * PrintDate
 * ----------------------------------------------------------------------------
 * This function prints the date by using the values stored in the month, day
 * and year data members.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   There are no pre-conditions.
 *
 * POST-CONDITIONS:
 *     This function will print the date in the format 00/00/0000.
 *****************************************************************************/
void Date::PrintDate()const
{
	cout << right   << setfill('0')
		 << setw(2) << month << "/" << setw(2) << day << "/" << setw(4) << year
		 << endl    << setfill(' ');
}
