#include "main.h"
/**
 * jack_bauer - Check code
 * Return: the return value data
*/

void times_table(void)
{
	int x, y = 0;
	int fdigit, ldigit, mult;

	while (x < 10)
	{
		while (y < 10)
		{
			mult = x * y;
			fdigit = mult * 0.1;
			ldigit = mult % 10;
			if (fdigit != 0)
			{
				_putchar(fdigit + '0');
			}
			_putchar(ldigit + '0');
			_putchar(' ');
			y++;
		}
		_putchar('\n');
		y = 0;
		x++;
	}
	return;

}
