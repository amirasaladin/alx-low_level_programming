#include "main.h"
/**
 * _pow_recursion - Check code
 * @x: integer
 * @y: integer
 * Return: the return value data
*/

int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (1);
	else if (x < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
