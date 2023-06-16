#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: integer
 * Return: always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int m;
	unsigned int j;
	unsigned int k;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int bothlen;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (m = 0; s2[m] != '\0'; m++)
		len2++;

	if (n >= len2)
		n = len2;

	bothlen = len1 + n;

	s = malloc(sizeof(char) * bothlen + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; s1[j] != '\0'; j++)
		s[j] = s1[j];

	for (k = 0; k < n; k++)
		s[j++] = s2[k++];
	s[j++] = '\0';

	return (s);
}
