#include "main.h"
/**
 * str_concat -  concatenates two strings
 * @s1: first string to concat
 * @s2: second string to concat
 * Return: always 0
 */

char *str_concat(char *s1, char *s2)
{
	int m;
	int p;
	int i = 0;
	int n = 0;
	char *concat;
	int firstl = 0;
	int secondl = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (m = 0; s1[m] != '\0'; m++)
		firstl++;
	for (p = 0; s2[p] != '\0'; p++)
		secondl++;
	concat = malloc(sizeof(char) * firstl + secondl + 1);
	if (concat == NULL)
		return (NULL);
	if (s1)
	{
		while (i < firstl)
		{
			concat[i] = s1[i];
				i++;
		}
	}
	if (s2)
	{
		while (i < (firstl + secondl))
		{
			concat[i] = s2[n];
				i++;
				n++;
		}
	}
	concat[i] = '\0';
	return (concat);
}
