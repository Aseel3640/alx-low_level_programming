#include "main.h"
/**
 *print_line - print _ n time
 *@n: integer
 */
int _putchar(char c);
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
