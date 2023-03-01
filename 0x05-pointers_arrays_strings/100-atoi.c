#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _atoi - Check code
 * @s: string
 * Return: the return value data
*/

int _atoi(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
{
			break;
}
		i++;
	}
	if (i != 0)
		i--;
	char *tail = strchr(s, s[i]);

	return (atoi(tail));
}
