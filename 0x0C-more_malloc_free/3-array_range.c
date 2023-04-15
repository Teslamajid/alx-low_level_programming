#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum rangee of values stored
 *
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size = max - min + 1;

	if (size <= 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}

