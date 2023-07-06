#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer
 * @idx: unsigned integer
 * @n: integer
 * Return: always
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *hnode = *head;
	unsigned int node = 0;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = hnode;
		hnode = new_node;

		return (new_node);
	}
	while (hnode != NULL && node < idx - 1)
	{
		hnode = hnode->next;
		node++;
	}
	if (hnode == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = hnode->next;
	hnode->next = new_node;

	return (new_node);
}
