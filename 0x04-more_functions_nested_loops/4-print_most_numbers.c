#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * @c: character
 * Return: number 0 to 9
 *
 */
int _putchar(char c);
void print_numbers(void)
{
	int i = 0;

	for (;i <= 9; i++)
	{
		if (i == 2 || i == 54)
		{
			continue;
		}
		else
		{
		_putchar(i + '0');
		}	
	}
	_putchar('\n');
}
