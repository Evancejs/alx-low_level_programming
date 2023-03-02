#include "main.h"
/**
* rot13 - encrypts str
* @str: gets input
*
*Return: ROT13 encrypted str
*/
char *rot13(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p >= 'A' && *p <= 'Z')
		{
			*p = (*p - 'A' + 13) % 26 + 'A';
		}
		else if (*p >= 'a' && *p <= 'z')
		{
			*p = (*p - 'a' + 13) % 26 + 'a';
		}
		p++;
	}
	return (str);
}
