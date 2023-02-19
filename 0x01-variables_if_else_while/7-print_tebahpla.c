#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <limits.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'z';

	while (alpha <= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
