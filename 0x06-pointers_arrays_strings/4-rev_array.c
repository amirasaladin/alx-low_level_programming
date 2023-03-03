#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include "101-print_number.c"
/**
 * reverse_array - Check code
 * @n: integer
 * @a: array
 * Return: the return value data
*/

void reverse_array(int *a, int n)
{
	int i = n;
	int j = 0;

	while (i < n)
	{
		*(a + j) = a[i];
		j++;
		i--;
	}
}
