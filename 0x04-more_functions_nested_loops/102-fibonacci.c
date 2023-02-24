#include <stdio.h>
/**
 * fib - Check code
 *
 * Return: the return value data
*/

void fib(void)
{
	int count;
	long int x, y, n;

	count = 0;
	x = 1;
	y = 2;
	n = x + y;
	while (count < 48)
	{
		if (x == 1)
		{
			printf("%ld, %ld, ", x, y);
		}
		if (count != 47)
			printf("%ld, ", n);
		else
			printf("%ld\n", n);
		x = y;
		y = n;
		n = x + y;
		count++;
	}
}

/**
 * main - check code
 *
 * Return: int
 */

int main(void)
{
	fib();
	return (0);
}
