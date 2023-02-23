#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: the return value
*/

/**
 * natural - Check the code
 * 
 * Return: the return value
 */

void natural(void)
{
	int n = 0;
	int count = 0;

	while (count < 1024)
	{
		if ((count % 3 == 0) || (count % 5 == 0))
			n += count;
		count++;
	}
	printf("%d\n", n);
}

int main(void)
{
	natural();
	return (0);
}
