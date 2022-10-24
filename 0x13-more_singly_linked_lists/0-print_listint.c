#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: header of listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

