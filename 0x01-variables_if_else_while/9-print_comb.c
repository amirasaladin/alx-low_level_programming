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
	int num = 48;
	while (n < 10)
	{
		putchar(num);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
		num++;
	}
	putchar('\n');
	return (0);
}
