#include <stdio.h>
/**
 *main - Entry point
 *
 *Return:Always 0 (Success)
 */
int main(void)
{
char ch = '0';
char cf = 'a';
for (ch = '0'; ch <= '9'; ch++)
putchar(ch);
for (cf = 'a'; cf <= 'f'; cf++)
putchar(cf);
putchar('\n');
return (0);
}
