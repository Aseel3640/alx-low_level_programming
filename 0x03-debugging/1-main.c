#include <stdio.h>
/**
 *main - causes an infinite loop
 *no i++ so the loop keep going to the same place
 *Return: 0
 *
 */
int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 0;
while (i < 10)
{
putchar(i);
}
printf("Infinite loop avoided! \\o/\n");
return (0);
}
