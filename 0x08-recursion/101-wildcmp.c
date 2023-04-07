#include "main.h"
/**
 * wildcmp - function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0.
 * @s1: input
 * @s2: input
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	int flag = 0;
	int i = 0;

	if (s1[i] != '\0' && s2[i] != '\0')
		if (s1[i] != s2[i])
		{
		flag = 1;
		}
	i++;
	if (s1[i] != '\0' || s2[i] != '\0')
	{
		return (1);
	}
	if (flag == 0)
	{
		return (0);
	}
	else
		return (1);
return (0);
}
