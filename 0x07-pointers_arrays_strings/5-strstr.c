#include "main.h"
/**
* _strstr -  searches a string for any of a set of bytes
* @haystack: string input
* @needle: bytes
*
*Return: a pointer to the byte in s that matches one of
* the bytes in accept, or NULL if no such byte is found
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
