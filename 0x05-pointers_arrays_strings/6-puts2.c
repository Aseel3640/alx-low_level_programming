#include "main.h"
/**
 * puts2 - print even numbers
 * @str: char
 * Return: 0
 */
void puts2(char *str)
{
	for (; *str != '\0'; str += 2)
		_putchar(*str);
	_putchar('\n');
}
