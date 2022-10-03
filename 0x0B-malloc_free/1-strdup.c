#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer which is a duplicate of the string.
 * @str: string to duplicate.
 *
 * Return: NULL if str = NULL or returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i, count;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	ptr = malloc(count * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		*(ptr + i) = *(str + i);
	}
	return (ptr);
}
