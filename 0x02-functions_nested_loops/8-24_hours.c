#include "main.h"
/**
 * name - Check code
 * @n - integer
 * Return: the return value data
*/

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	while (hours < 24)
	{
		while (minutes < 60)
		{
			if (minutes < 10)
			{
				_putchar(0);
				_putchar(48 + minutes);
			}
		}
	}
	return;

}
