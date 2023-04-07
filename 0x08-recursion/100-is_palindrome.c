#include "main.h"
/**
 * is_palindrome - function that returns 1 if a
 * string is a palindrome and 0 if not
 * @s: input
 * Return: 0
 */

int is_palindrome(char *s)
{
	int i, n = 0;
	int p = 0;

	for (i = 0; i < n / 2; i++)
	if (s[i] == s[n - i - 1])
		p++;
	if (p == i)
	{
	return (1);
	}
	else
	return (0);
return (0);
}
