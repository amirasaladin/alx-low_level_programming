#include "main.h"

/**
* print_alphabet - check the code
*
* Return: Always void.
*/
void print_alphabet(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
	_putchar(alpha);
	alpha++;
}
_putchar('\n');
return;
}
