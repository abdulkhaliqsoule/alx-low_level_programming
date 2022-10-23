#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints a list
 * @h: head of list
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	list_t *temp = h;

	while (h != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}
	return (count);
}
