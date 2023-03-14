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
	unsigned long int i;
	unsigned long int j;
	char *s3;
	
	if (!s3)
		return (NULL);
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	s3 = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	for (i = 0; i < strlen(s1); i++)
		s3[i] = s1[i];
	for (j = 0; j < strlen(s2); j++)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
