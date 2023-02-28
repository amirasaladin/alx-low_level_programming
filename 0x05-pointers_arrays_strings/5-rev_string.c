#include "main.h"
#include <string.h>
/**
 * rev_string - Check code
 * @s: integer
 * Return: the return value data
*/

void rev_string(char *s)
{
	int slen;
	char ns[strlen(s)];
	int i = 0;

	slen = strlen(s) - 1;
	while (slen >= 0)
	{
		*(ns + i) = s[slen];
		s[i] = ns[i];
		slen--;
		i++;
	}
	_putchar('\n');
}
