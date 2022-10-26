#include "main.h"
/**
 * _strncpy - copy string
 * @dest: string
 * @src: string
 * @n: integer
 * Return: copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c, y;

	c = y = 0;
	while (*(src + y))
	{
		y++;
	}
	while (c < n && *(src + c))
	{
		*(dest + c) = *(src + c);
		c++;
	}
	while (c < n)
	{
		*(dest + c) = '\0';
		c++;
	}
	return (dest);
}
