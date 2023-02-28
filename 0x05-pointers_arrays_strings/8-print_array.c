#include "main.h"
#include <stdio.h>
/**
 * print_array - Check code
 * @a: array
 * @n: length of a
 * Return: the return value data
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
