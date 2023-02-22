#include <stdio.h>
/* main - This program computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded).
 * It does so by iterating over all numbers from 0 to 1023, and checking if each number is a multiple of 3 or 5.
 * If a number is a multiple of 3 or 5, its value is added to the total sum.
 * Finally, the total sum is printed to the console, followed by a new line.
 */
int main(void)
{
	int sum = 0;
	int i = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
		sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
