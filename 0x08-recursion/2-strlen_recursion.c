#include "main.h"
/**
 * _strlen_recursion -  function that returns the length of a string
 * @s: input
 * Return: always 0 (success)
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	else
		return (0);
}
