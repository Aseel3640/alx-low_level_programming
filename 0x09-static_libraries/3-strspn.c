#include "main.h"
/**
 * *_strspn -  length of a prefix substring.
 * @s: string
 * @accept: string
 *
 * Return: the number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
		break;
	}
	return (i);
}
