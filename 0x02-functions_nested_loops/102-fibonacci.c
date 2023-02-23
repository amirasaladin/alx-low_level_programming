#include <stdio.h>
/**
 * fib - Check code
 *
 * Return: the return value data
*/

void fib(void)
{
	int x, y, n, count;

	count = 0;
	x = 1;
	y = 2;
	n = x + y;
	while (count < 51)
	{
		if (count != 50)
			printf("%d,", n);
		else
			printf("%d\n", n);
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
