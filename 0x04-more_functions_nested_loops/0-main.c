#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int _isupper(int c);
int main (void)
{
	char c;
	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
