#include "lists.h"
/**
 * free_listint -  frees a listint_t list
 * @head: pointer listint_t to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
