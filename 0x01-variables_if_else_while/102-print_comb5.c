#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, g;
for (i = 0; i <= 9; i++)
for (j = 0; j <= 9; j++)
for (g = 0; g <= 9; g++)
printf("%d %d %d", i, j, g);
return (0);
}
