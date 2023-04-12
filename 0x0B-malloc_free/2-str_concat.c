#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int n = 0;
	int m = 0;
	int length = 0;
	char*s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[n])
		n++;
	length = i + n;
	s = malloc((sizeof(char) * length) + 1);
	if (s == NULL)
		return (NULL);
	n = 0;
	while (m < length)
	{
		if (m <= i)
			s[m] = s1[m];
		if (m >= i)
		{
			s[m] = s2[n];
			n++;
		}
		m++;
	}
	s[m] = '\0';
	return (s);
}
