#include "main.h"
/**
 * puts2 - print every other number
 * @str: char
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (*(str + i) != '\0')
		{
			continue;
		}
		_putchar(*(str + i));
		i = i + 2;
		{
	}
		else
	_putchar('\n');
}
