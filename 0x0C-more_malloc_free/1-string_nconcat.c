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
	unsigned int j = 0;
	unsigned int k = 0;
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
	while (k < len1)
	{
		s[k] = s1[k];
			k++;
	}
	while (n < len2 && k < (len1 + n))
		s[k++] = s2[j++];
	while (n >= len2 && k < (len1 + len2))
		s[k++] = s2[j++];
	s[k] = '\0';
	return (s);
}
