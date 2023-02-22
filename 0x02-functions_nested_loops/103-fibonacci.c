#include <stdio.h>
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
	long long num1 = 1, num2 = 2;

	long long even_sum = 2;

	while (num1 + num2 <= 4000000) {
		long long next_num = num1 + num2;

		if (next_num % 2 == 0) {
			even_sum += next_num;
		}

		num1 = num2;
		num2 = next_num;
	}

	printf("%lld\n", even_sum);

	return (0);
}
