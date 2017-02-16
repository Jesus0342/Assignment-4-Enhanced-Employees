/******************************************************************************
* AUTHOR        : Jesus Sanchez
* STUDENT ID    : 1024834
* ASSIGNMENT #2 : Employee - Inheritance
* CLASS         : CS1C
* SECTION       : MW: 1:30pm
* DUE DATE      : 02/06/2017
* ****************************************************************************/

#ifndef DATE_H_
#define DATE_H_

#include "Header.h"

/******************************************************************************
* CONSTANT - USED FOR FORMATTING
* -----------------------------------------------------------------------------
* DATE : Size of column that displays the date
* ****************************************************************************/
const int DATE = 11;

class Date
{
	public:
		Date();
		Date(int startMonth, int startDay, int startYear);
		~Date();
		void SetMonth(int startMonth);
		void SetDay(int startDay);
		void SetYear(int startYear);
		void PrintDate()const;

	private:
		int month;
		int day;
		int year;
};

#endif
