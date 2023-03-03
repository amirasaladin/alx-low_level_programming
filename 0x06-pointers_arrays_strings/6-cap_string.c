#include "main.h"
#include <ctype.h>
/**
 * cap_string - Check code
 * @str: string
 * Return: the return value data
*/

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' ||
			str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' ||
			str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' ||
			str[i] == '\"' || str[i] == '(' ||
			str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			str[i + 1] = toupper(str[i + 1]);
		}
		i++;
	}
	return (str);
}
