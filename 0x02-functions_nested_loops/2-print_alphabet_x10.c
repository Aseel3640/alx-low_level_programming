#include <stdio.h>
/**
 *main - Entry point
 *
 *Return:Always 0 (Success)
 */
int main(void)
{
void print_alphabet_x10(void);
char ch = 'a';
int i = 0;

while(i<10)
{
	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	i++;
}
return (0);
}
