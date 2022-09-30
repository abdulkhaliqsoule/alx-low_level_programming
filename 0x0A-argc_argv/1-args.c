#include <stdio.h>
/**
 * main - prints its name followed by a new line.
 * @argc: number of parameters in argv
 * @argv: char array containing all the passed in parameters.
 *
 * Return: always return 0.
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
