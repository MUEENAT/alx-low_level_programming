#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copy
 * Return: always 0
 */

char *_strdup(char *str)
{
	char *dup = 0;
	
	if (str == NULL)
		return (NULL);

	dup = strdup(str);
	return (dup);
}
