#include "main.h"

/**
* print_square - check the code
*
* @size: size of square
*
* Return: Always void.
*/
void print_square(int size)
{
int i = 0;
int j = 0;

	while (i < size && size >= 0)
	{
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		i++;
		j = 0;
		_putchar('\n');
	}
}
