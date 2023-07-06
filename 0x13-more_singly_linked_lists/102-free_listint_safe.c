#include "lists.h"
/**
 * free_listint_safe -  frees a listint_t list
 * @h: pointer to a pointer
 * Return: always
 */

size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;
	listint_t *current = *h;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
		node++;

		if (current == *h)
		{
			*h = NULL;
		}
		return (node);
	}
	*h = NULL;
	return (node);
}
