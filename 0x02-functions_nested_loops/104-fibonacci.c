#include <stdio.h>
/**
*main - prints the first 98 Fibonacci numbers
*@num1 and @num2 - set values of the first two numbers
*@i - keep track numbers printed so far
*@next_num - calculate the next number in the sequence
*
* Return: 0
*/
int main(void)
{
	int num1 = 1, num2 = 2;

	printf("%d, %d, ", num1, num2);

	for (int i = 3; i <= 98; i++)
	{

		int next_num = num1 + num2;

		printf("%d", next_num);

		if (i < 98)
		{
		printf(", ");
		}

		num1 = num2;
		num2 = next_num;
	}

	printf("\n");

	return (0);
}
