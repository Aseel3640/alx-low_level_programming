#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @c: char
 * Return: 0 (Success)
 */
int _isdigit(int c);
int main(void)
{
	char c;

	c = '1';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
