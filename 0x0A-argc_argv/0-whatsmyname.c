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
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
