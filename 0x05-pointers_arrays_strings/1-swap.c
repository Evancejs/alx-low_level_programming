#include "main.h"
/**
* swap_int - swaps values of two pointers
* @a: *a pointer to the variable a from input
* @b: *b pointer to the variable b from input
*
*
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
