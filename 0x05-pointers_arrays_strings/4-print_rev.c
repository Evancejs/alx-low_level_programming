#include "main.h"
/**
* print_rev - prints out inputed string in reverse
*@s: input string
*/

void print_rev(char *s)
{
	int len = strlen(s);
	int i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
