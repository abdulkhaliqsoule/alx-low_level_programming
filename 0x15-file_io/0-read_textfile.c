#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: file name
 * @letters: numbers of letters to read and print
 *
 * Return: number of characters printed or NULL or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wrote, printed;
	char *buff;

	buff =  malloc(letters);
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	printf("fd = %d/n", fd);
	if (fd == -1)
		return (0);
	if (printed == -1)
		return (0);
	wrote = write(1, buff, printed);
	if (wrote == -1)
		return (0);
	if (close(fd) == -1)
		return (0);
	free(buff);
	return (printed);
}

