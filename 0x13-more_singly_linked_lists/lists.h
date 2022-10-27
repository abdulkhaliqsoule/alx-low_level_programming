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
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of listint_t list
 * @n: integer
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
/**
*free_listint - frees a listint_t list
* @head: head of listint_t list
*
* Return: void
*/
void free_listint(listint_t *head);
/**
 * free_listint2 - frees a listint_t list
 * @head: head pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head);
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head o listint_t list
 *
 * Return: head node's data(n) or 0
 */
int pop_listint(listint_t **head);
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of lisint_t list
 * @index: index of node to return
 *
 * Return: node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/**
 * sum_listint - sum all the dat(n) of a listint_t linked list
 * @head: head of listint-t list
 *
 * Return: sum or 0
 */
int sum_listint(listint_t *head);
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head of listint_t list
 * @idx: index
 * @n number: number to insert at node
 *
 * Return: address of node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 * @head: pointer to head of listint_t list
 * @index: index to delete
 *
 * Return 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);
#endif
