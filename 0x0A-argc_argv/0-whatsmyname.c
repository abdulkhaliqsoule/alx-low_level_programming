#include <stdio.h>
/**
 * main - prints its name followed by a new line.
 * @argc: number of parameters in argv
 * @argv: char array containing all the passed in parameters.
 *
 * Return: always return 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
