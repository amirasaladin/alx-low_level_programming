#include "main.h"

/**
* print_line - check the code
*
* @n: integer
*
* Return: Always void.
*/
void print_line(int n)
{
	int i = 1;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

