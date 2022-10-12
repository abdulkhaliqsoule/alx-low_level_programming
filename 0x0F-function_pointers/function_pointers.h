#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_
/**
 * print_name - function that prints a name
 * @name: name to be printed.
 * @f: function pointer
 *
 * Return - Nothing.
 */
void print_name(char *name, void (*f)(char *));
#endif /*_FUNCTION_POINTERS_H_*/
