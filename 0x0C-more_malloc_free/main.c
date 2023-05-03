#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;
	/* char *c1, *c2, *c3, *c4; */

    concat = string_nconcat("Best ", "School !!!", 6);
/*c1 = string_nconcat("Best ", "School", 4);
c2 = string_nconcat("", "Hello", 12);
c3 = string_nconcat("Hello", "", 12);
c4 = string_nconcat("Hello", NULL, 12); string_nconcat(NULL, "Hello", 0); string_nconcat(NULL, NULL, 10);
   */ printf("%s\n", concat);
free(concat);
/*	printf("%s\n", c1);
	printf("%s\n", c2);
	printf("%s\n", c3);
	printf("%s\n", c4);
    free(concat);
	free(c1);
	free(c2);
	free(c3);
	free(c4);*/
    return (0);
}
