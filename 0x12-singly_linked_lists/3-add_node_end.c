#include "lists.h"
/**
 * add_node_end - function that adds a new
 * node at the end of a list_t list
 * @head: pointer to pointer of list_t
 * @str: pointer to node string
 * Return: node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *h = *head;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	h = *head;
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = node;

	return (node);
}
