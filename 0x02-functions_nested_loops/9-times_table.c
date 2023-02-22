#include "main.h"
/**
 * times_table - Check code
 * Return: the return value data
*/

void times_table(void)
{
	int x, y = 0;
	int fdigit, ldigit, mult;
	printf("%d", (x * y));
	while (x == 0)
	{
		while (y == 0)
		{
			mult = x * y;
			fdigit = mult * 0.1;
			ldigit = mult % 10;
			_putchar(fdigit + '0');
			_putchar(ldigit + '0');
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			y++;
		}
		_putchar('\n');
		y = 0;
		x++;
	}
	return;

}
