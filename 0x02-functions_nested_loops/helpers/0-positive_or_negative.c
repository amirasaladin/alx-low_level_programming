#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d %s\n", n, "is positive");
	else if (n == 0)
		printf("%d %s\n", n, "is zero");
	else
		printf("%d %s\n", n, "is negative");
	return (0);
}
