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
	int capital = 'A';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}

	while (capital <= 'Z')
	{
	putchar(capital);
	capital++;
	}

	putchar('\n');
	return (0);
}
