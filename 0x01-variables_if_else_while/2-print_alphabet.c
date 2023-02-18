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
	char z = CHAR_MAX;
	
	while (alpha != z)
	{
		putchar(alpha);
		alpha++;
	}
	putchar(z);
	return (0);
}
