#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	char end = "z\n";
	
	while (alpha != 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar(end);
	return (0);
}
