#include "main.h"
/**
 * string_nconcat -  function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: byte
 * Return: s
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, m = 0;
	unsigned int L1 = 0, L2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[L1])
		L1++;
	while (s2[L2])
		L2++;
	if (n >= L2)
	{
		m = L1 + L2;
	}
	else
		m = L1 + n;
	s = malloc(sizeof(char) * m + 1);
	if (s == NULL)
		return (NULL);
	L2 = 0;
	while (i < m)
	{
		if (i <= L1)
			s[i] = s1[i];
		if (i >= L1)
		{
			s[i] = s2[L2];
			L2++;
		}
		i++;
	}
	s[i] = '\0';
	return (s);

