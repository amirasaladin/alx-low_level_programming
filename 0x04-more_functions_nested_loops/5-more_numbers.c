#include "main.h"

/**
* print_numbers - check the code
*
* Return: Always void.
*/
void print_numbers(void)
{
int i = 0;
int j = 0;
int fdigit, ldigit;

	while (i <= 10)
	{
		while (i <= 14)
		{
			fdigit = j * 0.1;
			ldigit = j % 10;
			if (i > 9)
			{
				_putchar(fdigit + '0');
			}
			_putchar(ldigit + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
