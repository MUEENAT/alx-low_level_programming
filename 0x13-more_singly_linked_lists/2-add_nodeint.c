#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint -  function that adds a new node
 * at the beginning of a listint_t list
 * @head: A pointer to pointer of listint_t
 * @n: int
 *
 * Return: n_node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;
	n_node->next = *head;

	*head = n_node;

	return (n_node);
}
