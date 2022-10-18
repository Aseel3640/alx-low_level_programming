#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to the number
 *
 *@c: charecter
 *Return:print all the number to 98
 *
 */
int _putchar(char c);
void print_to_98(int n)
{
if (n <= 98)
{	
printf("%d, ", n);
n++;
}
else if (n >= 98)
{	
printf("%d, ", n);
n--;
}
else
{
printf("98");
}
}
