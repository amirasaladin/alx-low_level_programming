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
	int n1 = 0;
	int n2 = 0;
	int n3 = 1;
	int num = 48;
	int num1 = 48;
	int num2 = 48;
	int num3 = 49;
	
	while (n < 10)
	{
		while (n1 < 10)
		{
			while (n2 < 10)
			{
				while (n3 < 10)
				{
					putchar(num);
					putchar(num1);
					putchar(' ');
					putchar(num2);
					putchar(num3);
					putchar(',');
					putchar(' ');
					num3++;
					n3++;
				}
				num3 = num2;
				n3 = n2;
				n2++;
				num2++;
			}
			num2 = num1;
			n2 = n1;
			n1++;
			num1++;
		}
		n++;
		num++;
	}
	return (0);
}
