#include <stdio.h>
#include <stdint.h>
/**
*main - prints all combinations of 0-9
*@num1 and @num2 - set values of the first two numbers
*@count - keep track numbers printed so far
*@next_num - calculate the next number in the sequence
*
* Return: 0
*/
int main(void)
{
	int64_t	num1 = 1, num2 = 2;
	int count = 2;

	printf("%lld, %lld, ", num1, num2);

	while (count < 50)
	{
		int64_t next_num = num1 + num2;

		printf("%lld, ", next_num);

		num1 = num2;
		num2 = next_num;

		count++;
	}

	printf("\n");
	return (0);
}
