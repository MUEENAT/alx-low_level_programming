#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 * Return: always
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convt = 0, bin = 1;
	int length = 0, i;

	if (b == NULL)
	{
		return (0);
	}
	while (b[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			convt += 0 * bin;
		}
		else if (b[i] == '1')
		{
			convt += 1 * bin;
		}
		else
		{
			return (0);
		}
		bin *= 2;
	}
	return (convt);
}
