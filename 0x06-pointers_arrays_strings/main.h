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
 * _strcat - appends the src string to the dest string
 * @dest: destination of concat
 * @src: source of array to concat
 *
 * Return: char value
 */
char *_strcat(char *dest, char *src);
/**
 * _strncat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 * @n: amount of times to append
 *
 * Return: char value
 */
char *_strncat(char *dest, char *src, int n);
/**
 * _strncpy - copies a string
 * @dest: destination to copy
 * @src: source to copy
 * @n: amount of places to copy
 * Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n);
/**
 * _strcmp - string to compare
 * @s1: first string
 * @s2: second string
 *
 * Return: value of string
 */
int _strcmp(char *s1, char *s2);
/**
 * reverse_array - reverses an array
 *
 * @a: array to reverse
 * @n: size of array
 */
void reverse_array(int *a, int n);
/**
 * string_toupper - uppers a lower
 * @s: character to make upper
 * Return: return value of upper
 */
char *string_toupper(char *s);
/**
 * _indexOf - returns boolean if special  character
 * @a: character to return
 * Return: true or false
 */
int _indexOf(char a);
/**
 * cap_string - capitalizes the string
 * @s: string
 * Return: the string capitalized
 */
char *cap_string(char *s);
/**
 * leet - leet
 * @s: string
 *
 * Return: char value
 */
char *leet(char *s);
#endif
