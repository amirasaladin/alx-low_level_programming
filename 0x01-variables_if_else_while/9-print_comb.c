#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';

	while (n < 10)
	{
		putchar(n);
		if (n != 9)
		{
			putchar(',');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
