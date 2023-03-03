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
	int temp;
	int limit = n / 2;
	int i = n - 1;
	int j = 0;

	while (i > limit)
	{
		temp = a[j];
		*(a + j) = a[i];
		*(a + i) = temp;
		j++;
		i--;
	}
}
