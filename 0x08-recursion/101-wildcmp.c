#include "main.h"
#include <string.h>
/**
 * wildcmp - Check code
 * @s1: string 1
 * @s2: string 2
 * Return: the return value data
*/

int wildcmp(char *s1, char *s2)
{
	if (strlen(s1) == 0 && strlen(s2) == 0)
		return (1);
	else if (s2[0] == '*' && s2[1] == '*')
		return (wildcmp(s1, s2 + 1));
	else if (s2[0] == '*' && s1[0] == s2[1])
		return (wildcmp(s1, s2 + 1));
	else if (s2[0] == '*')
		return (wildcmp(s1 + 1, s2));
	else if (s1[0] == s2[0])
		return (wildcmp(s1 + 1, s2 + 1));
	else if (strlen(s1) == 0 && strlen(s2) != 0)
		return (0);
	else
		return (0);
}
