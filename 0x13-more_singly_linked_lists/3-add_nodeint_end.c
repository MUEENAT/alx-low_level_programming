#include "lists.h"
/**
 * add_nodeint_end - function that adds a new
 * node at the end of a listint_t list
 * @head: A pointer to pointer of listint_t
 * @n: int
 *
 * Return: n_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *temp;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = n_node;

	return (n_node);
}
