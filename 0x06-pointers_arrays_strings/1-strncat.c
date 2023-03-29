#include "main.h"
/**
 * _strncat -  concatenates two strings
 * @src: source string
 * @dest: destination string
 * @n: target bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlength = 0;
	int slength = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dlength++;
	for (i = 0; src[i] != '\0'; i++)
		slength++;
	for (i = 0; i < n; i++)
		dest[dlength + i] = src[i];
	return (dest);
}
