#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - Check code
 * @str: integer
 * Return: the return value data
*/

void puts2(char *str)
{
	int slen;
	int i = 0;

	slen = strlen(str) - 1;
	while (i <= slen)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
