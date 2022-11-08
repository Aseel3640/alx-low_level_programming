#include "main.h"
#include <stdlib.h>`
/**
 * *create_array:  creates an array of chars
 * @size: size of array
 * @c: character of array
 * Return: 
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	j = malloc(sizeof(char) * size);
	if (size == 0 || j == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		j[i] = c;
		i++;
	}
	return (j);
}
