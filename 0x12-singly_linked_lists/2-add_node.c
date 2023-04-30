#include "lists.h"
/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list
 * @str: pointer to node
 * @head: pointer to pointer of list_t
 * Return: node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

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
	node->next = *head;

	*head = node;

	return (node);
}
