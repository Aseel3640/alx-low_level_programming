#include "main.h"
/**
 *  _memcpy - copy memory 
 *  @dest: memory area to be copied
 *  @src:  memory area to be copied in
 *  @n: number of time to be copied
 *  Return: copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
