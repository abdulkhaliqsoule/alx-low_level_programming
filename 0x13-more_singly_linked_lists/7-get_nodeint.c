#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of lisint_t list
 * index: index of node to return
 *
 * Return: node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	temp = head;
	count = 0;
	while (temp != NULL && count != index)
	{
		count++;
		temp = temp->next;
	}
	if (count != index)
		return (NULL);
	return (temp);
}
