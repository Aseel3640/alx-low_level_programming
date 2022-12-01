#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert
 */
void print_binary(unsigned long int n)
{
int c = 0;
int i = sizeof(n) * 8 - 1;
if (n == 0)
_putchar('0');
while (i >= 0)
{
if (n >> i & 1)
{
_putchar('1');
c++;
}
else if (c)
_putchar('0');
i--;
}
}
