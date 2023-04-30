#include "lists.h"
/**
 * free_listint -  function that frees a listint_t list
 * @head: A pointer
 * Return: void
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
