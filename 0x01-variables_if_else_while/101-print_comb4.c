#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - print possible different combinations of 3 digits
*
* Return: 0
*/
int main(void)
{
	int i = 0;
	int j = 1;
	int k = 2;

	while (i <= 7)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(k + '0');
		if (i == 7 && j == 8 && k == 9)
		break;
		putchar(',');
		putchar(' ');
		k++;
		if (k > 9)
		{
		j++;
		k = j + 1;
		}
		if (j > 8)
		{
		i++;
		j = i + 1;
		k = j + 1;
		}
	}
	putchar('\n');
	return 0;
}
