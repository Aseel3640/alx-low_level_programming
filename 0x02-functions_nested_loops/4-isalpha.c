#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry
 * _alpha
 */
int main()
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
