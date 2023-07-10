#include "main.h"
/**
 * get_endianness -  checks the endianness
 * Return: always
 */
int get_endianness(void)
{
	unsigned int get = 1;
	unsigned char *byte = (unsigned char *)&get;

	return ((byte[0] == 1) ? 1 : 0);
}
