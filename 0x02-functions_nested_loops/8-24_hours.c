#include <unistd.h>
#include <stdio.h>
/**
 *jack_bauer - function that prints every minute of the day, 24 hour clock
 *a = hour, b = minutes
 *@c:character
 *10 allows second digit to rotate
 *Return: 24 hour clock second in each line
 */
int _putchar(char c);
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}
}
