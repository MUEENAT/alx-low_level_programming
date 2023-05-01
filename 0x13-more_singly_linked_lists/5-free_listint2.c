#include "lists.h"
/**
 * free_listint2 -  function that frees a listint_t list
 * @head: A pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		node = current;
		current = current->next;
		free(node);
	}
	*head = NULL;
}
