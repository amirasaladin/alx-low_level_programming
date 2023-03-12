#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
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
		left = ceil((n / change[i] - temp) * change[i]);
		n = left;
        }
        else
	{
		break;
	}
}
	return min;
}
/**
 * main - Check code
 * @argc: arg count
 * @argv: arg vectory arr
 * Return: the return value data
*/

int main(int argc, int argv[])
{
	printf("%d", min_change(atoi(argv[1])));
	return (0);
}
