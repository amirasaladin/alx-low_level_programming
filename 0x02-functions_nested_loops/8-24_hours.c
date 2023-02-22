#include "main.h"
/**
 * name - Check code
 * @n - integer
 * Return: the return value data
*/

void jack_bauer(void)
{
	int hr, min = 0;
	int fdigit, ldigit;

	while (hr < 24)
	{
		while (min < 60)
		{
			if (hr < 10)
			{
				_putchar('0');
			}
			fdigit = hr * 0.1;
			ldigit = hr % 10;
			_putchar(fdigit + '0');
			_putchar(ldigit + '0');
			_putchar(':');
			if (min < 10)
			{
				_putchar('0');
			}
			fdigit = min * 0.1;
			ldigit = min % 10;
			_putchar(fdigit + '0');
			_putchar(ldigit + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}
	return;

}
