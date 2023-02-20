#include <stdio.h>
/**
* main - print possible different combinations of 2 2 digits
*
* Return: 0
*/
int main(void)
{
	int i = 0;
	int j = 0;

	while (i <= 99)
	{
		while (j <= 99)
		{
			if (i < j)
			{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 98 || j != 99)
			{
			putchar(',');
			putchar(' ');
			}
			}
			j++;
		}
	i++;
	j = 0;
	}
	return (0);
}
