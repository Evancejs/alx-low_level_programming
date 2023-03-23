#include "variadic_functions.h"
/**
* print_all - prints anything.
* @format: list of types of arguments passed to the function
* c: char
* i: integer
* f: float
* s: char * (if the string is NULL, print (nil) instead)
* any other char should be ignored
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_char(args);
				break;

			case 'i':
				print_int(args);
				break;

			case 'f':
				print_float(args);
				break;

			case 's':
				print_string(args);
				break;

			default:
				i++;
				continue;
		}

		if (format[i + 1])
			printf(", ");

		i++;
	}

	va_end(args);

	printf("\n");
}

/**
* print_char - prints a character
* @args: list of arguments
*
* Return: void
*/
void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}

/**
* print_int - prints an integer
* @args: list of arguments
*
* Return: void
*/
void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}

/**
* print_float - prints a float
* @args: list of arguments
*
* Return: void
*/
void print_float(va_list args)
{
	float f = (float)va_arg(args, double);

	printf("%f", f);
}

/**
* print_string - prints a string
* @args: list of arguments
*
* Return: void
*/
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
