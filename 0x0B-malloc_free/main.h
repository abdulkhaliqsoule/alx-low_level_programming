#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * create_array - create an array of chars.
 * @size: size of array
 * @c: char to initialize with
 *
 * Return: a pointer to the array or null if it fails.
 */
char *create_array(unsigned int size, char c);
/**
 * _strdup - returns a pointer which is a duplicate of the string.
 * @str: string to duplicate.
 *
 * Return: NULL if str = NULL or returns a pointer to the duplicated string
 */
char *_strdup(char *str);
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL if str = NULL or returns a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2);
#endif
