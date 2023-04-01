#include "main.h"
/**
 * infinite_add - add two numbers
 * @n1: first number
 * @n2: second number
 * @r: store result
 * @size_r: size
 * Return: (r)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j;

	for (i = 0; n1[i] != '\0'; i++)
		size_r++;
	for (j = 0; n2[j] != '\0'; j++)
		size_r++;
	{
		if (n1[i] && n2[j] != 0)
		{
			i++;
			 size_r = n1[i] + n2[j];
		}
	}
	return (r);

}
