#include "main.h"
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to the string
 * Return: always 0
 */

int is_palindrome(char *s)
{
	int len = 0;
	int n = 0;
	int m = len - 1;

	if (len == 0)
	{
		return (1);
	}

	while (n < m)
	{
		if (s[n] != s[m])
		{
			return (0);
		}
		n++;
		m--;
	}

	return (1);
}
