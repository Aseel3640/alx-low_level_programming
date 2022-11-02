#include "main.h"

/**
 * _pow_recursion
 * @x: number
 * @y: the power
 *
 * Return: factorial
 */
int _pow_recursion(int x, int y)
{
	if (n < 0)
		return (-1);
			if (n == 0)
				return (1);
			if (x == 0)
				return (0);
			return (x * power(x, n - 1));
}
