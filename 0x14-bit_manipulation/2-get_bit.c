#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index
 * @n: bit
 * @index: given index
 * Return: always
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int get = 1UL << index;
	unsigned long int bit = n & get;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((bit != 0) ? 1 : 0);
}
