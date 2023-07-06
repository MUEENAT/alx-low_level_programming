#include "lists.h"
/**
 * sum_listint -  returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer
 * Return: always
 */

int sum_listint(listint_t *head)
{
	listint_t *hnode = head;
	int node = 0;

	while (hnode != NULL)
	{
		node += hnode->n;
		hnode = hnode->next;
	}
	return (node);
}
