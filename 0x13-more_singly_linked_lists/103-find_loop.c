#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @h: pointer
 * Return: always
 */

listint_t *find_listint_loop(listint_t *head)
{
	 listint_t *slow_ptr = head;
    listint_t *fast_ptr = head;

    while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL) {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;

        if (slow_ptr == fast_ptr) {
            break;
        }
    }

    if (slow_ptr != fast_ptr)
    {
        return NULL;
    }
    slow_ptr = head;
    while (slow_ptr != fast_ptr) {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next;
    }

    return slow_ptr;
}
