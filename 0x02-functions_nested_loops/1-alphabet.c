#include "main.h"

/*
 * print_alphabet - writes the whole alphabet in small letters
 * Return (void).
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

