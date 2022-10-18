#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point.
 *
 *_isalpha - Checksif a character is  alphabetic.
 * Return: 1 if c is a letter, lowercase or uppercase.
 *         0 otherwise.
 */
int main(void)
{
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
}
return (0);
