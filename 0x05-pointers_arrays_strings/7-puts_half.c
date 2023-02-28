#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - Check code
 * @str: integer
 * Return: the return value data
*/

void puts_half(char *str)
{
	int slen;
	int i;

	slen = strlen(str) - 1;
	i = slen / 2 + 1;
	while (i <= slen)
	{
		if (i <= slen)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
