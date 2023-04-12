#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: first array
 * @height: second array
 * Return: a
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, m, n, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	a[i] = malloc(sizeof(int) * width);
	if (a[i] == NULL)
	{
	for (m = i; m >= 0; m--)
		{
			free(a[m]);
		}
		free(a);
		return (NULL);
	}
	}
	for (n = 0; n < height; n++)
	{
		for(l = 0; l < width; l++)
		{
			a[n][l] = 0;
		}
	}
	return (a);
}
