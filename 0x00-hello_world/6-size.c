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

	printf("Size of char: %d  %s\n", sizeof(a), "byte(s)");
	printf("Size of an int: %d  %s\n", sizeof(b), "bytes(s)");
	printf("Size of a long int: %d  %s\n", sizeof(c), "bytes(s)");
	printf("Size of a long long int: %d %s\n", sizeof(d), "bytes(s)");
	printf("Size of a float: %d  %s\n", sizeof(e), "bytes(s)");
	return (0);
}
