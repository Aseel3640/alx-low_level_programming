#include "main.h"
/**
 * reverse_array - reverse strings.
 * @a: array
 * @n: integer
 * Return:reverse array
 */
void reverse_array(int *a, int n)
{
	int i = 0, t;

	n = n - 1;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}