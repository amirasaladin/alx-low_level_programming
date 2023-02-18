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
	
	while (alpha != 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar("z\n");
	return (0);
}
