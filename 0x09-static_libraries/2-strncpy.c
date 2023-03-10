#include "main.h"
/**
* _strncpy - copies a string
* @dest: gets input 1st string
* @n:  number of bytes from src
* @src: gets input 2nd string
*
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i = 0;

	while (*src != '\0' && i < n)
	{
		*p = *src;
		p++;
		src++;
		i++;
	}
	while (i < n)
	{
		*p = '\0';
		p++;
		i++;
	}
	return (dest);
}
