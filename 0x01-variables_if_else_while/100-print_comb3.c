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
	int n2 = 1;
	int num = 48;
	int num2 = 49;

	while (n < 10)
	{
		putchar(num);
		while (n < 10)
		{
			putchar(num2);
			putchar(',');
			putchar(' ');
		}
		n++;
		num++;
		n2 = n + 1;
		num2 = num + 1;
	}
	putchar('\n');
	return (0);
}
