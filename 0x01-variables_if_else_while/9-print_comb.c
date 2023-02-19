#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int numchar = '0';
	while (n < 10)
	{
		putchar(numchar);
		if (n != 9)
		{
			putchar(',');
		}
		n++;
		numchar++;
	}
	putchar('\n');
	return (0);
}
