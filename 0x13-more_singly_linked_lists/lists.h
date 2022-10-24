#ifndef _LISTS_H_
#define _LISTS_H_
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
/**
 * print_listint - prints all elements of a listint_t list
 * @h:header of listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h);
/**
 * istint_len - returns the number of elements in a linked list
 * @h: head of listint_t
 *
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h);
/**
 * add_nodeint - adds a new node at the begining of a listint_t list
 * @head: head of list
 * @n: integer
 *
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n);
#endif
