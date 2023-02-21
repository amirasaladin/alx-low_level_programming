#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void
*/

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		print_alphabet();
		count++;
	}
	return;

}
