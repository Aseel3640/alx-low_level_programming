#include "main.h"
/**
 *print_line - print _ n time
 *@n: integer
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
