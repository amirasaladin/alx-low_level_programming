#include <stdio.h>

/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d %s\n", n, "is positive");
	else if (n == 0)
		printf("%d %s\n", n, "is zero");
	else
		printf("%d %s\n", n, "is negative");
	return;
}
