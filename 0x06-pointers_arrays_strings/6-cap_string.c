#include <ctype.h>
#include "main.h"
/**
* cap_string - uppercases first letter of words
* @str: gets input of the string
*
*Return: uppercase str
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int cap_next = 1;

	while (*ptr != '\0')
	{
		if (cap_next && islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' || *ptr == ';'
		|| *ptr == '.' || *ptr ==  '!' || *ptr ==  '?' || *ptr == '"' || *ptr == '('
		|| *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			cap_next = 1;
		}
		else
		{
			cap_next = 0;
		}
		ptr++;
	}
	return (str);
}
