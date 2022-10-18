#include <unistd.h>
#include <stdio.h>
/**
  *times_table -  a function that prints the 9 times table, starting with 0
  *@c:character
  *Return: times table
  */
int _putchar(char c);
void times_table(void)
{
	int e, c, d;

	for (e = 0; e <= 9; e++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			d = (e * c);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}

