#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: contains a list of integers
 * @size: size o array
 * @cmp: a pointer to function to be used to compare
 *
 * Return: index of the array or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
			break;
		}
		i++;
	}
	return (-1);
}
