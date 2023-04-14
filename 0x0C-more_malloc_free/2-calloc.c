#include "main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: array
 * @size: size of byte
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	l = nmemb * size;
	s = malloc(l);
	if (s == NULL)
		return (NULL);
	while (i < l)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
