#ifndef _MAIN_H_
#define _MAIN_H_
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: file name
 * @letters: numbers of letters to read and print
 *
 * Return: NULL or 0
 */
ssize_t read_textfile(const char *filename, size_t letters);
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content:string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content);
#endif
