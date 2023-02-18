#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = NUL;

	while (n < 'LF')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
