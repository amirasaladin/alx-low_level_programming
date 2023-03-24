#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - Check code
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: the return value data
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (1)
			printf("%d", va_arg(ap, int));
		else
			printf("nil");
		if (i != n - 1 && separator != NULL)
			printf("%s ", separator);
	}
	va_end(ap);
	printf("\n");
}
