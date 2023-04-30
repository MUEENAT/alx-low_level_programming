#include "lists.h"
/**
 * listint_len -  function that returns the number of
 * elements in a linked listint_t list
 * @h: pointer
 * Return: node
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
