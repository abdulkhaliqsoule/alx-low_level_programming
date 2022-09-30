#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of multiplication.
 * @argc: number of parameters in argv
 * @argv: char array containing all the passed in parameters.
 *
 * Return: always return 0.
 */
int main(int argc, char *argv[])
{
	if (argc <= 1 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

