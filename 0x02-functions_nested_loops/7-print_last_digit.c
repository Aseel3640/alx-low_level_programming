#include <unistd.h>
#include <stdio.h>
/*
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *
 *print_last_digit - Prints the last digit of a number
 *
 *Return: Last digit
 */
int _putchar(char c);
int print_last_digit(int n)
{
	int n;

	n(n % 10);

	if (n <0)
	{
		n =(-1 * '0');
	}
	_putchar(n + '0');
	return (n);

}
