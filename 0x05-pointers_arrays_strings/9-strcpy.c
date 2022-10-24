#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @n: integer
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
int i;

while (*(src + i))
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
