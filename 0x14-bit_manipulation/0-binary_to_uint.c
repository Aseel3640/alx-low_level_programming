#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
if (!b)
return (0);
while (*b)
{
if (*b != '0' && *b != '1')
return (0);
val = val * 2 + *b - '0';
++b;
}
return (val);
}
