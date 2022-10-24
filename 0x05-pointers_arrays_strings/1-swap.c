#include "main.h"
/**
 * swap_int -switch 2 integer value
 * @a: integer
 * @b: integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
