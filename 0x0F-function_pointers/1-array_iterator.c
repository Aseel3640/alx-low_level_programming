#include "function_pointers.h"
/**
 * array_iterator - given as a parameter on each element of an array
 * @array: the array to pass
 * @size: the size of array
 * @action: pointer to the function we need to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array != NULL && action != NULL && size > 0)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
}
