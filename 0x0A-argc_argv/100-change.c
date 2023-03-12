#include <stdlib.h>
#include <stdio.h>
/**
 * min_change - check the code
 * @n: float
 * Return: min number of change
 */
int min_change(float n)
{
	int change[] = {25, 10, 5, 2, 1};
	int i;
	int min = 0;
	int temp = 0;
	float left = 0;

	for (i = 0; i < 5; i++)
	{
	if (n / change[i] != 0)
	{
		min += n / change[i];
		temp = n / change[i];
		left = (n / change[i] - temp) * change[i];
		n = left;
	}
	else
	{
		break;
	}
}
	return (min);
}
/**
 * main - Check code
 * @argc: arg count
 * @argv: arg vectory arr
 * Return: the return value data
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (printf("Error\n"), 1);
	else if (atoi(argv[1]) < 0)
		return (printf("0\n"), 0);
	printf("%d\n", min_change(atoi(argv[1])));
	return (0);
}
