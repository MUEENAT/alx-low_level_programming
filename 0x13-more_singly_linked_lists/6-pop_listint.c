#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to pointer of listint_t
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *hnode = *head;
	int node = hnode->n;

	if (*head == NULL)
		return (0);

	*head = hnode->next;
	free(hnode);

	return (node);
}
