#include "main.h"
#include <string.h>
/**
* is_palindrome_iter - check the code
*@s: string
*@i: first char
*@j: last char
*Return: 0 when not a palindrome, 1 when a palindrome
*/

int is_palindrome_iter(char *s, unsigned long int i, unsigned long int j)
{
	if (s[i] != s[j])
		return (0);
	else if (i == j || i == strlen(s) / 2)
		return (1);
	else
		return (is_palindrome_iter(s, i + 1, j - 1));
}
/**
 * is_palindrome - Check code
 * @s: string
 * Return: the return value data
*/

int is_palindrome(char *s)
{
	return (is_palindrome_iter(s, 0, (strlen(s) - 1)));
}
