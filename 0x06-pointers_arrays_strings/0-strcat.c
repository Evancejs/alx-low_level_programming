#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: gets input 1st string
* @src: gets input 2nd string
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
