#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 * Return: if the number of arguments is not exactly one - 1. otherwise 0
 */
int main(int argc, char *argv[])
{
	int value, c;

	c = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (value % 25 >= 0)
	{
		c += value / 25;
		value = value % 25;
	}
	if (value % 10 >= 0)
	{
		c += value / 10;
		value = value % 10;
	}
	if (value % 5 >= 0)
	{
		c += value / 5;
		value = value % 5;
	}
	if (value % 2 >= 0)
	{
		c += value / 2;
		value = value % 2;
	}
	if (value % 1 >= 0)
	{
		c += value / 1;
	}
	printf("%d\n", n);
	return (0);
}
