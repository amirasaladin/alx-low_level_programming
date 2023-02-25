#include "main.h"
#include <stdio.h>

/**
 * lprime_factor - Check code
 *
 * Return: the return value data
*/
void lprime_factor(void)
{
	long int n = 612852475143;
	long int i = 2;

	while (n != i)
	{
		if (n % i == 0)
		{
			n = n / i;
			/*printf("%ldn, ", n);*/
			/*printf("%ldi, ", i);*/
		}

		if (n % 2 == 0)
		{
			i = 2;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", n);
}

/**
 * main - Entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	lprime_factor();
	return (0);
}
