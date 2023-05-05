#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long integer
 * Return: the binary representation of n
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		if ((n & 1) == 0)
			_putchar('0');
		else
			_putchar('1');
		n >>= 1;
	}
}
