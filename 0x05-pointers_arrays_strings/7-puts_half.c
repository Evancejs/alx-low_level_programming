#include "main.h"
#include <string.h>
/**
* puts_half - prints out half of inputed string
*@str: input string
*
*/

void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len - 1) / 2;
	}
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
