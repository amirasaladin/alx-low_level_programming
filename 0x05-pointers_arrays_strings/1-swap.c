#include "main.h"
#include <stdio.h>
/**
 * swap_int - Check code
 * @a: pointer
 * @b: pointer
 * Return: the return value data
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
