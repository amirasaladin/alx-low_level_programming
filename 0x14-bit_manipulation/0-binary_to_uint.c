#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b);
	int i;
	unsigned int decimal = 0;
	int inc = 1;

	if (b == NULL)
		return (0);
	for (i = 1; i <= len; i++)
	{
		if (b[len - i] != '0' && b[len - i] != '1')
			return (0);
		if (b[len - i] == '1')
			decimal += inc;
		inc = inc * 2;
	}
	return (decimal);
}
