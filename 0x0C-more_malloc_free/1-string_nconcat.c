#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * string_nconcat - Check code
 * @s1: first string
 * @s2: second string
 * @n: the first n bytes of s2
 * Return: if the function fails it should return NULL
 * if NULL is passed, treat it as an empty string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sent;
	size_t i, strlen_s1, strlen_s2;
	int j = 0;

	/* if NULL is passed, treat it as an empty string */
	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;

	strlen_s1 = strlen(s1);
	strlen_s2 = strlen(s2);
	/* check the len of s2, in case n > len of s2 set n to the len of s2 */
	if (n > strlen_s2)
		n = strlen_s2;
	sent = malloc(sizeof(char) * (strlen_s1 + n + 1));
	/* if function fails it returns NULL */
	if (!sent)
		return (NULL);
	/* concatinate sentences, s1 followed by the first n bytes of n2 */
	for (i = 0; i < strlen_s1; i++)
		sent[i] = s1[i];
	for (i = strlen_s1; i < strlen_s1 + n; i++)
	{
		sent[i] = s2[j];
		j++;
	}
	/* NULL terminated */
	sent[strlen_s1 + n + 1] = '\0';
	return (sent);
}
