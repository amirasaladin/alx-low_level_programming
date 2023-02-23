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
	while (count < 49)
	{
		if (x == 1)
		{
			printf("%d, %d, ", x, y);
		}
		if (count != 48)
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
