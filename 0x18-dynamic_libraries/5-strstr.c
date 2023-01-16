#include "main.h"
/**
 * *_strstr -  locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: the number of bytes in s
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;

	while (needle[j] != '\0')
		j++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return (0);
}
