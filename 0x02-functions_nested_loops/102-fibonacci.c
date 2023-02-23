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
	while (count < 51)
	{
		n = x + y;
		if (count != 50)
			printf("%d,", n);
		else
			printf("%d\n", n);
		x = y;
		y = n;
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
