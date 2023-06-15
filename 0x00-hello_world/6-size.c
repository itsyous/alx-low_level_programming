#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n", Sizeof(char));
	printf("Size of an int:	%u byte(s)\n", Sizeof(int));
	printf("Size of a long int: %u byte(s)\n", Sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", Sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", Sizeof(float));
	return (0);
}
