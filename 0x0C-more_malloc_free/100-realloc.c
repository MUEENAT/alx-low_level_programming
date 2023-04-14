#include "main.h"
/**
 * _realloc - function that reallocates a
 * memory block using malloc and free
 * @ptr: pointer
 * @old_size: byte size
 * @new_size: size of byte
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		np = malloc(new_size);
		if (np == NULL)
			return (NULL);
		return (np);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	np = malloc(new_size);
	if (np == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		np[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (np);
}
