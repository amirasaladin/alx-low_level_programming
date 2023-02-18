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
	char alpha = 'a';
	char alpha2 = 'A';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (alpha2 <= 'Z')
	{
		putchar(alpha2);
		alpha2++;
	}
	putchar('\n');
	return (0);
}
