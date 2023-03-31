#include "main.h"
/**
 * rot13 -  encodes a string using rot13.
 * @str: string parameter
 * Return: str
 */

char *rot13(char *str)
{
	int i;
	char *src = 0;

	for (i = 0; str[i] != '\0'; i++)
		src++;
	{
	if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
	{
		 str[i] -= 13;
	}
	else
	{
		str[i] += 13;
	}
	src++;
	}
	return (str);
}
