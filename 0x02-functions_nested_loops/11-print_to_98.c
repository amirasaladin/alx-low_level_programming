#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - Check code
 * @n: integer
 * Return: the return value data
*/

void print_to_98(int n)
{
	int fdigit, mdigit, ldigit, absn;

	while (n != 98)
	{
		if (n < 0)
		{
			absn = abs(n);
			_putchar('-');
			fdigit = absn * 0.1;
			mdigit = (absn - 100) * 0.1;
			ldigit = absn % 10;
		}
		else
		{
			fdigit = n * 0.1;
			mdigit = (n - 100) * 0.1;
			ldigit = n % 10;
		}
		if (fdigit != 0)
			_putchar(fdigit + '0');
		if (n >= 100)
			_putchar(mdigit + '0');
		_putchar(ldigit + '0');
		if (n != 98)
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
