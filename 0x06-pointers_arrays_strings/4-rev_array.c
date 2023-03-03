#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Check code
 * @n: integer
 * @a: array
 * Return: the return value data
*/

void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
		}
		i--;
	}
	printf("\n");
}
