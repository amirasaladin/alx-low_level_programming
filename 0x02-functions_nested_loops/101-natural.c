#include <stdio.h>
/**
 * natural - Check code
 *
 * Return: the return value data
*/

int natural(void)
{
	int n = 0;
	int count = 0;
	while (count < 1024)
	{
		if (count % 3 == 0 or count % 5 == 0)
			n += count;
		count++;
	}
	return (n);
}
