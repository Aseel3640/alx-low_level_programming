#include "main.h"
#include <stdio.h>
/**
 * main - check code 
 *
 * Return: 0
 *
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d\n, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d\n, b=%d\n", a, b);
	return (0);
}
