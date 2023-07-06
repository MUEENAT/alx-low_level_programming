#include "lists.h"
/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: pointer to pointer
 * Return: always
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pnode = NULL;
	listint_t *hnode = *head;
	listint_t *nnode;

	while (hnode != NULL)
	{
		nnode = hnode->next;
		hnode->next = pnode;
		pnode = hnode;
		hnode = nnode;
	}
	*head = pnode;
	return (*head);
}
