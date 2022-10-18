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
	int g = n % 10;
	if (n <  0)
		n = -n;
	g = '0'+ n;
	_putchar(g);
	return (n);

}
