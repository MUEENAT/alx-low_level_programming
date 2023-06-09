#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer
 * @index: integer
 * Return: always
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *hnode = head;
	unsigned int node = 0;

	while (hnode != NULL)
	{
		if (node == index)
		{
			return (hnode);
		}
		node++;
		hnode = hnode->next;
	}

	return (NULL);
}
