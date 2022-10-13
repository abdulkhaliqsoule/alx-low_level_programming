#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed into the function
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *current;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		current = va_arg(ap, char *);
		if (current == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current);
		}
		if (separator != NULL && i < (n - 1))
		{
		printf("%s", separator);
		}
	}
	va_end(ap);
	putchar('\n');
}

