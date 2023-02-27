#include "main.h"
#include <string.h>
/**
* rev_string - prints out inputed string in reverse
*@s: input string
*
*/

void rev_string(char *s)
{
	int len = strlen(s);
	int i = 0, j = len - 1;
	char temp;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
