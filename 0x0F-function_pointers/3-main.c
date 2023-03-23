#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Main function
 * Return: the return value data
*/

int main(int argc, char *argv[])
{
	int a = atoi(argv[0]);
	int b = atoi(argv[2]);
	return get_op_func(argv[1])(a, b);
}
