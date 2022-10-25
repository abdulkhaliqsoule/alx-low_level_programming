#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head of listint_t list
 * @idx: index 
 * @n number: number to insert at node
 *
 * Return: address of node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);
	temp = *head;
	while (temp != NULL && idx - 1 != count)
	{
		temp = temp->next;
		count++;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx != 0)
	{
		new->next = tmp->next;
		tmp->next = new,
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
