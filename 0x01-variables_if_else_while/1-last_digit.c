#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - print the Last digit of n 
*
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", n);
	}
	if (n == 0)
	{
		printf("Last digit of n is %d and is 0\n", n);
	}
	if (n < 6 && n !=0)
	{
		printf("Last digit of n is %d and is than 6 and not 0\n", n);
	}

	return (0);
}
