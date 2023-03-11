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
	int sum = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
