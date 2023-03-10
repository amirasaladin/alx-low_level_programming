#include "main.h"
/**
* is_prime_number_iter - check the code
* @n: number
* @i: iteration
* Return: 1, 0
*/

int is_prime_number_iter(int n, int i)
{
	if (i == 0)
		return (1);
	else if ((n % i == 0 && i != 1 && i != n) || n < 0 || n == 1)
		return (0);
	else
		return (is_prime_number_iter(n, i - 1));
}
/**
 * is_prime_number - Check code
 * @n: integer
 * Return: the return value
*/

int is_prime_number(int n)
{
	return (is_prime_number_iter(n, n));
}
