#include "main.h"
#include <ctype.h>
/**
 * _islower - Checks if the character argument is a lowercase letter
 *
 * Return: 1 on success, 0 on failure
 *
 * c : is of type int
*/

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);

}
