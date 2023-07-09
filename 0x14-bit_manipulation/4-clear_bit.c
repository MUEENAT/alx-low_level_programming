#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: bit
 * @index: given index
 * Return: always
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	*n &= clear;

	return (1);

}
