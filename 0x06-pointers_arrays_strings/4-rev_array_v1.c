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
	int i;

	i = n - 1;
	while (i >= 0)
	{
		print_number(a[i]);
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		i--;
	}
	_putchar('\n');
}
