#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_last_digit - Check the code
 * @n: digit
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	twice = last_digit * 10 + last_digit;
	_putchar(last_digit);
	_putchar(last_digit);
	_putchar('\n');
	return (0);
}