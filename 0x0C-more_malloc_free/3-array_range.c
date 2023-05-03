#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - Check code
 * @min: min value included in the array
 * @max: max value included in the array
 * Return: the return value data
*/

int *array_range(int min, int max)
{
	int *ptr, i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = min;
		min = min + 1;
	}
	return (ptr);
}
