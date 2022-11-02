#include "main.h"
/**
 * _sqrt-finf the square root of a number.
 * @n: number
 * @i: the number to test square root
 * Return: the square root
 */
int _sqrt(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - firnd the square root
 * @n: the number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(n, 1));
}
