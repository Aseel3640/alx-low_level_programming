#include <stdio.h>
#include "main.h"
/**
 * print_binary -  prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
voi  print_binary(unsigned long n binary.int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
