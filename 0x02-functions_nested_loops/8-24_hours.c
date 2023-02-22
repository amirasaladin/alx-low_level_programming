#include "main.h"
/**
 * name - Check code
 * @n - integer
 * Return: the return value data
*/

void jack_bauer(void)
{
	int hr = 0;
	int min = 0;

	while (hr < 24)
	{
		while (min < 60)
		{
			if (hr < 10)
			{
				_putchar('0');
			}
			_putchar(hr + '0');
			_putchar(':');
			if (min < 10)
			{
				_putchar('0');
			}
			_putchar(min + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}
	return;

}
