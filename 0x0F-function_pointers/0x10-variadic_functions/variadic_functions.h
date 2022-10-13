#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 *
 * Return: sum of arguments or 0
 */
int sum_them_all(const unsigned int n, ...);
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed into the function
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...);
/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed into the function
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...);
#endif
