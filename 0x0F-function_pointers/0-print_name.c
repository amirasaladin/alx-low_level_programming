#include "function_pointers.h"
/**
 * print_name - Check code
 * @name: name
 * @f: pointer to a function that takes a char argument
 * Return: the return value data
*/

void print_name(char *name, void (*f)(char *))
{
	if(!name || !f)
		return;
	f(name);
}
