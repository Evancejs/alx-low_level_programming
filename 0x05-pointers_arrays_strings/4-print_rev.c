#include "main.h"
/**
* print_rev - prints out inputed string in reverse
*@s: input string
*/

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
	length++;
	s++;
	}

	i = length - 1;

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}

	_putchar('\n');
}
