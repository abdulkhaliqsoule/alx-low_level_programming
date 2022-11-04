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
int _putchar(char c);
