#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Check code
 * @n: integer
 * Return: the return value data
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;
	int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return sum;
}
