#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * @c: charecter
 * Return: numbers
 */

int _putchar(char c);
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j <= 14)
		{
			_putchar(j);
		}	
		j++;
	}
		i++;
		_putchar('\n');
}
