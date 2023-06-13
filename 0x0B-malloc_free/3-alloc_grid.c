#include "main.h"
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: array width
 * @height: array height
 * Return: always 0
 */

int **alloc_grid(int width, int height)
{
	int **pointer;
	int i;
	int n;

	if (width <= 0 || height <= 0)
	{
        	return (NULL);
	}

	pointer = malloc(height * sizeof(int *));
	if (pointer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{	
		pointer[i] = malloc(width * sizeof(int));
		if (pointer == NULL)
		{
			for (; i < height; i--)
				free(pointer[i]);
			free(pointer);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
		pointer[i][n] = 0;
	}
	return (pointer);
}
