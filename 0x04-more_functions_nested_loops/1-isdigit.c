#include "main.h"

/**
 * _isdigit - check for a digit
 * @c : character to check
 * Return:0 or 1
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
