#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * print_alphabet - function to print alphabet
 *
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */
void print_alphabet_x10(void);
/**
 * _islower - prints if c is lower case
 * @c: character to use
 * Return: 1 or 0
 */
int _islower(int c);
/**
 * _isalpha - prints if character is alphabet
 * @c: character to use
 * Return: 1 or 0
 */
int _isalpha(int c);
/**
 * print_sign - prints a sign based on n
 * @n: integer to input
 * Return: 1 or 0  or -1
 */
int print_sign(int n);
/**
 * _abs - gives absolute value
 * @int: integer
 * Return: integer or abs value of int
 */
int _abs(int);
/**
 * print_last_digit - prints digit last
 *
 * @int: integer to input
 * Return: last digit of integer
 */
int print_last_digit(int);
/**
 * jack_bauer - jack bauer gooo
 *
 */
void jack_bauer(void);
/**
 * times_table - times this up
 *
 *
 */
void times_table(void);
/**
 * add - adds stuff up
 *
 * @int: integers to add
 * Return: returns a sum
 */
int add(int, int);
/**
 * print_to_98 - prints to 98
 * @n: integer to start at
 *
 */
void print_to_98(int n);
/**
 * _isupper - checks if uppercase or not
 * @c: character to check
 *
 * Return: returns 1 or 0
 */
int _isupper(int c);
/**
 *_isdigit - checks for a digit(0 through 9)
 *@c: data to check its type
 *
 * Return: returns 1 if its a digit and 0 if otherwise.
 */
int _isdigit(int c);
/**
 * mul - multiplies two integers
 * @a: first integer
 * @b:second integer
 *
 * Return: returns product of the two integers
 */
int mul(int a, int b);
/**
 * print_numbers - prints the numbers 0 to 9 followed by a new line
 *
 * Return: always return void
 */
void print_numbers(void);
/**
 * print_most_numbers - prints numbers from 0 to 9 excluding 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void);
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void);
/**
 * print_line - prints a line
 *
 * @n: integer to indicate number of times '_' is printed.
 */
void print_line(int n);
/**
 * print_diagonal - prints diagonal stuff
 *
 * @n: integer to set diagonal
 */
void print_diagonal(int n);
/**
 * print_square - prints square stuff
 *
 * @size: integer to set square size
 */
void print_square(int size);
/**
 * main - main function
 *
 *
 * Return: a number
 */
int main(void);
/**
 * print_triangle - prints triangle
 *
 * @size: size of triangle
 */
void print_triangle(int size);
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void);
/**
 * print_number - prints number
 *
 * @n: integer to print to character
 */
void print_number(int n);
/**
 * reset_to_98 - resets variable to 98
 *
 * @n: variable with pointer
 */
void reset_to_98(int *n);
/**
 * swap_int - swaps integers
 *
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b);
/**
 * _strlen - gets character string
 *
 * @s: character to getstring
 * Return: returns length
 */
int _strlen(char *s);
/**
 * _puts - puts a string
 *
 * @str: string to print
 */
void _puts(char *str);
/**
 * print_rev - reverse a string
 *
 * @s: string to print
 */
void print_rev(char *s);
/**
 * rev_string - reverse a string value
 *
 * @s: string to print
 */
void rev_string(char *s);
/**
 * puts2 - puts string twice
 *
 * @str: string to put twice
 */
void puts2(char *str);
/**
 * puts_half - puts half of int
 *
 * @str: string to split
 */
void puts_half(char *str);
/**
 * print_array - prints array
 * @a: pointer of array
 * @n: how many times to prints
 *
 */
void print_array(int *a, int n);
/**
 * _strcpy - main function to copy
 *
 * @dest: destination to copy
 * @src: src
 *
 * Return: a character value
 */
char *_strcpy(char *dest, char *src);
#endif
