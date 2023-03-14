#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strdup - Check code
 * @str: string
 * Return: the return value data
*/

char *_strdup(char *str)
{
	if (!str)
		return (NULL);
	else
		return (strdup(str));
}
