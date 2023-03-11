#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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

	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i][0]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		if (argc > 2)
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
