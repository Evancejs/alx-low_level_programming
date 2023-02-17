#include <stdio.h>
/**
* main - prints all combinations of 0-9
*
* Return: 0
*/
int main(void)
{
	int i = 0, j;

	while (i < 10)
	{
	j = i;
		while (j < 10)
		{
		putchar((i * 10 + j) / 10 + '0');
		putchar((i * 10 + j) % 10 + '0');
			if (j < 9)
			{
			putchar(',');
			putchar(' ');
			}
		j++;
		}
	i++;
	}
	return (0);
}
