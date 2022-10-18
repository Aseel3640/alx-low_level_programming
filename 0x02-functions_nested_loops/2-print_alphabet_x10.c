#include "main.h"
/**
 *print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 *
 *Return:Alphabet
 */
int _putchar(char c);
void print_alphabet_x10(void)
{
char ch = 'a';
int i = 0;

while (i < 10)
{
	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	i++;
	_putchar('\n');
}
}
