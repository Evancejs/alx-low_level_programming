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
	int leap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

	if (month < 1 || month > 12)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	int days_in_month = days_in_month_array[month - 1];

	if (leap && month == 2)
	{
		days_in_month++;
	}
	if (day < 1 || day > days_in_month)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	int day_of_year = day;

	for (int i = 0; i < month - 1; i++)
	{
		day_of_year += days_in_month_array[i];
	}
	if (leap && month > 2)
	{
		day_of_year++;
	}

	int remaining_days = 365 + leap - day_of_year;

	printf("Day of the year: %d\n", day_of_year);
	printf("Remaining days: %d\n", remaining_days);
}
