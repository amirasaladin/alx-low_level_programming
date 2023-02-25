#include "main.h"

/**
* print_diagonal - check the code
*
* Return: Always void.
*/
void print_diagonal(int n)
{
int i = 0;
int j = 0;
int k = j + 1;

	while (i < n)
	{
		while (j <= k && k < n)
		{
			_putchar(' ');
			j++;
			k++;
		}
		i++;
		_putchar('\\');
		_putchar('\n');
	}
}
