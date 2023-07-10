#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number of bit
 * @m: flip to get bit
 * Return: always
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int numb = 0;

	while (flip != 0)
	{
		if ((flip & 1) != 0)
		{
			numb++;
		}
		flip >>= 1;
	}
	return (numb);
}
