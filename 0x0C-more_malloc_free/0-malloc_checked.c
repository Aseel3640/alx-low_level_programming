#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: the zise to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
unsigned int *i;
i = malloc(b);
if (i == NULL)
exit(98);
return (i);
}
