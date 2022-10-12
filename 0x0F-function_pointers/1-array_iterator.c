#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - executes a function as  parameter on each element of array
 * @array: list of numbers to iterate
 * @action: pointer to function to execute
 * @size: size of list
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	if (array != NULL && action != NULL)
		while (i < size)
		{	
			action(array[i]);
			i++;
		}
}
