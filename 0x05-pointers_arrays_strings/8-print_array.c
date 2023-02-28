#include <stdio.h>
#include "main.h"

/**
* print_array - prints an array
*@a: pointer to input a
*@n: input variable
*
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}

	printf("\n");
}
