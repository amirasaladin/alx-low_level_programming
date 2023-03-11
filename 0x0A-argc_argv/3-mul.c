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
	int mul = 1;

	if (argc != 3)
		return (printf("Error\n"), 1);
	for (i = 1; i < argc; i++)
		mul *= atoi(argv[i]);
	printf("%d\n", mul);
	return (0);
}
