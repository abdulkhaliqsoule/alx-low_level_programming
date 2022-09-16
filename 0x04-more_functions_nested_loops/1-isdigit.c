#include "main.h"
/**
 * _isdigit - checks if c is a digit
 * @c: digit to check
 *
 * Return: returns 1 if its a digit and 0 if otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
