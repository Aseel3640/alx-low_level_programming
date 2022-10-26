#include "main.h"
/**
 * leet - encodes a string into 1337
 * @d:string
 * Return: encode string
 */
char *leet(char *d)
{
int i, j;
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";

for (i = 0; *(d + i); i++)
{
for (j = 0; j <= 9; j++)
{
if (a[j] == *(d + i))
*(d + i) = b[j];
}
}
return (d);
}
