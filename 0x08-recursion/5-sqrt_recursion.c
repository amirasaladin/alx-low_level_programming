#include "main.h"
/**
* good_enough - check the code
* @n: the number you're looking for its sqrt
* @m: guess
* Return: 1, 0, -1
*/
int good_enough(int n, int m)
{
	if (m * m == n)
		return (1);
	else if (m > n)
		return (-1);
	else
		return (0);
}

/**
 * _sqrt_recursion_iter - check the code
 * @n: the number you're looking for its sqrt
 * @m: guess
 * Return: m, -1
*/
int _sqrt_recursion_iter(int n, int m)
{
	if (good_enough(n, m) == -1 || n < 0)
		return (-1);
	else if (good_enough(n, m))
		return (m);
	else
		return (_sqrt_recursion_iter(n, m + 1));
}
/**
 *  _sqrt_recursion - Check code
 * @n: integer
 * Return: the return value data
*/

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_iter(n, 1));
}
