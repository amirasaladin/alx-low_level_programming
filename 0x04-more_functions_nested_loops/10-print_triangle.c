#include "main.h"
/**
 * print_triangle - Check code
 * @size: integer
 * Return: the return value data
*/

void print_triangle(int size)
{
	int count = 1;
	int i = size;
	int j = size - count;
	int k = 0;

	if (size > 0)
	{
		while (i > 0)
		{
			while (j > 0)
			{
				_putchar('.');
				j--;
			}
			count++;
			j = size - count;
			while (k < count - 1)
			{
				_putchar('#');
				k++;
			}
			k = 0;
			_putchar('\n');
			i--;
		}
	}
	else
	{
		_putchar('\n');
	}
	return;

}
