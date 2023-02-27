#include "main.h"
/**
 * swap_int - Check code
 * @a: pointer
 * @b: pointer
 * Return: the return value data
*/

void swap_int(int *a, int *b)
{
	int *c = *a;
	*a = *b;
	*b = *c;
}
