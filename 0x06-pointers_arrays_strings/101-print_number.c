#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_number - Check code
 * @n: integer
 * Return: the return value data
*/

void print_number(int n)
{
	int ldigit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n > 0 && n < 10)
	{
		_putchar(n + '0');
		return;
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = abs(n);
		}
		ldigit = n % 10;
		print_number(n * 0.1);
		_putchar(ldigit + '0');
	}
}

/*int main(void) {print_number(1024); return(0);}*/
