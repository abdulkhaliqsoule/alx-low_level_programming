#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * create_array - create an array of chars.
 * @size: size of array
 * @c: char to initialize with
 *
 * Return: a pointer to the array or null if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
       	char *ptr;

	ptr = malloc(sizeof(*ptr) * size);
	if (size <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
