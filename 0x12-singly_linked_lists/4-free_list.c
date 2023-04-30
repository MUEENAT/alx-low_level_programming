#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: pointer to list_t
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *fl;

	while (head != NULL)
	{
		fl = head;
		head = head->next;
		free(fl->str);
		free(fl);
	}
}
