#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum integer value
 * @max: maximum integer value
 *
 * Return: pointer to the newly created array
 *         or NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		array[i] = min + i;

	return (array);
}
