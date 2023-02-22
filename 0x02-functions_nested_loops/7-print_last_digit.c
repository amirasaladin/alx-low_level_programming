#include <stdlib.h>
#include <time.h>
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
	int twice;
	int count = 0;

	last_digit = n % 10;

	while (count < 2)
	{
		twice += _putchar(last_digit);
	}

	return (twice);
}
