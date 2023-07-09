#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: bit
 * @index: given index
 * Return: always
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	*n |= set;

	return (1);
}
