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
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int is_leap_year = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

	if (month < 1 || month > 12)
	{
		printf("Invalid month: %02d\n", month);
		return;
	}

	int max_days_in_month = days_in_month[month];
	if (month == 2 && is_leap_year)
	{
		max_days_in_month++;
	}

	if (day < 1 || day > max_days_in_month)
	{
		printf("Invalid day: %02d\n", day);
		return;
	}

	int day_of_year = 0;
	for (int i = 1; i < month; i++)
	{
		day_of_year += days_in_month[i];
		if (i == 2 && is_leap_year)
		{
			day_of_year++;
		}
	}
	day_of_year += day;

	if (is_leap_year)
	{
		printf("Day of the year: %d\n", day_of_year);
		printf("Remaining days: %d\n", 366 - day_of_year);
	}
	else
	{
		printf("Day of the year: %d\n", day_of_year);
		printf("Remaining days: %d\n", 365 - day_of_year);
	}
}
