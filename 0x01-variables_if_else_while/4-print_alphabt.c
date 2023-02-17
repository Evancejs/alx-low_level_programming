#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - prints the alphabet azAZ, followed by a new line
*
* Return: 0
*/
int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
		continue;
		}
	putchar(letter);
	letter++;
	}
	
	putchar('\n');
	return 0;
}
