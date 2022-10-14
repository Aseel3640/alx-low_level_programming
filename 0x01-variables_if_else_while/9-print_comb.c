#include <stdio.h>
/**
 *main - Entry point
 *
 *Return:Always 0 (Success)
 */
int main(void)
{
int i = 0;
int j = 0;
do {
printf(" %d,", i);
if (i != j)
{
i++;
j++;
continue;
}
} while (i <= 9 && j<=9);
return (0);
}
