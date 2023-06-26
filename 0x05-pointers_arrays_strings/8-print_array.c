#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma and space
 * Numbers should be displayed in the same order they are stored in array.
 * you can only use _putchar to print.
 */
void print_array(int *a, int n)
{
	int j;
;
	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");

}
