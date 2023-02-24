#include "main.h"

/**
* print_most_numbers - check the code
*
* Return: Always void.
*/
void print_most_numbers(void)
{
int i = 0;
while (i < 10)
{
	if (i != 2 && i !=4)
	{
		putchar(i + '0');
	}
	i++;
}
_putchar('\n');
return;
}
