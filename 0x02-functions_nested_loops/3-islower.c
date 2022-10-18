#include <stdio.h>
#include <ctype.h>
/**
 * _islower - checks if char is lowercase
 * c :char
 * Return 1 if lowercase and  0 if not.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
