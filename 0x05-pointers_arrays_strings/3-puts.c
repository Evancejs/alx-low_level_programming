#include "main.h"
/**
* _puts - prints out inputed string
* @str:a pointer to str
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}

	_putchar('\n');
}
