#include <stdio.h>
/**
 *main - Entry point
 *
 *Return:Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i <= 6; i++)
for (j = 1; j <= 9; j++)
if (i == j)
{
continue;
}
{
printf(" %d%d,", i,j);
}
return (0);
}
