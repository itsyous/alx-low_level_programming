#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: computes the sum of all the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if ((c % 3 == 0) || (c % 5 == 0))
		{
			sum += c;
		}

		c++;
	}
	printf("%d\n", sum);
	return (0);
}
