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
	char alpha = CHAR_MIN;
	while (alpha != CHAR_MAX)
	{
		putchar(alpha);
		alpha++;
	}
	return (0);
}
