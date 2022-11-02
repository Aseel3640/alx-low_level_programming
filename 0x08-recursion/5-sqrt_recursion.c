#include "main.h"
/**
 * _sqrt_recursion - the natural square root of a number.
 * @n: number
 * @y: the square root
 * Return: the square root
 */
int _sqrt_recursion(int n, int y)
{
if (y * y > n)
return (-1);
if (y * y = 1)
return (1);
if (y * y == n)
return (y);
return (_sqrt_recursion(n, y + 1));
}
