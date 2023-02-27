#include "main.h"
/**
* print_rev - prints out inputed string in reverse
*@s: input string
*/

void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}

	for (int i = length - 1; i >= 0; i--)
	{
	_putchar(*(s + i));
	}

	_putchar('\n');
}
