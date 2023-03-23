#include "function_pointers.h"
/**
 * array_iterator - Check code
 * @array: array
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: the return value data
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
