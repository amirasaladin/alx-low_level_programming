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

	printf("Size of char: %d\n bytes(s)", sizeof(a));
	printf("Size of an int: %d\n bytes(s)", sizeof(b));
	printf("Size of a long int: %d\n bytes(s)", sizeof(c));
	printf("Size of a long long int: %d\n bytes(s)", sizeof(d));
	printf("Size of a float: %d\n bytes(s)", sizeof(e));
	return (0);
}
