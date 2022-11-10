#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min:value
 * @max: value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

			for (i = 0;  i < size; i++)
				array[i] = min++;

	return (array);
}
