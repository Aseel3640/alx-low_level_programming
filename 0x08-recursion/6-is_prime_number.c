#include "main.h"
/**
 * _prime - find if anumber is prime
 * @n: number
 * Return: 0 or 1
 */
int _prime(int i, int j)
{
if (i <= 1 || i % j == 0)
return (0);
if (i == j)
return (1);
if (i > j)
_prime(i, j + 1);
return (1);
}
/**
 * is_prime_number - find prime number
 * @n: number to check
 * Return: prime 1 not 0
 */
int is_prime_number(int n)
{
	return (_prime(n, 2));
}
