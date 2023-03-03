#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - Check code
 * @str: string
 * Return: the return value data
*/

char *string_toupper(char *str)
{
	unsigned long int i = 0;

	while (i < strlen(str))
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
