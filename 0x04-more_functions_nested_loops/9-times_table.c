#include "main.h"
#include <stdio.h>
/**
 * times_table - Check code
 * Return: the return value data
*/

void times_table(void)
{
	int x = 0;
	int y = 0;
	int fdigit, ldigit, mult;

	while (x < 10)
	{
		while (y < 10)
		{
			mult = x * y;
			fdigit = mult * 0.1;
			ldigit = mult % 10;
			if (fdigit != 0)
				_putchar(fdigit + '0');
			if (fdigit == 0 && y != 0)
				_putchar(' ');
			_putchar(ldigit + '0');
			if (y != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		y = 0;
		x++;
	}
	return;

}
