#include "main.h"
#include <string.h>
/**
 * print_rev - Check code
 * @s: integer
 * Return: the return value data
*/

void print_rev(char *s)
{
	int slen;

	slen = strlen(s) - 1;
	while (slen >= 0)
	{
		_putchar(s[slen]);
		slen--;
	}
}
