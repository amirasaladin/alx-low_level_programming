#include "main.h"
#include <stddef.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the decimal number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: returns the value of a bit at a given index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0)
		return (0);
	while (n > 0 && i <= index)
	{
		if ((n & 1) == 0 && i == index)
			return (0);
		else
			return (1);
		n >>= 1;
		i++;
	}
	if (i > index)
		return (0);
	return (0);
}
