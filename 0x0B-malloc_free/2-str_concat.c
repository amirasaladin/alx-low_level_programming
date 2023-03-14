#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - Check code
 * @s1: string
 * @s2: string
 * Return: the return value data
*/

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s3;
	if (!s1 || !s2)
		return (NULL);
	int size = sizeof(char) * (strlen(s1) + strlen(s2) + 1);
	s3 = malloc(size);
	for (i = 0; i < strlen(s1); i++)
	{
		s3[i] = s1[i];
		for (j = 0; j < strlen(s2); j++)
		{
			s3[j] = s2[j];
		}
	}
	s3[size - 1] = '\0';
	return (s3);
}
