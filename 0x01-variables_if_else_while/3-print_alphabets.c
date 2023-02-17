#include <stdio.h>
/**
* main - prints the alphabet azAZ, followed by a new line 
*
* Return: 0
*/
int main(void)
{
	char letter, capital;

	for (letter = 'a', capital = 'A'; letter <= 'z'; letter++, capital++)
	{
		putchar(letter);
		putchar(capital);
	}

	putchar('\n');
	return 0;
}
