#include "main.h"
/**
* print_alphabet_x10 - prints a-z 10 times
*/
void print_alphabet_x10(void)
{
	char letter = 'a';
	int num = 0;
	while (num <= 9)
	{
		while (letter <= 'z')
		{
		_putchar(letter);
		letter++;
		}
	letter = 'a';
	num++;
	}
	_putchar('\n');
}
