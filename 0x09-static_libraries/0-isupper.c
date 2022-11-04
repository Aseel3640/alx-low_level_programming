#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - checks for uppercase character
 * @c :char
 * Return: 1 if uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
