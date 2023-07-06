#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to pointer
 * Return: always
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node;
	const listint_t sptr = sptr->next;
	const listint_t fptr = fptr->next->next;

	while (sptr != NULL && fptr != NULL && fptr->next != NULL)
	{
		if (sptr == fptr)
		{
			printf("-> [%p] %d\n", (void *)sptr, sptr->n);
			printf("-> [%p] %d\n", (void *)fptr, fptr->n);
			printf("-> [%p] %d\n", (void *)sptr->next, sptr->next->n);
			printf("-> [%p] %d\n", (void *)fptr->next, fptr->next->n);
			printf("-> [%p] %d\n", (void *)sptr->next->next, sptr->next->next->n);
			printf("-> [%p] %d\n", (void *)fptr->next->next, fptr->next->next->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)sptr, sptr->n);
		node++;
	}
	return (node);
}
