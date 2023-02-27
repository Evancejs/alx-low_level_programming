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

	int i = length - 1;

	while (i >= 0)
	{
		putchar(*(s + i));
		i--;
	}

	_putchar('\n');
}
