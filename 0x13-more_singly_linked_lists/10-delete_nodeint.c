#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of
 * listint_t linked list
 * @head: pointer to pointer
 * @index: unsigned integer
 * Return: always
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *hnode = *head;
	listint_t *pnode = NULL;
	unsigned int node = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (hnode != NULL && node < index)
	{
		pnode = hnode;
		hnode = hnode->next;
		node++;
	}
	if (hnode == NULL)
	{
		return (-1);
	}
	pnode->next = hnode->next;
	free(hnode);
	return (1);
}
