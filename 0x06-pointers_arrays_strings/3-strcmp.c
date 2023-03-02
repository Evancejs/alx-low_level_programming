#include "main.h"
/**
* _strcmp - copies 2 strings
* @s1: gets input 1st string
* @s2: gets input 2nd string
*
*Return: value of the difference of the strings
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
