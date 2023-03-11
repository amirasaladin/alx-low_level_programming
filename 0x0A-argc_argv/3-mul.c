#include <stdio.h>
#include <stdlib.h>
/**
 * main - Check code
 * @argc: count
 * @argv: vector array
 * Return: the return value data
*/

int main(int argc, char *argv[])
{
	int i;
	long int mul = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		mul *= atoi(argv[i]);
	printf("%ld\n", mul);
	return (0);
}
