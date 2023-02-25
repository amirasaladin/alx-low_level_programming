#include "main.h"
#include <stdio.h>
/**
 * fizzbuzz - Check code
 *
 * Return: the return value data
*/

void fizzbuzz(void)
{
	int n = 100;
	int i = 1;

	while (i <= n)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return;

}

/**
 * main - Entry point
 *
 * Return: return
 */

int main(void)
{
	fizzbuzz();
	return (0);
}
