#include "main.h"
/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string
 * @str: string to be duplicate
 * Return: s
 */

char *_strdup(char *str)
{
	int i = 1, n = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (n < i)
	{
	s[n] = str[n];
	n++;
	}
	{
	s[n] = '\0';
	}
	return (s);
}
