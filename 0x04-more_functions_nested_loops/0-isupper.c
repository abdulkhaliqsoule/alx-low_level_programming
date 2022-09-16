#include "main.h"
/**
 * _isupper - checks whether its uppercase or not
 *@c: character to check
 *
 * Return: returns 1 for uppercase and 0 for lower case.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
