#include "stdio.h"

/**
* positive_or_negative - prints if integer is positive or negative
* @i: The integer to test if it is positive or negative
*
* Return: void
*/
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive", i);

	}
	else if (i == 0)
	{
		printf("%d is zero", i);
	}
	else
	{
		printf("%d is negative", i);
	}
}
