#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: intialize segment
 * @accept: pointer to substring
 * Return: byte
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int byte = 0;

	while (*s)
	{
			for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				byte++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (byte);
		}
		s++;
	}
	return (byte);
}
