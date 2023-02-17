#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - prints the alphabet z-a
*
* Return: 0
*/
int main(void)
{
	int letter = 'z';

	while (letter >= 'a')
	{
	putchar(letter);
	letter--;
	}
	putchar('\n');
	return (0);
}
