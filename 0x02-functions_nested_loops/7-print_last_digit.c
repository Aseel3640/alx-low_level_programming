#include <unistd.h>
#include <stdio.h>
/**
 * print_last_digit - Prints the last digit of a number
 *@c: The character to print
 *
 *print_last_digit - Prints the last digit of a number
 *
 *Return: Last digit
 */
int _putchar(char c);
int print_last_digit(int g)
{
	int n;

	 n = (g % 10);

	if (n < 0)
	{
		n = (-1 * n);
	}
	_putchar(n + '0');
	return (n);

}
