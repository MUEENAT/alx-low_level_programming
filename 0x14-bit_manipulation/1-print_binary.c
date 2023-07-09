#include "main.h"
/**
 * print_binary -  prints the binary representation of a number
 * @n: para
 * Return: always
 */

void print_binary(unsigned long int n)
{
	unsigned long int bin = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while ((n & bin) == 0 && bin != 0)
	{
		bin >>= 1;
	}
	if (bin == 0)
	{
		_putchar('0');
		return;
	}
	while (bin != 0)
	{
		if ((n & bin) != 0)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		bin >>= 1;
	}
}
