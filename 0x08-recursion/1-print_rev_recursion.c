#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - Check code
 * @s: string
 * Return: the return value data
*/

void _print_rev_recursion(char *s)
{
	if(*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
