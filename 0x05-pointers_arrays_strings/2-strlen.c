#include "main.h"
/**
 * int_strlen - function that returns the length of a string
 * @s: string whoswe length to be printed
 * Return: length
 */

int _strlen(char *s)
{
	int c;
	int length = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		length++;
	}
	return (length);
}
