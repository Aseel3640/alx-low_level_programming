#include "main.h"
/**
 * *_strchr -  locates a character in a string
 * @s: string
 * @c: charecter to be found
 *
 * Return: a pointer to the first c in the string s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
