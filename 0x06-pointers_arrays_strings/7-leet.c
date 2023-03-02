#include <string.h>
#include "main.h"
/**
* leet - encodes a string into 1337
* @str: gets input of the string
*
*Return: encoded str
*/

char *leet(char *str)
{
	char *ptr = str;
	char *leet_letters = "aAeEoOtTlL";
	char *leet_codes = "4433007711";

	while (*ptr)
	{
		char *leet_ptr = leet_letters;
		char *code_ptr = leet_codes;

		while (*leet_ptr)
		{
			if (*ptr == *leet_ptr)
			{
				*ptr = *code_ptr;
				break;
			}
			leet_ptr++;
			code_ptr++;
		}
		ptr++;
	}
	return (str);
}
