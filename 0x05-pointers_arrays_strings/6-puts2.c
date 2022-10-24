#include "main.h"
/**
 * puts2 - print even numbers
 * @str: char
 * Return: 0
 */
void puts2(char *str)
{
	for (; *str != '\0'; str++)
	if (*str % 2 != 0)
	{
		continue;
	}
	else
	{
		_putchar(*str);
	}
	_putchar('\n');

}
