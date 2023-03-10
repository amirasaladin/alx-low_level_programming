#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Checks if the character argument is a lowercase letter
 *
 * Return: 1 on success, 0 on failure
 *
 * @c: The character to print
*/

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);

}
