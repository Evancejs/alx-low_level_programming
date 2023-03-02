#include <ctype.h>
#include "main.h"
/**
* string_toupper - changes string to uppercase
* @str: input string
*
*Return: uppercase str
*/

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		*ptr = toupper(*ptr);
		ptr++;
	}
	return (str);
}
