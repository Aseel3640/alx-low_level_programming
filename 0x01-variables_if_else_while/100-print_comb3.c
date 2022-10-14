#include <stdio.h>
/**
 *main - Entry point
 *
 *Return:Always 0 (Success)
 */
int main(void)
{
int i = 0;
int j = 1;
do {
printf(" %d%d,", i, j);
i++;
j++;
} while (i <= 6 && j <= 9);
return (0);
}
