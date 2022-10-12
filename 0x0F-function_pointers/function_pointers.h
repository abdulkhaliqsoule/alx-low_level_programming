#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_
#include <stddef.h>
/**
 * print_name - function that prints a name
 * @name: name to be printed.
 * @f: function pointer
 *
 * Return - Nothing.
 */
void print_name(char *name, void (*f)(char *));
/**
 * array_iterator - executes a function as  parameter on each element of array
 * @array: list of numbers to iterate
 * @action: pointer to function to execute
 * @size: size of list
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int));
/**
 * int_index - searches for an integer
 * @array: contains a list of integers
 * @size: size o array
 * @cmp: a pointer to function to be used to compare
 *
 * Return: index of the array or -1
 */
int int_index(int *array, int size, int (*cmp)(int));
#endif /*_FUNCTION_POINTERS_H_*/
