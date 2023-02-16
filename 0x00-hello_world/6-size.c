#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	int b = 1;
	long c = 1;
	long long d = 1;
	float e = 1.0;

	printf("Size of char: %d\n", sizeof(a));
	printf("Size of an int: %d\n", sizeof(b));
	printf("Size of a long int: %d\n", sizeof(c));
	printf("Size of a long long int: %d\n", sizeof(d));
	printf("Size of a float: %d\n", sizeof(e));
	return (0);
}
