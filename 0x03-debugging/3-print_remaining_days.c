#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i, day_of_year = 0, is_leap_year = 0;

	// Check if year is a leap year
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
			is_leap_year = 1;
			}
		}
		else
		{
		is_leap_year = 1;
		}
	}

	// Calculate the day of the year
	for (i = 0; i < month - 1; i++)
	{
	day_of_year += days_in_month[i];
	}
	day_of_year += day;

	// Check if input date is valid
	if (is_leap_year && month == 2 && day == 29)
	{
	printf("Day of the year: %d\n", day_of_year);
	printf("Remaining days: %d\n", 366 - day_of_year);
	printf("Valid date\n");
	}
	else if (day <= days_in_month[month - 1])
	{
	printf("Day of the year: %d\n", day_of_year);
	printf("Remaining days: %d\n", is_leap_year ? 366 - day_of_year : 365 - day_of_year);
	printf("Valid date\n");
	}
	else
	{
	printf("Invalid date\n");
	}
}
