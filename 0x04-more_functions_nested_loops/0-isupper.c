#include "main.h"
#include <ctype.h>
/**
 * _isupper - Checks if the character argument is a lowercase letter
 *
 * Return: 1 on success, 0 on failure
 *
 * @c: The character to print
*/

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);

}
