#include "main.h"
/**
 * print_binary -  prints the binary representation of a number
 * @n: para
 * Return: always
 */

void print_binary(unsigned long int n)
{
	int value = 0;
	unsigned long int index = 0;

	if (index > 63)
	{
		return (-1);
	}
	value = (n >> index) & 1;
	{
		return (value);
	}
}
