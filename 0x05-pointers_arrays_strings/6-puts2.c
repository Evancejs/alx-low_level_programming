#include "main.h"
#include <string.h>
/**
* puts2 - prints out inputed string in reverse
*@str: input string
*
*/

void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	i = (len + 1);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
