#include <stdio.h>
/**
 *main - Entry point
 *
 *Return:Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i <= 6;)
for (j = 1; j <= 9;)
{
{
putchar('i, j');
if (i == j)
continue;
putchar(' ');
putchar(',');
j++;
}
i++;
}
putchar('\n');
return (0);
}
