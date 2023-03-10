#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Check the code
 *
 * Return: 1 on success, 0 on failure
 *
 * @c: The character to print
*/

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);

}
