#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head o listint_t list
 *
 * Return: head node's data(n) or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = *head->n;
	free(*head);
	*head = temp->next;

	return (n);

}
