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
	int i = 0;

	while (i < n && i >= 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

