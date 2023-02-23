#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - Check code
 * @n: integer
 * Return: the return value data
*/

void print_to_98(int n)
{
	int fdigit, ldigit;

	while (n != 98)
	{
		if (n < 0)
			n = abs(n);
			_putchar('-');
		fdigit = n * 0.1;
		ldigit = n % 10;
		if (fdigit != 0)
			_putchar(fdigit + '0');
		_putchar(ldigit + '0');
		if(n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (n < 98)
			n++;
		else
			n--;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
	return;
}
