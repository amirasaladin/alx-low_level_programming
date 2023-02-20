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
	int n3 = 2;
	int num = 48;
	int num2 = 49;
	int num3 = 50;

	while (n < 10)
	{
		while (n2 < 10)
		{
			while (n3 < 10)
			{
				putchar(num);
				putchar(num2);
				putchar(num3);
				if (n2 != 8)
				{
					putchar(',');
					putchar(' ');
				}
				n3++;
				num3++;
			}
			n2++;
			num2++;
			n3 = n2 + 1;
			num3 = num2 + 1;
		}
		n++;
		num++;
		n2 = n + 1;
		num2 = num + 1;
		n3 = n2 + 1;
		num3 = num2 + 1;
	}
	putchar('\n');
	return (0);
}
