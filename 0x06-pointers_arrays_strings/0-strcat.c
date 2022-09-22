#include <stdio.h>
/**
 * _strcat - appends the src string to the dest string
 * @dest: destination of concat
 * @src: source of array to concat
 *
 * Return: char value
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0'
	return (dest);
}
