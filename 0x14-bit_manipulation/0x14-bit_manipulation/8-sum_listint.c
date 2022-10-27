#include "lists.h"
/**
 * sum_listint - sum all the dat(n) of a listint_t linked list
 * @head: head of listint-t list
 *
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	sum = 0;
	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum = sum + (temp->n);
		temp = temp->next;
	}
	return (sum);

}
